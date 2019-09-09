#include "uart.h"

#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "autogen/reg_def.h"
#include "clock.h"

static volatile PeripheralUART0 *const kUartPeripherals[kNumUart] = {
  [kUart0] = &UART0,
  [kUart1] = &UART1,
  [kUart2] = &UART2,
  [kUart3] = &UART3,
  [kUart4] = &UART4,
  [kUart5] = &UART5
};

float UartInit(Uart uart_num, float baud) {
  assert(0 <= uart_num && uart_num < kNumUart);
  assert(300.0f <= baud && baud <= 3.6864e6f);

  // Enable relevant clocks.
  switch (uart_num) {
    case kUart0:
      CM_WKUP.UART0_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_WKUP.UART0_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_WKUP.CLKSTCTRL.CLKACTIVITY_UART0_GFCLK) {} // Wait for functional clock.
      break;
    case kUart1:
      CM_PER.UART1_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.UART1_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_UART_GFCLK) {} // Wait for functional clock.
      break;
    case kUart2:
      CM_PER.UART2_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.UART2_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_UART_GFCLK) {} // Wait for functional clock.
      break;
    case kUart3:
      CM_PER.UART3_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.UART3_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_UART_GFCLK) {} // Wait for functional clock.
      break;
    case kUart4:
      CM_PER.UART4_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.UART4_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_UART_GFCLK) {} // Wait for functional clock.
      break;
    case kUart5:
      CM_PER.UART5_CLKCTRL.MODULEMODE = 2;  // Turn on module.
      while (CM_PER.UART5_CLKCTRL.IDLEST) {}  // Wait for OCP clock.
      while (!CM_PER.L4LS_CLKSTCTRL.CLKACTIVITY_UART_GFCLK) {} // Wait for functional clock.
      break;
    case kUartForceSigned:
    case kNumUart:
    default:
      assert(false);
      break;
  }

  volatile PeripheralUART0 *const uart = kUartPeripherals[uart_num];
  uart->SYSC.SOFTRESET = 1;
  while (!uart->SYSS.RESETDONE) {}

  // Enable FIFO.
  uart->LCR.raw = 0xBF;  // Configuration mode B for access to EFR.
  uart->EFR.ENHANCEDEN = 1;  // Enable access to FCR.
  uart->LCR.raw = 0x80;  // Configuration mode A for access (write only) to FCR.
  RegisterUART0_FCR fcr = {0};  // FCR is not readable so can't read-modify-write.
  fcr.FIFO_EN = 1;  // Enable FIFO.
  uart->FCR.raw = fcr.raw;

  // Baud setup.
  float fixed_div;
  bool div_16;
  if (baud >= 460.8e3f) {
    fixed_div = 13.0f;
    div_16 = false;
  } else {
    fixed_div = 16.0f;
    div_16 = true;
  }

  int32_t div = (int32_t)(ClockGet192Mhz() / (4.0f * fixed_div * baud) + 0.5f);   // Round.
  if (div < 1) {
    div = 1;
  } else if (div > (1 << 14) - 1) {  // 14 bits.
    div = (1 << 14) - 1;
  }

  // Still in Configuration mode B for access to DLL and DLH.
  uart->DLL.CLOCK_LSB = 0xFF & (uint32_t)div;
  uart->DLH.CLOCK_MSB = (uint32_t)(div >> 8);

  uart->LCR.raw = 0x00;  // Configuration mode operational.
  uart->LCR.CHAR_LENGTH = 3;  // 8 bits.

  uart->MDR1.MODESELECT = div_16 ? 0 : 3;  // x16 or x13 mode.

  return ClockGet192Mhz() / (4.0f * fixed_div * (float)div);
}

void UartWriteBlocking(Uart uart_num, const uint8_t *buf, int32_t len) {
  assert(0 <= uart_num && uart_num < kNumUart);
  volatile PeripheralUART0 *const uart = kUartPeripherals[uart_num];

  for (int32_t i = 0; i < len; ++i) {
    while (uart->SSR.TXFIFOFULL) {}
    uart->THR.raw = (uint16_t)buf[i];
  }
}

bool UartGetByte(Uart uart_num, uint8_t *byte) {
  assert(0 <= uart_num && uart_num < kNumUart);
  volatile PeripheralUART0 *const uart = kUartPeripherals[uart_num];

  if (uart->LSR_UART.RXFIFOE) {
    *byte = (uint8_t)uart->RHR.raw;
    return true;
  }
  return false;
}

void UartReadBlocking(Uart uart_num, uint8_t *buf, int32_t len) {
  for (int32_t i = 0; i < len; ++i) {
    uint8_t byte;
    while (!UartGetByte(uart_num, &byte)) {}
    buf[i] = byte;
  }
}
