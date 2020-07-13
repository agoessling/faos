#ifndef CRC_H_
#define CRC_H_

#include <stdint.h>

static const uint16_t kCrc16LsbPolyCcitt = 0x8408;

uint16_t Crc16LsbUpdate(uint16_t crc, uint8_t byte, uint16_t poly);
uint16_t Crc16Lsb(const uint8_t *data, int32_t len, uint16_t poly);

#endif  // CRC_H_
