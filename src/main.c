#include "main.h"

#include <stdbool.h>

#include "assert.h"
#include "autogen/reg_def.h"
#include "clock.h"
#include "ddr3.h"
#include "i2c.h"
#include "tps65217.h"

static void BoardInit(void) {
  CONTROL_MODULE.CONF_I2C0_SDA.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SDA.MMODE = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SCL.MMODE = 0;
}

void Main(void) {
  BoardInit();
  I2cInit(kI2c0);

  // Scale voltage for nitro mode (1GHz).
  Tps65217Status status = Tps65217ScaleDcdc(kI2c0, kTps65217Dcdc2, kTps65217DcdcVoltageScale1v325);
  assert(status == kTps65217StatusSuccess);

  // Set MPU PLL to 1GHz.
  float freq = ClockSetMpuFreq(1e9f);
  (void)freq;

  // Setup DDR3.
  Ddr3Init();

  bool ddr_verify = Ddr3Verify();
  (void)ddr_verify;

  while (true) {}
}
