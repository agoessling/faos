#include "ddr3.h"

#include <stdbool.h>
#include <stdint.h>

#include "src/autogen/reg_def.h"
#include "clock.h"

bool Ddr3Verify(void) {
  static uint32_t *const kSdramStart = (uint32_t *)0x80000000;
  static const uint32_t kSdramLen = 512 * 1024 * 1024;  // 512MB.

  // Write.
  for (uint32_t i = 0; i < kSdramLen / 4; ++i) {
    *(kSdramStart + i) = (uint32_t)(kSdramStart + i);
  }

  // Verify.
  for (uint32_t i = 0; i < kSdramLen / 4; ++i) {
    if (*(kSdramStart + i) != (uint32_t)(kSdramStart + i)) {
      return false;
    }
  }

  return true;
}

void Ddr3Init(void) {
  CM_PER.EMIF_CLKCTRL.MODULEMODE = 2;  // Turn on module.
  while (CM_PER.EMIF_CLKCTRL.IDLEST) {}  // Wait fo function clock.
  while (!CM_PER.L3_CLKSTCTRL.CLKACTIVITY_EMIF_GCLK) {}  // Wait fo function clock.

  ClockInitDdr();  // Initialize PLL.

  // VTP auto-calibration routine.
  CONTROL_MODULE.VTP_CTRL.ENABLE = 1;
  CONTROL_MODULE.VTP_CTRL.CLRZ = 0;
  CONTROL_MODULE.VTP_CTRL.CLRZ = 1;
  while (!CONTROL_MODULE.VTP_CTRL.READY) {}

  // DDR3 PHY settings specific to MT41K256M16HA-125:E. Parameters stolen from u-boot.
  // NOTE: A silicon bug means that DDR2_3_PHY registers are write only.  This means that
  // read-modify-write sequences will not work as expected.
  static const uint32_t kCmdSlaveRatio = 128;
  static const uint32_t kCmdDllLockDiff = 1;
  static const uint32_t kInvertClkSel = 0;
  // CMD0.
  DDR2_3_PHY.CMD0_REG_PHY_CTRL_SLAVE_RATIO_0.raw = kCmdSlaveRatio;
  DDR2_3_PHY.CMD0_REG_PHY_DLL_LOCK_DIFF_0.raw = kCmdDllLockDiff;
  DDR2_3_PHY.CMD0_REG_PHY_INVERT_CLKOUT_0.raw = kInvertClkSel;
  // CMD1.
  DDR2_3_PHY.CMD1_REG_PHY_CTRL_SLAVE_RATIO_0.raw = kCmdSlaveRatio;
  DDR2_3_PHY.CMD1_REG_PHY_DLL_LOCK_DIFF_0.raw = kCmdDllLockDiff;
  DDR2_3_PHY.CMD1_REG_PHY_INVERT_CLKOUT_0.raw = kInvertClkSel;
  // CMD2.
  DDR2_3_PHY.CMD2_REG_PHY_CTRL_SLAVE_RATIO_0.raw = kCmdSlaveRatio;
  DDR2_3_PHY.CMD2_REG_PHY_DLL_LOCK_DIFF_0.raw = kCmdDllLockDiff;
  DDR2_3_PHY.CMD2_REG_PHY_INVERT_CLKOUT_0.raw = kInvertClkSel;

  static const uint32_t kRdDqsSlaveRatioCs0 = 56;
  static const uint32_t kWrDqsSlaveRatioCs0 = 68;
  static const uint32_t kWrlvlInitRatioCs0 = 0;
  static const uint32_t kGatelvlInitRatioCs0 = 0;
  static const uint32_t kFifoWeSlaveRatioCs0 = 148;
  static const uint32_t kWrDataSlaveRatioCs0 = 125;
  static const uint32_t kRank0Delay = 0;
  static const uint32_t kDataDllLockDiff = 0;
  // DATA0.
  DDR2_3_PHY.DATA0_REG_PHY_RD_DQS_SLAVE_RATIO_0.raw = kRdDqsSlaveRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_WR_DQS_SLAVE_RATIO_0.raw = kWrDqsSlaveRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_WRLVL_INIT_RATIO_0.raw = kWrlvlInitRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_GATELVL_INIT_RATIO_0.raw = kGatelvlInitRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_FIFO_WE_SLAVE_RATIO_0.raw = kFifoWeSlaveRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_WR_DATA_SLAVE_RATIO_0.raw = kWrDataSlaveRatioCs0;
  DDR2_3_PHY.DATA0_REG_PHY_USE_RANK0_DELAYS.raw = kRank0Delay;
  DDR2_3_PHY.DATA0_REG_PHY_DLL_LOCK_DIFF_0.raw = kDataDllLockDiff;
  // DATA1.
  DDR2_3_PHY.DATA1_REG_PHY_RD_DQS_SLAVE_RATIO_0.raw = kRdDqsSlaveRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_WR_DQS_SLAVE_RATIO_0.raw = kWrDqsSlaveRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_WRLVL_INIT_RATIO_0.raw = kWrlvlInitRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_GATELVL_INIT_RATIO_0.raw = kGatelvlInitRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_FIFO_WE_SLAVE_RATIO_0.raw = kFifoWeSlaveRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_WR_DATA_SLAVE_RATIO_0.raw = kWrDataSlaveRatioCs0;
  DDR2_3_PHY.DATA1_REG_PHY_USE_RANK0_DELAYS.raw = kRank0Delay;
  DDR2_3_PHY.DATA1_REG_PHY_DLL_LOCK_DIFF_0.raw = kDataDllLockDiff;

  // Setup PHY IO.
  static const uint32_t kIoConfigI = 3;  // Match Rext impedance on IO pins.
  static const uint32_t kIoConfigSr = 1;  // Slow slew rate on IO pins.
  static const uint32_t kIoConfigIClk = 4;  // Match 0.88 * Rext impedance on CLK pins.
  static const uint32_t kIoConfigSrClk = 1;  // Slow slew rate on CLK pins.

  RegisterCONTROL_MODULE_DDR_CMD0_IOCTRL ddr_ioctrl = {0};
  ddr_ioctrl.IO_CONFIG_I = kIoConfigI;
  ddr_ioctrl.IO_CONFIG_SR = kIoConfigSr;
  ddr_ioctrl.IO_CONFIG_I_CLK = kIoConfigIClk;
  ddr_ioctrl.IO_CONFIG_SR_CLK = kIoConfigSrClk;

  CONTROL_MODULE.DDR_CMD0_IOCTRL.raw = ddr_ioctrl.raw;
  CONTROL_MODULE.DDR_CMD1_IOCTRL.raw = ddr_ioctrl.raw;
  CONTROL_MODULE.DDR_CMD2_IOCTRL.raw = ddr_ioctrl.raw;
  CONTROL_MODULE.DDR_DATA0_IOCTRL.raw = ddr_ioctrl.raw;
  CONTROL_MODULE.DDR_DATA1_IOCTRL.raw = ddr_ioctrl.raw;

  // Give EMIF control of clock enable (CKE).
  CONTROL_MODULE.DDR_CKE_CTRL.DDR_CKE_CTRL = 1;

  // Configure EMIF.
  static const uint32_t kRegReadLatency = 7;
  static const uint32_t kRegPhyEnableDynamicPwrdn = 1;  // Enable dynamic shutdown of receivers.

  RegisterEMIF0_DDR_PHY_CTRL_1 ddr_phy_ctrl = {0};
  ddr_phy_ctrl.REG_READ_LATENCY = kRegReadLatency;
  ddr_phy_ctrl.REG_PHY_ENABLE_DYNAMIC_PWRDN = kRegPhyEnableDynamicPwrdn;

  EMIF0.DDR_PHY_CTRL_1.raw = ddr_phy_ctrl.raw;
  EMIF0.DDR_PHY_CTRL_1_SHDW.raw = ddr_phy_ctrl.raw;

  // SDRAM timing.
  // Timing values are given as number of cycles minus one.
  static const uint32_t kRegTwtr = 3;  // Write to read.
  static const uint32_t kRegTrrd = 3;  // Activate to activate for a different bank.
  static const uint32_t kRegTrc = 19;  // Activate to activate.
  static const uint32_t kRegTras = 13;  // Activate to precharge.
  static const uint32_t kRegTwr = 5;  // Write to precharge.
  static const uint32_t kRegTrcd = 5;  // Activate to read or write.
  static const uint32_t kRegTrp = 5;  // Precharge to activate or refresh.

  RegisterEMIF0_SDRAM_TIM_1 sdram_tim_1 = {0};
  sdram_tim_1.REG_T_WTR = kRegTwtr;
  sdram_tim_1.REG_T_RRD = kRegTrrd;
  sdram_tim_1.REG_T_RC = kRegTrc;
  sdram_tim_1.REG_T_RAS = kRegTras;
  sdram_tim_1.REG_T_WR = kRegTwr;
  sdram_tim_1.REG_T_RCD = kRegTrcd;
  sdram_tim_1.REG_T_RP = kRegTrp;

  EMIF0.SDRAM_TIM_1.raw = sdram_tim_1.raw;
  EMIF0.SDRAM_TIM_1_SHDW.raw = sdram_tim_1.raw;

  static const uint32_t kRegTcke = 2;  // CKE changes to CKE changes.
  static const uint32_t kRegTrtp = 3;  // Read to precharge.
  static const uint32_t kRegTxsrd = 511;  // Self-refresh exit to read.
  static const uint32_t kRegTxsnr = 107;  // Self-refresh exit to anything other than read.
  static const uint32_t kRegTodt = 3;  // Not documented in TRM, but written in u-boot.
  static const uint32_t kRegTxp = 2;  // Powerdown exit to anything other than read.

  RegisterEMIF0_SDRAM_TIM_2 sdram_tim_2 = {0};
  sdram_tim_2.REG_T_CKE = kRegTcke;
  sdram_tim_2.REG_T_RTP = kRegTrtp;
  sdram_tim_2.REG_T_XSRD = kRegTxsrd;
  sdram_tim_2.REG_T_XSNR = kRegTxsnr;
  sdram_tim_2.REG_T_ODT = kRegTodt;
  sdram_tim_2.REG_T_XP = kRegTxp;

  EMIF0.SDRAM_TIM_2.raw = sdram_tim_2.raw;
  EMIF0.SDRAM_TIM_2_SHDW.raw = sdram_tim_2.raw;

  static const uint32_t kRegTrasMax = 15;  // Refresh intervals from activate to precharge.
  static const uint32_t kRegTrfc = 103;  // Refresh or load mode to refresh or activate.
  static const uint32_t kRegZqZqcs = 63;  // Cycles for ZQCS command.
  static const uint32_t kRegTpdllUl = 5;  // Cycles for PHY DLL to unlock.

  RegisterEMIF0_SDRAM_TIM_3 sdram_tim_3 = {0};
  sdram_tim_3.REG_T_RAS_MAX = kRegTrasMax;
  sdram_tim_3.REG_T_RFC = kRegTrfc;
  sdram_tim_3.REG_ZQ_ZQCS = kRegZqZqcs;
  sdram_tim_3.REG_T_PDLL_UL = kRegTpdllUl;

  EMIF0.SDRAM_TIM_3.raw = sdram_tim_3.raw;
  EMIF0.SDRAM_TIM_3_SHDW.raw = sdram_tim_3.raw;

  // SDRAM Configuration.
  RegisterEMIF0_SDRAM_REF_CTRL sdram_ref_ctrl = {0};
  // REG_INITREF_DIS bit being zero removes refresh / initilization disable.
  sdram_ref_ctrl.REG_REFRESH_RATE = 10240;
  EMIF0.SDRAM_REF_CTRL.raw = sdram_ref_ctrl.raw;

  RegisterEMIF0_ZQ_CONFIG zq_config = {0};
  zq_config.REG_ZQ_REFINTERVAL = 19428;  // Refresh periods between ZQCS commands.
  zq_config.REG_ZQ_ZQCL_MULT = 3;  // ZQCS interals per ZQCL minus one.
  zq_config.REG_ZQ_ZQINIT_MULT = 1;  // ZQCL interals per ZQINIT minus one.
  zq_config.REG_ZQ_SFEXITEN = 1;  // Enable ZQCL on exit of modes.
  zq_config.REG_ZQ_CS0EN = 1;  // Enable ZQ calibratiion for CS1.
  EMIF0.ZQ_CONFIG.raw = zq_config.raw;

  RegisterEMIF0_SDRAM_CONFIG sdram_config = {0};
  sdram_config.REG_PAGESIZE = 2;  // 1024 word page.
  sdram_config.REG_IBANK = 3;  // 8 banks.
  sdram_config.REG_ROWSIZE = 6;  // 15 row bits.
  sdram_config.REG_CL = 4;  // Column Access Strobe (CAS) latency.
  sdram_config.REG_NARROW_MODE = 1;  // 16 bit bus.
  sdram_config.REG_SDRAM_DRIVE = 0;  // Drive strength RZQ / 6.
  sdram_config.REG_DYN_ODT = 2;  // Dynamic ODT RZQ / 2.
  sdram_config.REG_DDR2_DDQS = 1;  // Differential DQS.
  sdram_config.REG_DDR_TERM = 1;  // Termination RZQ / 4.
  sdram_config.REG_SDRAM_TYPE = 3;  // DDR3.

  // After low power resuming, SDRAM_CONFIG is loaded from control module.
  CONTROL_MODULE.CONTROL_EMIF_SDRAM_CONFIG.raw = sdram_config.raw;
  EMIF0.SDRAM_CONFIG.raw = sdram_config.raw;

  // Reset refresh period to final value.
  sdram_ref_ctrl.raw = 0;
  sdram_ref_ctrl.REG_REFRESH_RATE = 3120;
  EMIF0.SDRAM_REF_CTRL.raw = sdram_ref_ctrl.raw;
  EMIF0.SDRAM_REF_CTRL_SHDW.raw = sdram_ref_ctrl.raw;
}
