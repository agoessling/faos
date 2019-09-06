#include "i2c.h"

#include <stdint.h>

#include "assert.h"
#include "autogen/reg_def.h"
#include "clock.h"

static const float kIClkFreq = 24.0f;

void I2cInit(I2c i2c_num) {
  assert(0 <= i2c_num && i2c_num < kNumI2c);

  CM_WKUP.I2C0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
  I2C0.SYSC.SRST = 1; // Reset peripheral.
  while (!I2C0.SYSS.RDONE) {}  // Wait for reset.

  float input_freq = ClockGet192Mhz() / 4.0f;
  int32_t prescale = (int32_t)(input_freq / kIClkFreq + 0.5f);  // Round.
  if (prescale < 1) {
    prescale = 1;
  }
  I2C0.PSC.PSC = (uint32_t)prescale;

  // Minimum low time is 1.3us. Datasheet Table 7-71.
  int32_t low_cycles = (int32_t)(1.3e-6f * kIClkFreq + 1.0f);  // Ceil.
  if (low_cycles < 7) {
    low_cycles = 7;
  }
  I2C0.SCLL.SCLL = (uint32_t)(low_cycles - 7);

  // Minimum high time is 0.6us, but minimum period is 2.5us. Datasheet Table 7-71.
  int32_t high_cycles = (int32_t)(1.2e-6f * kIClkFreq + 1.0f);  // Ceil.
  if (high_cycles < 5) {
    high_cycles = 5;
  }
  I2C0.SCLH.SCLH = (uint32_t)(high_cycles - 5);

  I2C0.CON.I2C_EN = 1;
}
