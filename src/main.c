#include "main.h"

#include <stdbool.h>

#include "autogen/reg_def.h"
#include "i2c.h"

static void BoardInit(void) {
  CONTROL_MODULE.CONF_I2C0_SDA.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SDA.MMODE = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.RXACTIVE = 1;
  CONTROL_MODULE.CONF_I2C0_SCL.MMODE = 0;
}

void Main(void) {
  BoardInit();
  I2cInit(kI2c0);

  uint8_t byte[] = {0x11, 0x19, 0x98};
  I2cStatus status = I2cWriteBlocking(kI2c0, 0x24, byte, 1, true);

  while (true) {}
}
