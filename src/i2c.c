#include "i2c.h"

#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "autogen/reg_def.h"
#include "clock.h"

static const float kIClkFreq = 24.0e6f;

void I2cInit(I2c i2c_num) {
  assert(0 <= i2c_num && i2c_num < kNumI2c);  // Only support I2C0.

  CM_WKUP.I2C0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
  while (CM_WKUP.I2C0_CLKCTRL.IDLEST != 0) {}  // Wait for functional.
  while (!CM_WKUP.CLKSTCTRL.CLKACTIVITY_I2C0_GFCLK) {}  // Wait for functional clock.

  I2C0.SYSC.SRST = 1; // Reset peripheral.

  float input_freq = ClockGet192Mhz() / 4.0f;
  int32_t prescale = (int32_t)(input_freq / kIClkFreq + 0.5f);  // Round.
  if (prescale < 1) {
    prescale = 1;
  }
  I2C0.PSC.PSC = (uint32_t)(prescale - 1);

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
  while (!I2C0.SYSS.RDONE) {}  // Wait for enable.
}

I2cStatus I2cWriteBlocking(I2c i2c_num, uint8_t address, const uint8_t *buf, int32_t len,
                           bool stop_bit) {
  assert(0 <= i2c_num && i2c_num < kNumI2c);
  assert(0 < len && len < (1 << 16));
  assert(address < (1 << 7));

  I2C0.SA.SA = (uint32_t)address;
  I2C0.CNT.DCOUNT = (uint32_t)len;
  I2C0.CON.MST = 1;  // Master mode.
  I2C0.CON.TRX = 1;  // Transmit.
  I2C0.CON.STP = stop_bit;
  I2C0.CON.STT = 1;  // Start bit.
  if(!I2C0.IRQSTATUS_RAW.XRDY){while(1){}}

  for (int32_t i = 0; i < len; ++i) {
    while(I2C0.IRQSTATUS_RAW.XRDY){}// && !I2C0.IRQSTATUS_RAW.ARDY) {}

    if (I2C0.IRQSTATUS_RAW.NACK) {
      I2C0.CON.STP = 1;  // Send stop bit to finish transaction.
      I2C0.IRQSTATUS.raw = (1 << 1);  // NACK.
      while(1) {}
      return kI2cStatusNack;
    }

    I2C0.DATA.DATA = (uint32_t)buf[i];

    I2C0.IRQSTATUS.raw = (1 << 4) | (1 << 2);  // XUDF | ARDY
  }

  while(!I2C0.IRQSTATUS_RAW.ARDY) {}
  I2C0.IRQSTATUS.raw = (0 << 4) | (1 << 2);  // XUDF | ARDY

  if (I2C0.IRQSTATUS_RAW.NACK) {
    I2C0.CON.STP = 1;  // Send stop bit to finish transaction.
    I2C0.IRQSTATUS.raw = (1 << 1);  // NACK.
    while(1) {}
    return kI2cStatusNack;
  }

  return kI2cStatusSuccess;
}
