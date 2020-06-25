#ifndef MMC_H_
#define MMC_H_

#include <stdint.h>

typedef enum {
  kMmcForceSigned = -1,
  kMmc0,
  kMmc1,
  kMmc2,
  kNumMmc
} Mmc;

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
  kMmcStatusError,
  kMmcStatusBusy,
  kMmcStatusIncorrectBlockLength,
  kNumMmcStatus
} MmcStatus;

static const int32_t kMmcBlockLength = 512;

MmcStatus MmcInit(Mmc mmc_num, MmcBusWidth bus_width);
MmcStatus MmcWriteReadTest(Mmc mmc_num, uint32_t sector_address);
MmcStatus MmcReadBlock(Mmc mmc_num, uint32_t sector_address, uint8_t *dest);
MmcStatus MmcWriteBlock(Mmc mmc_num, uint32_t sector_address, uint8_t *src);
MmcStatus MmcReadMultipleBlocks(Mmc mmc_num, uint32_t sector_address, int32_t num_sectors,
                                uint8_t *dest);
MmcStatus MmcWriteMultipleBlocks(Mmc mmc_num, uint32_t sector_address, int32_t num_sectors,
                                 uint8_t *src);

#endif  // MMC_H_
