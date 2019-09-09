#ifndef UART_H_
#define UART_H_

#include <stdbool.h>
#include <stdint.h>

typedef enum {
  kUartForceSigned = -1,
  kUart0,
  kUart1,
  kUart2,
  kUart3,
  kUart4,
  kUart5,
  kNumUart
} Uart;

float UartInit(Uart uart_num, float baud);
void UartWriteBlocking(Uart uart_num, const uint8_t *buf, int32_t len);
bool UartGetByte(Uart uart_num, uint8_t *byte);
void UartReadBlocking(Uart uart_num, uint8_t *buf, int32_t len);

#endif  // UART_H_
