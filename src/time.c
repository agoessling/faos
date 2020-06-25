#include "time.h"

#include <stdint.h>

#include "assert.h"
#include "dmtimer.h"

static int64_t g_time_offset_us = 0;
static const DmTimer kTimeTimer = kDmTimer2;
static const float kTimerFreq = 24e6f;

void TimeInit(void) {
  assert(DmTimerInit(kTimeTimer) == kTimerFreq);
  DmTimerStart(kTimeTimer);
}

int64_t TimeGetUs(void) {
  uint32_t counter = DmTimerGetCounter(kTimeTimer);
  if (DmTimerGetOverflow(kTimeTimer)) {
    // 2^32 / (kTimerFreq / 1Mhz) may have a remainder.  We add one to ensure monotonicity at the
    // expense of an extra 1us in the worst case.
    g_time_offset_us += ((int64_t)1 << 32) / (int64_t)(kTimerFreq / 1e6f) + 1;
  }
  return g_time_offset_us + counter / (uint32_t)(kTimerFreq / 1e6f);
}

void TimeDelayUs(int32_t delay_time) {
  int64_t now = TimeGetUs();
  int64_t alarm = now + delay_time;
  while (TimeGetUs() < alarm) {}
}
