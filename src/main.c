#include "main.h"

#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "autogen/reg_def.h"
#include "clock.h"
#include "ddr3.h"
#include "gpio.h"
#include "i2c.h"
#include "tps65217.h"

static void BoardInit(void) {
  // I2C0.
  CONTROL_MODULE.CONF_I2C0_SDA.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SDA.MMODE = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SCL.MMODE = 0;

  // GPIO1 21-24.
  CONTROL_MODULE.CONF_GPMC_A5.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A6.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A7.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A8.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A5.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A6.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A7.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A8.MMODE = 7;
}

static void BoardSetLed(int32_t led, bool state) {
  assert(0 <= led && led < 4);
  GpioSetPin(kGpio1, 21 + led, state);
}

void Main(void) {
  BoardInit();

  GpioInit(kGpio1);
  GpioOutputEnable(kGpio1, 21, true);
  GpioOutputEnable(kGpio1, 22, true);
  GpioOutputEnable(kGpio1, 23, true);
  GpioOutputEnable(kGpio1, 24, true);

  BoardSetLed(0, true);

  I2cInit(kI2c0);

  // Scale voltage for nitro mode (1GHz).
  Tps65217Status status = Tps65217ScaleDcdc(kI2c0, kTps65217Dcdc2, kTps65217DcdcVoltageScale1v325);
  assert(status == kTps65217StatusSuccess);
  // Set MPU PLL to 1GHz.
  ClockSetMpuFreq(1e9f);

  // Setup DDR3.
  Ddr3Init();
  assert(Ddr3Verify());
  BoardSetLed(1, true);

  while (true) {}
}
