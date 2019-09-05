#include "main.h"

#include <stdbool.h>

#include "autogen/reg_def.h"
#include "i2c.h"

void Main(void) {
  I2cInit(kI2c0);

  while (true) {}
}
