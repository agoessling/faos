#include "gpio.h"

#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "src/autogen/reg_def.h"

static volatile PeripheralGPIO0 *const kGpioPeripherals[kNumGpio] = {
  [kGpio0] = &GPIO0,
  [kGpio1] = &GPIO1,
  [kGpio2] = &GPIO2,
  [kGpio3] = &GPIO3
};

void GpioInit(Gpio gpio_num) {
  assert(0 <= gpio_num && gpio_num < kNumGpio);

  // Enable relevant clocks.  NOTE: Debounce is not supported and clocks are not enabled.
  switch (gpio_num) {
    case kGpio0:
      CM_WKUP.GPIO0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while(CM_WKUP.GPIO0_CLKCTRL.IDLEST) {}  // Wait for functional clock.
      break;
    case kGpio1:
      CM_PER.GPIO1_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while(CM_PER.GPIO1_CLKCTRL.IDLEST) {}  // Wait for functional clock.
      break;
    case kGpio2:
      CM_PER.GPIO2_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while(CM_PER.GPIO2_CLKCTRL.IDLEST) {}  // Wait for functional clock.
      break;
    case kGpio3:
      CM_PER.GPIO3_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while(CM_PER.GPIO3_CLKCTRL.IDLEST) {}  // Wait for functional clock.
      break;
    case kGpioForceSigned:
    case kNumGpio:
    default:
      assert(false);
      break;
  }

  volatile PeripheralGPIO0 *const gpio = kGpioPeripherals[gpio_num];

  gpio->SYSCONFIG.SOFTRESET = 1;  // Reset GPIO.
}

void GpioOutputEnable(Gpio gpio_num, int32_t pin, bool state) {
  assert(0 <= gpio_num && gpio_num < kNumGpio);
  assert(0 <= pin && pin < 32);

  volatile PeripheralGPIO0 *const gpio = kGpioPeripherals[gpio_num];

  // OE register is inverted.
  if (state) {
    gpio->OE.raw &= (uint32_t)~(1 << pin);
  } else {
    gpio->OE.raw |= (uint32_t)(1 << pin);
  }
}

bool GpioReadPin(Gpio gpio_num, int32_t pin) {
  assert(0 <= gpio_num && gpio_num < kNumGpio);
  assert(0 <= pin && pin < 32);

  volatile PeripheralGPIO0 *const gpio = kGpioPeripherals[gpio_num];

  return (bool)(gpio->DATAIN.raw & (uint32_t)(1 << pin));
}

void GpioSetPin(Gpio gpio_num, int32_t pin, bool state) {
  assert(0 <= gpio_num && gpio_num < kNumGpio);
  assert(0 <= pin && pin < 32);

  volatile PeripheralGPIO0 *const gpio = kGpioPeripherals[gpio_num];

  if (state) {
    gpio->SETDATAOUT.raw = (uint32_t)(1 << pin);
  } else {
    gpio->CLEARDATAOUT.raw = (uint32_t)(1 << pin);
  }
}
