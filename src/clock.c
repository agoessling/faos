#include "clock.h"

#include "assert.h"
#include "src/autogen/reg_def.h"

typedef enum {
  kClockPllForceSigned = -1,
  kClockPllMpu,
  kClockPllCore,
  kClockPllDdr,
  kClockPllPer,
  kClockPllDisp,
  kNumClockPll
} ClockPll;

typedef struct {
  int32_t divider;
  int32_t multiplier;
} ClockPllSettings;

static const float kClockInputFreq = 24e6f;
static const float kClockDdrFreq = 400e6f;

static ClockPllSettings ClockGetPllSettings(float freq, ClockPll pll) {
  int32_t max_div, min_div, max_mult, min_mult;

  if (pll == kClockPllPer) {  // Peripheral PLL has different min and max settings.
    max_div = 256;
    min_div = 1;
    max_mult = 4095;
    min_mult = 2;
  } else {
    max_div = 128;
    min_div = 1;
    max_mult = 2047;
    min_mult = 2;
  }

  int32_t divider = (int32_t)(kClockInputFreq / 1e6f + 0.5f);  // Round to 1Mhz before multiply.
  if (divider < min_div) {
    divider = min_div;
  } else if (divider > max_div) {
    divider = max_div;
  }

  float pre_mult_freq = kClockInputFreq / (float)divider;
  int32_t multiplier = (int32_t)(freq / pre_mult_freq + 0.5f);  // Round.
  if (multiplier < min_mult) {
    multiplier = min_mult;
  } else if (multiplier > max_mult) {
    multiplier = max_mult;
  }

  ClockPllSettings settings = {.divider = divider - 1, .multiplier = multiplier};
  return settings;
}

static inline float ClockGetPllFrequency(ClockPllSettings settings) {
  return kClockInputFreq / (float)(settings.divider + 1) * (float)settings.multiplier;
}

float ClockSetMpuFreq(float freq) {
  assert(275e6 <= freq && freq <= 1000e6f);

  CM_WKUP.CM_CLKMODE_DPLL_MPU.DPLL_EN = 4;  // Bypass PLL.
  while (!CM_WKUP.CM_IDLEST_DPLL_MPU.ST_MN_BYPASS) {}  // Wait for bypass.

  ClockPllSettings settings = ClockGetPllSettings(freq, kClockPllMpu);
  CM_WKUP.CM_CLKSEL_DPLL_MPU.DPLL_DIV = (uint32_t)settings.divider;
  CM_WKUP.CM_CLKSEL_DPLL_MPU.DPLL_MULT = (uint32_t)settings.multiplier;

  CM_WKUP.CM_DIV_M2_DPLL_MPU.DPLL_CLKOUT_DIV = 1;  // M2 Output divider = 1.

  CM_WKUP.CM_CLKMODE_DPLL_MPU.DPLL_EN = 7;  // Lock PLL.
  while (!CM_WKUP.CM_IDLEST_DPLL_MPU.ST_DPLL_CLK) {}  // Wait for lock.

  return ClockGetPllFrequency(settings);
}

void ClockInitDdr(void) {
  CM_WKUP.CM_CLKMODE_DPLL_DDR.DPLL_EN = 4;  // Bypass PLL.
  while (!CM_WKUP.CM_IDLEST_DPLL_DDR.ST_MN_BYPASS) {}  // Wait for bypass.

  ClockPllSettings settings = ClockGetPllSettings(kClockDdrFreq, kClockPllDdr);
  CM_WKUP.CM_CLKSEL_DPLL_DDR.DPLL_DIV = (uint32_t)settings.divider;
  CM_WKUP.CM_CLKSEL_DPLL_DDR.DPLL_MULT = (uint32_t)settings.multiplier;

  CM_WKUP.CM_DIV_M2_DPLL_DDR.DPLL_CLKOUT_DIV = 1;  // M2 Output divider = 1.

  CM_WKUP.CM_CLKMODE_DPLL_DDR.DPLL_EN = 7;  // Lock PLL.
  while (!CM_WKUP.CM_IDLEST_DPLL_DDR.ST_DPLL_CLK) {}  // Wait for lock.
}
