#ifndef COBS_H_
#define COBS_H_

#include <stdbool.h>
#include <stdint.h>

#define COBS_MAX_ENCODE_LEN(decode_len) \
  ((decode_len) > 0 ? (decode_len) + ((decode_len) + 253) / 254 + 1 : 2)

#define COBS_MAX_DECODE_LEN(encode_len) ((encode_len) > 1 ? (encode_len) - 2 : 0)

typedef enum {
  kCobsStatusForceSigned = -1,
  kCobsStatusProcessing,
  kCobsStatusFrameAvailable,
  kCobsStatusMalformedFrame,
  kCobsStatusOverflow,
  kCobsStatusIncompleteFrame,
  kNumCobsStatus
} CobsStatus;

typedef struct {
  // Public.
  uint8_t *frame;
  int32_t frame_len;

  // Private.
  int32_t max_frame_len;
  int32_t write_index;
  int32_t delimiter_count;
  bool mandatory_pointer;
} CobsState;

void CobsEncodeBlock(const uint8_t *decoded_buffer, int32_t decoded_len, uint8_t *encoded_buffer);
void CobsStateInit(CobsState *state, uint8_t *frame_buffer, int32_t max_frame_len);
CobsStatus CobsDecodeByte(CobsState *state, uint8_t byte);
CobsStatus CobsDecodeBlock(const uint8_t *encoded_buffer, int32_t encoded_len,
                           uint8_t *decoded_buffer, int32_t *decoded_len);

#endif  // COBS_H_
