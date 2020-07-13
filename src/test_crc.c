#include <stdint.h>

#include "external/unity/src/unity.h"

#include "crc.h"

static const uint8_t g_data[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
static const uint16_t g_data_crc = 0x2189;

void setUp(void) {}
void tearDown(void) {}

void TestCrc16Lsb(void) {
  uint16_t crc = Crc16Lsb(g_data, sizeof(g_data), kCrc16LsbPolyCcitt);
  TEST_ASSERT_EQUAL_HEX16(g_data_crc, crc);
}

void TestCrc16LsbUpdate(void) {
  uint16_t crc = 0;

  for (int32_t i = 0; i < sizeof(g_data); ++i) {
    crc = Crc16LsbUpdate(crc, g_data[i], kCrc16LsbPolyCcitt);
  }

  TEST_ASSERT_EQUAL_HEX16(g_data_crc, crc);

  crc = Crc16LsbUpdate(crc, g_data_crc & 0xFF, kCrc16LsbPolyCcitt);
  crc = Crc16LsbUpdate(crc, g_data_crc >> 8, kCrc16LsbPolyCcitt);

  TEST_ASSERT_EQUAL_HEX16(0x0000, crc);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(TestCrc16Lsb);
  RUN_TEST(TestCrc16LsbUpdate);
  return UNITY_END();
}
