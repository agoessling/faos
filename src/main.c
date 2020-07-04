#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "src/autogen/reg_def.h"
#include "clock.h"
#include "ddr3.h"
#include "gpio.h"
#include "i2c.h"
#include "mmc.h"
#include "time.h"
#include "tps65217.h"
#include "uart.h"

static void BoardInit(void) {
  // Corresponding MMODE setting come from DS Table 4-2.

  // GPIO1 21-24.
  CONTROL_MODULE.CONF_GPMC_A5.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A6.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A7.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A8.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A5.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A6.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A7.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A8.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A5.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A6.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A7.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A8.MMODE = 7;

  // UART0.
  CONTROL_MODULE.CONF_UART0_RXD.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_UART0_RXD.PUDEN = 1;
  CONTROL_MODULE.CONF_UART0_RXD.MMODE = 0;
  CONTROL_MODULE.CONF_UART0_TXD.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_UART0_TXD.PUDEN = 1;
  CONTROL_MODULE.CONF_UART0_TXD.MMODE = 0;

  // I2C0.
  CONTROL_MODULE.CONF_I2C0_SDA.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_I2C0_SDA.PUDEN = 0;
  CONTROL_MODULE.CONF_I2C0_SDA.MMODE = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_I2C0_SCL.PUDEN = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.MMODE = 0;

  // MMC0.
  CONTROL_MODULE.CONF_MMC0_DAT0.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_DAT1.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_DAT2.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_DAT3.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_CLK.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_CMD.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_MMC0_DAT0.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_DAT1.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_DAT2.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_DAT3.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_CLK.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_CMD.PUDEN = 1;
  CONTROL_MODULE.CONF_MMC0_DAT0.MMODE = 0;
  CONTROL_MODULE.CONF_MMC0_DAT1.MMODE = 0;
  CONTROL_MODULE.CONF_MMC0_DAT2.MMODE = 0;
  CONTROL_MODULE.CONF_MMC0_DAT3.MMODE = 0;
  CONTROL_MODULE.CONF_MMC0_CLK.MMODE = 0;
  CONTROL_MODULE.CONF_MMC0_CMD.MMODE = 0;

  // MMC1.
  CONTROL_MODULE.CONF_GPMC_AD0.SLEWCTRL = 0;  // DATA[0:7]
  CONTROL_MODULE.CONF_GPMC_AD1.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD2.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD3.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD4.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD5.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD6.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_AD7.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_GPMC_CSN1.SLEWCTRL = 0; // CLK
  CONTROL_MODULE.CONF_GPMC_CSN2.SLEWCTRL = 0; // CMD
  CONTROL_MODULE.CONF_GPMC_AD0.PUDEN = 1;  // DATA[0:7]
  CONTROL_MODULE.CONF_GPMC_AD1.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD2.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD3.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD4.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD5.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD6.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_AD7.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_CSN1.PUDEN = 1;  // CLK
  CONTROL_MODULE.CONF_GPMC_CSN2.PUDEN = 1;  // CMD
  CONTROL_MODULE.CONF_GPMC_AD0.MMODE = 1;  // DATA[0:7]
  CONTROL_MODULE.CONF_GPMC_AD1.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD2.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD3.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD4.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD5.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD6.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_AD7.MMODE = 1;
  CONTROL_MODULE.CONF_GPMC_CSN1.MMODE = 2; // CLK
  CONTROL_MODULE.CONF_GPMC_CSN2.MMODE = 2; // CMD
}

static void BoardSetLed(int32_t led, bool state) {
  assert(0 <= led && led < 4);
  GpioSetPin(kGpio1, 21 + led, state);
}

void Main(void);

void Main(void) {
  BoardInit();

  GpioInit(kGpio1);
  GpioOutputEnable(kGpio1, 21, true);
  GpioOutputEnable(kGpio1, 22, true);
  GpioOutputEnable(kGpio1, 23, true);
  GpioOutputEnable(kGpio1, 24, true);
  BoardSetLed(0, true);

  TimeInit();

  UartInit(kUart0, 921.6e3f);
  static const uint8_t msg[] = "Faos booting.\n";
  UartWriteBlocking(kUart0, msg, (int32_t)sizeof(msg));

  I2cInit(kI2c0);

  // Scale voltage for nitro mode (1GHz).
  Tps65217Status status = Tps65217ScaleDcdc(kI2c0, kTps65217Dcdc2, kTps65217DcdcVoltageScale1v325);
  assert(status == kTps65217StatusSuccess);
  // Set MPU PLL to 1GHz.
  ClockSetMpuFreq(1e9f);

  // Setup DDR3.
  Ddr3Init();

  // Setup MMC.
  MmcContext sd;
  MmcContext emmc;
  assert(MmcInit(&sd, kMmc0, kMmcBusWidth4) == kMmcStatusSuccess);
  assert(MmcInit(&emmc, kMmc1, kMmcBusWidth8) == kMmcStatusSuccess);

  // Test MMC.
  uint32_t sector_count;

  sector_count = MmcGetSectorCount(&sd);
  assert(sector_count > 7000000);  // Make sure to only use end of flash.
  // Use last five sectors for test.
  assert(MmcWriteReadTest(&sd, sector_count - 5) == kMmcStatusSuccess);

  sector_count = MmcGetSectorCount(&emmc);
  assert(sector_count > 7000000);  // Make sure to only use end of flash.
  // Use last five sectors for test.
  assert(MmcWriteReadTest(&emmc, sector_count - 5) == kMmcStatusSuccess);

  // Sanity LEDs.
  bool led_state = false;
  while (true) {
    BoardSetLed(1, led_state);
    TimeDelayUs((int32_t)1e6f);
    led_state = !led_state;
  }
}
