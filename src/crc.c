#include "crc.h"

#include <stdint.h>

// Least Significant Bit (LSB) first bit ordering.
static inline uint16_t Crc16LsbPropagate(uint16_t crc, uint16_t poly) {
  for (int32_t i = 0; i < 8; ++i) {
    if (crc & 0x0001) {
      crc = (crc >> 1) ^ poly;
    } else {
      crc = (crc >> 1);
    }
  }
  return crc;
}

uint16_t Crc16LsbUpdate(uint16_t crc, uint8_t byte, uint16_t poly) {
  return Crc16LsbPropagate(crc ^ byte, poly);
}

uint16_t Crc16Lsb(const uint8_t *data, int32_t len, uint16_t poly) {
  uint16_t crc = 0;
  for (int32_t i = 0; i < len; ++i) {
    crc = Crc16LsbPropagate(crc ^ data[i], poly);
  }
  return crc;
}
