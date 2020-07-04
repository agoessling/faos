#ifndef MMC_H_
#define MMC_H_

#include <stdint.h>

#include "assert.h"
#include "src/autogen/reg_def.h"

typedef enum {
  kMmcForceSigned = -1,
  kMmc0,
  kMmc1,
  kMmc2,
  kNumMmc
} Mmc;

typedef enum {
  kMmcTypeForceSigned = -1,
  kMmcTypeEmmc,
  kMmcTypeSd,
  kNumMmcType
} MmcType;

typedef enum {
  kMmcBusWidthForceSigned = -1,
  kMmcBusWidth1,
  kMmcBusWidth4,
  kMmcBusWidth8,
  kNumMmcBusWidth
} MmcBusWidth;

typedef enum {
  kMmcStatusForceSigned = -1,
  kMmcStatusSuccess,
  kMmcStatusBusy,
  kMmcStatusUnknownCard,
  kMmcStatusInitTimeout,
  kMmcStatusCommandTimeout,
  kMmcStatusCommandCrcError,
  kMmcStatusCommandIndexError,
  kMmcStatusDataTimeout,
  kMmcStatusDataCrcError,
  kMmcStatusIncorrectBlockLength,
  kMmcStatusError,
  kNumMmcStatus
} MmcStatus;

// Private. Do not reference or alter internals.
typedef struct {
  volatile PeripheralMMCHS2 *mmc;
  uint32_t sector_count;
  uint16_t relative_address;
  MmcType type;
  uint8_t initialized;
} MmcContext;

static const int32_t kMmcBlockLength = 512;
static const uint8_t kMmcInitializedValue = 0xAA;

static inline uint32_t MmcGetSectorCount(MmcContext *context) {
  assert(context->initialized == kMmcInitializedValue);
  return context->sector_count;
}

MmcStatus MmcInit(MmcContext *context, Mmc mmc_num, MmcBusWidth bus_width);
MmcStatus MmcWriteReadTest(MmcContext *context, uint32_t sector_address);
MmcStatus MmcReadBlock(MmcContext *context, uint32_t sector_address, uint8_t *data);
MmcStatus MmcWriteBlock(MmcContext *context, uint32_t sector_address, uint8_t *data);
MmcStatus MmcReadMultipleBlocks(MmcContext *context, uint32_t sector_address, int32_t num_sectors,
                                uint8_t *data);
MmcStatus MmcWriteMultipleBlocks(MmcContext *context, uint32_t sector_address, int32_t num_sectors,
                                 uint8_t *data);

#endif  // MMC_H_
