#include "main.h"

#include <stdbool.h>

#include "autogen/reg_def.h"
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

  Tps65217Status status = Tps65217ScaleDcdc(kI2c0, kTps65217Dcdc2, kTps65217DcdcVoltageScale1v325);
  (void)status;

  while (true) {}
}
