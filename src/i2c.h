#ifndef I2C_H_
#define I2C_H_

#include <stdbool.h>
#include <stdint.h>

typedef enum {
  kI2cForceSigned = -1,
  kI2c0,
  kNumI2c
} I2c;

typedef enum {
  kI2cStatusForceSigned = -1,
  kI2cStatusSuccess,
  kI2cStatusBusy,
  kI2cStatusNack,
  kNumI2cStatus
} I2cStatus;

void I2cInit(I2c i2c_num);
I2cStatus I2cWriteBlocking(I2c i2c_num, uint8_t address, const uint8_t *buf, int32_t len,
                           bool stop_bit);

#endif  // I2C_H_
