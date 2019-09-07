static const uint8_t kTps65217Address = 0x24;

static I2cStatus Tps65217WriteReg(I2c i2c_num, uint8_t reg_addr, uint8_t data) {
  assert(reg_addr <= 0x1E);
  const uint8_t bytes[] = {reg_addr, data};
  return I2cWriteBlocking(kI2c0, kTps65217Address, bytes, (int32_t)sizeof(bytes), true);
}

static I2cStatus Tps65217ReadReg(I2c i2c_num, uint8_t reg_addr, uint8_t *data) {
  assert(reg_addr <= 0x1E);

  kI2cStatus status;
  status = I2cWriteBlocking(kI2c0, kTps65217Address, &reg_addr, 1, false);
  if (status != I2cStatusSuccess) {
    return status;
  }

  status = I2cReadBlocking(kI2c0, kTps65217Address, data, 1, true);
  if (status != I2cStatusSuccess) {
    return status;
  }

  return I2cStatusSuccess;
}

void PmicScaleNitro(
