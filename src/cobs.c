#include "cobs.h"

#include <stdbool.h>
#include <stdint.h>

static const uint8_t kCobsDelimiter = 0x00;

void CobsEncodeBlock(const uint8_t *decoded_buffer, int32_t decoded_len, uint8_t *encoded_buffer) {
  uint8_t delimiter_distance = 1;
  uint8_t *delimiter_pointer = encoded_buffer++;

  for (int32_t i = 0; i < decoded_len; ++i) {
    // If a mandatory delimiter needed.
    if (delimiter_distance == 0xFF) {
      *delimiter_pointer = delimiter_distance;
      delimiter_pointer = encoded_buffer++;
      delimiter_distance = 1;
    }

    if (*decoded_buffer == kCobsDelimiter) {
      *delimiter_pointer = delimiter_distance;
      delimiter_pointer = encoded_buffer++;
      delimiter_distance = 1;
    } else {
      *encoded_buffer++ = *decoded_buffer;
      delimiter_distance++;
    }

    decoded_buffer++;
  }

  // Set last delimiter pointer and append delimiter.
  *delimiter_pointer = delimiter_distance;
  *encoded_buffer = kCobsDelimiter;
}

CobsStatus CobsDecodeBlock(const uint8_t *encoded_buffer, int32_t encoded_len,
                           uint8_t *decoded_buffer, int32_t *decoded_len) {
  CobsState state;
  CobsStateInit(&state, decoded_buffer, COBS_MAX_DECODE_LEN(encoded_len));

  for (int32_t i = 0; i < encoded_len; ++i) {
    CobsStatus status = CobsDecodeByte(&state, *encoded_buffer++);

    if (status == kCobsStatusFrameAvailable) {
      *decoded_len = state.frame_len;
      return status;
    }

    // Report errors.
    if (status != kCobsStatusProcessing) {
      return status;
    }
  }

  return kCobsStatusIncompleteFrame;
}

static inline void CobsStateReset(CobsState *state) {
  state->write_index = 0;
  state->delimiter_count = 0;
  state->mandatory_pointer = true;
}

void CobsStateInit(CobsState *state, uint8_t *frame_buffer, int32_t max_frame_len) {
  CobsStateReset(state);

  state->frame = frame_buffer;
  state->max_frame_len = max_frame_len;
}

CobsStatus CobsDecodeByte(CobsState *state, uint8_t byte) {
  if (state->delimiter_count == 0) {
    if (byte == kCobsDelimiter) {
      state->frame_len = state->write_index;
      CobsStateReset(state);
      return kCobsStatusFrameAvailable;
    }

    if (!state->mandatory_pointer) {
      state->frame[state->write_index++] = kCobsDelimiter;
    }

    state->delimiter_count = byte;
    state->mandatory_pointer = state->delimiter_count == 0xFF;
  } else {
    if (byte == kCobsDelimiter) {
      CobsStateReset(state);
      return kCobsStatusMalformedFrame;
    }

    if (state->write_index >= state->max_frame_len) {
      CobsStateReset(state);
      return kCobsStatusOverflow;
    }

    state->frame[state->write_index++] = byte;
  }

  state->delimiter_count--;

  return kCobsStatusProcessing;
}
