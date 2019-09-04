typedef enum {
  kI2cForceSigned = -1,
  kI2c0,
  kNumI2c
} I2c;

#include "assert.h"

void I2cInit(I2c i2c_num, float frequency) {
  assert(0 <= i2c_num && i2c_num < kNumI2c);
  assert(frequency < 400e3f);

  CM_WKUP.I2C0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
  I2C0.SYSC.SRST = 1; // Reset peripheral.
  float input_freq = ClockGet192Mhz() / 4.0f;
}
