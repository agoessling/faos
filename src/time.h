#ifndef TIME_H_
#define TIME_H_

#include <stdint.h>

void TimeInit(void);
int64_t TimeGetUs(void);
void TimeDelayUs(int32_t delay_time);

#endif  // TIME_H_
