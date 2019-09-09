#ifndef GPIO_H_
#define GPIO_H_

#include <stdbool.h>
#include <stdint.h>

typedef enum {
  kGpioForceSigned = -1,
  kGpio0,
  kGpio1,
  kGpio2,
  kGpio3,
  kNumGpio
} Gpio;

void GpioInit(Gpio gpio_num);
void GpioOutputEnable(Gpio gpio_num, int32_t pin, bool state);
bool GpioReadPin(Gpio gpio_num, int32_t pin);
void GpioSetPin(Gpio gpio_num, int32_t pin, bool state);

#endif  // GPIO_H_
