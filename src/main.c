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

  uint8_t reg_addr = 0x00;
  I2cStatus write_status = I2cWriteBlocking(kI2c0, 0x25, &reg_addr, 1, false);
  uint8_t response;
  I2cStatus read_status = I2cReadBlocking(kI2c0, 0x24, &response, 1, true);

  while (true) {}
}
