#include "mmc.h"

#include <stddef.h>
#include <string.h>

#include "assert.h"
#include "src/autogen/reg_def.h"
#include "clock.h"
#include "mmc_spec.h"
#include "time.h"

static volatile PeripheralMMCHS2 *const kMmcPeripherals[kNumMmc] = {
  [kMmc0] = &MMCHS0,
  [kMmc1] = &MMC1,
  [kMmc2] = &MMCHS2,
};

static inline MmcResponseR2 MmcGetResponseR2(volatile PeripheralMMCHS2 *const mmc) {
  MmcResponseR2 resp;
  resp.words[0] = mmc->SD_RSP10.raw;
  resp.words[1] = mmc->SD_RSP32.raw;
  resp.words[2] = mmc->SD_RSP54.raw;
  resp.words[3] = mmc->SD_RSP76.raw;

  return resp;
}

static inline MmcResponseR1R3 MmcGetResponseR1R3(volatile PeripheralMMCHS2 *const mmc) {
  MmcResponseR1R3 resp;
  resp.raw = mmc->SD_RSP10.raw;

  return resp;
}

static inline MmcStatus MmcWaitBufferRead(volatile PeripheralMMCHS2 *const mmc) {
  // Wait for the buffer to become available or an error to occur.
  while (!(mmc->SD_PSTATE.BRE || mmc->SD_STAT.ERRI)) {}

  if (mmc->SD_STAT.ERRI) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

static inline MmcStatus MmcWaitBufferWrite(volatile PeripheralMMCHS2 *const mmc) {
  // Wait for the buffer to become available or an error to occur.
  while (!(mmc->SD_PSTATE.BWE || mmc->SD_STAT.ERRI)) {}

  if (mmc->SD_STAT.ERRI) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

static inline MmcStatus MmcWaitTransferComplete(volatile PeripheralMMCHS2 *const mmc) {
  // Wait for the transfer to complete or an error to occur.
  while (!(mmc->SD_STAT.TC || mmc->SD_STAT.ERRI)) {}

  if (mmc->SD_STAT.ERRI) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

static inline void MmcReadBlockFromBuffer(volatile PeripheralMMCHS2 *const mmc, uint8_t *data) {
  for (int32_t i = 0; i < kMmcBlockLength / 4; ++i) {
    uint32_t word = mmc->SD_DATA.raw;
    *data++ = (uint8_t)(word >> 0);
    *data++ = (uint8_t)(word >> 8);
    *data++ = (uint8_t)(word >> 16);
    *data++ = (uint8_t)(word >> 24);
  }
}

static inline void MmcWriteBlockToBuffer(volatile PeripheralMMCHS2 *const mmc, uint8_t *data) {
  for (int32_t i = 0; i < kMmcBlockLength / 4; ++i) {
    mmc->SD_DATA.raw = (uint32_t)(data[3] << 24 | data[2] << 16 | data[1] << 8 | data[0] << 0);
    data += 4;
  }
}

static MmcStatus MmcSendCmd(volatile PeripheralMMCHS2 *const mmc, uint32_t index,
                               uint32_t argument) {
  assert(index <= 56);
  MmcCommandInfo cmd_info = kMmcCommandListing[index];

  mmc->SD_ARG.raw = argument;

  // Check if command in progress as well as data transfer if needed for particular command.
  if (mmc->SD_PSTATE.CMDI || (cmd_info.sd_cmd.DP && mmc->SD_PSTATE.DATI)) {
    return kMmcStatusBusy;
  }

  // Check device status errors for commands that return a status.
  if (cmd_info.check_device_status) {
    mmc->SD_CSRE.raw = kMmcDeviceStatusErrorBits.raw;
  } else {
    mmc->SD_CSRE.raw = 0;
  }

  // Clear flags before command.
  mmc->SD_STAT.raw = 0xFFFFFFFF;

  // Initiate command.
  mmc->SD_CMD.raw = cmd_info.sd_cmd.raw;

  // Wait for the command to complete or an error to occur.
  while (!(mmc->SD_STAT.CC || mmc->SD_STAT.ERRI)) {}

  if (mmc->SD_STAT.ERRI) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

static void MmcSetBusFrequency(volatile PeripheralMMCHS2 *const mmc, float frequency) {
  // Functional clock is 192Mhz / 2.  TRM page 4218.
  const float input_freq = ClockGet192Mhz() / 2;

  mmc->SD_SYSCTL.CEN = 0;
  mmc->SD_SYSCTL.CLKD = (uint32_t)(input_freq / frequency + 1.0f); // Ceil.
  while(!mmc->SD_SYSCTL.ICS) {}
  mmc->SD_SYSCTL.CEN = 1;
}

static void MmcSetDataTimeout(volatile PeripheralMMCHS2 *const mmc, uint32_t taac, uint32_t nsac,
                              uint32_t r2w_factor) {
  // Maximum read cycles is 10 * (T_taac * F_input + 100 * nsac * F_input / F_output).
  // JEDEC 84-B51 6.15.7 Table 71.
  uint32_t unit_bits = taac & 0x07;
  static const float units[] = {1e-9f, 1e-8f, 1e-7f, 1e-6f, 1e-5f, 1e-4f, 1e-3f, 1e-2f};
  const float taac_unit = units[unit_bits];

  uint32_t mult_bits = (taac & 0x78) >> 3;
  static const float mults[] = {0.0f, 1.0f, 1.2f, 1.3f, 1.5f, 2.0f, 2.5f, 3.0f, 3.5f, 4.0f, 4.5f,
                                5.0f, 5.5f, 6.0f, 7.0f, 8.0f};
  const float taac_mult = mults[mult_bits];

  const float taac_time = taac_mult * taac_unit;

  // Functional clock is 192Mhz / 2.  TRM page 4218.
  const float input_freq = ClockGet192Mhz() / 2;
  const float output_freq = input_freq / (float)mmc->SD_SYSCTL.CLKD;

  // Specification says that maximum timeout time should be 10x nominal.  We choose 3x to keep the
  // worst case delays reasonable.
  // Loss of precision in this conversion doesn't affect us here.
  float timeout_cycles_f = 3.0f * (taac_time + 100.0f * (float)nsac / output_freq) * input_freq;
  uint32_t timeout_cycles = (uint32_t)timeout_cycles_f;

  // Floor of log base 2.
  int32_t log2_cycles = -1;
  while (timeout_cycles) {
    log2_cycles++;
    timeout_cycles = timeout_cycles >> 1;
  }

  // Conservatively add R2W_FACTOR to timeout to avoid having to change it between reads and writes.
  log2_cycles += (int32_t)r2w_factor;

  // TRM Table 18-32 (DTO).
  int32_t dto = log2_cycles - 13;
  if (dto < 0x00) dto = 0x00;
  if (dto > 0x0E) dto = 0x0E;

  mmc->SD_SYSCTL.DTO = (uint32_t)dto;
}

static MmcStatus MmcSendSwitchCmd(volatile PeripheralMMCHS2 *const mmc,
                                     MmcArgumentCmd6 argument) {
  MmcStatus status = MmcSendCmd(mmc, 6, argument.raw);
  if (status != kMmcStatusSuccess) return status;

  // Wait for the transfer to complete or an error to occur.
  while (!(mmc->SD_STAT.TC || mmc->SD_STAT.ERRI)) {}

  if (mmc->SD_STAT.ERRI) {
    return kMmcStatusError;
  }

  // Check that SWITCH command (RCA 0x0001) succeeded.
  status = MmcSendCmd(mmc, 13, 1 << 16);
  if (status != kMmcStatusSuccess) return status;

  MmcResponseR1R3 r1 = MmcGetResponseR1R3(mmc);
  if (r1.device_status.switch_error) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

static MmcStatus MmcSetBusWidth(volatile PeripheralMMCHS2 *const mmc, MmcBusWidth bus_width) {
  assert(bus_width == kMmcBusWidth1 || bus_width == kMmcBusWidth4 || bus_width == kMmcBusWidth8);

  static const uint8_t bus_modes[] = {
    [kMmcBusWidth1] = 0,
    [kMmcBusWidth4] = 1,
    [kMmcBusWidth8] = 2,
  };

  MmcExtCsdBusWidth bus_width_reg = {0};
  bus_width_reg.bus_mode_selection = bus_modes[bus_width];

  MmcArgumentCmd6 argument = {0};
  argument.access = 3; // Write byte.
  argument.index = offsetof(MmcExtCsd, bus_width);
  argument.value = bus_width_reg.raw;

  MmcStatus status = MmcSendSwitchCmd(mmc, argument);
  if (status != kMmcStatusSuccess) return status;

  // Set host bus width.
  switch (bus_width) {
    case kMmcBusWidth1:
      mmc->SD_CON.DW8 = 0;
      mmc->SD_HCTL.DTW = 0;
      break;
    case kMmcBusWidth4:
      mmc->SD_CON.DW8 = 0;
      mmc->SD_HCTL.DTW = 1;
      break;
    case kMmcBusWidth8:
      mmc->SD_CON.DW8 = 1;
      break;
    case kMmcBusWidthForceSigned:
    case kNumMmcBusWidth:
    default:
      assert(false);
      break;
  }

  return kMmcStatusSuccess;
}

static MmcStatus MmcEnableHsTiming(volatile PeripheralMMCHS2 *const mmc) {
  MmcExtCsdHsTiming hs_timing = {0};
  hs_timing.timing_interface = 1; // High speed operation.

  MmcArgumentCmd6 argument = {0};
  argument.access = 3; // Write byte.
  argument.index = offsetof(MmcExtCsd, hs_timing);
  argument.value = hs_timing.raw;

  return MmcSendSwitchCmd(mmc, argument);
}

static MmcStatus MmcTestDataBus(volatile PeripheralMMCHS2 *const mmc, MmcBusWidth bus_width) {
  assert(bus_width == kMmcBusWidth1 || bus_width == kMmcBusWidth4 || bus_width == kMmcBusWidth8);

  uint32_t data;

  switch (bus_width) {
    case kMmcBusWidth1:
      data = 0x0080;
      mmc->SD_BLK.BLEN = 1;
      break;
    case kMmcBusWidth4:
      data = 0x005A;
      mmc->SD_BLK.BLEN = 4;
      break;
    case kMmcBusWidth8:
      mmc->SD_BLK.BLEN = 8;
      data = 0xAA55;
      break;
    case kMmcBusWidthForceSigned:
    case kNumMmcBusWidth:
    default:
      assert(false);
      break;
  }

  MmcStatus status = MmcSendCmd(mmc, 19, 0);
  if (status != kMmcStatusSuccess) return status;

  // Wait to write data.
  status = MmcWaitBufferWrite(mmc);
  if (status != kMmcStatusSuccess) return status;
  mmc->SD_DATA.raw = data;

  // 8-bit bus sends 8 bytes.
  if (bus_width == kMmcBusWidth8) {
    mmc->SD_DATA.raw = 0;
  }

  // This is required due to a silicon bug:
  // https://www.ti.com/cn/lit/er/sprz450/sprz450.pdf
  TimeDelayUs(5000);
  mmc->SD_SYSCTL.SRD = 1;
  while (!mmc->SD_SYSCTL.SRD) {}
  while (mmc->SD_SYSCTL.SRD) {}

  status = MmcSendCmd(mmc, 14, 0);
  if (status != kMmcStatusSuccess) return status;

  // Wait to read data.
  status = MmcWaitBufferRead(mmc);
  if (status != kMmcStatusSuccess) return status;

  switch (bus_width) {
    case kMmcBusWidth1:
      if ((mmc->SD_DATA.raw & 0x000000C0) != 0x00000040) {
        return kMmcStatusError;
      }
      break;
    case kMmcBusWidth4:
      if ((mmc->SD_DATA.raw & 0x000000FF) != 0x000000A5) {
        return kMmcStatusError;
      }
      break;
    case kMmcBusWidth8:
      if ((mmc->SD_DATA.raw & 0x0000FFFF) != 0x000055AA) {
        return kMmcStatusError;
      }
      volatile uint32_t force_read = mmc->SD_DATA.raw;
      (void)force_read;
      break;
    case kMmcBusWidthForceSigned:
    case kNumMmcBusWidth:
    default:
      assert(false);
      break;
  }

  mmc->SD_BLK.BLEN = kMmcBlockLength;

  return kMmcStatusSuccess;
}

MmcStatus MmcWriteReadTest(Mmc mmc_num, uint32_t sector_address) {
  // Use 2kB on stack for test.
  uint8_t data[4 * kMmcBlockLength];

  // Psuedo random number.
  int32_t offset = TimeGetUs();

  // Write data with index.
  for (int32_t i = 0; i < kMmcBlockLength; ++i) {
    data[i] = (uint8_t)(i + 10 + offset);
  }

  MmcStatus status = MmcWriteBlock(mmc_num, sector_address, data);
  if (status != kMmcStatusSuccess) return status;

  // Reset data.
  memset(data, 0, (uint32_t)kMmcBlockLength);

  status = MmcReadBlock(mmc_num, sector_address, data);
  if (status != kMmcStatusSuccess) return status;

  // Check data for index.
  for (int32_t i = 0; i < kMmcBlockLength; ++i) {
    if (data[i] != (uint8_t)(i + 10 + offset)) {
      return kMmcStatusError;
    }
  }

  // Write data with index.
  for (int32_t i = 0; i < (int32_t)sizeof(data); ++i) {
    data[i] = (uint8_t)(i + 23 + offset);
  }

  status = MmcWriteMultipleBlocks(mmc_num, sector_address + 1,
                                  (int32_t)sizeof(data) / kMmcBlockLength, data);
  if (status != kMmcStatusSuccess) return status;

  // Reset data.
  memset(data, 0, sizeof(data));

  status = MmcReadMultipleBlocks(mmc_num, sector_address + 1,
                                 (int32_t)sizeof(data) / kMmcBlockLength, data);
  if (status != kMmcStatusSuccess) return status;

  // Check data for index.
  for (int32_t i = 0; i < (int32_t)sizeof(data); ++i) {
    if (data[i] != (uint8_t)(i + 23 + offset)) {
      return kMmcStatusError;
    }
  }

  return kMmcStatusSuccess;
}

MmcStatus MmcInit(Mmc mmc_num, MmcBusWidth bus_width) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);

  // Enable relevant clocks.
  switch (mmc_num) {
    case kMmc0:
      CM_PER.MMC0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.MMC0_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L3_CLKSTCTRL.CLKACTIVITY_MMC_FCLK) {} // Wait for functional clock.
      break;
    case kMmc1:
      CM_PER.MMC1_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.MMC1_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L3_CLKSTCTRL.CLKACTIVITY_MMC_FCLK) {} // Wait for functional clock.
      break;
    case kMmc2:
      CM_PER.MMC2_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.MMC2_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L3S_CLKSTCTRL.CLKACTIVITY_L3S_GCLK) {} // Wait for functional clock.
      break;
    case kMmcForceSigned:
    case kNumMmc:
    default:
      assert(false);
      break;
  }

  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];
  mmc->SD_SYSCONFIG.SOFTRESET = 1;
  while (!mmc->SD_SYSSTATUS.RESETDONE) {}

  // Initialize controller settings. TRM 18.3.2
  mmc->SD_CAPA.VS33 = 1;  // 3.3V supply capable.

  // Turn on power.
  mmc->SD_HCTL.SDVS = 7; // Operate at 3.3V.
  mmc->SD_HCTL.SDBP = 1;
  while (!mmc->SD_HCTL.SDBP) {}

  mmc->SD_SYSCTL.ICE = 1;  // Enable clock.

  // The clock must not be greater than 80kHz during initialization. TRM Figure 18-30.
  MmcSetBusFrequency(mmc, 80e3f);

  // Enable all interrupt flags.
  mmc->SD_IE.raw = 0xFFFFFFFF;

  // Send initialization sequence. TRM Figure 18-31.
  mmc->SD_CON.INIT = 1;
  mmc->SD_CMD.raw = 0;
  TimeDelayUs(1000);
  mmc->SD_STAT.CC = 1;
  mmc->SD_CON.INIT = 0;
  mmc->SD_STAT.raw = 0xFFFFFFFF;

  // Set clock frequency to 400kHz (initialization frequency).
  MmcSetBusFrequency(mmc, 400e3f);

  // Send CMD 0 (Go idle).
  MmcStatus status;
  status = MmcSendCmd(mmc, 0, 0);
  if (status  != kMmcStatusSuccess) return status;

  // Send CMD 1 (Get operating conditions).
  MmcOcr ocr = {0};
  ocr.voltage_3v2to3v3 = 1;
  ocr.voltage_3v3to3v4 = 1;
  ocr.access_mode = 2;  // Sector address capable.

  // Wait for not busy.
  MmcResponseR1R3 r3;
  do {
    status = MmcSendCmd(mmc, 1, ocr.raw);
    if (status != kMmcStatusSuccess) return status;
    r3 = MmcGetResponseR1R3(mmc);
  } while (!r3.ocr.busy);  // Busy is inverted.

  // Send CMD 2 (Send CID).
  status = MmcSendCmd(mmc, 2, 0);
  if (status != kMmcStatusSuccess) return status;

  // Send CMD 3 (Set relative address) with 0x0001 RCA.
  status = MmcSendCmd(mmc, 3, 1 << 16);
  if (status != kMmcStatusSuccess) return status;

  // Send CMD 9 (Send CSD).
  status = MmcSendCmd(mmc, 9, 1 << 16);
  if (status != kMmcStatusSuccess) return status;
  MmcResponseR2 r2 = MmcGetResponseR2(mmc);
  MmcCsd csd = r2.csd;

  // Block size is assumed to be 512.  This takes advantage of the data double buffer.
  if (csd.read_bl_len != 9 || csd.write_bl_len != 9) {  // 2^9 = 512
    return kMmcStatusIncorrectBlockLength;
  }
  mmc->SD_BLK.BLEN = kMmcBlockLength;

  // Send CMD 7 (Select card).
  status = MmcSendCmd(mmc, 7, 1 << 16);
  if (status != kMmcStatusSuccess) return status;

  status = MmcSetBusWidth(mmc, bus_width);
  if (status != kMmcStatusSuccess) return status;

  // Set bus frequency based on device version >= v4.1.
  if (csd.spec_vers == 4) {
    status = MmcEnableHsTiming(mmc);
    if (status != kMmcStatusSuccess) return status;

    MmcSetBusFrequency(mmc, 52e6f);
  } else {  // < v4.1
    MmcSetBusFrequency(mmc, 20e6f);
  }

  // Set data timeout based on CSD values.
  MmcSetDataTimeout(mmc, csd.taac, csd.nsac, csd.r2w_factor);

  status = MmcTestDataBus(mmc, bus_width);
  if (status != kMmcStatusSuccess) return status;

  return kMmcStatusSuccess;
}

