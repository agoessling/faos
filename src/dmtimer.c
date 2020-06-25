#include "dmtimer.h"

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "assert.h"
#include "clock.h"
#include "src/autogen/reg_def.h"

static volatile PeripheralDMTIMER0 *const kDmTimerPeripherals[kNumDmTimer] = {
  [kDmTimer0] = &DMTIMER0,
  [kDmTimer1] = NULL,  // DMTIMER1_1MS is not supported.
  [kDmTimer2] = &DMTIMER2,
  [kDmTimer3] = &DMTIMER3,
  [kDmTimer4] = &DMTIMER4,
  [kDmTimer5] = &DMTIMER5,
  [kDmTimer6] = &DMTIMER6,
  [kDmTimer7] = &DMTIMER7
};

static inline volatile PeripheralDMTIMER0 *DmTimerGetPeripheral(DmTimer timer_num) {
  assert(0 <= timer_num && timer_num < kNumDmTimer);
  assert(timer_num != kDmTimer1);  // DMTIMER1_1MS is not supported.
  return kDmTimerPeripherals[timer_num];
}

float DmTimerInit(DmTimer timer_num) {
  volatile PeripheralDMTIMER0 *const timer = DmTimerGetPeripheral(timer_num);

  // Enable relevant clocks.
  switch (timer_num) {
    case kDmTimer0:
      // Functional clock hard wired to 32kHz oscillator.
      CM_WKUP.TIMER0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_WKUP.TIMER0_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_WKUP.CLKSTCTRL.CLKACTIVITY_TIMER0_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer1:
      CM_DPLL.CLKSEL_TIMER1MS_CLK.CLKSEL = 0; // Use external oscillator functional clock.
      CM_WKUP.TIMER1_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_WKUP.TIMER1_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_WKUP.CLKSTCTRL.CLKACTIVITY_TIMER1_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer2:
      CM_DPLL.CLKSEL_TIMER2_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER2_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER2_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER2_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer3:
      CM_DPLL.CLKSEL_TIMER3_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER3_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER3_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER3_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer4:
      CM_DPLL.CLKSEL_TIMER4_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER4_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER4_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER4_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer5:
      CM_DPLL.CLKSEL_TIMER5_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER5_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER5_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER5_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer6:
      CM_DPLL.CLKSEL_TIMER6_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER6_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER6_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER6_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimer7:
      CM_DPLL.CLKSEL_TIMER7_CLK.CLKSEL = 1; // Use external oscillator functional clock.
      CM_PER.TIMER7_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.TIMER7_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_TIMER7_GCLK) {} // Wait for functional clock.
      break;
    case kDmTimerForceSigned:
    case kNumDmTimer:
    default:
      assert(false);
      break;
  }

  timer->TIOCP_CFG.SOFTRESET = 1;
  while (timer->TIOCP_CFG.SOFTRESET) {}

  timer->TSICR.POSTED = 1;  // Utilize posted reads and writes.  OCP / 4 > FCLK.

  RegisterDMTIMER0_TCLR tclr = {0};
  tclr.AR = 1;  // Auto reload.
  while (timer->TWPS.W_PEND_TCLR) {}
  timer->TCLR.raw = tclr.raw;

  if (timer_num == kDmTimer0) {
    return 32.768e3;  // Timer 0 is hardwired with 32kHz.
  }
  return ClockGetOsc();
}

void DmTimerStart(DmTimer timer_num) {
  volatile PeripheralDMTIMER0 *const timer = DmTimerGetPeripheral(timer_num);

  RegisterDMTIMER0_TCLR tclr = timer->TCLR;
  tclr.ST = 1;  // Start.
  while (timer->TWPS.W_PEND_TCLR) {}
  timer->TCLR.raw = tclr.raw;
}

void DmTimerStop(DmTimer timer_num) {
  volatile PeripheralDMTIMER0 *const timer = DmTimerGetPeripheral(timer_num);

  RegisterDMTIMER0_TCLR tclr = timer->TCLR;
  tclr.ST = 0;  // Stop.
  while (timer->TWPS.W_PEND_TCLR) {}
  timer->TCLR.raw = tclr.raw;
}

bool DmTimerGetOverflow(DmTimer timer_num) {
  volatile PeripheralDMTIMER0 *const timer = DmTimerGetPeripheral(timer_num);

  bool overflow = timer->IRQSTATUS_RAW.OVF_IT_FLAG;

  // Reset overflow flag.
  RegisterDMTIMER0_IRQSTATUS irqstatus = {0};
  irqstatus.OVF_IT_FLAG = overflow;
  timer->IRQSTATUS.raw = irqstatus.raw;

  return overflow;
}

uint32_t DmTimerGetCounter(DmTimer timer_num) {
  volatile PeripheralDMTIMER0 *const timer = DmTimerGetPeripheral(timer_num);
  return timer->TCRR.TIMER_COUNTER;
}
