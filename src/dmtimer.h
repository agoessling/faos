#ifndef DMTIMER_H_
#define DMTIMER_H_

#include <stdbool.h>
#include <stdint.h>

typedef enum {
  kDmTimerForceSigned = -1,
  kDmTimer0,
  kDmTimer1,
  kDmTimer2,
  kDmTimer3,
  kDmTimer4,
  kDmTimer5,
  kDmTimer6,
  kDmTimer7,
  kNumDmTimer
} DmTimer;

float DmTimerInit(DmTimer timer_num);
void DmTimerStart(DmTimer timer_num);
void DmTimerStop(DmTimer timer_num);
bool DmTimerGetOverflow(DmTimer timer_num);
uint32_t DmTimerGetCounter(DmTimer timer_num);

#endif  // DMTIMER_H_