MmcStatus MmcWriteMultipleBlocks(Mmc mmc_num, uint32_t sector_address, int32_t num_sectors,
                                    uint8_t *data) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);
  assert(1 <= num_sectors && num_sectors < 1 << 16);
  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];

  mmc->SD_BLK.NBLK = num_sectors;

  // Current assume memory is >2GB so the address is the sector address.
  MmcStatus status = MmcSendCmd(mmc, 25, sector_address);
  if (status != kMmcStatusSuccess) return status;

  for (int32_t sector = 0; sector < num_sectors; ++sector) {
    // Wait to write data.
    status = MmcWaitBufferWrite(mmc);
    if (status != kMmcStatusSuccess) return status;

    MmcWriteBlockToBuffer(mmc, data);
    data += kMmcBlockLength;
  }

  // Block on device write.
  status = MmcWaitTransferComplete(mmc);
  if (status != kMmcStatusSuccess) return status;

  // Check device status returned from Auto CMD12.  This is not automatically checked by CSRE.
  if (mmc->SD_RSP76.raw & kMmcDeviceStatusErrorBits.raw) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

MmcStatus MmcReadMultipleBlocks(Mmc mmc_num, uint32_t sector_address, int32_t num_sectors,
                                   uint8_t *data) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);
  assert(1 <= num_sectors && num_sectors < 1 << 16);
  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];

  mmc->SD_BLK.NBLK = num_sectors;

  // Current assume memory is >2GB so the address is the sector address.
  MmcStatus status = MmcSendCmd(mmc, 18, sector_address);
  if (status != kMmcStatusSuccess) return status;

  for (int32_t sector = 0; sector < num_sectors; ++sector) {
    // Wait to read data.  Blocks on device read.
    status = MmcWaitBufferRead(mmc);
    if (status != kMmcStatusSuccess) return status;

    MmcReadBlockFromBuffer(mmc, data);
    data += kMmcBlockLength;
  }

  // Transfer should already be complete. Check for errors.
  status = MmcWaitTransferComplete(mmc);
  if (status != kMmcStatusSuccess) return status;

  // Check device status returned from Auto CMD12.  This is not automatically checked by CSRE.
  if (mmc->SD_RSP76.raw & kMmcDeviceStatusErrorBits.raw) {
    return kMmcStatusError;
  }

  return kMmcStatusSuccess;
}

