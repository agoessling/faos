#include <stdint.h>

#include "external/unity/src/unity.h"

#include "cobs.h"
#include "macros.h"

typedef struct {
  const uint8_t *data;
  const int32_t len;
} Array;

typedef struct {
  Array input;
  Array output;
  const char *message;
} TestVector;

// Test vectors.
static uint8_t g_input_0[] = {};
static uint8_t g_output_0[] = {0x01, 0x00};

static uint8_t g_input_1[] = {0x00};
static uint8_t g_output_1[] = {0x01, 0x01, 0x00};

static uint8_t g_input_2[] = {0x00, 0x00};
static uint8_t g_output_2[] = {0x01, 0x01, 0x01, 0x00};

static uint8_t g_input_3[] = {0x11, 0x22, 0x00, 0x33};
static uint8_t g_output_3[] = {0x03, 0x11, 0x22, 0x02, 0x33, 0x00};

static uint8_t g_input_4[] = {0x11, 0x22, 0x33, 0x44};
static uint8_t g_output_4[] = {0x05, 0x11, 0x22, 0x33, 0x44, 0x00};

static uint8_t g_input_5[254];
static uint8_t g_output_5[256];

static uint8_t g_input_6[255];
static uint8_t g_output_6[257];

static uint8_t g_input_7[255];
static uint8_t g_output_7[258];

static uint8_t g_input_8[255];
static uint8_t g_output_8[258];

static uint8_t g_input_9[255];
static uint8_t g_output_9[257];

static TestVector g_test_vectors[] = {
  {
    .input = {g_input_0, sizeof(g_input_0)},
    .output = {g_output_0, sizeof(g_output_0)},
    .message = "Vector 0"
  },
  {
    .input = {g_input_1, sizeof(g_input_1)},
    .output = {g_output_1, sizeof(g_output_1)},
    .message = "Vector 1"
  },
  {
    .input = {g_input_2, sizeof(g_input_2)},
    .output = {g_output_2, sizeof(g_output_2)},
    .message = "Vector 2"
  },
  {
    .input = {g_input_3, sizeof(g_input_3)},
    .output = {g_output_3, sizeof(g_output_3)},
    .message = "Vector 3"
  },
  {
    .input = {g_input_4, sizeof(g_input_4)},
    .output = {g_output_4, sizeof(g_output_4)},
    .message = "Vector 4"
  },
  {
    .input = {g_input_5, sizeof(g_input_5)},
    .output = {g_output_5, sizeof(g_output_5)},
    .message = "Vector 5"
  },
  {
    .input = {g_input_6, sizeof(g_input_6)},
    .output = {g_output_6, sizeof(g_output_6)},
    .message = "Vector 6"
  },
  {
    .input = {g_input_7, sizeof(g_input_7)},
    .output = {g_output_7, sizeof(g_output_7)},
    .message = "Vector 7"
  },
  {
    .input = {g_input_8, sizeof(g_input_8)},
    .output = {g_output_8, sizeof(g_output_8)},
    .message = "Vector 8"
  },
  {
    .input = {g_input_9, sizeof(g_input_9)},
    .output = {g_output_9, sizeof(g_output_9)},
    .message = "Vector 9"
  }
};

void setUp(void) {
  for (int32_t i = 0; i < sizeof(g_input_5); ++i) {
    g_input_5[i] = i + 1;
    g_output_5[i + 1] = i + 1;
  }
  g_output_5[0] = 0xFF;
  g_output_5[255] = 0x00;

  for (int32_t i = 0; i < sizeof(g_input_6); ++i) {
    g_input_6[i] = i;
    g_output_6[i + 1] = i;
  }
  g_output_6[0] = 0x01;
  g_output_6[1] = 0xFF;
  g_output_6[256] = 0x00;

  for (int32_t i = 0; i < sizeof(g_input_7); ++i) {
    g_input_7[i] = i + 1;
    g_output_7[i + 1] = i + 1;
  }
  g_output_7[0] = 0xFF;
  g_output_7[255] = 0x02;
  g_output_7[256] = 0xFF;
  g_output_7[257] = 0x00;

  for (int32_t i = 0; i < sizeof(g_input_8); ++i) {
    g_input_8[i] = i + 2;
    g_output_8[i + 1] = i + 2;
  }
  g_output_8[0] = 0xFF;
  g_output_8[255] = 0x01;
  g_output_8[256] = 0x01;
  g_output_8[257] = 0x00;

  for (int32_t i = 0; i < sizeof(g_input_9); ++i) {
    g_input_9[i] = i + 3;
    g_output_9[i + 1] = i + 3;
  }
  g_output_9[0] = 0xFE;
  g_output_9[254] = 0x02;
  g_output_9[255] = 0x01;
  g_output_9[256] = 0x00;
}

