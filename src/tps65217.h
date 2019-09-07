#ifndef TPS65217_H_
#define TPS65217_H_

#include <stdint.h>

#include "i2c.h"

typedef enum {
  kTps65217DcdcForceSigned = -1,
  kTps65217Dcdc1,
  kTps65217Dcdc2,
  kTps65217Dcdc3,
  kNumTps65217Dcdc
} Tps65217Dcdc;

typedef enum {
  kTps65217DcdcVoltageScale1v100 = 0b001000,
  kTps65217DcdcVoltageScale1v325 = 0b010001,
} Tps65217DcdcVoltageScale;

typedef enum {
  kTps65217StatusForceSigned = -1,
  kTps65217StatusSuccess,
  kTps65217StatusI2cError,
  kTps65217StatusUnknownError,
  kNumTps65217Status
} Tps65217Status;

Tps65217Status Tps65217ScaleDcdc(I2c i2c_num, Tps65217Dcdc dcdc, Tps65217DcdcVoltageScale scale);

#endif  // TPS65217_H_