MmcStatus MmcWriteBlock(Mmc mmc_num, uint32_t sector_address, uint8_t *data) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);
  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];

  // Current assume memory is >2GB so the address is the sector address.
  MmcStatus status = MmcSendCmd(mmc, 24, sector_address);
  if (status != kMmcStatusSuccess) return status;

  // Wait to write data.
  status = MmcWaitBufferWrite(mmc);
  if (status != kMmcStatusSuccess) return status;

  MmcWriteBlockToBuffer(mmc, data);

  // Block on device write.
  return MmcWaitTransferComplete(mmc);
}

MmcStatus MmcReadBlock(Mmc mmc_num, uint32_t sector_address, uint8_t *data) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);
  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];

  // Current assume memory is >2GB so the address is the sector address.
  MmcStatus status = MmcSendCmd(mmc, 17, sector_address);
  if (status != kMmcStatusSuccess) return status;

  // Wait to read data.  Blocks on device read.
  status = MmcWaitBufferRead(mmc);
  if (status != kMmcStatusSuccess) return status;

  MmcReadBlockFromBuffer(mmc, data);

  // Transfer should already be complete. Check for errors.
  return MmcWaitTransferComplete(mmc);
}

MmcStatus MmcGetSectorCount(Mmc mmc_num, uint32_t *sector_count) {
  assert(0 <= mmc_num && mmc_num < kNumMmc);
  volatile PeripheralMMCHS2 *const mmc = kMmcPeripherals[mmc_num];

  MmcStatus status = MmcSendCmd(mmc, 8, 0);
  if (status != kMmcStatusSuccess) return status;

  // Wait to read data.  Blocks on device read.
  status = MmcWaitBufferRead(mmc);
  if (status != kMmcStatusSuccess) return status;

  // Place fairly large buffer (512B) on stack.
  MmcExtCsd ext_csd;
  MmcReadBlockFromBuffer(mmc, ext_csd.bytes);

  // Transfer should already be complete. Check for errors.
  status = MmcWaitTransferComplete(mmc);
  if (status != kMmcStatusSuccess) return status;

  *sector_count = ext_csd.sec_count;

  return kMmcStatusSuccess;
}
