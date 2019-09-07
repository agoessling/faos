#include "tps65217.h"

#include <stdint.h>

#include "assert.h"
#include "i2c.h"

typedef union {
  struct {
    uint8_t dcdc : 6;
    uint8_t reserved : 1;
    uint8_t xadj : 1;
  };
  uint8_t raw;
} Tps65217RegisterDefDcdc;

_Static_assert(sizeof(Tps65217RegisterDefDcdc) == 1, "Register size mismatch.");

typedef union {
  struct {
    uint8_t slew : 3;
    uint8_t pfm_en3 : 1;
    uint8_t pfm_en2 : 1;
    uint8_t pfm_en1 : 1;
    uint8_t godsbl : 1;
    uint8_t go : 1;
  };
  uint8_t raw;
} Tps65217RegisterDefSlew;

_Static_assert(sizeof(Tps65217RegisterDefSlew) == 1, "Register size mismatch.");

typedef enum {
  kTps65217RegAddrPassword = 0x0B,
  kTps65217RegAddrDefDcdc1 = 0x0E,
  kTps65217RegAddrDefDcdc2 = 0x0F,
  kTps65217RegAddrDefDcdc3 = 0x10,
  kTps65217RegAddrDefSlew = 0x11,
} Tps65217RegAddr;

static const uint8_t kTps65217Address = 0x24;
static const uint8_t kTps65217Password = 0x7D;

static const uint8_t kTps65217DefDcdcAddr[kNumTps65217Dcdc] = {
    [kTps65217Dcdc1] = kTps65217RegAddrDefDcdc1,
    [kTps65217Dcdc2] = kTps65217RegAddrDefDcdc2,
    [kTps65217Dcdc3] = kTps65217RegAddrDefDcdc3
};

static I2cStatus Tps65217WriteReg(I2c i2c_num, uint8_t reg_addr, uint8_t data) {
  assert(reg_addr <= 0x1E);
  const uint8_t bytes[] = {reg_addr, data};
  return I2cWriteBlocking(i2c_num, kTps65217Address, bytes, (int32_t)sizeof(bytes), true);
}

static I2cStatus Tps65217ReadReg(I2c i2c_num, uint8_t reg_addr, uint8_t *data) {
  assert(reg_addr <= 0x1E);

  I2cStatus status;
  status = I2cWriteBlocking(i2c_num, kTps65217Address, &reg_addr, 1, false);
  if (status != kI2cStatusSuccess) {
    return status;
  }

  status = I2cReadBlocking(i2c_num, kTps65217Address, data, 1, true);
  if (status != kI2cStatusSuccess) {
    return status;
  }

  return kI2cStatusSuccess;
}

static I2cStatus Tps65217WriteLevel1Reg(I2c i2c_num, uint8_t reg_addr, uint8_t data) {
  I2cStatus status;
  status = Tps65217WriteReg(i2c_num, kTps65217RegAddrPassword, reg_addr ^ kTps65217Password);
  if (status != kI2cStatusSuccess) {
    return status;
  }

  status = Tps65217WriteReg(i2c_num, reg_addr, data);
  if (status != kI2cStatusSuccess) {
    return status;
  }

  return kI2cStatusSuccess;
}

static I2cStatus Tps65217WriteLevel2Reg(I2c i2c_num, uint8_t reg_addr, uint8_t data) {
  I2cStatus status;
  for (int32_t i = 0; i < 2; ++i) {
    status = Tps65217WriteLevel1Reg(i2c_num, reg_addr, data);
    if (status != kI2cStatusSuccess) {
      return status;
    }
  }
  return kI2cStatusSuccess;
}

Tps65217Status Tps65217ScaleDcdc(I2c i2c_num, Tps65217Dcdc dcdc, Tps65217DcdcVoltageScale scale) {
  assert(0 <= dcdc && dcdc < kNumTps65217Dcdc);

  Tps65217RegisterDefDcdc dcdc_reg = {0};
  dcdc_reg.dcdc = scale;

  I2cStatus status;
  status = Tps65217WriteLevel2Reg(i2c_num, kTps65217DefDcdcAddr[dcdc], dcdc_reg.raw);
  if (status != kI2cStatusSuccess) {
    return kTps65217StatusI2cError;
  }

  uint8_t byte;
  status = Tps65217ReadReg(i2c_num, kTps65217DefDcdcAddr[dcdc], &byte);
  if (status != kI2cStatusSuccess) {
    return kTps65217StatusI2cError;
  }

  if (byte != dcdc_reg.raw) {
    return kTps65217StatusUnknownError;
  }

  Tps65217RegisterDefSlew slew_reg;
  status = Tps65217ReadReg(i2c_num, kTps65217RegAddrDefSlew, &slew_reg.raw);
  if (status != kI2cStatusSuccess) {
    return kTps65217StatusI2cError;
  }
  slew_reg.go = 1;

  status = Tps65217WriteLevel2Reg(i2c_num, kTps65217RegAddrDefSlew, slew_reg.raw);
  if (status != kI2cStatusSuccess) {
    return kTps65217StatusI2cError;
  }

  while (1) {
    status = Tps65217ReadReg(i2c_num, kTps65217RegAddrDefSlew, &slew_reg.raw);
    if (status != kI2cStatusSuccess) {
      return kTps65217StatusI2cError;
    }
    // Wait for voltage transition.
    if (!slew_reg.go) {
      break;
    }
  }

  return kTps65217StatusSuccess;
}
