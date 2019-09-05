#ifndef I2C_H_
#define I2C_H_

typedef enum {
  kI2cForceSigned = -1,
  kI2c0,
  kNumI2c
} I2c;

void I2cInit(I2c i2c_num);

#endif  // I2C_H_
