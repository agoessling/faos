#ifndef MMC_SPEC_H_
#define MMC_SPEC_H_

#include <stdbool.h>
#include <stdint.h>

#include "src/autogen/reg_def.h"

typedef struct {
  RegisterMMCHS2_SD_CMD sd_cmd;
  bool check_device_status;
} MmcCommandInfo;

static const MmcCommandInfo kMmcCommandListing[57] = {
  [0] = {.sd_cmd = {.INDX = 0, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 0, .DDIR = 0, .BCE = 0},
         .check_device_status = false},
  [1] = {.sd_cmd = {.INDX = 1, .DP = 0, .CICE = 0, .CCCE = 0, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
         .check_device_status = false},
  [2] = {.sd_cmd = {.INDX = 2, .DP = 0, .CICE = 0, .CCCE = 1, .RSP_TYPE = 1, .DDIR = 0, .BCE = 0},
         .check_device_status = false},
  [3] = {.sd_cmd = {.INDX = 3, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
         .check_device_status = true},
  [6] = {.sd_cmd = {.INDX = 6, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 3, .DDIR = 0, .BCE = 0},
         .check_device_status = true},
  [7] = {.sd_cmd = {.INDX = 7, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
         .check_device_status = true},
  [8] = {.sd_cmd = {.INDX = 8, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 1, .BCE = 0},
         .check_device_status = true},
  [9] = {.sd_cmd = {.INDX = 9, .DP = 0, .CICE = 0, .CCCE = 1, .RSP_TYPE = 1, .DDIR = 0, .BCE = 0},
         .check_device_status = false},
  [13] = {.sd_cmd = {.INDX = 13, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
          .check_device_status = true},
  [14] = {.sd_cmd = {.INDX = 14, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 1, .BCE = 0},
          .check_device_status = true},
  [17] = {.sd_cmd = {.INDX = 17, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 1, .BCE = 0},
          .check_device_status = true},
  [18] = {.sd_cmd = {.INDX = 18, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 1, .BCE = 1,
                     .MSBS = 1, .ACEN = 1},
          .check_device_status = true},
  [19] = {.sd_cmd = {.INDX = 19, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
          .check_device_status = true},
  [23] = {.sd_cmd = {.INDX = 23, .DP = 0, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
          .check_device_status = true},
  [24] = {.sd_cmd = {.INDX = 24, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 0},
          .check_device_status = true},
  [25] = {.sd_cmd = {.INDX = 25, .DP = 1, .CICE = 1, .CCCE = 1, .RSP_TYPE = 2, .DDIR = 0, .BCE = 1,
                     .MSBS = 1, .ACEN = 1},
          .check_device_status = true},
};

typedef union {
  struct {
    uint32_t num_blocks : 16;
    uint32_t reserved0 : 8;
    uint32_t forced_programming : 1;
    uint32_t context_id : 4;
    uint32_t tag_request : 1;
    uint32_t packed : 1;
    uint32_t reliable_write : 1;
  };
  uint32_t raw;
} MmcArgumentCmd23;

_Static_assert(sizeof(MmcArgumentCmd23) == 4, "Register size mismatch.");

typedef union {
  struct {
    uint32_t cmd_set : 3;
    uint32_t reserved0 : 5;
    uint32_t value : 8;
    uint32_t index : 8;
    uint32_t access : 2;
    uint32_t reserved1 : 6;
  };
  uint32_t raw;
} MmcArgumentCmd6;

_Static_assert(sizeof(MmcArgumentCmd6) == 4, "Register size mismatch.");

typedef union {
  struct {
    uint32_t reserved0 : 7;
    uint32_t voltage_1v7to1v95 : 1;
    uint32_t voltage_2v0to2v1 : 1;
    uint32_t voltage_2v1to2v2 : 1;
    uint32_t voltage_2v2to2v3 : 1;
    uint32_t voltage_2v3to2v4 : 1;
    uint32_t voltage_2v4to2v5 : 1;
    uint32_t voltage_2v5to2v6 : 1;
    uint32_t voltage_2v6to2v7 : 1;
    uint32_t voltage_2v7to2v8 : 1;
    uint32_t voltage_2v8to2v9 : 1;
    uint32_t voltage_2v9to3v0 : 1;
    uint32_t voltage_3v0to3v1 : 1;
    uint32_t voltage_3v1to3v2 : 1;
    uint32_t voltage_3v2to3v3 : 1;
    uint32_t voltage_3v3to3v4 : 1;
    uint32_t voltage_3v4to3v5 : 1;
    uint32_t voltage_3v5to3v6 : 1;
    uint32_t reserved1 : 5;
    uint32_t access_mode : 2;
    uint32_t busy : 1;
  };
  uint32_t raw;
} MmcOcr;

_Static_assert(sizeof(MmcOcr) == 4, "Register size mismatch.");

typedef union {
  struct {
    uint32_t reserved0 : 5;
    uint32_t app_cmd : 1;
    uint32_t exception_event : 1;
    uint32_t switch_error : 1;
    uint32_t ready_for_data : 1;
    uint32_t current_state : 4;
    uint32_t erase_reset : 1;
    uint32_t reserved1 : 1;
    uint32_t wp_erase_skip : 1;
    uint32_t cid_csd_overwrite : 1;
    uint32_t reserved2 : 2;
    uint32_t error : 1;
    uint32_t cc_error : 1;
    uint32_t device_ecc_failed : 1;
    uint32_t illegal_command : 1;
    uint32_t com_crc_error : 1;
    uint32_t lock_unlock_failed : 1;
    uint32_t device_is_locked : 1;
    uint32_t wp_violation : 1;
    uint32_t erase_param : 1;
    uint32_t erase_seq_error : 1;
    uint32_t block_len_error : 1;
    uint32_t address_misalign : 1;
    uint32_t address_out_of_range : 1;
  };
  uint32_t raw;
} MmcDeviceStatus;

_Static_assert(sizeof(MmcDeviceStatus) == 4, "Register size mismatch.");

static const MmcDeviceStatus kMmcDeviceStatusErrorBits = {
  .switch_error = 1,
  .erase_reset = 1,
  .wp_erase_skip = 1,
  .cid_csd_overwrite = 1,
  .error = 1,
  .cc_error = 1,
  .device_ecc_failed = 1,
  .illegal_command = 1,
  .com_crc_error = 1,
  .lock_unlock_failed = 1,
  .wp_violation = 1,
  .erase_param = 1,
  .erase_seq_error = 1,
  .block_len_error = 1,
  .address_misalign = 1,
  .address_out_of_range = 1,
};

typedef union {
  MmcOcr ocr;
  MmcDeviceStatus device_status;
  uint32_t raw;
} MmcResponseR1R3;

_Static_assert(sizeof(MmcResponseR1R3) == 4, "Register size mismatch.");

typedef union {
  // This struct requires __packed__ because of the unaligned nature of the fields.
  struct __attribute__((__packed__)) {
    struct {
      uint8_t reserved0 : 1;
      uint8_t crc : 7;
    };
    uint8_t mdt;  // Manufacturing date.
    uint32_t psn; // Product serial number.
    uint8_t prv;  // Product revision.
    uint8_t pnm[6]; // Product Name.
    uint8_t oid;  // OEM / Application ID.
    struct {
      uint8_t cbx : 2;  // Device / BGA.
      uint8_t reserved1 : 6;
    };
    uint8_t mid;  // Manufacturer ID.
  };
  uint32_t words[4];
} MmcCid;

_Static_assert(sizeof(MmcCid) == 16, "Register size mismatch.");

typedef union {
  uint32_t words[4];
} MmcCsr;

_Static_assert(sizeof(MmcCsr) == 16, "Register size mismatch.");

typedef union {
  // This struct requires __packed__ because of the unaligned nature of the fields.
  struct __attribute__((__packed__)) {
    struct {
      uint32_t reserved0 : 1;
      uint32_t crc : 7;
      uint32_t ecc : 2;
      uint32_t file_format : 2;
      uint32_t tmp_write_protect : 1;
      uint32_t perm_write_protect  : 1;
      uint32_t copy  : 1;
      uint32_t file_format_grp : 1;
      uint32_t content_prot_app  : 1;
      uint32_t reserved1 : 4;
      uint32_t write_bl_partial  : 1;
      uint32_t write_bl_len : 4;
      uint32_t r2w_factor  : 3;
      uint32_t default_ecc : 2;
      uint32_t wp_grp_enable : 1;
    };
    struct {
      uint64_t wp_grp_size : 5;
      uint64_t erase_grp_mult : 5;
      uint64_t erase_grp_size : 5;
      uint64_t c_size_mult : 3;
      uint64_t vdd_w_curr_max : 3;
      uint64_t vdd_w_curr_min : 3;
      uint64_t vdd_r_curr_max : 3;
      uint64_t vdd_r_curr_min : 3;
      uint64_t c_size : 12;
      uint64_t reserved2 : 2;
      uint64_t dsr_imp : 1;
      uint64_t read_blk_misalign : 1;
      uint64_t write_blk_misalign : 1;
      uint64_t read_bl_partial : 1;
      uint64_t read_bl_len : 4;
      uint64_t ccc : 12;
    };
    uint8_t tran_speed;
    uint8_t nsac;
    uint8_t taac;
    struct {
      uint8_t reserved3 : 2;
      uint8_t spec_vers : 4;
      uint8_t csd_structure : 2;
    };
  };
  uint32_t words[4];
} MmcCsd;

_Static_assert(sizeof(MmcCsd) == 16, "Register size mismatch.");

typedef union {
  MmcCid cid;
  MmcCsr csr;
  MmcCsd csd;
  uint32_t words[4];
} MmcResponseR2;

_Static_assert(sizeof(MmcResponseR2) == 16, "Register size mismatch.");

typedef union {
  struct {
    uint8_t timing_interface : 4;
    uint8_t selected_driver_strength : 4;
  };
  uint8_t raw;
} MmcExtCsdHsTiming;

_Static_assert(sizeof(MmcExtCsdHsTiming) == 1, "Register size mismatch.");

typedef union {
  struct {
    uint8_t bus_mode_selection : 4;
    uint8_t reserved0 : 3;
    uint8_t enhanced_strobe : 1;
  };
  uint8_t raw;
} MmcExtCsdBusWidth;

_Static_assert(sizeof(MmcExtCsdBusWidth) == 1, "Register size mismatch.");

typedef union {
  // This struct requires __packed__ because of the unaligned nature of the fields.
  struct __attribute__((__packed__)) {
    uint8_t reserved0[15];
    uint8_t cmdq_mode_en;
    uint8_t secure_removal_type;
    uint8_t product_state_awareness_enablement;
    uint32_t max_pre_loading_data_size;
    uint32_t pre_loading_data_size;
    uint8_t ffu_status;
    uint8_t reserved1[2];
    uint8_t mode_operation_codes;
    uint8_t mode_config;
    uint8_t barrier_ctrl;
    uint8_t flush_cache;
    uint8_t cache_ctrl;
    uint8_t power_off_notification;
    uint8_t packed_failure_index;
    uint8_t packed_command_status;
    uint8_t context_conf[15];
    uint8_t ext_partitions_attribute[2];
    uint8_t exception_events_status[2];
    uint8_t exception_events_ctrl[2];
    uint8_t dyncap_needed;
    uint8_t class_6_ctrl;
    uint8_t ini_timeout_emu;
    uint8_t data_sector_size;
    uint8_t use_native_sector;
    uint8_t native_sector_size;
    uint8_t vendor_specific_field[64];
    uint8_t reserved2[2];
    uint8_t program_cid_csd_ddr_support;
    uint8_t periodic_wakeup;
    uint8_t tcase_support;
    uint8_t production_state_awareness;
    uint8_t sec_bad_blk_mgmnt;
    uint8_t reserved3;
    uint32_t enh_start_addr;
    uint8_t enh_size_mult[3];
    uint8_t gp_size_mult[12];
    uint8_t partition_setting_completed;
    uint8_t partitions_attribute;
    uint8_t max_enh_size_mult[3];
    uint8_t partitioning_support;
    uint8_t hpi_mgmt;
    uint8_t rst_n_functjon;
    uint8_t bkops_en;
    uint8_t bkops_start;
    uint8_t sanitize_start;
    uint8_t wr_rel_param;
    uint8_t wr_rel_set;
    uint8_t rpmb_size_mult;
    uint8_t fw_config;
    uint8_t reserved4;
    uint8_t user_wp;
    uint8_t reserved5;
    uint8_t boot_wp;
    uint8_t boot_wp_status;
    uint8_t erase_group_def;
    uint8_t reserved6;
    uint8_t boot_bus_conditions;
    uint8_t boot_config_prot;
    uint8_t partition_config;
    uint8_t reserved7;
    uint8_t erased_mem_cont;
    uint8_t reserved8;
    MmcExtCsdBusWidth bus_width;
    uint8_t strobe_support;
    MmcExtCsdHsTiming hs_timing;
    uint8_t reserved9;
    uint8_t power_class;
    uint8_t reserved10;
    uint8_t cmd_set_rev;
    uint8_t reserved11;
    uint8_t cmd_set;
    uint8_t ext_csd_rev;
    uint8_t reserved12;
    uint8_t csd_structure;
    uint8_t reserved13;
    uint8_t device_type;
    uint8_t driver_strength;
    uint8_t out_of_interrupt_time;
    uint8_t partition_switch_time;
    uint8_t pwr_cl_52_195;
    uint8_t pwr_cl_26_195;
    uint8_t pwr_cl_52_360;
    uint8_t pwr_cl_26_360;
    uint8_t reserved14;
    uint8_t min_perf_r_4_26;
    uint8_t min_perf_w_4_26;
    uint8_t min_perf_r_8_26_4_52;
    uint8_t min_perf_w_8_26_4_52;
    uint8_t min_perf_r_8_52;
    uint8_t min_perf_w_8_52;
    uint8_t secure_wp_info;
    uint32_t sec_count;
    uint8_t sleep_notification_time;
    uint8_t s_a_timeout;
    uint8_t production_state_awareness_timeout;
    uint8_t s_c_vccq;
    uint8_t s_c_vcc;
    uint8_t hc_wp_grp_size;
    uint8_t rel_wr_sec_c;
    uint8_t erase_timeout_mult;
    uint8_t hc_erase_grp_size;
    uint8_t acc_size;
    uint8_t boot_size_mult;
    uint8_t reserved15;
    uint8_t boot_info;
    uint8_t sec_trim_mult;
    uint8_t sec_erase_mult;
    uint8_t sec_feature_support;
    uint8_t trim_mult;
    uint8_t reserved16;
    uint8_t min_perf_ddr_r_b_52;
    uint8_t min_perf_ddr_w_8_52;
    uint8_t pwr_cl_200_130;
    uint8_t pwr_cl_200_195;
    uint8_t pwr_cl_ddr_52_195;
    uint8_t pwr_cl_ddr_52_360;
    uint8_t cache_flush_policy;
    uint8_t ini_timeout_ap;
    uint32_t correctly_prg_sectors_num;
    uint8_t bkops_status;
    uint8_t power_off_long_time;
    uint8_t generic_cmd6_time;
    uint32_t cache_size;
    uint8_t pwr_cl_ddr_200_360;
    uint64_t firmware_version;
    uint16_t device_version;
    uint8_t optimal_trim_unit_size;
    uint8_t optimal_write_size;
    uint8_t optimal_read_size;
    uint8_t pre_eol_info;
    uint8_t device_life_time_est_typ_a;
    uint8_t device_life_time_est_typ_b;
    uint8_t vendor_proprietary_health_report[32];
    uint32_t number_of_fw_sectors_correctly_programmed;
    uint8_t reserved17;
    uint8_t cmdq_depth;
    uint8_t cmdq_support;
    uint8_t reserved18[177];
    uint8_t barrier_support;
    uint32_t ffu_arg;
    uint8_t operation_code_timeout;
    uint8_t ffu_features;
    uint8_t supported_modes;
    uint8_t ext_support;
    uint8_t large_unit_size_m1;
    uint8_t context_capabilities;
    uint8_t tag_res_size;
    uint8_t tag_unit_size;
    uint8_t data_tag_support;
    uint8_t max_packed_writes;
    uint8_t max_packed_reads;
    uint8_t bkops_support;
    uint8_t hpi_features;
    uint8_t s_cmd_set;
    uint8_t ext_security_err;
    uint8_t reserved19[6];
  };
  uint8_t bytes[512];
  uint32_t words[128];
} MmcExtCsd;

_Static_assert(sizeof(MmcExtCsd) == 512, "Register size mismatch.");

#endif  // MMC_SPEC_H_