void tearDown(void) {}

void TestCobsDecodeByte(void) {
  {
    CobsState state;
    const int32_t len = 3;
    uint8_t actual[len];
    CobsStateInit(&state, actual, len);

    CobsStatus status;
    for (int32_t i = 0; i < len + 1; ++i) {
      status = CobsDecodeByte(&state, 0xFF);
      TEST_ASSERT_EQUAL_INT(kCobsStatusProcessing, status);
    }
    status = CobsDecodeByte(&state, 0xFF);
    TEST_ASSERT_EQUAL_INT(kCobsStatusOverflow, status);
  }
  {
    CobsState state;
    const int32_t len = 3;
    uint8_t actual[len];
    CobsStateInit(&state, actual, len);

    {
      uint8_t encoded_buffer[] = {0xAA, 0xFF, 0xFF, 0xFF, 0x00};

      CobsStatus status;
      for (int32_t i = 0; i < sizeof(encoded_buffer) - 1; ++i) {
        status = CobsDecodeByte(&state, encoded_buffer[i]);
        TEST_ASSERT_EQUAL_INT(kCobsStatusProcessing, status);
      }
      status = CobsDecodeByte(&state, encoded_buffer[sizeof(encoded_buffer) - 1]);
      TEST_ASSERT_EQUAL_INT(kCobsStatusMalformedFrame, status);
    }
    {
      uint8_t encoded_buffer[] = {0x04, 0xFF, 0xFF, 0xFF, 0x00};
      uint8_t decoded_buffer[] = {0xFF, 0xFF, 0xFF};

      CobsStatus status;
      for (int32_t i = 0; i < sizeof(encoded_buffer) - 1; ++i) {
        status = CobsDecodeByte(&state, encoded_buffer[i]);
        TEST_ASSERT_EQUAL_INT(kCobsStatusProcessing, status);
      }
      status = CobsDecodeByte(&state, encoded_buffer[sizeof(encoded_buffer) - 1]);
      TEST_ASSERT_EQUAL_INT(kCobsStatusFrameAvailable, status);
      TEST_ASSERT_EQUAL_INT32(state.frame_len, sizeof(decoded_buffer));
      TEST_ASSERT_EQUAL_HEX8_ARRAY(decoded_buffer, state.frame, sizeof(decoded_buffer));
    }
    {
      uint8_t encoded_buffer[] = {0x03, 0xAA, 0xAA, 0x00};
      uint8_t decoded_buffer[] = {0xAA, 0xAA};

      CobsStatus status;
      for (int32_t i = 0; i < sizeof(encoded_buffer) - 1; ++i) {
        status = CobsDecodeByte(&state, encoded_buffer[i]);
        TEST_ASSERT_EQUAL_INT(kCobsStatusProcessing, status);
      }
      status = CobsDecodeByte(&state, encoded_buffer[sizeof(encoded_buffer) - 1]);
      TEST_ASSERT_EQUAL_INT(kCobsStatusFrameAvailable, status);
      TEST_ASSERT_EQUAL_INT32(state.frame_len, sizeof(decoded_buffer));
      TEST_ASSERT_EQUAL_HEX8_ARRAY(decoded_buffer, state.frame, sizeof(decoded_buffer));
    }
  }
}

