#ifndef CLOCK_H_
#define CLOCK_H_

static inline float ClockGet192Mhz(void) {
  return 192e6f;
}

static inline float ClockGetOsc(void) {
  return 24e6f;
}

float ClockSetMpuFreq(float freq);
void ClockInitDdr(void);

#endif  // CLOCK_H_