void TestCobsDecodeBlock(void) {
  {
    uint8_t input[] = {};
    uint8_t output[] = {0x00};
    uint8_t actual[sizeof(input)];
    int32_t len;
    CobsStatus status = CobsDecodeBlock(output, sizeof(output), actual, &len);
    TEST_ASSERT_EQUAL_INT32(sizeof(input), len);
    TEST_ASSERT_EQUAL_INT(kCobsStatusFrameAvailable, status);
  }
  {
    uint8_t input[] = {0x00};
    uint8_t output[] = {0x03, 0x01, 0x00};
    uint8_t actual[sizeof(input)];
    int32_t len;
    CobsStatus status = CobsDecodeBlock(output, sizeof(output), actual, &len);
    TEST_ASSERT_EQUAL_INT(kCobsStatusMalformedFrame, status);
  }
  {
    uint8_t input[] = {0x00};
    uint8_t output[] = {0x01, 0x01};
    uint8_t actual[sizeof(input)];
    int32_t len;
    CobsStatus status = CobsDecodeBlock(output, sizeof(output), actual, &len);
    TEST_ASSERT_EQUAL_INT(kCobsStatusIncompleteFrame, status);
  }

  for (int32_t i = 0; i < ARRAY_SIZE(g_test_vectors); ++i) {
    Array input = g_test_vectors[i].input;
    Array output = g_test_vectors[i].output;
    const char *message = g_test_vectors[i].message;

    uint8_t actual[input.len + 1];
    actual[input.len] = 0xAA;
    int32_t len;

    CobsStatus status = CobsDecodeBlock(output.data, output.len, actual, &len);

    TEST_ASSERT_EQUAL_INT_MESSAGE(kCobsStatusFrameAvailable, status, message);
    TEST_ASSERT_EQUAL_HEX8_MESSAGE(0xAA, actual[input.len], message);
    TEST_ASSERT_EQUAL_INT32_MESSAGE(input.len, len, message);
    if (input.len) {
      TEST_ASSERT_EQUAL_HEX8_ARRAY_MESSAGE(input.data, actual, input.len, message);
    }
  }
}

void TestCobsEncodeBlock(void) {
  for (int32_t i = 0; i < ARRAY_SIZE(g_test_vectors); ++i) {
    Array input = g_test_vectors[i].input;
    Array output = g_test_vectors[i].output;
    const char *message = g_test_vectors[i].message;

    uint8_t actual[output.len + 1];
    actual[output.len] = 0xAA;

    CobsEncodeBlock(input.data, input.len, actual);

    TEST_ASSERT_EQUAL_HEX8_MESSAGE(0xAA, actual[output.len], message);
    TEST_ASSERT_EQUAL_HEX8_ARRAY_MESSAGE(output.data, actual, output.len, message);
  }
}

void TestCobsMaxEncodeLen(void) {
  TEST_ASSERT_EQUAL_INT32(2, COBS_MAX_ENCODE_LEN(-1));
  TEST_ASSERT_EQUAL_INT32(2, COBS_MAX_ENCODE_LEN(0));
  TEST_ASSERT_EQUAL_INT32(3, COBS_MAX_ENCODE_LEN(1));
  TEST_ASSERT_EQUAL_INT32(256, COBS_MAX_ENCODE_LEN(254));
  TEST_ASSERT_EQUAL_INT32(258, COBS_MAX_ENCODE_LEN(255));
  TEST_ASSERT_EQUAL_INT32(511, COBS_MAX_ENCODE_LEN(508));
  TEST_ASSERT_EQUAL_INT32(513, COBS_MAX_ENCODE_LEN(509));
}

void TestCobsMaxDecodeLen(void) {
  TEST_ASSERT_EQUAL_INT32(0, COBS_MAX_DECODE_LEN(-1));
  TEST_ASSERT_EQUAL_INT32(0, COBS_MAX_DECODE_LEN(0));
  TEST_ASSERT_EQUAL_INT32(0, COBS_MAX_DECODE_LEN(1));
  TEST_ASSERT_EQUAL_INT32(0, COBS_MAX_DECODE_LEN(2));
  TEST_ASSERT_EQUAL_INT32(1, COBS_MAX_DECODE_LEN(3));
  TEST_ASSERT_EQUAL_INT32(1000, COBS_MAX_DECODE_LEN(1002));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(TestCobsMaxEncodeLen);
  RUN_TEST(TestCobsMaxDecodeLen);
  RUN_TEST(TestCobsEncodeBlock);
  RUN_TEST(TestCobsDecodeBlock);
  RUN_TEST(TestCobsDecodeByte);
  return UNITY_END();
}
