#ifndef REG_DEF_H_
#define REG_DEF_H_

#include <stdint.h>

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_L4LS_GCLK : 1;
    uint32_t RESERVED2 : 1;
    uint32_t CLKACTIVITY_UART_GFCLK : 1;
    uint32_t CLKACTIVITY_CAN_CLK : 1;
    uint32_t RESERVED3 : 1;
    uint32_t CLKACTIVITY_TIMER7_GCLK : 1;
    uint32_t CLKACTIVITY_TIMER2_GCLK : 1;
    uint32_t CLKACTIVITY_TIMER3_GCLK : 1;
    uint32_t CLKACTIVITY_TIMER4_GCLK : 1;
    uint32_t CLKACTIVITY_LCDC_GCLK : 1;
    uint32_t RESERVED8 : 1;
    uint32_t CLKACTIVITY_GPIO_1_GDBCLK : 1;
    uint32_t CLKACTIVITY_GPIO_2_GDBCLK : 1;
    uint32_t CLKACTIVITY_GPIO_3_GDBCLK : 1;
    uint32_t RESERVED7 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t CLKACTIVITY_I2C_FCLK : 1;
    uint32_t CLKACTIVITY_SPI_GCLK : 1;
    uint32_t RESERVED6 : 1;
    uint32_t CLKACTIVITY_TIMER5_GCLK : 1;
    uint32_t CLKACTIVITY_TIMER6_GCLK : 1;
    uint32_t RESERVED5 : 3;
  };
  uint32_t raw;
} RegisterL4LS_CLKSTCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED7 : 1;
    uint32_t CLKACTIVITY_L3S_GCLK : 1;
    uint32_t RESERVED6 : 1;
    uint32_t RESERVED : 3;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t RESERVED2 : 15;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterL3S_CLKSTCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_L4FW_GCLK : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t RESERVED2 : 15;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterL4FW_CLKSTCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t CLKACTIVITY_EMIF_GCLK : 1;
    uint32_t CLKACTIVITY_MMC_FCLK : 1;
    uint32_t CLKACTIVITY_L3_GCLK : 1;
    uint32_t RESERVED2 : 1;
    uint32_t CLKACTIVITY_CPTS_RFT_GCLK : 1;
    uint32_t CLKACTIVITY_MCASP_GCLK : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterL3_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterCPGMAC0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterLCDC_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterUSB0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTPTC0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEMIF_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterOCMCRAM_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterGPMC_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMCASP0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART5_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterMMC0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterELM_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterI2C2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterI2C1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterSPI0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterSPI1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterL4LS_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterL4FW_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMCASP1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART3_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART4_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER7_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER3_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER4_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t OPTFCLKEN_GPIO_1_GDBCLK : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterGPIO1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t OPTFCLKEN_GPIO_2_GDBCLK : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterGPIO2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t OPTFCLKEN_GPIO_3_GDBCLK : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterGPIO3_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTPCC_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterDCAN0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterDCAN1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEPWMSS1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEMIF_FW_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEPWMSS0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEPWMSS2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterL3_INSTR_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterL3_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterIEEE5000_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterPRU_ICSS_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER5_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterTIMER6_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterMMC1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterMMC2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTPTC1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTPTC2_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterSPINLOCK_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMAILBOX0_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 1;
    uint32_t CLKACTIVITY_L4HS_GCLK : 1;
    uint32_t CLKACTIVITY_CPSW_250MHZ_GCLK : 1;
    uint32_t CLKACTIVITY_CPSW_50MHZ_GCLK : 1;
    uint32_t CLKACTIVITY_CPSW_5MHZ_GCLK : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterL4HS_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterL4HS_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CLKACTIVITY_OCPWP_L3_GCLK : 1;
    uint32_t CLKACTIVITY_OCPWP_L4_GCLK : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterOCPWP_L3_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterOCPWP_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CLKACTIVITY_PRU_ICSS_OCP_GCLK : 1;
    uint32_t CLKACTIVITY_PRU_ICSS_IEP_GCLK : 1;
    uint32_t CLKACTIVITY_PRU_ICSS_UART_GCLK : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterPRU_ICSS_CLKSTCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CLKACTIVITY_CPSW_125MHZ_GCLK : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterCPSW_CLKSTCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CLKACTIVITY_LCDC_L3_OCP_GCLK : 1;
    uint32_t CLKACTIVITY_LCDC_L4_OCP_GCLK : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterLCDC_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterCLKDIV32K_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CLKACTIVITY_CLK_24MHZ_GCLK : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterCLK_24MHZ_CLKSTCTRL;

typedef struct {
  RegisterL4LS_CLKSTCTRL L4LS_CLKSTCTRL;
  RegisterL3S_CLKSTCTRL L3S_CLKSTCTRL;
  RegisterL4FW_CLKSTCTRL L4FW_CLKSTCTRL;
  RegisterL3_CLKSTCTRL L3_CLKSTCTRL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterCPGMAC0_CLKCTRL CPGMAC0_CLKCTRL;
  RegisterLCDC_CLKCTRL LCDC_CLKCTRL;
  RegisterUSB0_CLKCTRL USB0_CLKCTRL;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterTPTC0_CLKCTRL TPTC0_CLKCTRL;
  RegisterEMIF_CLKCTRL EMIF_CLKCTRL;
  RegisterOCMCRAM_CLKCTRL OCMCRAM_CLKCTRL;
  RegisterGPMC_CLKCTRL GPMC_CLKCTRL;
  RegisterMCASP0_CLKCTRL MCASP0_CLKCTRL;
  RegisterUART5_CLKCTRL UART5_CLKCTRL;
  RegisterMMC0_CLKCTRL MMC0_CLKCTRL;
  RegisterELM_CLKCTRL ELM_CLKCTRL;
  RegisterI2C2_CLKCTRL I2C2_CLKCTRL;
  RegisterI2C1_CLKCTRL I2C1_CLKCTRL;
  RegisterSPI0_CLKCTRL SPI0_CLKCTRL;
  RegisterSPI1_CLKCTRL SPI1_CLKCTRL;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterL4LS_CLKCTRL L4LS_CLKCTRL;
  RegisterL4FW_CLKCTRL L4FW_CLKCTRL;
  RegisterMCASP1_CLKCTRL MCASP1_CLKCTRL;
  RegisterUART1_CLKCTRL UART1_CLKCTRL;
  RegisterUART2_CLKCTRL UART2_CLKCTRL;
  RegisterUART3_CLKCTRL UART3_CLKCTRL;
  RegisterUART4_CLKCTRL UART4_CLKCTRL;
  RegisterTIMER7_CLKCTRL TIMER7_CLKCTRL;
  RegisterTIMER2_CLKCTRL TIMER2_CLKCTRL;
  RegisterTIMER3_CLKCTRL TIMER3_CLKCTRL;
  RegisterTIMER4_CLKCTRL TIMER4_CLKCTRL;
  uint8_t RESERVED_OFFSETS_3[32];
  RegisterGPIO1_CLKCTRL GPIO1_CLKCTRL;
  RegisterGPIO2_CLKCTRL GPIO2_CLKCTRL;
  RegisterGPIO3_CLKCTRL GPIO3_CLKCTRL;
  uint8_t RESERVED_OFFSETS_4[4];
  RegisterTPCC_CLKCTRL TPCC_CLKCTRL;
  RegisterDCAN0_CLKCTRL DCAN0_CLKCTRL;
  RegisterDCAN1_CLKCTRL DCAN1_CLKCTRL;
  uint8_t RESERVED_OFFSETS_5[4];
  RegisterEPWMSS1_CLKCTRL EPWMSS1_CLKCTRL;
  RegisterEMIF_FW_CLKCTRL EMIF_FW_CLKCTRL;
  RegisterEPWMSS0_CLKCTRL EPWMSS0_CLKCTRL;
  RegisterEPWMSS2_CLKCTRL EPWMSS2_CLKCTRL;
  RegisterL3_INSTR_CLKCTRL L3_INSTR_CLKCTRL;
  RegisterL3_CLKCTRL L3_CLKCTRL;
  RegisterIEEE5000_CLKCTRL IEEE5000_CLKCTRL;
  RegisterPRU_ICSS_CLKCTRL PRU_ICSS_CLKCTRL;
  RegisterTIMER5_CLKCTRL TIMER5_CLKCTRL;
  RegisterTIMER6_CLKCTRL TIMER6_CLKCTRL;
  RegisterMMC1_CLKCTRL MMC1_CLKCTRL;
  RegisterMMC2_CLKCTRL MMC2_CLKCTRL;
  RegisterTPTC1_CLKCTRL TPTC1_CLKCTRL;
  RegisterTPTC2_CLKCTRL TPTC2_CLKCTRL;
  uint8_t RESERVED_OFFSETS_6[8];
  RegisterSPINLOCK_CLKCTRL SPINLOCK_CLKCTRL;
  RegisterMAILBOX0_CLKCTRL MAILBOX0_CLKCTRL;
  uint8_t RESERVED_OFFSETS_7[8];
  RegisterL4HS_CLKSTCTRL L4HS_CLKSTCTRL;
  RegisterL4HS_CLKCTRL L4HS_CLKCTRL;
  uint8_t RESERVED_OFFSETS_8[8];
  RegisterOCPWP_L3_CLKSTCTRL OCPWP_L3_CLKSTCTRL;
  RegisterOCPWP_CLKCTRL OCPWP_CLKCTRL;
  uint8_t RESERVED_OFFSETS_9[12];
  RegisterPRU_ICSS_CLKSTCTRL PRU_ICSS_CLKSTCTRL;
  RegisterCPSW_CLKSTCTRL CPSW_CLKSTCTRL;
  RegisterLCDC_CLKSTCTRL LCDC_CLKSTCTRL;
  RegisterCLKDIV32K_CLKCTRL CLKDIV32K_CLKCTRL;
  RegisterCLK_24MHZ_CLKSTCTRL CLK_24MHZ_CLKSTCTRL;
} PeripheralCM_PER;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t CLKACTIVITY_L4_WKUP_GCLK : 1;
    uint32_t CLKACTIVITY_SR_SYSCLK : 1;
    uint32_t CLKACTIVITY_WDT1_GCLK : 1;
    uint32_t RESERVED : 3;
    uint32_t CLKACTIVITY_GPIO0_GDBCLK : 1;
    uint32_t RESERVED2 : 1;
    uint32_t CLKACTIVITY_TIMER0_GCLK : 1;
    uint32_t CLKACTIVITY_I2C0_GFCLK : 1;
    uint32_t CLKACTIVITY_UART0_GFCLK : 1;
    uint32_t CLKACTIVITY_TIMER1_GCLK : 1;
    uint32_t CLKACTIVITY_ADC_FCLK : 1;
    uint32_t RESERVED1 : 17;
  };
  uint32_t raw;
} RegisterCLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterCONTROL_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t OPTFCLKEN_GPIO0_GDBCLK : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterGPIO0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterL4WKUP_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTIMER0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t OPTFCLKEN_DBGSYSCLK : 1;
    uint32_t TRC_PMD_CLKSEL : 2;
    uint32_t STM_PMD_CLKSEL : 2;
    uint32_t TRC_PMD_CLKDIVSEL : 3;
    uint32_t STM_PMD_CLKDIVSEL : 3;
    uint32_t OPTCLK_DEBUG_CLKA : 1;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDEBUGSS_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t CLKACTIVITY_DBGSYSCLK : 1;
    uint32_t CLKACTIVITY_L3_AON_GCLK : 1;
    uint32_t CLKACTIVITY_DEBUG_CLKA : 1;
    uint32_t RESERVED : 3;
    uint32_t RESERVED3 : 3;
    uint32_t RESERVED2 : 15;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCM_L3_AON_CLKSTCTRL;

typedef union {
  struct {
    uint32_t AUTO_DPLL_MODE : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_AUTOIDLE_DPLL_MPU;

typedef union {
  struct {
    uint32_t ST_DPLL_CLK : 1;
    uint32_t RESERVED : 7;
    uint32_t ST_MN_BYPASS : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterCM_IDLEST_DPLL_MPU;

typedef union {
  struct {
    uint32_t DELTAMSTEP_FRACTION : 18;
    uint32_t DELTAMSTEP_INTEGER : 2;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterCM_SSC_DELTAMSTEP_DPLL_MPU;

typedef union {
  struct {
    uint32_t MODFREQDIV_MANTISSA : 7;
    uint32_t RESERVED : 1;
    uint32_t MODFREQDIV_EXPONENT : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterCM_SSC_MODFREQDIV_DPLL_MPU;

typedef union {
  struct {
    uint32_t DPLL_DIV : 7;
    uint32_t RESERVED : 1;
    uint32_t DPLL_MULT : 11;
    uint32_t RESERVED1 : 4;
    uint32_t DPLL_BYP_CLKSEL : 1;
    uint32_t RESERVED2 : 8;
  };
  uint32_t raw;
} RegisterCM_CLKSEL_DPLL_MPU;

typedef union {
  struct {
    uint32_t AUTO_DPLL_MODE : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_AUTOIDLE_DPLL_DDR;

typedef union {
  struct {
    uint32_t ST_DPLL_CLK : 1;
    uint32_t RESERVED : 7;
    uint32_t ST_MN_BYPASS : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterCM_IDLEST_DPLL_DDR;

typedef union {
  struct {
    uint32_t DELTAMSTEP_FRACTION : 18;
    uint32_t DELTAMSTEP_INTEGER : 2;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterCM_SSC_DELTAMSTEP_DPLL_DDR;

typedef union {
  struct {
    uint32_t MODFREQDIV_MANTISSA : 7;
    uint32_t RESERVED : 1;
    uint32_t MODFREQDIV_EXPONENT : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterCM_SSC_MODFREQDIV_DPLL_DDR;

typedef union {
  struct {
    uint32_t DPLL_DIV : 7;
    uint32_t RESERVED : 1;
    uint32_t DPLL_MULT : 11;
    uint32_t RESERVED1 : 4;
    uint32_t DPLL_BYP_CLKSEL : 1;
    uint32_t RESERVED2 : 8;
  };
  uint32_t raw;
} RegisterCM_CLKSEL_DPLL_DDR;

typedef union {
  struct {
    uint32_t AUTO_DPLL_MODE : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_AUTOIDLE_DPLL_DISP;

typedef union {
  struct {
    uint32_t ST_DPLL_CLK : 1;
    uint32_t RESERVED : 7;
    uint32_t ST_MN_BYPASS : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterCM_IDLEST_DPLL_DISP;

typedef union {
  struct {
    uint32_t DELTAMSTEP_FRACTION : 18;
    uint32_t DELTAMSTEP_INTEGER : 2;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterCM_SSC_DELTAMSTEP_DPLL_DISP;

typedef union {
  struct {
    uint32_t MODFREQDIV_MANTISSA : 7;
    uint32_t RESERVED : 1;
    uint32_t MODFREQDIV_EXPONENT : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterCM_SSC_MODFREQDIV_DPLL_DISP;

typedef union {
  struct {
    uint32_t DPLL_DIV : 7;
    uint32_t RESERVED : 1;
    uint32_t DPLL_MULT : 11;
    uint32_t RESERVED1 : 4;
    uint32_t DPLL_BYP_CLKSEL : 1;
    uint32_t RESERVED2 : 8;
  };
  uint32_t raw;
} RegisterCM_CLKSEL_DPLL_DISP;

typedef union {
  struct {
    uint32_t AUTO_DPLL_MODE : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_AUTOIDLE_DPLL_CORE;

typedef union {
  struct {
    uint32_t ST_DPLL_CLK : 1;
    uint32_t RESERVED : 7;
    uint32_t ST_MN_BYPASS : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterCM_IDLEST_DPLL_CORE;

typedef union {
  struct {
    uint32_t DELTAMSTEP_FRACTION : 18;
    uint32_t DELTAMSTEP_INTEGER : 2;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterCM_SSC_DELTAMSTEP_DPLL_CORE;

typedef union {
  struct {
    uint32_t MODFREQDIV_MANTISSA : 7;
    uint32_t RESERVED : 1;
    uint32_t MODFREQDIV_EXPONENT : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterCM_SSC_MODFREQDIV_DPLL_CORE;

typedef union {
  struct {
    uint32_t DPLL_DIV : 7;
    uint32_t RESERVED : 1;
    uint32_t DPLL_MULT : 11;
    uint32_t RESERVED1 : 4;
    uint32_t RESERVED2 : 9;
  };
  uint32_t raw;
} RegisterCM_CLKSEL_DPLL_CORE;

typedef union {
  struct {
    uint32_t AUTO_DPLL_MODE : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_AUTOIDLE_DPLL_PER;

typedef union {
  struct {
    uint32_t ST_DPLL_CLK : 1;
    uint32_t RESERVED : 7;
    uint32_t ST_MN_BYPASS : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterCM_IDLEST_DPLL_PER;

typedef union {
  struct {
    uint32_t DELTAMSTEP_FRACTION : 18;
    uint32_t DELTAMSTEP_INTEGER : 2;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterCM_SSC_DELTAMSTEP_DPLL_PER;

typedef union {
  struct {
    uint32_t MODFREQDIV_MANTISSA : 7;
    uint32_t RESERVED : 1;
    uint32_t MODFREQDIV_EXPONENT : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterCM_SSC_MODFREQDIV_DPLL_PER;

typedef union {
  struct {
    uint32_t RESERVED2 : 8;
    uint32_t DPLL_CLKDCOLDO_GATE_CTRL : 1;
    uint32_t ST_DPLL_CLKDCOLDO : 1;
    uint32_t RESERVED : 2;
    uint32_t DPLL_CLKDCOLDO_PWDN : 1;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterCM_CLKDCOLDO_DPLL_PER;

typedef union {
  struct {
    uint32_t HSDIVIDER_CLKOUT1_DIV : 5;
    uint32_t HSDIVIDER_CLKOUT1_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t HSDIVIDER_CLKOUT1_GATE_CTRL : 1;
    uint32_t ST_HSDIVIDER_CLKOUT1 : 1;
    uint32_t RESERVED1 : 2;
    uint32_t HSDIVIDER_CLKOUT1_PWDN : 1;
    uint32_t RESERVED2 : 19;
  };
  uint32_t raw;
} RegisterCM_DIV_M4_DPLL_CORE;

typedef union {
  struct {
    uint32_t HSDIVIDER_CLKOUT2_DIV : 5;
    uint32_t HSDIVIDER_CLKOUT2_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t HSDIVIDER_CLKOUT2_GATE_CTRL : 1;
    uint32_t ST_HSDIVIDER_CLKOUT2 : 1;
    uint32_t RESERVED1 : 2;
    uint32_t HSDIVIDER_CLKOUT2_PWDN : 1;
    uint32_t RESERVED2 : 19;
  };
  uint32_t raw;
} RegisterCM_DIV_M5_DPLL_CORE;

typedef union {
  struct {
    uint32_t DPLL_EN : 3;
    uint32_t DPLL_RAMP_LEVEL : 2;
    uint32_t DPLL_RAMP_RATE : 3;
    uint32_t DPLL_DRIFTGUARD_EN : 1;
    uint32_t DPLL_RELOCK_RAMP_EN : 1;
    uint32_t DPLL_LPMODE_EN : 1;
    uint32_t DPLL_REGM4XEN : 1;
    uint32_t DPLL_SSC_EN : 1;
    uint32_t DPLL_SSC_ACK : 1;
    uint32_t DPLL_SSC_DOWNSPREAD : 1;
    uint32_t DPLL_SSC_TYPE : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterCM_CLKMODE_DPLL_MPU;

typedef union {
  struct {
    uint32_t DPLL_EN : 3;
    uint32_t RESERVED1 : 9;
    uint32_t DPLL_SSC_EN : 1;
    uint32_t DPLL_SSC_ACK : 1;
    uint32_t DPLL_SSC_DOWNSPREAD : 1;
    uint32_t DPLL_SSC_TYPE : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterCM_CLKMODE_DPLL_PER;

typedef union {
  struct {
    uint32_t DPLL_EN : 3;
    uint32_t DPLL_RAMP_LEVEL : 2;
    uint32_t DPLL_RAMP_RATE : 3;
    uint32_t DPLL_DRIFTGUARD_EN : 1;
    uint32_t DPLL_RELOCK_RAMP_EN : 1;
    uint32_t DPLL_LPMODE_EN : 1;
    uint32_t DPLL_REGM4XEN : 1;
    uint32_t DPLL_SSC_EN : 1;
    uint32_t DPLL_SSC_ACK : 1;
    uint32_t DPLL_SSC_DOWNSPREAD : 1;
    uint32_t DPLL_SSC_TYPE : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterCM_CLKMODE_DPLL_CORE;

typedef union {
  struct {
    uint32_t DPLL_EN : 3;
    uint32_t DPLL_RAMP_LEVEL : 2;
    uint32_t DPLL_RAMP_RATE : 3;
    uint32_t DPLL_DRIFTGUARD_EN : 1;
    uint32_t DPLL_RELOCK_RAMP_EN : 1;
    uint32_t DPLL_LPMODE_EN : 1;
    uint32_t DPLL_REGM4XEN : 1;
    uint32_t DPLL_SSC_EN : 1;
    uint32_t DPLL_SSC_ACK : 1;
    uint32_t DPLL_SSC_DOWNSPREAD : 1;
    uint32_t DPLL_SSC_TYPE : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterCM_CLKMODE_DPLL_DDR;

typedef union {
  struct {
    uint32_t DPLL_EN : 3;
    uint32_t DPLL_RAMP_LEVEL : 2;
    uint32_t DPLL_RAMP_RATE : 3;
    uint32_t DPLL_DRIFTGUARD_EN : 1;
    uint32_t DPLL_RELOCK_RAMP_EN : 1;
    uint32_t DPLL_LPMODE_EN : 1;
    uint32_t DPLL_REGM4XEN : 1;
    uint32_t DPLL_SSC_EN : 1;
    uint32_t DPLL_SSC_ACK : 1;
    uint32_t DPLL_SSC_DOWNSPREAD : 1;
    uint32_t DPLL_SSC_TYPE : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterCM_CLKMODE_DPLL_DISP;

typedef union {
  struct {
    uint32_t DPLL_DIV : 8;
    uint32_t DPLL_MULT : 12;
    uint32_t RESERVED : 3;
    uint32_t RESERVED1 : 1;
    uint32_t DPLL_SD_DIV : 8;
  };
  uint32_t raw;
} RegisterCM_CLKSEL_DPLL_PERIPH;

typedef union {
  struct {
    uint32_t DPLL_CLKOUT_DIV : 5;
    uint32_t DPLL_CLKOUT_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t DPLL_CLKOUT_GATE_CTRL : 1;
    uint32_t ST_DPLL_CLKOUT : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCM_DIV_M2_DPLL_DDR;

typedef union {
  struct {
    uint32_t DPLL_CLKOUT_DIV : 5;
    uint32_t DPLL_CLKOUT_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t DPLL_CLKOUT_GATE_CTRL : 1;
    uint32_t ST_DPLL_CLKOUT : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCM_DIV_M2_DPLL_DISP;

typedef union {
  struct {
    uint32_t DPLL_CLKOUT_DIV : 5;
    uint32_t DPLL_CLKOUT_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t DPLL_CLKOUT_GATE_CTRL : 1;
    uint32_t ST_DPLL_CLKOUT : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCM_DIV_M2_DPLL_MPU;

typedef union {
  struct {
    uint32_t DPLL_CLKOUT_DIV : 7;
    uint32_t DPLL_CLKOUT_DIVCHACK : 1;
    uint32_t DPLL_CLKOUT_GATE_CTRL : 1;
    uint32_t ST_DPLL_CLKOUT : 1;
    uint32_t RESERVED : 22;
  };
  uint32_t raw;
} RegisterCM_DIV_M2_DPLL_PER;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 16;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterWKUP_M3_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterUART0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterI2C0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterADC_TSC_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterSMARTREFLEX0_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTIMER1_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterSMARTREFLEX1_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t CLKACTIVITY_L4_WKUP_AON_GCLK : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED : 4;
    uint32_t RESERVED4 : 6;
    uint32_t RESERVED2 : 12;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCM_L4_WKUP_AON_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterWDT1_CLKCTRL;

typedef union {
  struct {
    uint32_t HSDIVIDER_CLKOUT3_DIV : 5;
    uint32_t HSDIVIDER_CLKOUT3_DIVCHACK : 1;
    uint32_t RESERVED : 2;
    uint32_t HSDIVIDER_CLKOUT3_GATE_CTRL : 1;
    uint32_t ST_HSDIVIDER_CLKOUT3 : 1;
    uint32_t RESERVED1 : 2;
    uint32_t HSDIVIDER_CLKOUT3_PWDN : 1;
    uint32_t RESERVED2 : 19;
  };
  uint32_t raw;
} RegisterCM_DIV_M6_DPLL_CORE;

typedef struct {
  RegisterCLKSTCTRL CLKSTCTRL;
  RegisterCONTROL_CLKCTRL CONTROL_CLKCTRL;
  RegisterGPIO0_CLKCTRL GPIO0_CLKCTRL;
  RegisterL4WKUP_CLKCTRL L4WKUP_CLKCTRL;
  RegisterTIMER0_CLKCTRL TIMER0_CLKCTRL;
  RegisterDEBUGSS_CLKCTRL DEBUGSS_CLKCTRL;
  RegisterCM_L3_AON_CLKSTCTRL CM_L3_AON_CLKSTCTRL;
  RegisterCM_AUTOIDLE_DPLL_MPU CM_AUTOIDLE_DPLL_MPU;
  RegisterCM_IDLEST_DPLL_MPU CM_IDLEST_DPLL_MPU;
  RegisterCM_SSC_DELTAMSTEP_DPLL_MPU CM_SSC_DELTAMSTEP_DPLL_MPU;
  RegisterCM_SSC_MODFREQDIV_DPLL_MPU CM_SSC_MODFREQDIV_DPLL_MPU;
  RegisterCM_CLKSEL_DPLL_MPU CM_CLKSEL_DPLL_MPU;
  RegisterCM_AUTOIDLE_DPLL_DDR CM_AUTOIDLE_DPLL_DDR;
  RegisterCM_IDLEST_DPLL_DDR CM_IDLEST_DPLL_DDR;
  RegisterCM_SSC_DELTAMSTEP_DPLL_DDR CM_SSC_DELTAMSTEP_DPLL_DDR;
  RegisterCM_SSC_MODFREQDIV_DPLL_DDR CM_SSC_MODFREQDIV_DPLL_DDR;
  RegisterCM_CLKSEL_DPLL_DDR CM_CLKSEL_DPLL_DDR;
  RegisterCM_AUTOIDLE_DPLL_DISP CM_AUTOIDLE_DPLL_DISP;
  RegisterCM_IDLEST_DPLL_DISP CM_IDLEST_DPLL_DISP;
  RegisterCM_SSC_DELTAMSTEP_DPLL_DISP CM_SSC_DELTAMSTEP_DPLL_DISP;
  RegisterCM_SSC_MODFREQDIV_DPLL_DISP CM_SSC_MODFREQDIV_DPLL_DISP;
  RegisterCM_CLKSEL_DPLL_DISP CM_CLKSEL_DPLL_DISP;
  RegisterCM_AUTOIDLE_DPLL_CORE CM_AUTOIDLE_DPLL_CORE;
  RegisterCM_IDLEST_DPLL_CORE CM_IDLEST_DPLL_CORE;
  RegisterCM_SSC_DELTAMSTEP_DPLL_CORE CM_SSC_DELTAMSTEP_DPLL_CORE;
  RegisterCM_SSC_MODFREQDIV_DPLL_CORE CM_SSC_MODFREQDIV_DPLL_CORE;
  RegisterCM_CLKSEL_DPLL_CORE CM_CLKSEL_DPLL_CORE;
  RegisterCM_AUTOIDLE_DPLL_PER CM_AUTOIDLE_DPLL_PER;
  RegisterCM_IDLEST_DPLL_PER CM_IDLEST_DPLL_PER;
  RegisterCM_SSC_DELTAMSTEP_DPLL_PER CM_SSC_DELTAMSTEP_DPLL_PER;
  RegisterCM_SSC_MODFREQDIV_DPLL_PER CM_SSC_MODFREQDIV_DPLL_PER;
  RegisterCM_CLKDCOLDO_DPLL_PER CM_CLKDCOLDO_DPLL_PER;
  RegisterCM_DIV_M4_DPLL_CORE CM_DIV_M4_DPLL_CORE;
  RegisterCM_DIV_M5_DPLL_CORE CM_DIV_M5_DPLL_CORE;
  RegisterCM_CLKMODE_DPLL_MPU CM_CLKMODE_DPLL_MPU;
  RegisterCM_CLKMODE_DPLL_PER CM_CLKMODE_DPLL_PER;
  RegisterCM_CLKMODE_DPLL_CORE CM_CLKMODE_DPLL_CORE;
  RegisterCM_CLKMODE_DPLL_DDR CM_CLKMODE_DPLL_DDR;
  RegisterCM_CLKMODE_DPLL_DISP CM_CLKMODE_DPLL_DISP;
  RegisterCM_CLKSEL_DPLL_PERIPH CM_CLKSEL_DPLL_PERIPH;
  RegisterCM_DIV_M2_DPLL_DDR CM_DIV_M2_DPLL_DDR;
  RegisterCM_DIV_M2_DPLL_DISP CM_DIV_M2_DPLL_DISP;
  RegisterCM_DIV_M2_DPLL_MPU CM_DIV_M2_DPLL_MPU;
  RegisterCM_DIV_M2_DPLL_PER CM_DIV_M2_DPLL_PER;
  RegisterWKUP_M3_CLKCTRL WKUP_M3_CLKCTRL;
  RegisterUART0_CLKCTRL UART0_CLKCTRL;
  RegisterI2C0_CLKCTRL I2C0_CLKCTRL;
  RegisterADC_TSC_CLKCTRL ADC_TSC_CLKCTRL;
  RegisterSMARTREFLEX0_CLKCTRL SMARTREFLEX0_CLKCTRL;
  RegisterTIMER1_CLKCTRL TIMER1_CLKCTRL;
  RegisterSMARTREFLEX1_CLKCTRL SMARTREFLEX1_CLKCTRL;
  RegisterCM_L4_WKUP_AON_CLKSTCTRL CM_L4_WKUP_AON_CLKSTCTRL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterWDT1_CLKCTRL WDT1_CLKCTRL;
  RegisterCM_DIV_M6_DPLL_CORE CM_DIV_M6_DPLL_CORE;
} PeripheralCM_WKUP;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER7_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER2_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER3_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER4_CLK;

typedef union {
  struct {
    uint32_t RESERVED : 2;
    uint32_t MII_CLK_SEL : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterCM_MAC_CLKSEL;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER5_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER6_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 1;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCM_CPTS_RFT_CLKSEL;

typedef union {
  struct {
    uint32_t CLKSEL : 3;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCLKSEL_TIMER1MS_CLK;

typedef union {
  struct {
    uint32_t CLKDIV_SEL_GFX_FCLK : 1;
    uint32_t CLKSEL_GFX_FCLK : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_GFX_FCLK;

typedef union {
  struct {
    uint32_t CLKSEL : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCLKSEL_PRU_ICSS_OCP_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_LCDC_PIXEL_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCLKSEL_WDT1_CLK;

typedef union {
  struct {
    uint32_t CLKSEL : 2;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterCLKSEL_GPIO0_DBCLK;

typedef struct {
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterCLKSEL_TIMER7_CLK CLKSEL_TIMER7_CLK;
  RegisterCLKSEL_TIMER2_CLK CLKSEL_TIMER2_CLK;
  RegisterCLKSEL_TIMER3_CLK CLKSEL_TIMER3_CLK;
  RegisterCLKSEL_TIMER4_CLK CLKSEL_TIMER4_CLK;
  RegisterCM_MAC_CLKSEL CM_MAC_CLKSEL;
  RegisterCLKSEL_TIMER5_CLK CLKSEL_TIMER5_CLK;
  RegisterCLKSEL_TIMER6_CLK CLKSEL_TIMER6_CLK;
  RegisterCM_CPTS_RFT_CLKSEL CM_CPTS_RFT_CLKSEL;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterCLKSEL_TIMER1MS_CLK CLKSEL_TIMER1MS_CLK;
  RegisterCLKSEL_GFX_FCLK CLKSEL_GFX_FCLK;
  RegisterCLKSEL_PRU_ICSS_OCP_CLK CLKSEL_PRU_ICSS_OCP_CLK;
  RegisterCLKSEL_LCDC_PIXEL_CLK CLKSEL_LCDC_PIXEL_CLK;
  RegisterCLKSEL_WDT1_CLK CLKSEL_WDT1_CLK;
  RegisterCLKSEL_GPIO0_DBCLK CLKSEL_GPIO0_DBCLK;
} PeripheralCM_DPLL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t CLKACTIVITY_MPU_CLK : 1;
    uint32_t RESERVED : 29;
  };
  uint32_t raw;
} RegisterCLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterMPU_CLKCTRL;

typedef struct {
  RegisterCLKSTCTRL CLKSTCTRL;
  RegisterMPU_CLKCTRL MPU_CLKCTRL;
} PeripheralCM_MPU;

typedef union {
  struct {
    uint32_t CLKOUT2SOURCE : 3;
    uint32_t CLKOUT2DIV : 3;
    uint32_t RESERVED1 : 1;
    uint32_t CLKOUT2EN : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterCM_CLKOUT_CTRL;

typedef struct {
  RegisterCM_CLKOUT_CTRL CM_CLKOUT_CTRL;
} PeripheralCM_DEVICE;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterRTC_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_L4_RTC_GCLK : 1;
    uint32_t CLKACTIVITY_RTC_32KCLK : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 15;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCLKSTCTRL;

typedef struct {
  RegisterRTC_CLKCTRL RTC_CLKCTRL;
  RegisterCLKSTCTRL CLKSTCTRL;
} PeripheralCM_RTC;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_GFX_L3_GCLK : 1;
    uint32_t CLKACTIVITY_GFX_FCLK : 1;
    uint32_t RESERVED2 : 16;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterL3_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t STBYST : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterGFX_CLKCTRL;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_L4LS_GFX_GCLK : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterL4LS_GFX_CLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMMUCFG_CLKCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMMUDATA_CLKCTRL;

typedef struct {
  RegisterL3_CLKSTCTRL L3_CLKSTCTRL;
  RegisterGFX_CLKCTRL GFX_CLKCTRL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterL4LS_GFX_CLKSTCTRL L4LS_GFX_CLKSTCTRL;
  RegisterMMUCFG_CLKCTRL MMUCFG_CLKCTRL;
  RegisterMMUDATA_CLKCTRL MMUDATA_CLKCTRL;
} PeripheralCM_GFX;

typedef union {
  struct {
    uint32_t CLKTRCTRL : 2;
    uint32_t RESERVED : 6;
    uint32_t CLKACTIVITY_L4_CEFUSE_GICLK : 1;
    uint32_t CLKACTIVITY_CUST_EFUSE_SYS_CLK : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCLKSTCTRL;

typedef union {
  struct {
    uint32_t MODULEMODE : 2;
    uint32_t RESERVED : 14;
    uint32_t IDLEST : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterCEFUSE_CLKCTRL;

typedef struct {
  RegisterCLKSTCTRL CLKSTCTRL;
  uint8_t RESERVED_OFFSETS_0[28];
  RegisterCEFUSE_CLKCTRL CEFUSE_CLKCTRL;
} PeripheralCM_CEFUSE;

typedef union {
  struct {
    uint32_t REV : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterREVISION_PRM;

typedef union {
  struct {
    uint32_t RESERVED : 8;
    uint32_t TRANSITION_ST : 1;
    uint32_t RESERVED1 : 1;
    uint32_t FORCEWKUP_ST : 1;
    uint32_t DPLL_MPU_RECAL_ST : 1;
    uint32_t DPLL_CORE_RECAL_ST : 1;
    uint32_t DPLL_DISP_RECAL_ST : 1;
    uint32_t DPLL_DDR_RECAL_ST : 1;
    uint32_t DPLL_PER_RECAL_ST : 1;
    uint32_t RESERVED2 : 16;
  };
  uint32_t raw;
} RegisterPRM_IRQSTATUS_MPU;

typedef union {
  struct {
    uint32_t RESERVED : 1;
    uint32_t RESERVED1 : 5;
    uint32_t RESERVED2 : 2;
    uint32_t TRANSITION_EN : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FORCEWKUP_EN : 1;
    uint32_t DPLL_MPU_RECAL_EN : 1;
    uint32_t DPLL_CORE_RECAL_EN : 1;
    uint32_t DPLL_PER_RECAL_EN : 1;
    uint32_t DPLL_DDR_RECAL_EN : 1;
    uint32_t DPLL_DISP_RECAL_EN : 1;
    uint32_t RESERVED4 : 16;
  };
  uint32_t raw;
} RegisterPRM_IRQENABLE_MPU;

typedef union {
  struct {
    uint32_t RESERVED : 8;
    uint32_t TRANSITION_ST : 1;
    uint32_t RESERVED1 : 1;
    uint32_t FORCEWKUP_ST : 1;
    uint32_t DPLL_MPU_RECAL_ST : 1;
    uint32_t DPLL_CORE_RECAL_ST : 1;
    uint32_t DPLL_DISP_RECAL_ST : 1;
    uint32_t DPLL_DDR_RECAL_ST : 1;
    uint32_t DPLL_PER_RECAL_ST : 1;
    uint32_t RESERVED2 : 16;
  };
  uint32_t raw;
} RegisterPRM_IRQSTATUS_M3;

typedef union {
  struct {
    uint32_t RESERVED : 1;
    uint32_t RESERVED1 : 5;
    uint32_t RESERVED2 : 2;
    uint32_t TRANSITION_EN : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FORCEWKUP_EN : 1;
    uint32_t DPLL_MPU_RECAL_EN : 1;
    uint32_t DPLL_CORE_RECAL_EN : 1;
    uint32_t DPLL_PER_RECAL_EN : 1;
    uint32_t DPLL_DDR_RECAL_EN : 1;
    uint32_t DPLL_DISP_RECAL_EN : 1;
    uint32_t RESERVED4 : 16;
  };
  uint32_t raw;
} RegisterPRM_IRQENABLE_M3;

typedef struct {
  RegisterREVISION_PRM REVISION_PRM;
  RegisterPRM_IRQSTATUS_MPU PRM_IRQSTATUS_MPU;
  RegisterPRM_IRQENABLE_MPU PRM_IRQENABLE_MPU;
  RegisterPRM_IRQSTATUS_M3 PRM_IRQSTATUS_M3;
  RegisterPRM_IRQENABLE_M3 PRM_IRQENABLE_M3;
} PeripheralPRM_IRQ;

typedef union {
  struct {
    uint32_t RESERVED3 : 1;
    uint32_t PRU_ICSS_LRST : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 3;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterRM_PER_RSTCTRL;

typedef union {
  struct {
    uint32_t POWERSTATEST : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED2 : 14;
    uint32_t PER_MEM_STATEST : 2;
    uint32_t RESERVED : 1;
    uint32_t INTRANSITION : 1;
    uint32_t RAM_MEM_STATEST : 2;
    uint32_t PRU_ICSS_MEM_STATEST : 2;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterPM_PER_PWRSTST;

typedef union {
  struct {
    uint32_t POWERSTATE : 2;
    uint32_t RESERVED : 1;
    uint32_t LOGICRETSTATE : 1;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t PRU_ICSS_MEM_ONSTATE : 2;
    uint32_t PRU_ICSS_MEM_RETSTATE : 1;
    uint32_t RESERVED1 : 17;
    uint32_t PER_MEM_ONSTATE : 2;
    uint32_t RAM_MEM_RETSTATE : 1;
    uint32_t RESERVED2 : 1;
    uint32_t PER_MEM_RETSTATE : 1;
    uint32_t RAM_MEM_ONSTATE : 2;
  };
  uint32_t raw;
} RegisterPM_PER_PWRSTCTRL;

typedef struct {
  RegisterRM_PER_RSTCTRL RM_PER_RSTCTRL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterPM_PER_PWRSTST PM_PER_PWRSTST;
  RegisterPM_PER_PWRSTCTRL PM_PER_PWRSTCTRL;
} PeripheralPRM_PER;

typedef union {
  struct {
    uint32_t RESERVED1 : 3;
    uint32_t WKUP_M3_LRST : 1;
    uint32_t RESERVED2 : 2;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterRM_WKUP_RSTCTRL;

typedef union {
  struct {
    uint32_t RESERVED5 : 2;
    uint32_t RESERVED4 : 1;
    uint32_t LOGICRETSTATE : 1;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t RESERVED1 : 20;
    uint32_t RESERVED6 : 2;
    uint32_t RESERVED : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED7 : 1;
    uint32_t RESERVED3 : 2;
  };
  uint32_t raw;
} RegisterPM_WKUP_PWRSTCTRL;

typedef union {
  struct {
    uint32_t RESERVED4 : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED2 : 14;
    uint32_t DEBUGSS_MEM_STATEST : 2;
    uint32_t RESERVED : 1;
    uint32_t INTRANSITION : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterPM_WKUP_PWRSTST;

typedef union {
  struct {
    uint32_t RESERVED : 5;
    uint32_t WKUP_M3_LRST : 1;
    uint32_t EMULATION_M3_RST : 1;
    uint32_t ICECRUSHER_M3_RST : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRM_WKUP_RSTST;

typedef struct {
  RegisterRM_WKUP_RSTCTRL RM_WKUP_RSTCTRL;
  RegisterPM_WKUP_PWRSTCTRL PM_WKUP_PWRSTCTRL;
  RegisterPM_WKUP_PWRSTST PM_WKUP_PWRSTST;
  RegisterRM_WKUP_RSTST RM_WKUP_RSTST;
} PeripheralPRM_WKUP;

typedef union {
  struct {
    uint32_t POWERSTATE : 2;
    uint32_t LOGICRETSTATE : 1;
    uint32_t RESERVED : 1;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t RESERVED2 : 11;
    uint32_t MPU_RAM_ONSTATE : 2;
    uint32_t MPU_L1_ONSTATE : 2;
    uint32_t MPU_L2_ONSTATE : 2;
    uint32_t MPU_L1_RETSTATE : 1;
    uint32_t MPU_L2_RETSTATE : 1;
    uint32_t MPU_RAM_RETSTATE : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterPM_MPU_PWRSTCTRL;

typedef union {
  struct {
    uint32_t POWERSTATEST : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED : 1;
    uint32_t MPU_RAM_STATEST : 2;
    uint32_t MPU_L1_STATEST : 2;
    uint32_t MPU_L2_STATEST : 2;
    uint32_t RESERVED2 : 10;
    uint32_t INTRANSITION : 1;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterPM_MPU_PWRSTST;

typedef union {
  struct {
    uint32_t RESERVED4 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED5 : 1;
    uint32_t EMULATION_MPU_RST : 1;
    uint32_t ICECRUSHER_MPU_RST : 1;
    uint32_t RESERVED6 : 1;
    uint32_t RESERVED : 7;
    uint32_t RESERVED1 : 17;
  };
  uint32_t raw;
} RegisterRM_MPU_RSTST;

typedef struct {
  RegisterPM_MPU_PWRSTCTRL PM_MPU_PWRSTCTRL;
  RegisterPM_MPU_PWRSTST PM_MPU_PWRSTST;
  RegisterRM_MPU_RSTST RM_MPU_RSTST;
} PeripheralPRM_MPU;

typedef union {
  struct {
    uint32_t RST_GLOBAL_WARM_SW : 1;
    uint32_t RST_GLOBAL_COLD_SW : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterPRM_RSTCTRL;

typedef union {
  struct {
    uint32_t RSTTIME1 : 8;
    uint32_t RSTTIME2 : 5;
    uint32_t RESERVED : 19;
  };
  uint32_t raw;
} RegisterPRM_RSTTIME;

typedef union {
  struct {
    uint32_t GLOBAL_COLD_RST : 1;
    uint32_t GLOBAL_WARM_SW_RST : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t WDT1_RST : 1;
    uint32_t EXTERNAL_WARM_RST : 1;
    uint32_t RESERVED1 : 3;
    uint32_t ICEPICK_RST : 1;
    uint32_t RESERVED : 22;
  };
  uint32_t raw;
} RegisterPRM_RSTST;

typedef union {
  struct {
    uint32_t PCHARGECNT_VALUE : 6;
    uint32_t RESERVED : 2;
    uint32_t VSETUPCNT_VALUE : 8;
    uint32_t SLPCNT_VALUE : 8;
    uint32_t STARTUP_COUNT : 8;
  };
  uint32_t raw;
} RegisterPRM_SRAM_COUNT;

typedef union {
  struct {
    uint32_t DISABLE_RTA_EXPORT : 1;
    uint32_t ABBOFF_ACT_EXPORT : 1;
    uint32_t ABBOFF_SLEEP_EXPORT : 1;
    uint32_t ENFUNC1_EXPORT : 1;
    uint32_t ENFUNC2_EXPORT : 1;
    uint32_t ENFUNC3_EXPORT : 1;
    uint32_t ENFUNC4 : 1;
    uint32_t ENFUNC5 : 1;
    uint32_t AIPOFF : 1;
    uint32_t RESERVED : 23;
  };
  uint32_t raw;
} RegisterPRM_LDO_SRAM_CORE_SETUP;

typedef union {
  struct {
    uint32_t RETMODE_ENABLE : 1;
    uint32_t RESERVED : 7;
    uint32_t SRAMLDO_STATUS : 1;
    uint32_t SRAM_IN_TRANSITION : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterPRM_LDO_SRAM_CORE_CTRL;

typedef union {
  struct {
    uint32_t DISABLE_RTA_EXPORT : 1;
    uint32_t ABBOFF_ACT_EXPORT : 1;
    uint32_t ABBOFF_SLEEP_EXPORT : 1;
    uint32_t ENFUNC1_EXPORT : 1;
    uint32_t ENFUNC2_EXPORT : 1;
    uint32_t ENFUNC3_EXPORT : 1;
    uint32_t ENFUNC4 : 1;
    uint32_t ENFUNC5 : 1;
    uint32_t AIPOFF : 1;
    uint32_t RESERVED : 23;
  };
  uint32_t raw;
} RegisterPRM_LDO_SRAM_MPU_SETUP;

typedef union {
  struct {
    uint32_t RETMODE_ENABLE : 1;
    uint32_t RESERVED : 7;
    uint32_t SRAMLDO_STATUS : 1;
    uint32_t SRAM_IN_TRANSITION : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterPRM_LDO_SRAM_MPU_CTRL;

typedef struct {
  RegisterPRM_RSTCTRL PRM_RSTCTRL;
  RegisterPRM_RSTTIME PRM_RSTTIME;
  RegisterPRM_RSTST PRM_RSTST;
  RegisterPRM_SRAM_COUNT PRM_SRAM_COUNT;
  RegisterPRM_LDO_SRAM_CORE_SETUP PRM_LDO_SRAM_CORE_SETUP;
  RegisterPRM_LDO_SRAM_CORE_CTRL PRM_LDO_SRAM_CORE_CTRL;
  RegisterPRM_LDO_SRAM_MPU_SETUP PRM_LDO_SRAM_MPU_SETUP;
  RegisterPRM_LDO_SRAM_MPU_CTRL PRM_LDO_SRAM_MPU_CTRL;
} PeripheralPRM_DEVICE;

typedef union {
  struct {
    uint32_t RESERVED4 : 2;
    uint32_t LOGICRETSTATE : 1;
    uint32_t RESERVED : 1;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t RESERVED2 : 11;
    uint32_t RESERVED3 : 10;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterPM_RTC_PWRSTCTRL;

typedef union {
  struct {
    uint32_t RESERVED4 : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED : 1;
    uint32_t RESERVED3 : 6;
    uint32_t RESERVED2 : 10;
    uint32_t INTRANSITION : 1;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterPM_RTC_PWRSTST;

typedef struct {
  RegisterPM_RTC_PWRSTCTRL PM_RTC_PWRSTCTRL;
  RegisterPM_RTC_PWRSTST PM_RTC_PWRSTST;
} PeripheralPRM_RTC;

typedef union {
  struct {
    uint32_t POWERSTATE : 2;
    uint32_t LOGICRETSTATE : 1;
    uint32_t RESERVED : 1;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t RESERVED1 : 1;
    uint32_t GFX_MEM_RETSTATE : 1;
    uint32_t RESERVED2 : 10;
    uint32_t GFX_MEM_ONSTATE : 2;
    uint32_t RESERVED3 : 13;
  };
  uint32_t raw;
} RegisterPM_GFX_PWRSTCTRL;

typedef union {
  struct {
    uint32_t GFX_RST : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 2;
    uint32_t RESERVED : 28;
  };
  uint32_t raw;
} RegisterRM_GFX_RSTCTRL;

typedef union {
  struct {
    uint32_t POWERSTATEST : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED : 1;
    uint32_t GFX_MEM_STATEST : 2;
    uint32_t RESERVED2 : 14;
    uint32_t INTRANSITION : 1;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterPM_GFX_PWRSTST;

typedef union {
  struct {
    uint32_t GFX_RST : 1;
    uint32_t RESERVED1 : 1;
    uint32_t RESERVED : 10;
    uint32_t RESERVED2 : 20;
  };
  uint32_t raw;
} RegisterRM_GFX_RSTST;

typedef struct {
  RegisterPM_GFX_PWRSTCTRL PM_GFX_PWRSTCTRL;
  RegisterRM_GFX_RSTCTRL RM_GFX_RSTCTRL;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterPM_GFX_PWRSTST PM_GFX_PWRSTST;
  RegisterRM_GFX_RSTST RM_GFX_RSTST;
} PeripheralPRM_GFX;

typedef union {
  struct {
    uint32_t POWERSTATE : 2;
    uint32_t RESERVED : 2;
    uint32_t LOWPOWERSTATECHANGE : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterPM_CEFUSE_PWRSTCTRL;

typedef union {
  struct {
    uint32_t POWERSTATEST : 2;
    uint32_t LOGICSTATEST : 1;
    uint32_t RESERVED : 17;
    uint32_t INTRANSITION : 1;
    uint32_t RESERVED2 : 3;
    uint32_t LASTPOWERSTATEENTERED : 2;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterPM_CEFUSE_PWRSTST;

typedef struct {
  RegisterPM_CEFUSE_PWRSTCTRL PM_CEFUSE_PWRSTCTRL;
  RegisterPM_CEFUSE_PWRSTST PM_CEFUSE_PWRSTST;
} PeripheralPRM_CEFUSE;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterTIDR;

typedef union {
  struct {
    uint32_t SOFTRESET : 1;
    uint32_t EMUFREE : 1;
    uint32_t IDLEMODE : 2;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterTIOCP_CFG;

typedef union {
  struct {
    uint32_t MAT_IT_FLAG : 1;
    uint32_t OVF_IT_FLAG : 1;
    uint32_t TCAR_IT_FLAG : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW;

typedef union {
  struct {
    uint32_t MAT_IT_FLAG : 1;
    uint32_t OVF_IT_FLAG : 1;
    uint32_t TCAR_IT_FLAG : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQSTATUS;

typedef union {
  struct {
    uint32_t MAT_EN_FLAG : 1;
    uint32_t OVF_EN_FLAG : 1;
    uint32_t TCAR_EN_FLAG : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET;

typedef union {
  struct {
    uint32_t MAT_EN_FLAG : 1;
    uint32_t OVF_EN_FLAG : 1;
    uint32_t TCAR_EN_FLAG : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR;

typedef union {
  struct {
    uint32_t MAT_WUP_ENA : 1;
    uint32_t OVF_WUP_ENA : 1;
    uint32_t TCAR_WUP_ENA : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQWAKEEN;

typedef union {
  struct {
    uint32_t ST : 1;
    uint32_t AR : 1;
    uint32_t PTV : 3;
    uint32_t PRE : 1;
    uint32_t CE : 1;
    uint32_t SCPWM : 1;
    uint32_t TCM : 2;
    uint32_t TRG : 2;
    uint32_t PT : 1;
    uint32_t CAPT_MODE : 1;
    uint32_t GPO_CFG : 1;
    uint32_t RESERVED1 : 17;
  };
  uint32_t raw;
} RegisterTCLR;

typedef union {
  struct {
    uint32_t TIMER_COUNTER : 32;
  };
  uint32_t raw;
} RegisterTCRR;

typedef union {
  struct {
    uint32_t LOAD_VALUE : 32;
  };
  uint32_t raw;
} RegisterTLDR;

typedef union {
  struct {
    uint32_t VALUE : 32;
  };
  uint32_t raw;
} RegisterTTGR;

typedef union {
  struct {
    uint32_t W_PEND_TCLR : 1;
    uint32_t W_PEND_TCRR : 1;
    uint32_t W_PEND_TLDR : 1;
    uint32_t W_PEND_TTGR : 1;
    uint32_t W_PEND_TMAR : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterTWPS;

typedef union {
  struct {
    uint32_t COMPARE_VALUE : 32;
  };
  uint32_t raw;
} RegisterTMAR;

typedef union {
  struct {
    uint32_t CAPTURED_VALUE : 32;
  };
  uint32_t raw;
} RegisterTCAR1;

typedef union {
  struct {
    uint32_t RESERVED2 : 1;
    uint32_t SFT : 1;
    uint32_t POSTED : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterTSICR;

typedef union {
  struct {
    uint32_t CAPTURED_VALUE : 32;
  };
  uint32_t raw;
} RegisterTCAR2;

typedef struct {
  RegisterTIDR TIDR;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterTIOCP_CFG TIOCP_CFG;
  uint8_t RESERVED_OFFSETS_1[16];
  RegisterIRQSTATUS_RAW IRQSTATUS_RAW;
  RegisterIRQSTATUS IRQSTATUS;
  RegisterIRQENABLE_SET IRQENABLE_SET;
  RegisterIRQENABLE_CLR IRQENABLE_CLR;
  RegisterIRQWAKEEN IRQWAKEEN;
  RegisterTCLR TCLR;
  RegisterTCRR TCRR;
  RegisterTLDR TLDR;
  RegisterTTGR TTGR;
  RegisterTWPS TWPS;
  RegisterTMAR TMAR;
  RegisterTCAR1 TCAR1;
  RegisterTSICR TSICR;
  RegisterTCAR2 TCAR2;
} PeripheralDMTIMER0;

typedef union {
  struct {
    uint32_t MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t MAJOR : 3;
    uint32_t RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterGPIO_REVISION;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t ENAWAKEUP : 1;
    uint32_t IDLEMODE : 2;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterGPIO_SYSCONFIG;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_RAW_0;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_RAW_1;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_0;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_1;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_SET_0;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_SET_1;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_CLR_0;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQSTATUS_CLR_1;

typedef union {
  struct {
    uint32_t INTLINE : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQWAKEN_0;

typedef union {
  struct {
    uint32_t INTLINE : 32;
  };
  uint32_t raw;
} RegisterGPIO_IRQWAKEN_1;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterGPIO_SYSSTATUS;

typedef union {
  struct {
    uint32_t DISABLEMODULE : 1;
    uint32_t GATINGRATIO : 2;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterGPIO_CTRL;

typedef union {
  struct {
    uint32_t OUTPUTEN_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_OE;

typedef union {
  struct {
    uint32_t DATAIN : 32;
  };
  uint32_t raw;
} RegisterGPIO_DATAIN;

typedef union {
  struct {
    uint32_t DATAOUT : 32;
  };
  uint32_t raw;
} RegisterGPIO_DATAOUT;

typedef union {
  struct {
    uint32_t LEVELDETECT0_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_LEVELDETECT0;

typedef union {
  struct {
    uint32_t LEVELDETECT1_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_LEVELDETECT1;

typedef union {
  struct {
    uint32_t RISINGDETECT_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_RISINGDETECT;

typedef union {
  struct {
    uint32_t FALLINGDETECT_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_FALLINGDETECT;

typedef union {
  struct {
    uint32_t DEBOUNCEENABLE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_DEBOUNCENABLE;

typedef union {
  struct {
    uint32_t DEBOUNCETIME : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterGPIO_DEBOUNCINGTIME;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_CLEARDATAOUT;

typedef union {
  struct {
    uint32_t INTLINE_N : 32;
  };
  uint32_t raw;
} RegisterGPIO_SETDATAOUT;

typedef struct {
  RegisterGPIO_REVISION GPIO_REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterGPIO_SYSCONFIG GPIO_SYSCONFIG;
  uint8_t RESERVED_OFFSETS_1[16];
  RegisterGPIO_IRQSTATUS_RAW_0 GPIO_IRQSTATUS_RAW_0;
  RegisterGPIO_IRQSTATUS_RAW_1 GPIO_IRQSTATUS_RAW_1;
  RegisterGPIO_IRQSTATUS_0 GPIO_IRQSTATUS_0;
  RegisterGPIO_IRQSTATUS_1 GPIO_IRQSTATUS_1;
  RegisterGPIO_IRQSTATUS_SET_0 GPIO_IRQSTATUS_SET_0;
  RegisterGPIO_IRQSTATUS_SET_1 GPIO_IRQSTATUS_SET_1;
  RegisterGPIO_IRQSTATUS_CLR_0 GPIO_IRQSTATUS_CLR_0;
  RegisterGPIO_IRQSTATUS_CLR_1 GPIO_IRQSTATUS_CLR_1;
  RegisterGPIO_IRQWAKEN_0 GPIO_IRQWAKEN_0;
  RegisterGPIO_IRQWAKEN_1 GPIO_IRQWAKEN_1;
  uint8_t RESERVED_OFFSETS_2[200];
  RegisterGPIO_SYSSTATUS GPIO_SYSSTATUS;
  uint8_t RESERVED_OFFSETS_3[24];
  RegisterGPIO_CTRL GPIO_CTRL;
  RegisterGPIO_OE GPIO_OE;
  RegisterGPIO_DATAIN GPIO_DATAIN;
  RegisterGPIO_DATAOUT GPIO_DATAOUT;
  RegisterGPIO_LEVELDETECT0 GPIO_LEVELDETECT0;
  RegisterGPIO_LEVELDETECT1 GPIO_LEVELDETECT1;
  RegisterGPIO_RISINGDETECT GPIO_RISINGDETECT;
  RegisterGPIO_FALLINGDETECT GPIO_FALLINGDETECT;
  RegisterGPIO_DEBOUNCENABLE GPIO_DEBOUNCENABLE;
  RegisterGPIO_DEBOUNCINGTIME GPIO_DEBOUNCINGTIME;
  uint8_t RESERVED_OFFSETS_4[56];
  RegisterGPIO_CLEARDATAOUT GPIO_CLEARDATAOUT;
  RegisterGPIO_SETDATAOUT GPIO_SETDATAOUT;
} PeripheralGPIO0;

typedef union {
  struct {
    uint16_t CLOCK_LSB : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterDLL;

typedef union {
  struct {
    uint16_t RHR : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterRHR;

typedef union {
  struct {
    uint16_t THR : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterTHR;

typedef union {
  struct {
    uint16_t CLOCK_MSB : 6;
    uint16_t RESERVED1 : 10;
  };
  uint16_t raw;
} RegisterDLH;

typedef union {
  struct {
    uint16_t RHRIT : 1;
    uint16_t THRIT : 1;
    uint16_t RXSTOPIT : 1;
    uint16_t RXOVERRUNIT : 1;
    uint16_t RESERVED2 : 1;
    uint16_t TXSTATUSIT : 1;
    uint16_t RESERVED1 : 10;
  };
  uint16_t raw;
} RegisterIER_CIR;

typedef union {
  struct {
    uint16_t RHRIT : 1;
    uint16_t THRIT : 1;
    uint16_t LINESTSIT : 1;
    uint16_t MODEMSTSIT : 1;
    uint16_t SLEEPMODE : 1;
    uint16_t XOFFIT : 1;
    uint16_t RTSIT : 1;
    uint16_t CTSIT : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterIER_UART;

typedef union {
  struct {
    uint16_t RHRIT : 1;
    uint16_t THRIT : 1;
    uint16_t LASTRXBYTEIT : 1;
    uint16_t RXOVERRUNIT : 1;
    uint16_t STSFIFOTRIGIT : 1;
    uint16_t TXSTATUSIT : 1;
    uint16_t LINESTSIT : 1;
    uint16_t EOFIT : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterIER_IRDA;

typedef union {
  struct {
    uint16_t RHRIT : 1;
    uint16_t THRIT : 1;
    uint16_t RXSTOPIT : 1;
    uint16_t RXOEIT : 1;
    uint16_t RESERVED2 : 1;
    uint16_t TXSTATUSIT : 1;
    uint16_t RESERVED1 : 10;
  };
  uint16_t raw;
} RegisterIIR_CIR;

typedef union {
  struct {
    uint16_t RHR_IT : 1;
    uint16_t THR_IT : 1;
    uint16_t RX_FIFO_LAST_BYTE_IT : 1;
    uint16_t RX_OE_IT : 1;
    uint16_t STS_FIFO_IT : 1;
    uint16_t TX_STATUS_IT : 1;
    uint16_t LINE_STS_IT : 1;
    uint16_t EOF_IT : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterIIR_IRDA;

typedef union {
  struct {
    uint16_t FIFO_EN : 1;
    uint16_t RX_FIFO_CLEAR : 1;
    uint16_t TX_FIFO_CLEAR : 1;
    uint16_t DMA_MODE : 1;
    uint16_t TX_FIFO_TRIG : 2;
    uint16_t RX_FIFO_TRIG : 2;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterFCR;

typedef union {
  struct {
    uint16_t IT_PENDING : 1;
    uint16_t IT_TYPE : 5;
    uint16_t FCR_MIRROR : 2;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterIIR_UART;

typedef union {
  struct {
    uint16_t SWFLOWCONTROL : 4;
    uint16_t ENHANCEDEN : 1;
    uint16_t SPECIALCHARDETECT : 1;
    uint16_t AUTORTSEN : 1;
    uint16_t AUTOCTSEN : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterEFR;

typedef union {
  struct {
    uint16_t CHAR_LENGTH : 2;
    uint16_t NB_STOP : 1;
    uint16_t PARITY_EN : 1;
    uint16_t PARITY_TYPE1 : 1;
    uint16_t PARITY_TYPE2 : 1;
    uint16_t BREAK_EN : 1;
    uint16_t DIV_EN : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterLCR;

typedef union {
  struct {
    uint16_t XONWORD1 : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterXON1_ADDR1;

typedef union {
  struct {
    uint16_t DTR : 1;
    uint16_t RTS : 1;
    uint16_t RISTSCH : 1;
    uint16_t CDSTSCH : 1;
    uint16_t LOOPBACKEN : 1;
    uint16_t XONEN : 1;
    uint16_t TCRTLR : 1;
    uint16_t RESERVED1 : 9;
  };
  uint16_t raw;
} RegisterMCR;

typedef union {
  struct {
    uint16_t RXFIFOE : 1;
    uint16_t RXOE : 1;
    uint16_t RXPE : 1;
    uint16_t RXFE : 1;
    uint16_t RXBI : 1;
    uint16_t TXFIFOE : 1;
    uint16_t TXSRE : 1;
    uint16_t RXFIFOSTS : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterLSR_UART;

typedef union {
  struct {
    uint16_t RXFIFOE : 1;
    uint16_t RESERVED3 : 4;
    uint16_t RXSTOP : 1;
    uint16_t RESERVED2 : 1;
    uint16_t THREMPTY : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterLSR_CIR;

typedef union {
  struct {
    uint16_t RX_FIFO_E : 1;
    uint16_t STS_FIFO_E : 1;
    uint16_t CRC : 1;
    uint16_t ABORT : 1;
    uint16_t FRAME_TOO_LONG : 1;
    uint16_t RX_LAST_BYTE : 1;
    uint16_t STS_FIFO_FULL : 1;
    uint16_t THR_EMPTY : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterLSR_IRDA;

typedef union {
  struct {
    uint16_t XONWORD2 : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterXON2_ADDR2;

typedef union {
  struct {
    uint16_t XOFFWORD1 : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterXOFF1;

typedef union {
  struct {
    uint16_t CTS_STS : 1;
    uint16_t DSR_STS : 1;
    uint16_t RI_STS : 1;
    uint16_t DCD_STS : 1;
    uint16_t NCTS_STS : 1;
    uint16_t NDSR_STS : 1;
    uint16_t NRI_STS : 1;
    uint16_t NCD_STS : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterMSR;

typedef union {
  struct {
    uint16_t RXFIFOTRIGHALT : 4;
    uint16_t RXFIFOTRIGSTART : 4;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterTCR;

typedef union {
  struct {
    uint16_t TX_FIFO_TRIG_DMA : 4;
    uint16_t RX_FIFO_TRIG_DMA : 4;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterTLR;

typedef union {
  struct {
    uint16_t XOFFWORD2 : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterXOFF2;

typedef union {
  struct {
    uint16_t WORD : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterSPR;

typedef union {
  struct {
    uint16_t MODESELECT : 3;
    uint16_t IRSLEEP : 1;
    uint16_t SETTXIR : 1;
    uint16_t SCT : 1;
    uint16_t SIPMODE : 1;
    uint16_t FRAMEENDMODE : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterMDR1;

typedef union {
  struct {
    uint16_t IRTXUNDERRUN : 1;
    uint16_t STSFIFOTRIG : 2;
    uint16_t UARTPULSE : 1;
    uint16_t CIRPULSEMODE : 2;
    uint16_t IRRXINVERT : 1;
    uint16_t SETTXIRALT : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterMDR2;

typedef union {
  struct {
    uint16_t RESERVED2 : 1;
    uint16_t CRC_ERROR : 1;
    uint16_t ABORT_DETECT : 1;
    uint16_t FRAME_TOO_LONG_ERROR : 1;
    uint16_t OE_ERROR : 1;
    uint16_t RESERVED1 : 11;
  };
  uint16_t raw;
} RegisterSFLSR;

typedef union {
  struct {
    uint16_t TXFLL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterTXFLL;

typedef union {
  struct {
    uint16_t TXFLH : 5;
    uint16_t RESERVED1 : 11;
  };
  uint16_t raw;
} RegisterTXFLH;

typedef union {
  struct {
    uint16_t RESUME : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterRESUME;

typedef union {
  struct {
    uint16_t SFREGL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterSFREGL;

typedef union {
  struct {
    uint16_t RXFLL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterRXFLL;

typedef union {
  struct {
    uint16_t RXFLH : 4;
    uint16_t RESERVED1 : 12;
  };
  uint16_t raw;
} RegisterRXFLH;

typedef union {
  struct {
    uint16_t SFREGH : 4;
    uint16_t RESERVED1 : 12;
  };
  uint16_t raw;
} RegisterSFREGH;

typedef union {
  struct {
    uint16_t SPEED : 5;
    uint16_t BITBYCHAR : 1;
    uint16_t PARITYTYPE : 2;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterUASR;

typedef union {
  struct {
    uint16_t RESERVED2 : 6;
    uint16_t XBOFTYPE : 1;
    uint16_t STSFIFORESET : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterBLR;

typedef union {
  struct {
    uint16_t EOTEN : 1;
    uint16_t ABORTEN : 1;
    uint16_t SCTXEN : 1;
    uint16_t SENDSIP : 1;
    uint16_t DISTXUNDERRUN : 1;
    uint16_t DISIRRX : 1;
    uint16_t SDMOD : 1;
    uint16_t PULSETYPE : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterACREG;

typedef union {
  struct {
    uint16_t DMAMODECTL : 1;
    uint16_t DMAMODE2 : 2;
    uint16_t TXEMPTYCTLIT : 1;
    uint16_t RXCTSDSRWAKEUPENABLE : 1;
    uint16_t DSRIT : 1;
    uint16_t TXTRIGGRANU1 : 1;
    uint16_t RXTRIGGRANU1 : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterSCR;

typedef union {
  struct {
    uint16_t TXFIFOFULL : 1;
    uint16_t RXCTSDSRWAKEUPSTS : 1;
    uint16_t DMACOUNTERRST : 1;
    uint16_t RESERVED1 : 13;
  };
  uint16_t raw;
} RegisterSSR;

typedef union {
  struct {
    uint16_t EBLR : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterEBLR;

typedef union {
  struct {
    uint16_t MINORREV : 4;
    uint16_t MAJORREV : 4;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterMVR;

typedef union {
  struct {
    uint16_t AUTOIDLE : 1;
    uint16_t SOFTRESET : 1;
    uint16_t ENAWAKEUP : 1;
    uint16_t IDLEMODE : 2;
    uint16_t RESERVED1 : 11;
  };
  uint16_t raw;
} RegisterSYSC;

typedef union {
  struct {
    uint16_t RESETDONE : 1;
    uint16_t RESERVED1 : 15;
  };
  uint16_t raw;
} RegisterSYSS;

typedef union {
  struct {
    uint16_t CTS_ACTIVITY : 1;
    uint16_t DSR_ACTIVITY : 1;
    uint16_t RI_ACTIVITY : 1;
    uint16_t DCD_ACTIVITY : 1;
    uint16_t RX_ACTIVITY : 1;
    uint16_t RHR_INTERRUPT : 1;
    uint16_t RLS_INTERRUPT : 1;
    uint16_t TXWAKEUPEN : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterWER;

typedef union {
  struct {
    uint16_t CFPS : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterCFPS;

typedef union {
  struct {
    uint16_t RXFIFO_LVL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterRXFIFO_LVL;

typedef union {
  struct {
    uint16_t TXFIFO_LVL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterTXFIFO_LVL;

typedef union {
  struct {
    uint16_t EN_RXFIFO_EMPTY : 1;
    uint16_t EN_TXFIFO_EMPTY : 1;
    uint16_t RESERVED1 : 14;
  };
  uint16_t raw;
} RegisterIER2;

typedef union {
  struct {
    uint16_t RXFIFO_EMPTY_STS : 1;
    uint16_t TXFIFO_EMPTY_STS : 1;
    uint16_t RESERVED1 : 14;
  };
  uint16_t raw;
} RegisterISR2;

typedef union {
  struct {
    uint16_t FREQ_SEL : 8;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterFREQ_SEL;

typedef union {
  struct {
    uint16_t DISABLE_CIR_RX_DEMOD : 1;
    uint16_t NONDEFAULT_FREQ : 1;
    uint16_t SET_DMA_TX_THRESHOLD : 1;
    uint16_t RESERVED1 : 13;
  };
  uint16_t raw;
} RegisterMDR3;

typedef union {
  struct {
    uint16_t TX_DMA_THRESHOLD : 6;
    uint16_t RESERVED1 : 10;
  };
  uint16_t raw;
} RegisterTX_DMA_THRESHOLD;

typedef struct {
  union {
    RegisterDLL DLL;
    RegisterRHR RHR;
    RegisterTHR THR;
  };
  uint8_t RESERVED_OFFSETS_0[2];
  union {
    RegisterDLH DLH;
    RegisterIER_CIR IER_CIR;
    RegisterIER_UART IER_UART;
    RegisterIER_IRDA IER_IRDA;
  };
  uint8_t RESERVED_OFFSETS_1[2];
  union {
    RegisterIIR_CIR IIR_CIR;
    RegisterIIR_IRDA IIR_IRDA;
    RegisterFCR FCR;
    RegisterIIR_UART IIR_UART;
    RegisterEFR EFR;
  };
  uint8_t RESERVED_OFFSETS_2[2];
  RegisterLCR LCR;
  uint8_t RESERVED_OFFSETS_3[2];
  union {
    RegisterXON1_ADDR1 XON1_ADDR1;
    RegisterMCR MCR;
  };
  uint8_t RESERVED_OFFSETS_4[2];
  union {
    RegisterLSR_UART LSR_UART;
    RegisterLSR_CIR LSR_CIR;
    RegisterLSR_IRDA LSR_IRDA;
    RegisterXON2_ADDR2 XON2_ADDR2;
  };
  uint8_t RESERVED_OFFSETS_5[2];
  union {
    RegisterXOFF1 XOFF1;
    RegisterMSR MSR;
    RegisterTCR TCR;
  };
  uint8_t RESERVED_OFFSETS_6[2];
  union {
    RegisterTLR TLR;
    RegisterXOFF2 XOFF2;
    RegisterSPR SPR;
  };
  uint8_t RESERVED_OFFSETS_7[2];
  RegisterMDR1 MDR1;
  uint8_t RESERVED_OFFSETS_8[2];
  RegisterMDR2 MDR2;
  uint8_t RESERVED_OFFSETS_9[2];
  union {
    RegisterSFLSR SFLSR;
    RegisterTXFLL TXFLL;
  };
  uint8_t RESERVED_OFFSETS_10[2];
  union {
    RegisterTXFLH TXFLH;
    RegisterRESUME RESUME;
  };
  uint8_t RESERVED_OFFSETS_11[2];
  union {
    RegisterSFREGL SFREGL;
    RegisterRXFLL RXFLL;
  };
  uint8_t RESERVED_OFFSETS_12[2];
  union {
    RegisterRXFLH RXFLH;
    RegisterSFREGH SFREGH;
  };
  uint8_t RESERVED_OFFSETS_13[2];
  union {
    RegisterUASR UASR;
    RegisterBLR BLR;
  };
  uint8_t RESERVED_OFFSETS_14[2];
  RegisterACREG ACREG;
  uint8_t RESERVED_OFFSETS_15[2];
  RegisterSCR SCR;
  uint8_t RESERVED_OFFSETS_16[2];
  RegisterSSR SSR;
  uint8_t RESERVED_OFFSETS_17[2];
  RegisterEBLR EBLR;
  uint8_t RESERVED_OFFSETS_18[6];
  RegisterMVR MVR;
  uint8_t RESERVED_OFFSETS_19[2];
  RegisterSYSC SYSC;
  uint8_t RESERVED_OFFSETS_20[2];
  RegisterSYSS SYSS;
  uint8_t RESERVED_OFFSETS_21[2];
  RegisterWER WER;
  uint8_t RESERVED_OFFSETS_22[2];
  RegisterCFPS CFPS;
  uint8_t RESERVED_OFFSETS_23[2];
  RegisterRXFIFO_LVL RXFIFO_LVL;
  uint8_t RESERVED_OFFSETS_24[2];
  RegisterTXFIFO_LVL TXFIFO_LVL;
  uint8_t RESERVED_OFFSETS_25[2];
  RegisterIER2 IER2;
  uint8_t RESERVED_OFFSETS_26[2];
  RegisterISR2 ISR2;
  uint8_t RESERVED_OFFSETS_27[2];
  RegisterFREQ_SEL FREQ_SEL;
  uint8_t RESERVED_OFFSETS_28[10];
  RegisterMDR3 MDR3;
  uint8_t RESERVED_OFFSETS_29[2];
  RegisterTX_DMA_THRESHOLD TX_DMA_THRESHOLD;
} PeripheralUART0;

typedef union {
  struct {
    uint32_t MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t MAJOR : 3;
    uint32_t RTL : 5;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_REVNB_LO;

typedef union {
  struct {
    uint32_t FUNC : 12;
    uint32_t RESERVED2 : 2;
    uint32_t SCHEME : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_REVNB_HI;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SRST : 1;
    uint32_t ENAWAKEUP : 1;
    uint32_t IDLEMODE : 2;
    uint32_t RESERVED_2 : 3;
    uint32_t CLKACTIVITY : 2;
    uint32_t RESERVED_1 : 22;
  };
  uint32_t raw;
} RegisterI2C_SYSC;

typedef union {
  struct {
    uint32_t AL : 1;
    uint32_t NACK : 1;
    uint32_t ARDY : 1;
    uint32_t RRDY : 1;
    uint32_t XRDY : 1;
    uint32_t GC : 1;
    uint32_t STC : 1;
    uint32_t AERR : 1;
    uint32_t BF : 1;
    uint32_t AAS : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t BB : 1;
    uint32_t RDR : 1;
    uint32_t XDR : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_IRQSTATUS_RAW;

typedef union {
  struct {
    uint32_t AL : 1;
    uint32_t NACK : 1;
    uint32_t ARDY : 1;
    uint32_t RRDY : 1;
    uint32_t XRDY : 1;
    uint32_t GC : 1;
    uint32_t STC : 1;
    uint32_t AERR : 1;
    uint32_t BF : 1;
    uint32_t AAS : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t BB : 1;
    uint32_t RDR : 1;
    uint32_t XDR : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_IRQSTATUS;

typedef union {
  struct {
    uint32_t AL_IE : 1;
    uint32_t NACK_IE : 1;
    uint32_t ARDY_IE : 1;
    uint32_t RRDY_IE : 1;
    uint32_t XRDY_IE : 1;
    uint32_t GC_IE : 1;
    uint32_t STC_IE : 1;
    uint32_t AERR_IE : 1;
    uint32_t BF_IE : 1;
    uint32_t AAS_IE : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t RESERVED_2 : 1;
    uint32_t RDR_IE : 1;
    uint32_t XDR_IE : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_IRQENABLE_SET;

typedef union {
  struct {
    uint32_t AL_IE : 1;
    uint32_t NACK_IE : 1;
    uint32_t ARDY_IE : 1;
    uint32_t RRDY_IE : 1;
    uint32_t XRDY_IE : 1;
    uint32_t GC_IE : 1;
    uint32_t STC_IE : 1;
    uint32_t AERR_IE : 1;
    uint32_t BF_IE : 1;
    uint32_t AAS_IE : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t RESERVED_2 : 1;
    uint32_t RDR_IE : 1;
    uint32_t XDR_IE : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_IRQENABLE_CLR;

typedef union {
  struct {
    uint32_t AL_WE : 1;
    uint32_t NACK_WE : 1;
    uint32_t ARDY_WE : 1;
    uint32_t DRDY_WE : 1;
    uint32_t RESERVED4 : 1;
    uint32_t GC_WE : 1;
    uint32_t STC_WE : 1;
    uint32_t RESERVED3 : 1;
    uint32_t BF_WE : 1;
    uint32_t AAS_WE : 1;
    uint32_t XUDF_WE : 1;
    uint32_t ROVR_WE : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RDR_WE : 1;
    uint32_t XDR_WE : 1;
    uint32_t RESERVED1 : 17;
  };
  uint32_t raw;
} RegisterI2C_WE;

typedef union {
  struct {
    uint32_t DMARX_ENABLE_SET : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterI2C_DMARXENABLE_SET;

typedef union {
  struct {
    uint32_t DMATX_TRANSMIT_SET : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterI2C_DMATXENABLE_SET;

typedef union {
  struct {
    uint32_t DMARX_ENABLE_CLEAR : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterI2C_DMARXENABLE_CLR;

typedef union {
  struct {
    uint32_t DMARX_ENABLE_CLEAR : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterI2C_DMATXENABLE_CLR;

typedef union {
  struct {
    uint32_t AL : 1;
    uint32_t NACK : 1;
    uint32_t ARDY : 1;
    uint32_t DRDY : 1;
    uint32_t RESERVED_4 : 1;
    uint32_t GC : 1;
    uint32_t STC : 1;
    uint32_t RESERVED3 : 1;
    uint32_t BF : 1;
    uint32_t AAS : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t RESERVED_2 : 1;
    uint32_t RDR : 1;
    uint32_t XDR : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_DMARXWAKE_EN;

typedef union {
  struct {
    uint32_t AL : 1;
    uint32_t NACK : 1;
    uint32_t ARDY : 1;
    uint32_t DRDY : 1;
    uint32_t RESERVED_4 : 1;
    uint32_t GC : 1;
    uint32_t STC : 1;
    uint32_t RESERVED3 : 1;
    uint32_t BF : 1;
    uint32_t AAS : 1;
    uint32_t XUDF : 1;
    uint32_t ROVR : 1;
    uint32_t RESERVED_2 : 1;
    uint32_t RDR : 1;
    uint32_t XDR : 1;
    uint32_t RESERVED_1 : 17;
  };
  uint32_t raw;
} RegisterI2C_DMATXWAKE_EN;

typedef union {
  struct {
    uint32_t RDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterI2C_SYSS;

typedef union {
  struct {
    uint32_t TXTRSH : 6;
    uint32_t TXFIFO_CLR : 1;
    uint32_t XDMA_EN : 1;
    uint32_t RXTRSH : 6;
    uint32_t RXFIFO_CLR : 1;
    uint32_t RDMA_EN : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_BUF;

typedef union {
  struct {
    uint32_t DCOUNT : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_CNT;

typedef union {
  struct {
    uint32_t DATA : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterI2C_DATA;

typedef union {
  struct {
    uint32_t STT : 1;
    uint32_t STP : 1;
    uint32_t RESERVED_3 : 2;
    uint32_t XOA3 : 1;
    uint32_t XOA2 : 1;
    uint32_t XOA1 : 1;
    uint32_t XOA0 : 1;
    uint32_t XSA : 1;
    uint32_t TRX : 1;
    uint32_t MST : 1;
    uint32_t STB : 1;
    uint32_t OPMODE : 2;
    uint32_t RESERVED_2 : 1;
    uint32_t I2C_EN : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_CON;

typedef union {
  struct {
    uint32_t OA : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterI2C_OA;

typedef union {
  struct {
    uint32_t SA : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterI2C_SA;

typedef union {
  struct {
    uint32_t PSC : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterI2C_PSC;

typedef union {
  struct {
    uint32_t SCLL : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterI2C_SCLL;

typedef union {
  struct {
    uint32_t SCLH : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterI2C_SCLH;

typedef union {
  struct {
    uint32_t SDA_O : 1;
    uint32_t SDA_I : 1;
    uint32_t SCL_O : 1;
    uint32_t SCL_I : 1;
    uint32_t RESERVED_3 : 1;
    uint32_t SDA_O_FUNC : 1;
    uint32_t SDA_I_FUNC : 1;
    uint32_t SCL_O_FUNC : 1;
    uint32_t SCL_I_FUNC : 1;
    uint32_t RESERVED_2 : 2;
    uint32_t SSB : 1;
    uint32_t TMODE : 2;
    uint32_t FREE : 1;
    uint32_t ST_EN : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_SYSTEST;

typedef union {
  struct {
    uint32_t TXSTAT : 6;
    uint32_t RESERVED_2 : 2;
    uint32_t RXSTAT : 6;
    uint32_t FIFODEPTH : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterI2C_BUFSTAT;

typedef union {
  struct {
    uint32_t OA1 : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterI2C_OA1;

typedef union {
  struct {
    uint32_t OA2 : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterI2C_OA2;

typedef union {
  struct {
    uint32_t OA3 : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterI2C_OA3;

typedef union {
  struct {
    uint32_t OA0_ACT : 1;
    uint32_t OA1_ACT : 1;
    uint32_t OA2_ACT : 1;
    uint32_t OA3_ACT : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterI2C_ACTOA;

typedef union {
  struct {
    uint32_t OA0_EN : 1;
    uint32_t OA1_EN : 1;
    uint32_t OA2_EN : 1;
    uint32_t OA3_EN : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterI2C_SBLOCK;

typedef struct {
  RegisterI2C_REVNB_LO I2C_REVNB_LO;
  RegisterI2C_REVNB_HI I2C_REVNB_HI;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterI2C_SYSC I2C_SYSC;
  uint8_t RESERVED_OFFSETS_1[16];
  RegisterI2C_IRQSTATUS_RAW I2C_IRQSTATUS_RAW;
  RegisterI2C_IRQSTATUS I2C_IRQSTATUS;
  RegisterI2C_IRQENABLE_SET I2C_IRQENABLE_SET;
  RegisterI2C_IRQENABLE_CLR I2C_IRQENABLE_CLR;
  RegisterI2C_WE I2C_WE;
  RegisterI2C_DMARXENABLE_SET I2C_DMARXENABLE_SET;
  RegisterI2C_DMATXENABLE_SET I2C_DMATXENABLE_SET;
  RegisterI2C_DMARXENABLE_CLR I2C_DMARXENABLE_CLR;
  RegisterI2C_DMATXENABLE_CLR I2C_DMATXENABLE_CLR;
  RegisterI2C_DMARXWAKE_EN I2C_DMARXWAKE_EN;
  RegisterI2C_DMATXWAKE_EN I2C_DMATXWAKE_EN;
  uint8_t RESERVED_OFFSETS_2[64];
  RegisterI2C_SYSS I2C_SYSS;
  RegisterI2C_BUF I2C_BUF;
  RegisterI2C_CNT I2C_CNT;
  RegisterI2C_DATA I2C_DATA;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterI2C_CON I2C_CON;
  RegisterI2C_OA I2C_OA;
  RegisterI2C_SA I2C_SA;
  RegisterI2C_PSC I2C_PSC;
  RegisterI2C_SCLL I2C_SCLL;
  RegisterI2C_SCLH I2C_SCLH;
  RegisterI2C_SYSTEST I2C_SYSTEST;
  RegisterI2C_BUFSTAT I2C_BUFSTAT;
  RegisterI2C_OA1 I2C_OA1;
  RegisterI2C_OA2 I2C_OA2;
  RegisterI2C_OA3 I2C_OA3;
  RegisterI2C_ACTOA I2C_ACTOA;
  RegisterI2C_SBLOCK I2C_SBLOCK;
} PeripheralI2C0;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterREVISION;

typedef union {
  struct {
    uint32_t RESERVED1 : 2;
    uint32_t IDLEMODE : 2;
    uint32_t RESERVED : 28;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t HW_PEN_EVENT_ASYNCHRONOUS : 1;
    uint32_t END_OF_SEQUENCE : 1;
    uint32_t FIFO0_THRESHOLD : 1;
    uint32_t FIFO0_OVERRUN : 1;
    uint32_t FIFO0_UNDERFLOW : 1;
    uint32_t FIFO1_THRESHOLD : 1;
    uint32_t FIFO1_OVERRUN : 1;
    uint32_t FIFO1_UNDERFLOW : 1;
    uint32_t OUT_OF_RANGE : 1;
    uint32_t PEN_UP_EVENT : 1;
    uint32_t PEN_IRQ_SYNCHRONIZED : 1;
    uint32_t RESERVED : 21;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW;

typedef union {
  struct {
    uint32_t HW_PEN_EVENT_ASYNCHRONOUS : 1;
    uint32_t END_OF_SEQUENCE : 1;
    uint32_t FIFO0_THRESHOLD : 1;
    uint32_t FIFO0_OVERRUN : 1;
    uint32_t FIFO0_UNDERFLOW : 1;
    uint32_t FIFO1_THRESHOLD : 1;
    uint32_t FIFO1_OVERRUN : 1;
    uint32_t FIFO1_UNDERFLOW : 1;
    uint32_t OUT_OF_RANGE : 1;
    uint32_t PEN_UP_EVENT : 1;
    uint32_t HW_PEN_EVENT_SYNCHRONOUS : 1;
    uint32_t RESERVED : 21;
  };
  uint32_t raw;
} RegisterIRQSTATUS;

typedef union {
  struct {
    uint32_t HW_PEN_EVENT_ASYNCHRONOUS : 1;
    uint32_t END_OF_SEQUENCE : 1;
    uint32_t FIFO0_THRESHOLD : 1;
    uint32_t FIFO0_OVERRUN : 1;
    uint32_t FIFO0_UNDERFLOW : 1;
    uint32_t FIFO1_THRESHOLD : 1;
    uint32_t FIFO1_OVERRUN : 1;
    uint32_t FIFO1_UNDERFLOW : 1;
    uint32_t OUT_OF_RANGE : 1;
    uint32_t PEN_UP_EVENT : 1;
    uint32_t HW_PEN_EVENT_SYNCHRONOUS : 1;
    uint32_t RESERVED : 21;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET;

typedef union {
  struct {
    uint32_t HW_PEN_EVENT_ASYNCHRONOUS : 1;
    uint32_t END_OF_SEQUENCE : 1;
    uint32_t FIFO0_THRESHOLD : 1;
    uint32_t FIFO0_OVERRUN : 1;
    uint32_t FIFO0_UNDERFLOW : 1;
    uint32_t FIFO1_THRESHOLD : 1;
    uint32_t FIFO1_OVERRUN : 1;
    uint32_t FIFO1_UNDERFLOW : 1;
    uint32_t OUT_OF_RANGE : 1;
    uint32_t PEN_UP_EVENT : 1;
    uint32_t HW_PEN_EVENT_SYNCHRONOUS : 1;
    uint32_t RESERVED : 21;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR;

typedef union {
  struct {
    uint32_t WAKEEN0 : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterIRQWAKEUP;

typedef union {
  struct {
    uint32_t ENABLE_0 : 1;
    uint32_t ENABLE_1 : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMAENABLE_SET;

typedef union {
  struct {
    uint32_t ENABLE_0 : 1;
    uint32_t ENABLE_1 : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMAENABLE_CLR;

typedef union {
  struct {
    uint32_t ENABLE : 1;
    uint32_t STEP_ID_TAG : 1;
    uint32_t STEPCONFIG_WRITEPROTECT_N_ACTIVE_LOW : 1;
    uint32_t ADC_BIAS_SELECT : 1;
    uint32_t POWER_DOWN : 1;
    uint32_t AFE_PEN_CTRL : 2;
    uint32_t TOUCH_SCREEN_ENABLE : 1;
    uint32_t HW_EVENT_MAPPING : 1;
    uint32_t HW_PREEMPT : 1;
    uint32_t RESERVED : 22;
  };
  uint32_t raw;
} RegisterCTRL;

typedef union {
  struct {
    uint32_t STEP_ID : 5;
    uint32_t FSM_BUSY : 1;
    uint32_t PEN_IRQ0 : 1;
    uint32_t PEN_IRQ1 : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterADCSTAT;

typedef union {
  struct {
    uint32_t LOW_RANGE_DATA : 12;
    uint32_t RESERVED2 : 4;
    uint32_t HIGH_RANGE_DATA : 12;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterADCRANGE;

typedef union {
  struct {
    uint32_t ADC_CLKDIV : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterADC_CLKDIV;

typedef union {
  struct {
    uint32_t AFE_SPARE_INPUT : 4;
    uint32_t AFE_SPARE_OUTPUT : 4;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterADC_MISC;

typedef union {
  struct {
    uint32_t TS_CHARGE : 1;
    uint32_t STEP1 : 1;
    uint32_t STEP2 : 1;
    uint32_t STEP3 : 1;
    uint32_t STEP4 : 1;
    uint32_t STEP5 : 1;
    uint32_t STEP6 : 1;
    uint32_t STEP7 : 1;
    uint32_t STEP8 : 1;
    uint32_t STEP9 : 1;
    uint32_t STEP10 : 1;
    uint32_t STEP11 : 1;
    uint32_t STEP12 : 1;
    uint32_t STEP13 : 1;
    uint32_t STEP14 : 1;
    uint32_t STEP15 : 1;
    uint32_t STEP16 : 1;
    uint32_t RESERVED : 15;
  };
  uint32_t raw;
} RegisterSTEPENABLE;

typedef union {
  struct {
    uint32_t RESERVED : 5;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWM3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterIDLECONFIG;

typedef union {
  struct {
    uint32_t RESERVED : 5;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWM3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterTS_CHARGE_STEPCONFIG;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 14;
  };
  uint32_t raw;
} RegisterTS_CHARGE_DELAY;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG1;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY1;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG2;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY2;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG3;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY3;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG4;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY4;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG5;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY5;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG6;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY6;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG7;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY7;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG8;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY8;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG9;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY9;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG10;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY10;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG11;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY11;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG12;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY12;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG13;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY13;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG14;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY14;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG15;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY15;

typedef union {
  struct {
    uint32_t MODE : 2;
    uint32_t AVERAGING : 3;
    uint32_t XPPSW_SWC : 1;
    uint32_t XNNSW_SWC : 1;
    uint32_t YPPSW_SWC : 1;
    uint32_t YNNSW_SWC : 1;
    uint32_t XNPSW_SWC : 1;
    uint32_t YPNSW_SWC : 1;
    uint32_t WPNSW_SWC : 1;
    uint32_t SEL_RFP_SWC_2_0 : 3;
    uint32_t SEL_INM_SWC_3_0 : 4;
    uint32_t SEL_INP_SWC_3_0 : 4;
    uint32_t SEL_RFM_SWC_1_0 : 2;
    uint32_t DIFF_CNTRL : 1;
    uint32_t FIFO_SELECT : 1;
    uint32_t RANGE_CHECK : 1;
    uint32_t RESERVED : 4;
  };
  uint32_t raw;
} RegisterSTEPCONFIG16;

typedef union {
  struct {
    uint32_t OPENDELAY : 18;
    uint32_t RESERVED : 6;
    uint32_t SAMPLEDELAY : 8;
  };
  uint32_t raw;
} RegisterSTEPDELAY16;

typedef union {
  struct {
    uint32_t WORDS_IN_FIFO0 : 7;
    uint32_t RESERVED : 25;
  };
  uint32_t raw;
} RegisterFIFO0COUNT;

typedef union {
  struct {
    uint32_t FIFO0_THRESHOLD_LEVEL : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterFIFO0THRESHOLD;

typedef union {
  struct {
    uint32_t DMA_REQUEST_LEVEL : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterDMA0REQ;

typedef union {
  struct {
    uint32_t WORDS_IN_FIFO0 : 7;
    uint32_t RESERVED : 25;
  };
  uint32_t raw;
} RegisterFIFO1COUNT;

typedef union {
  struct {
    uint32_t FIFO0_THRESHOLD_LEVEL : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterFIFO1THRESHOLD;

typedef union {
  struct {
    uint32_t DMA_REQUEST_LEVEL : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterDMA1REQ;

typedef union {
  struct {
    uint32_t ADCDATA : 12;
    uint32_t RESERVED1 : 4;
    uint32_t ADCCHNLID : 4;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterFIFO0DATA;

typedef union {
  struct {
    uint32_t ADCDATA : 12;
    uint32_t RESERVED1 : 4;
    uint32_t ADCCHNLID : 4;
    uint32_t RESERVED : 12;
  };
  uint32_t raw;
} RegisterFIFO1DATA;

typedef struct {
  RegisterREVISION REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  uint8_t RESERVED_OFFSETS_1[16];
  RegisterIRQSTATUS_RAW IRQSTATUS_RAW;
  RegisterIRQSTATUS IRQSTATUS;
  RegisterIRQENABLE_SET IRQENABLE_SET;
  RegisterIRQENABLE_CLR IRQENABLE_CLR;
  RegisterIRQWAKEUP IRQWAKEUP;
  RegisterDMAENABLE_SET DMAENABLE_SET;
  RegisterDMAENABLE_CLR DMAENABLE_CLR;
  RegisterCTRL CTRL;
  RegisterADCSTAT ADCSTAT;
  RegisterADCRANGE ADCRANGE;
  RegisterADC_CLKDIV ADC_CLKDIV;
  RegisterADC_MISC ADC_MISC;
  RegisterSTEPENABLE STEPENABLE;
  RegisterIDLECONFIG IDLECONFIG;
  RegisterTS_CHARGE_STEPCONFIG TS_CHARGE_STEPCONFIG;
  RegisterTS_CHARGE_DELAY TS_CHARGE_DELAY;
  RegisterSTEPCONFIG1 STEPCONFIG1;
  RegisterSTEPDELAY1 STEPDELAY1;
  RegisterSTEPCONFIG2 STEPCONFIG2;
  RegisterSTEPDELAY2 STEPDELAY2;
  RegisterSTEPCONFIG3 STEPCONFIG3;
  RegisterSTEPDELAY3 STEPDELAY3;
  RegisterSTEPCONFIG4 STEPCONFIG4;
  RegisterSTEPDELAY4 STEPDELAY4;
  RegisterSTEPCONFIG5 STEPCONFIG5;
  RegisterSTEPDELAY5 STEPDELAY5;
  RegisterSTEPCONFIG6 STEPCONFIG6;
  RegisterSTEPDELAY6 STEPDELAY6;
  RegisterSTEPCONFIG7 STEPCONFIG7;
  RegisterSTEPDELAY7 STEPDELAY7;
  RegisterSTEPCONFIG8 STEPCONFIG8;
  RegisterSTEPDELAY8 STEPDELAY8;
  RegisterSTEPCONFIG9 STEPCONFIG9;
  RegisterSTEPDELAY9 STEPDELAY9;
  RegisterSTEPCONFIG10 STEPCONFIG10;
  RegisterSTEPDELAY10 STEPDELAY10;
  RegisterSTEPCONFIG11 STEPCONFIG11;
  RegisterSTEPDELAY11 STEPDELAY11;
  RegisterSTEPCONFIG12 STEPCONFIG12;
  RegisterSTEPDELAY12 STEPDELAY12;
  RegisterSTEPCONFIG13 STEPCONFIG13;
  RegisterSTEPDELAY13 STEPDELAY13;
  RegisterSTEPCONFIG14 STEPCONFIG14;
  RegisterSTEPDELAY14 STEPDELAY14;
  RegisterSTEPCONFIG15 STEPCONFIG15;
  RegisterSTEPDELAY15 STEPDELAY15;
  RegisterSTEPCONFIG16 STEPCONFIG16;
  RegisterSTEPDELAY16 STEPDELAY16;
  RegisterFIFO0COUNT FIFO0COUNT;
  RegisterFIFO0THRESHOLD FIFO0THRESHOLD;
  RegisterDMA0REQ DMA0REQ;
  RegisterFIFO1COUNT FIFO1COUNT;
  RegisterFIFO1THRESHOLD FIFO1THRESHOLD;
  RegisterDMA1REQ DMA1REQ;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterFIFO0DATA FIFO0DATA;
  uint8_t RESERVED_OFFSETS_3[252];
  RegisterFIFO1DATA FIFO1DATA;
} PeripheralADC_TSC;

typedef union {
  struct {
    uint32_t IP_REV_MINOR : 6;
    uint32_t IP_REV_CUSTOM : 2;
    uint32_t IP_REV_MAJOR : 3;
    uint32_t IP_REV_RTL : 5;
    uint32_t IP_REV_FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t IP_REV_SCHEME : 2;
  };
  uint32_t raw;
} RegisterCONTROL_REVISION;

typedef union {
  struct {
    uint32_t IP_HWINFO : 32;
  };
  uint32_t raw;
} RegisterCONTROL_HWINFO;

typedef union {
  struct {
    uint32_t RESERVED2 : 1;
    uint32_t FREEEMU : 1;
    uint32_t IDLEMODE : 2;
    uint32_t STANDBY : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterCONTROL_SYSCONFIG;

typedef union {
  struct {
    uint32_t SYSBOOT0 : 8;
    uint32_t DEVTYPE : 3;
    uint32_t RESERVED2 : 5;
    uint32_t BW : 1;
    uint32_t WAITEN : 1;
    uint32_t ADMUX : 2;
    uint32_t TESTMD : 2;
    uint32_t SYSBOOT1 : 2;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterCONTROL_STATUS;

typedef union {
  struct {
    uint32_t PAGESIZE : 3;
    uint32_t EBANK : 1;
    uint32_t IBANK : 3;
    uint32_t ROWSIZE : 3;
    uint32_t CL : 4;
    uint32_t NARROW_MODE : 2;
    uint32_t CWL : 2;
    uint32_t SDRAM_DRIVE : 2;
    uint32_t RESERVED1 : 1;
    uint32_t DYN_ODT : 2;
    uint32_t DDR2_DDQS : 1;
    uint32_t DDR_TERM : 3;
    uint32_t IBANK_POS : 2;
    uint32_t SDRAM_TYPE : 3;
  };
  uint32_t raw;
} RegisterCONTROL_EMIF_SDRAM_CONFIG;

typedef union {
  struct {
    uint32_t NOVBGBYR : 1;
    uint32_t NOCAP : 1;
    uint32_t BBSEL : 1;
    uint32_t HZ : 1;
    uint32_t LOWPWR : 1;
    uint32_t LDOBYPASSZ : 1;
    uint32_t RESERVED2 : 10;
    uint32_t VSETRBB : 5;
    uint32_t VSETFBB : 5;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCORTEX_VBBLDO_CTRL;

typedef union {
  struct {
    uint32_t RESERVED2 : 16;
    uint32_t VSET : 10;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCORE_SLDO_CTRL;

typedef union {
  struct {
    uint32_t RESERVED2 : 16;
    uint32_t VSET : 10;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterMPU_SLDO_CTRL;

typedef union {
  struct {
    uint32_t CLKDIVOPP50_EN : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterCLK32KDIVRATIO_CTRL;

typedef union {
  struct {
    uint32_t TSHUT : 1;
    uint32_t ECOZ : 1;
    uint32_t CONTCONV : 1;
    uint32_t CLRZ : 1;
    uint32_t SOC : 1;
    uint32_t TMPSOFF : 1;
    uint32_t BGROFF : 1;
    uint32_t CBIASSEL : 1;
    uint32_t DTEMP : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterBANDGAP_CTRL;

typedef union {
  struct {
    uint32_t DTRTEMPSC : 8;
    uint32_t DTRTEMPS : 8;
    uint32_t DTRBGAPV : 8;
    uint32_t DTRBGAPC : 8;
  };
  uint32_t raw;
} RegisterBANDGAP_TRIM;

typedef union {
  struct {
    uint32_t MPU_DPLL_CLKINPULOW_SEL : 1;
    uint32_t DISP_PLL_CLKINPULOW_SEL : 1;
    uint32_t DDR_PLL_CLKINPULOW_SEL : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterPLL_CLKINPULOW_CTRL;

typedef union {
  struct {
    uint32_t RESSELECT : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterMOSC_CTRL;

typedef union {
  struct {
    uint32_t DSCOUNT : 16;
    uint32_t RESERVED2 : 1;
    uint32_t DSENABLE : 1;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterDEEPSLEEP_CTRL;

typedef union {
  struct {
    uint32_t RESERVED4 : 8;
    uint32_t PONOUT_PER : 1;
    uint32_t PGOODOUT_PER : 1;
    uint32_t RESERVED3 : 6;
    uint32_t PONOUT_DISP : 1;
    uint32_t PGOODOUT_DISP : 1;
    uint32_t RESERVED2 : 6;
    uint32_t PONOUT_DDR : 1;
    uint32_t PGOODOUT_DDR : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterDPLL_PWR_SW_STATUS;

typedef union {
  struct {
    uint32_t RESERVED1 : 1;
    uint32_t MFGR : 11;
    uint32_t PARTNUM : 16;
    uint32_t DEVREV : 4;
  };
  uint32_t raw;
} RegisterDEVICE_ID;

typedef union {
  struct {
    uint32_t PRU_ICSS : 1;
    uint32_t CPSW : 1;
    uint32_t RESERVED7 : 5;
    uint32_t DCAN : 1;
    uint32_t RESERVED6 : 1;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED4 : 6;
    uint32_t PRU_ICSS_FEA_0 : 1;
    uint32_t PRU_ICSS_FEA_1 : 1;
    uint32_t RESERVED3 : 6;
    uint32_t RESERVED2 : 5;
    uint32_t SGX : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterDEV_FEATURE;

typedef union {
  struct {
    uint32_t HOST_ARM : 2;
    uint32_t RESERVED3 : 2;
    uint32_t PRU_ICSS : 2;
    uint32_t MMU : 2;
    uint32_t RESERVED2 : 6;
    uint32_t P1500 : 2;
    uint32_t TCRD0 : 2;
    uint32_t TCWR0 : 2;
    uint32_t TCRD1 : 2;
    uint32_t TCWR1 : 2;
    uint32_t TCRD2 : 2;
    uint32_t TCWR2 : 2;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterINIT_PRIORITY_0;

typedef union {
  struct {
    uint32_t CPSW : 2;
    uint32_t RESERVED5 : 2;
    uint32_t USB_DMA : 2;
    uint32_t USB_QMGR : 2;
    uint32_t RESERVED4 : 8;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 2;
    uint32_t SGX : 2;
    uint32_t LCD : 2;
    uint32_t DEBUG : 2;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterINIT_PRIORITY_1;

typedef union {
  struct {
    uint32_t RESERVED3 : 7;
    uint32_t MMU_DISABLE : 1;
    uint32_t RESERVED2 : 7;
    uint32_t MMU_ABORT : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMMU_CFG;

typedef union {
  struct {
    uint32_t TC0DBS : 2;
    uint32_t TC1DBS : 2;
    uint32_t TC2DBS : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterTPTC_CFG;

typedef union {
  struct {
    uint32_t CM_PWRDN : 1;
    uint32_t OTG_PWRDN : 1;
    uint32_t CHGDET_DIS : 1;
    uint32_t CHGDET_RSTRT : 1;
    uint32_t SRCONDM : 1;
    uint32_t SINKONDP : 1;
    uint32_t CHGISINK_EN : 1;
    uint32_t CHGVSRC_EN : 1;
    uint32_t DMPULLUP : 1;
    uint32_t DPPULLUP : 1;
    uint32_t CDET_EXTCTL : 1;
    uint32_t RESERVED6 : 1;
    uint32_t GPIOMODE : 1;
    uint32_t GPIO_SIG_INV : 1;
    uint32_t GPIO_SIG_CROSS : 1;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t DPGPIO_PD : 1;
    uint32_t DMGPIO_PD : 1;
    uint32_t OTGVDET_EN : 1;
    uint32_t OTGSESSENDEN : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t DATAPOLARITY_INV : 1;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterUSB_CTRL0;

typedef union {
  struct {
    uint32_t CHGDETDONE : 1;
    uint32_t CHGDETECT : 1;
    uint32_t CDET_DATADET : 1;
    uint32_t CDET_DPDET : 1;
    uint32_t CDET_DMDET : 1;
    uint32_t CHGDETSTS : 3;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterUSB_STS0;

typedef union {
  struct {
    uint32_t CM_PWRDN : 1;
    uint32_t OTG_PWRDN : 1;
    uint32_t CHGDET_DIS : 1;
    uint32_t CHGDET_RSTRT : 1;
    uint32_t SRCONDM : 1;
    uint32_t SINKONDP : 1;
    uint32_t CHGISINK_EN : 1;
    uint32_t CHGVSRC_EN : 1;
    uint32_t DMPULLUP : 1;
    uint32_t DPPULLUP : 1;
    uint32_t CDET_EXTCTL : 1;
    uint32_t RESERVED6 : 1;
    uint32_t GPIOMODE : 1;
    uint32_t GPIO_SIG_INV : 1;
    uint32_t GPIO_SIG_CROSS : 1;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t DPGPIO_PD : 1;
    uint32_t DMGPIO_PD : 1;
    uint32_t OTGVDET_EN : 1;
    uint32_t OTGSESSENDEN : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t DATAPOLARITY_INV : 1;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterUSB_CTRL1;

typedef union {
  struct {
    uint32_t CHGDETDONE : 1;
    uint32_t CHGDETECT : 1;
    uint32_t CDET_DATADET : 1;
    uint32_t CDET_DPDET : 1;
    uint32_t CDET_DMDET : 1;
    uint32_t CHGDETSTS : 3;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterUSB_STS1;

typedef union {
  struct {
    uint32_t MACADDR_15_8 : 8;
    uint32_t MACADDR_7_0 : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMAC_ID0_LO;

typedef union {
  struct {
    uint32_t MACADDR_47_40 : 8;
    uint32_t MACADDR_39_32 : 8;
    uint32_t MACADDR_31_24 : 8;
    uint32_t MACADDR_23_16 : 8;
  };
  uint32_t raw;
} RegisterMAC_ID0_HI;

typedef union {
  struct {
    uint32_t MACADDR_15_8 : 8;
    uint32_t MACADDR_7_0 : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMAC_ID1_LO;

typedef union {
  struct {
    uint32_t MACADDR_47_40 : 8;
    uint32_t MACADDR_39_32 : 8;
    uint32_t MACADDR_31_24 : 8;
    uint32_t MACADDR_23_16 : 8;
  };
  uint32_t raw;
} RegisterMAC_ID1_HI;

typedef union {
  struct {
    uint32_t DCAN0_RAMINIT_START : 1;
    uint32_t DCAN1_RAMINIT_START : 1;
    uint32_t RESERVED2 : 6;
    uint32_t DCAN0_RAMINIT_DONE : 1;
    uint32_t DCAN1_RAMINIT_DONE : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterDCAN_RAMINIT;

typedef union {
  struct {
    uint32_t PHY0_WUEN : 1;
    uint32_t RESERVED2 : 7;
    uint32_t PHY1_WUEN : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterUSB_WKUP_CTRL;

typedef union {
  struct {
    uint32_t GMII1_SEL : 2;
    uint32_t GMII2_SEL : 2;
    uint32_t RGMII1_IDMODE : 1;
    uint32_t RGMII2_IDMODE : 1;
    uint32_t RMII1_IO_CLK_EN : 1;
    uint32_t RMII2_IO_CLK_EN : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterGMII_SEL;

typedef union {
  struct {
    uint32_t PWMSS0_TBCLKEN : 1;
    uint32_t PWMSS1_TBCLKEN : 1;
    uint32_t PWMSS2_TBCLKEN : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterPWMSS_CTRL;

typedef union {
  struct {
    uint32_t SAB_INIT0 : 3;
    uint32_t RESERVED9 : 1;
    uint32_t SAB_INIT1 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t PRU_ICSS_PRU0 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t RESERVED6 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t CPSW : 3;
    uint32_t RESERVED4 : 1;
    uint32_t USB0 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t USB1 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t SGX : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterMREQPRIO_0;

typedef union {
  struct {
    uint32_t EXP : 3;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterMREQPRIO_1;

typedef union {
  struct {
    uint32_t EVENT1 : 8;
    uint32_t EVENT2 : 8;
    uint32_t EVENT3 : 8;
    uint32_t EVENT4 : 8;
  };
  uint32_t raw;
} RegisterHW_EVENT_SEL_GRP1;

typedef union {
  struct {
    uint32_t EVENT5 : 8;
    uint32_t EVENT6 : 8;
    uint32_t EVENT7 : 8;
    uint32_t EVENT8 : 8;
  };
  uint32_t raw;
} RegisterHW_EVENT_SEL_GRP2;

typedef union {
  struct {
    uint32_t EVENT9 : 8;
    uint32_t EVENT10 : 8;
    uint32_t EVENT11 : 8;
    uint32_t EVENT12 : 8;
  };
  uint32_t raw;
} RegisterHW_EVENT_SEL_GRP3;

typedef union {
  struct {
    uint32_t EVENT13 : 8;
    uint32_t EVENT14 : 8;
    uint32_t EVENT15 : 8;
    uint32_t EVENT16 : 8;
  };
  uint32_t raw;
} RegisterHW_EVENT_SEL_GRP4;

typedef union {
  struct {
    uint32_t SR0_SLEEP : 1;
    uint32_t SR1_SLEEP : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterSMRT_CTRL;

typedef union {
  struct {
    uint32_t HW_DBG_SEL : 4;
    uint32_t RESERVED3 : 4;
    uint32_t RESERVED2 : 1;
    uint32_t HW_DBG_GATE_EN : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterMPUSS_HW_DEBUG_SEL;

typedef union {
  struct {
    uint32_t HW_DBG_INFO : 32;
  };
  uint32_t raw;
} RegisterMPUSS_HW_DBG_INFO;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_MPU_OPP_050;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_MPU_OPP_100;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_MPU_OPP_120;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_MPU_OPP_TURBO;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_CORE_OPP_050;

typedef union {
  struct {
    uint32_t NTARGET : 24;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterVDD_CORE_OPP_100;

typedef union {
  struct {
    uint32_t BBIAS : 2;
    uint32_t RESERVED2 : 6;
    uint32_t SCALE : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterBB_SCALE;

typedef union {
  struct {
    uint32_t USB_PID : 16;
    uint32_t USB_VID : 16;
  };
  uint32_t raw;
} RegisterUSB_VID_PID;

typedef union {
  struct {
    uint32_t ARM_MPU_MAX_FREQ : 13;
    uint32_t RESERVED2 : 3;
    uint32_t PACKAGE_TYPE : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterEFUSE_SMA;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_0;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_1;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_2;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_3;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_4;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_5;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_6;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_7;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_8;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_9;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_10;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_11;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_12;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_13;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_14;

typedef union {
  struct {
    uint32_t CONF_GPMC_ADX_MMODE : 3;
    uint32_t CONF_GPMC_ADX_PUDEN : 1;
    uint32_t CONF_GPMC_ADX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_ADX_RXACTIVE : 1;
    uint32_t CONF_GPMC_ADX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_AD_15;

typedef union {
  struct {
    uint32_t CONF_GPMC_AX_MMODE : 3;
    uint32_t CONF_GPMC_AX_PUDEN : 1;
    uint32_t CONF_GPMC_AX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_AX_RXACTIVE : 1;
    uint32_t CONF_GPMC_AX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_A;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_WAIT0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_WPN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_BEN1;

typedef union {
  struct {
    uint32_t CONF_GPMC_CSNX_MMODE : 3;
    uint32_t CONF_GPMC_CSNX_PUDEN : 1;
    uint32_t CONF_GPMC_CSNX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_CSNX_RXACTIVE : 1;
    uint32_t CONF_GPMC_CSNX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_CSN_0;

typedef union {
  struct {
    uint32_t CONF_GPMC_CSNX_MMODE : 3;
    uint32_t CONF_GPMC_CSNX_PUDEN : 1;
    uint32_t CONF_GPMC_CSNX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_CSNX_RXACTIVE : 1;
    uint32_t CONF_GPMC_CSNX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_CSN_1;

typedef union {
  struct {
    uint32_t CONF_GPMC_CSNX_MMODE : 3;
    uint32_t CONF_GPMC_CSNX_PUDEN : 1;
    uint32_t CONF_GPMC_CSNX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_CSNX_RXACTIVE : 1;
    uint32_t CONF_GPMC_CSNX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_CSN_2;

typedef union {
  struct {
    uint32_t CONF_GPMC_CSNX_MMODE : 3;
    uint32_t CONF_GPMC_CSNX_PUDEN : 1;
    uint32_t CONF_GPMC_CSNX_PUTYPESEL : 1;
    uint32_t CONF_GPMC_CSNX_RXACTIVE : 1;
    uint32_t CONF_GPMC_CSNX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_CSN_3;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_CLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_ADVN_ALE;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_OEN_REN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_WEN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_GPMC_BEN0_CLE;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_0;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_1;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_2;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_3;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_4;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_5;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_6;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_7;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_8;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_9;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_10;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_11;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_12;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_13;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_14;

typedef union {
  struct {
    uint32_t CONF_LCD_DATAX_MMODE : 3;
    uint32_t CONF_LCD_DATAX_PUDEN : 1;
    uint32_t CONF_LCD_DATAX_PUTYPESEL : 1;
    uint32_t CONF_LCD_DATAX_RXACTIVE : 1;
    uint32_t CONF_LCD_DATAX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_DATA_15;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_VSYNC;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_HSYNC;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_PCLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_LCD_AC_BIAS_EN;

typedef union {
  struct {
    uint32_t CONF_MMC0_DATX_MMODE : 3;
    uint32_t CONF_MMC0_DATX_PUDEN : 1;
    uint32_t CONF_MMC0_DATX_PUTYPESEL : 1;
    uint32_t CONF_MMC0_DATX_RXACTIVE : 1;
    uint32_t CONF_MMC0_DATX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_DAT_0;

typedef union {
  struct {
    uint32_t CONF_MMC0_DATX_MMODE : 3;
    uint32_t CONF_MMC0_DATX_PUDEN : 1;
    uint32_t CONF_MMC0_DATX_PUTYPESEL : 1;
    uint32_t CONF_MMC0_DATX_RXACTIVE : 1;
    uint32_t CONF_MMC0_DATX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_DAT_1;

typedef union {
  struct {
    uint32_t CONF_MMC0_DATX_MMODE : 3;
    uint32_t CONF_MMC0_DATX_PUDEN : 1;
    uint32_t CONF_MMC0_DATX_PUTYPESEL : 1;
    uint32_t CONF_MMC0_DATX_RXACTIVE : 1;
    uint32_t CONF_MMC0_DATX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_DAT_2;

typedef union {
  struct {
    uint32_t CONF_MMC0_DATX_MMODE : 3;
    uint32_t CONF_MMC0_DATX_PUDEN : 1;
    uint32_t CONF_MMC0_DATX_PUTYPESEL : 1;
    uint32_t CONF_MMC0_DATX_RXACTIVE : 1;
    uint32_t CONF_MMC0_DATX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_DAT_3;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_CLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MMC0_CMD;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_COL;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_CRS;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RX_ER;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TX_EN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RX_DV;

typedef union {
  struct {
    uint32_t CONF_MII1_TXDX_MMODE : 3;
    uint32_t CONF_MII1_TXDX_PUDEN : 1;
    uint32_t CONF_MII1_TXDX_PUTYPESEL : 1;
    uint32_t CONF_MII1_TXDX_RXACTIVE : 1;
    uint32_t CONF_MII1_TXDX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TXD_0;

typedef union {
  struct {
    uint32_t CONF_MII1_TXDX_MMODE : 3;
    uint32_t CONF_MII1_TXDX_PUDEN : 1;
    uint32_t CONF_MII1_TXDX_PUTYPESEL : 1;
    uint32_t CONF_MII1_TXDX_RXACTIVE : 1;
    uint32_t CONF_MII1_TXDX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TXD_1;

typedef union {
  struct {
    uint32_t CONF_MII1_TXDX_MMODE : 3;
    uint32_t CONF_MII1_TXDX_PUDEN : 1;
    uint32_t CONF_MII1_TXDX_PUTYPESEL : 1;
    uint32_t CONF_MII1_TXDX_RXACTIVE : 1;
    uint32_t CONF_MII1_TXDX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TXD_2;

typedef union {
  struct {
    uint32_t CONF_MII1_TXDX_MMODE : 3;
    uint32_t CONF_MII1_TXDX_PUDEN : 1;
    uint32_t CONF_MII1_TXDX_PUTYPESEL : 1;
    uint32_t CONF_MII1_TXDX_RXACTIVE : 1;
    uint32_t CONF_MII1_TXDX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TXD_3;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_TX_CLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RX_CLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RXD3;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RXD2;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RXD1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MII1_RXD0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_RMII1_REF_CLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MDIO;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MDC;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_SPI0_SCLK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_SPI0_D0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_SPI0_D1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_SPI0_CS0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_SPI0_CS1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_ECAP0_IN_PWM0_OUT;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART0_CTSN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART0_RTSN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART0_RXD;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART0_TXD;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART1_CTSN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART1_RTSN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART1_RXD;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_UART1_TXD;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_I2C0_SDA;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_I2C0_SCL;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_ACLKX;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_FSX;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_AXR0;

typedef union {
  struct {
    uint32_t CONF_MCASP0_AHCLKX_MMODE : 3;
    uint32_t CONF_MCASP0_AHCLKX_PUDEN : 1;
    uint32_t CONF_MCASP0_AHCLKX_PUTYPESEL : 1;
    uint32_t CONF_MCASP0_AHCLKX_RXACTIVE : 1;
    uint32_t CONF_MCASP0_AHCLKX_SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_AHCLKR;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_ACLKR;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_FSR;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_AXR1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_MCASP0_AHCLKX;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_XDMA_EVENT_INTR0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_XDMA_EVENT_INTR1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_WARMRSTN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_NNMI;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_TMS;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_TDI;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_TDO;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_TCK;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_TRSTN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_EMU0;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_EMU1;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_RTC_PWRONRSTN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_PMIC_POWER_EN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_EXT_WAKEUP;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_RTC_KALDO_ENN;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_USB0_DRVVBUS;

typedef union {
  struct {
    uint32_t MMODE : 3;
    uint32_t PUDEN : 1;
    uint32_t PUTYPESEL : 1;
    uint32_t RXACTIVE : 1;
    uint32_t SLEWCTRL : 1;
    uint32_t RESERVED2 : 13;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCONF_USB1_DRVVBUS;

typedef union {
  struct {
    uint32_t CQSTAT_GPMC : 1;
    uint32_t CQSTAT_MMCSD_A : 1;
    uint32_t CQSTAT_MMCSD_B : 1;
    uint32_t CQSTAT_GEMAC_A : 1;
    uint32_t CQSTAT_GEMAC_B : 1;
    uint32_t CQSTAT_GENERAL : 1;
    uint32_t RESERVED9 : 2;
    uint32_t CQERR_GPMC : 1;
    uint32_t CQERR_MMCSD_A : 1;
    uint32_t CQERR_MMCSD_B : 1;
    uint32_t CQERR_GEMAC_A : 1;
    uint32_t CQERR_GEMAC_B : 1;
    uint32_t CQERR_GENERAL : 1;
    uint32_t RESERVED8 : 2;
    uint32_t RESERVED7 : 1;
    uint32_t RESERVED6 : 1;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED4 : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 10;
  };
  uint32_t raw;
} RegisterCQDETECT_STATUS;

typedef union {
  struct {
    uint32_t RESERVED2 : 28;
    uint32_t MDDR_SEL : 1;
    uint32_t RESERVED1 : 1;
    uint32_t DDR_WUCLK_DISABLE : 1;
    uint32_t DDR3_RST_DEF_VAL : 1;
  };
  uint32_t raw;
} RegisterDDR_IO_CTRL;

typedef union {
  struct {
    uint32_t CLRZ : 1;
    uint32_t FILTER : 3;
    uint32_t LOCK : 1;
    uint32_t READY : 1;
    uint32_t ENABLE : 1;
    uint32_t RESERVED3 : 1;
    uint32_t NCIN : 7;
    uint32_t RESERVED2 : 1;
    uint32_t PCIN : 7;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterVTP_CTRL;

typedef union {
  struct {
    uint32_t DDR_VREF_EN : 1;
    uint32_t DDR_VREF_TAP : 2;
    uint32_t DDR_VREF_CCAP : 2;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterVREF_CTRL;

typedef union {
  struct {
    uint32_t EVT_MUX_0 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_1 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_2 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_3 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_0_3;

typedef union {
  struct {
    uint32_t EVT_MUX_4 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_5 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_6 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_7 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_4_7;

typedef union {
  struct {
    uint32_t EVT_MUX_8 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_9 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_10 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_11 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_8_11;

typedef union {
  struct {
    uint32_t EVT_MUX_12 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_13 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_14 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_15 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_12_15;

typedef union {
  struct {
    uint32_t EVT_MUX_16 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_17 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_18 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_19 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_16_19;

typedef union {
  struct {
    uint32_t EVT_MUX_20 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_21 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_22 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_23 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_20_23;

typedef union {
  struct {
    uint32_t EVT_MUX_24 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_25 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_26 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_27 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_24_27;

typedef union {
  struct {
    uint32_t EVT_MUX_28 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_29 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_30 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_31 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_28_31;

typedef union {
  struct {
    uint32_t EVT_MUX_32 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_33 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_34 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_35 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_32_35;

typedef union {
  struct {
    uint32_t EVT_MUX_36 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_37 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_38 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_39 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_36_39;

typedef union {
  struct {
    uint32_t EVT_MUX_40 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_41 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_42 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_43 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_40_43;

typedef union {
  struct {
    uint32_t EVT_MUX_44 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_45 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_46 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_47 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_44_47;

typedef union {
  struct {
    uint32_t EVT_MUX_48 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_49 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_50 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_51 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_48_51;

typedef union {
  struct {
    uint32_t EVT_MUX_52 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_53 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_54 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_55 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_52_55;

typedef union {
  struct {
    uint32_t EVT_MUX_56 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_57 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_58 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_59 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_56_59;

typedef union {
  struct {
    uint32_t EVT_MUX_60 : 6;
    uint32_t RESERVED4 : 2;
    uint32_t EVT_MUX_61 : 6;
    uint32_t RESERVED3 : 2;
    uint32_t EVT_MUX_62 : 6;
    uint32_t RESERVED2 : 2;
    uint32_t EVT_MUX_63 : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTPCC_EVT_MUX_60_63;

typedef union {
  struct {
    uint32_t TIMER5_EVTCAPT : 5;
    uint32_t RESERVED3 : 3;
    uint32_t TIMER6_EVTCAPT : 5;
    uint32_t RESERVED2 : 3;
    uint32_t TIMER7_EVTCAPT : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterTIMER_EVT_CAPT;

typedef union {
  struct {
    uint32_t ECAP0_EVTCAPT : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ECAP1_EVTCAPT : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECAP2_EVTCAPT : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterECAP_EVT_CAPT;

typedef union {
  struct {
    uint32_t ADC_EVTCAPT : 4;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterADC_EVT_CAPT;

typedef union {
  struct {
    uint32_t ISO_CONTROL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterRESET_ISO;

typedef union {
  struct {
    uint32_t RESERVED4 : 8;
    uint32_t PONIN_PER : 1;
    uint32_t PGOODIN_PER : 1;
    uint32_t ISO_PER : 1;
    uint32_t RESET_PER : 1;
    uint32_t RET_PER : 1;
    uint32_t ISOSCAN_PER : 1;
    uint32_t RESERVED3 : 1;
    uint32_t SW_CTRL_PER_DPLL : 1;
    uint32_t PONIN_DISP : 1;
    uint32_t PGOODIN_DISP : 1;
    uint32_t ISO_DISP : 1;
    uint32_t RESET_DISP : 1;
    uint32_t RET_DISP : 1;
    uint32_t ISOSCAN_DISP : 1;
    uint32_t RESERVED2 : 1;
    uint32_t SW_CTRL_DISP_PLL : 1;
    uint32_t PONIN_DDR : 1;
    uint32_t PGOODIN_DDR : 1;
    uint32_t ISO_DDR : 1;
    uint32_t RESET_DDR : 1;
    uint32_t RET_DDR : 1;
    uint32_t ISOSCAN_DDR : 1;
    uint32_t RESERVED1 : 1;
    uint32_t SW_CTRL_DDR_PLL : 1;
  };
  uint32_t raw;
} RegisterDPLL_PWR_SW_CTRL;

typedef union {
  struct {
    uint32_t DDR_CKE_CTRL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDDR_CKE_CTRL;

typedef union {
  struct {
    uint32_t RMII2_CRS_DV_MODE_SEL : 1;
    uint32_t VSLDO_CORE_AUTO_RAMP_EN : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterSMA2;

typedef union {
  struct {
    uint32_t M3_TXEV_EOI : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterM3_TXEV_EOI;

typedef union {
  struct {
    uint32_t IPC_MSG_REG0 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG0;

typedef union {
  struct {
    uint32_t IPC_MSG_REG1 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG1;

typedef union {
  struct {
    uint32_t IPC_MSG_REG2 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG2;

typedef union {
  struct {
    uint32_t IPC_MSG_REG3 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG3;

typedef union {
  struct {
    uint32_t IPC_MSG_REG4 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG4;

typedef union {
  struct {
    uint32_t IPC_MSG_REG5 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG5;

typedef union {
  struct {
    uint32_t IPC_MSG_REG6 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG6;

typedef union {
  struct {
    uint32_t IPC_MSG_REG7 : 32;
  };
  uint32_t raw;
} RegisterIPC_MSG_REG7;

typedef union {
  struct {
    uint32_t IO_CONFIG_I : 3;
    uint32_t IO_CONFIG_SR : 2;
    uint32_t IO_CONFIG_I_CLK : 3;
    uint32_t IO_CONFIG_SR_CLK : 2;
    uint32_t IO_CONFIG_GP_WD0 : 11;
    uint32_t IO_CONFIG_GP_WD1 : 11;
  };
  uint32_t raw;
} RegisterDDR_CMD0_IOCTRL;

typedef union {
  struct {
    uint32_t IO_CONFIG_I : 3;
    uint32_t IO_CONFIG_SR : 2;
    uint32_t IO_CONFIG_I_CLK : 3;
    uint32_t IO_CONFIG_SR_CLK : 2;
    uint32_t IO_CONFIG_GP_WD0 : 11;
    uint32_t IO_CONFIG_GP_WD1 : 11;
  };
  uint32_t raw;
} RegisterDDR_CMD1_IOCTRL;

typedef union {
  struct {
    uint32_t IO_CONFIG_I : 3;
    uint32_t IO_CONFIG_SR : 2;
    uint32_t IO_CONFIG_I_CLK : 3;
    uint32_t IO_CONFIG_SR_CLK : 2;
    uint32_t IO_CONFIG_GP_WD0 : 11;
    uint32_t IO_CONFIG_GP_WD1 : 11;
  };
  uint32_t raw;
} RegisterDDR_CMD2_IOCTRL;

typedef union {
  struct {
    uint32_t IO_CONFIG_I : 3;
    uint32_t IO_CONFIG_SR : 2;
    uint32_t IO_CONFIG_I_CLK : 3;
    uint32_t IO_CONFIG_SR_CLK : 2;
    uint32_t IO_CONFIG_WD0_DQ : 8;
    uint32_t IO_CONFIG_WD0_DM : 1;
    uint32_t IO_CONFIG_WD0_DQS : 1;
    uint32_t IO_CONFIG_WD1_DQ : 8;
    uint32_t IO_CONFIG_WD1_DM : 1;
    uint32_t IO_CONFIG_WD1_DQS : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterDDR_DATA0_IOCTRL;

typedef union {
  struct {
    uint32_t IO_CONFIG_I : 3;
    uint32_t IO_CONFIG_SR : 2;
    uint32_t IO_CONFIG_I_CLK : 3;
    uint32_t IO_CONFIG_SR_CLK : 2;
    uint32_t IO_CONFIG_WD0_DQ : 8;
    uint32_t IO_CONFIG_WD0_DM : 1;
    uint32_t IO_CONFIG_WD0_DQS : 1;
    uint32_t IO_CONFIG_WD1_DQ : 8;
    uint32_t IO_CONFIG_WD1_DM : 1;
    uint32_t IO_CONFIG_WD1_DQS : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterDDR_DATA1_IOCTRL;

typedef struct {
  RegisterCONTROL_REVISION CONTROL_REVISION;
  RegisterCONTROL_HWINFO CONTROL_HWINFO;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterCONTROL_SYSCONFIG CONTROL_SYSCONFIG;
  uint8_t RESERVED_OFFSETS_1[44];
  RegisterCONTROL_STATUS CONTROL_STATUS;
  uint8_t RESERVED_OFFSETS_2[204];
  RegisterCONTROL_EMIF_SDRAM_CONFIG CONTROL_EMIF_SDRAM_CONFIG;
  uint8_t RESERVED_OFFSETS_3[776];
  RegisterCORTEX_VBBLDO_CTRL CORTEX_VBBLDO_CTRL;
  uint8_t RESERVED_OFFSETS_4[8];
  RegisterCORE_SLDO_CTRL CORE_SLDO_CTRL;
  RegisterMPU_SLDO_CTRL MPU_SLDO_CTRL;
  uint8_t RESERVED_OFFSETS_5[20];
  RegisterCLK32KDIVRATIO_CTRL CLK32KDIVRATIO_CTRL;
  RegisterBANDGAP_CTRL BANDGAP_CTRL;
  RegisterBANDGAP_TRIM BANDGAP_TRIM;
  uint8_t RESERVED_OFFSETS_6[8];
  RegisterPLL_CLKINPULOW_CTRL PLL_CLKINPULOW_CTRL;
  uint8_t RESERVED_OFFSETS_7[12];
  RegisterMOSC_CTRL MOSC_CTRL;
  uint8_t RESERVED_OFFSETS_8[4];
  RegisterDEEPSLEEP_CTRL DEEPSLEEP_CTRL;
  uint8_t RESERVED_OFFSETS_9[152];
  RegisterDPLL_PWR_SW_STATUS DPLL_PWR_SW_STATUS;
  uint8_t RESERVED_OFFSETS_10[240];
  RegisterDEVICE_ID DEVICE_ID;
  RegisterDEV_FEATURE DEV_FEATURE;
  RegisterINIT_PRIORITY_0 INIT_PRIORITY_0;
  RegisterINIT_PRIORITY_1 INIT_PRIORITY_1;
  RegisterMMU_CFG MMU_CFG;
  RegisterTPTC_CFG TPTC_CFG;
  uint8_t RESERVED_OFFSETS_11[8];
  RegisterUSB_CTRL0 USB_CTRL0;
  RegisterUSB_STS0 USB_STS0;
  RegisterUSB_CTRL1 USB_CTRL1;
  RegisterUSB_STS1 USB_STS1;
  RegisterMAC_ID0_LO MAC_ID0_LO;
  RegisterMAC_ID0_HI MAC_ID0_HI;
  RegisterMAC_ID1_LO MAC_ID1_LO;
  RegisterMAC_ID1_HI MAC_ID1_HI;
  uint8_t RESERVED_OFFSETS_12[4];
  RegisterDCAN_RAMINIT DCAN_RAMINIT;
  RegisterUSB_WKUP_CTRL USB_WKUP_CTRL;
  uint8_t RESERVED_OFFSETS_13[4];
  RegisterGMII_SEL GMII_SEL;
  uint8_t RESERVED_OFFSETS_14[16];
  RegisterPWMSS_CTRL PWMSS_CTRL;
  uint8_t RESERVED_OFFSETS_15[8];
  RegisterMREQPRIO_0 MREQPRIO_0;
  RegisterMREQPRIO_1 MREQPRIO_1;
  uint8_t RESERVED_OFFSETS_16[24];
  RegisterHW_EVENT_SEL_GRP1 HW_EVENT_SEL_GRP1;
  RegisterHW_EVENT_SEL_GRP2 HW_EVENT_SEL_GRP2;
  RegisterHW_EVENT_SEL_GRP3 HW_EVENT_SEL_GRP3;
  RegisterHW_EVENT_SEL_GRP4 HW_EVENT_SEL_GRP4;
  RegisterSMRT_CTRL SMRT_CTRL;
  RegisterMPUSS_HW_DEBUG_SEL MPUSS_HW_DEBUG_SEL;
  RegisterMPUSS_HW_DBG_INFO MPUSS_HW_DBG_INFO;
  uint8_t RESERVED_OFFSETS_17[196];
  RegisterVDD_MPU_OPP_050 VDD_MPU_OPP_050;
  RegisterVDD_MPU_OPP_100 VDD_MPU_OPP_100;
  RegisterVDD_MPU_OPP_120 VDD_MPU_OPP_120;
  RegisterVDD_MPU_OPP_TURBO VDD_MPU_OPP_TURBO;
  uint8_t RESERVED_OFFSETS_18[56];
  RegisterVDD_CORE_OPP_050 VDD_CORE_OPP_050;
  RegisterVDD_CORE_OPP_100 VDD_CORE_OPP_100;
  uint8_t RESERVED_OFFSETS_19[16];
  RegisterBB_SCALE BB_SCALE;
  uint8_t RESERVED_OFFSETS_20[32];
  RegisterUSB_VID_PID USB_VID_PID;
  uint8_t RESERVED_OFFSETS_21[4];
  RegisterEFUSE_SMA EFUSE_SMA;
  RegisterCONF_GPMC_AD_0 CONF_GPMC_AD_0;
  RegisterCONF_GPMC_AD_1 CONF_GPMC_AD_1;
  RegisterCONF_GPMC_AD_2 CONF_GPMC_AD_2;
  RegisterCONF_GPMC_AD_3 CONF_GPMC_AD_3;
  RegisterCONF_GPMC_AD_4 CONF_GPMC_AD_4;
  RegisterCONF_GPMC_AD_5 CONF_GPMC_AD_5;
  RegisterCONF_GPMC_AD_6 CONF_GPMC_AD_6;
  RegisterCONF_GPMC_AD_7 CONF_GPMC_AD_7;
  RegisterCONF_GPMC_AD_8 CONF_GPMC_AD_8;
  RegisterCONF_GPMC_AD_9 CONF_GPMC_AD_9;
  RegisterCONF_GPMC_AD_10 CONF_GPMC_AD_10;
  RegisterCONF_GPMC_AD_11 CONF_GPMC_AD_11;
  RegisterCONF_GPMC_AD_12 CONF_GPMC_AD_12;
  RegisterCONF_GPMC_AD_13 CONF_GPMC_AD_13;
  RegisterCONF_GPMC_AD_14 CONF_GPMC_AD_14;
  RegisterCONF_GPMC_AD_15 CONF_GPMC_AD_15;
  RegisterCONF_GPMC_A CONF_GPMC_A;
  uint8_t RESERVED_OFFSETS_22[44];
  RegisterCONF_GPMC_WAIT0 CONF_GPMC_WAIT0;
  RegisterCONF_GPMC_WPN CONF_GPMC_WPN;
  RegisterCONF_GPMC_BEN1 CONF_GPMC_BEN1;
  RegisterCONF_GPMC_CSN_0 CONF_GPMC_CSN_0;
  RegisterCONF_GPMC_CSN_1 CONF_GPMC_CSN_1;
  RegisterCONF_GPMC_CSN_2 CONF_GPMC_CSN_2;
  RegisterCONF_GPMC_CSN_3 CONF_GPMC_CSN_3;
  RegisterCONF_GPMC_CLK CONF_GPMC_CLK;
  RegisterCONF_GPMC_ADVN_ALE CONF_GPMC_ADVN_ALE;
  RegisterCONF_GPMC_OEN_REN CONF_GPMC_OEN_REN;
  RegisterCONF_GPMC_WEN CONF_GPMC_WEN;
  RegisterCONF_GPMC_BEN0_CLE CONF_GPMC_BEN0_CLE;
  RegisterCONF_LCD_DATA_0 CONF_LCD_DATA_0;
  RegisterCONF_LCD_DATA_1 CONF_LCD_DATA_1;
  RegisterCONF_LCD_DATA_2 CONF_LCD_DATA_2;
  RegisterCONF_LCD_DATA_3 CONF_LCD_DATA_3;
  RegisterCONF_LCD_DATA_4 CONF_LCD_DATA_4;
  RegisterCONF_LCD_DATA_5 CONF_LCD_DATA_5;
  RegisterCONF_LCD_DATA_6 CONF_LCD_DATA_6;
  RegisterCONF_LCD_DATA_7 CONF_LCD_DATA_7;
  RegisterCONF_LCD_DATA_8 CONF_LCD_DATA_8;
  RegisterCONF_LCD_DATA_9 CONF_LCD_DATA_9;
  RegisterCONF_LCD_DATA_10 CONF_LCD_DATA_10;
  RegisterCONF_LCD_DATA_11 CONF_LCD_DATA_11;
  RegisterCONF_LCD_DATA_12 CONF_LCD_DATA_12;
  RegisterCONF_LCD_DATA_13 CONF_LCD_DATA_13;
  RegisterCONF_LCD_DATA_14 CONF_LCD_DATA_14;
  RegisterCONF_LCD_DATA_15 CONF_LCD_DATA_15;
  RegisterCONF_LCD_VSYNC CONF_LCD_VSYNC;
  RegisterCONF_LCD_HSYNC CONF_LCD_HSYNC;
  RegisterCONF_LCD_PCLK CONF_LCD_PCLK;
  RegisterCONF_LCD_AC_BIAS_EN CONF_LCD_AC_BIAS_EN;
  RegisterCONF_MMC0_DAT_0 CONF_MMC0_DAT_0;
  RegisterCONF_MMC0_DAT_1 CONF_MMC0_DAT_1;
  RegisterCONF_MMC0_DAT_2 CONF_MMC0_DAT_2;
  RegisterCONF_MMC0_DAT_3 CONF_MMC0_DAT_3;
  RegisterCONF_MMC0_CLK CONF_MMC0_CLK;
  RegisterCONF_MMC0_CMD CONF_MMC0_CMD;
  RegisterCONF_MII1_COL CONF_MII1_COL;
  RegisterCONF_MII1_CRS CONF_MII1_CRS;
  RegisterCONF_MII1_RX_ER CONF_MII1_RX_ER;
  RegisterCONF_MII1_TX_EN CONF_MII1_TX_EN;
  RegisterCONF_MII1_RX_DV CONF_MII1_RX_DV;
  RegisterCONF_MII1_TXD_0 CONF_MII1_TXD_0;
  RegisterCONF_MII1_TXD_1 CONF_MII1_TXD_1;
  RegisterCONF_MII1_TXD_2 CONF_MII1_TXD_2;
  RegisterCONF_MII1_TXD_3 CONF_MII1_TXD_3;
  RegisterCONF_MII1_TX_CLK CONF_MII1_TX_CLK;
  RegisterCONF_MII1_RX_CLK CONF_MII1_RX_CLK;
  RegisterCONF_MII1_RXD3 CONF_MII1_RXD3;
  RegisterCONF_MII1_RXD2 CONF_MII1_RXD2;
  RegisterCONF_MII1_RXD1 CONF_MII1_RXD1;
  RegisterCONF_MII1_RXD0 CONF_MII1_RXD0;
  RegisterCONF_RMII1_REF_CLK CONF_RMII1_REF_CLK;
  RegisterCONF_MDIO CONF_MDIO;
  RegisterCONF_MDC CONF_MDC;
  RegisterCONF_SPI0_SCLK CONF_SPI0_SCLK;
  RegisterCONF_SPI0_D0 CONF_SPI0_D0;
  RegisterCONF_SPI0_D1 CONF_SPI0_D1;
  RegisterCONF_SPI0_CS0 CONF_SPI0_CS0;
  RegisterCONF_SPI0_CS1 CONF_SPI0_CS1;
  RegisterCONF_ECAP0_IN_PWM0_OUT CONF_ECAP0_IN_PWM0_OUT;
  RegisterCONF_UART0_CTSN CONF_UART0_CTSN;
  RegisterCONF_UART0_RTSN CONF_UART0_RTSN;
  RegisterCONF_UART0_RXD CONF_UART0_RXD;
  RegisterCONF_UART0_TXD CONF_UART0_TXD;
  RegisterCONF_UART1_CTSN CONF_UART1_CTSN;
  RegisterCONF_UART1_RTSN CONF_UART1_RTSN;
  RegisterCONF_UART1_RXD CONF_UART1_RXD;
  RegisterCONF_UART1_TXD CONF_UART1_TXD;
  RegisterCONF_I2C0_SDA CONF_I2C0_SDA;
  RegisterCONF_I2C0_SCL CONF_I2C0_SCL;
  RegisterCONF_MCASP0_ACLKX CONF_MCASP0_ACLKX;
  RegisterCONF_MCASP0_FSX CONF_MCASP0_FSX;
  RegisterCONF_MCASP0_AXR0 CONF_MCASP0_AXR0;
  RegisterCONF_MCASP0_AHCLKR CONF_MCASP0_AHCLKR;
  RegisterCONF_MCASP0_ACLKR CONF_MCASP0_ACLKR;
  RegisterCONF_MCASP0_FSR CONF_MCASP0_FSR;
  RegisterCONF_MCASP0_AXR1 CONF_MCASP0_AXR1;
  RegisterCONF_MCASP0_AHCLKX CONF_MCASP0_AHCLKX;
  RegisterCONF_XDMA_EVENT_INTR0 CONF_XDMA_EVENT_INTR0;
  RegisterCONF_XDMA_EVENT_INTR1 CONF_XDMA_EVENT_INTR1;
  RegisterCONF_WARMRSTN CONF_WARMRSTN;
  uint8_t RESERVED_OFFSETS_23[4];
  RegisterCONF_NNMI CONF_NNMI;
  uint8_t RESERVED_OFFSETS_24[12];
  RegisterCONF_TMS CONF_TMS;
  RegisterCONF_TDI CONF_TDI;
  RegisterCONF_TDO CONF_TDO;
  RegisterCONF_TCK CONF_TCK;
  RegisterCONF_TRSTN CONF_TRSTN;
  RegisterCONF_EMU0 CONF_EMU0;
  RegisterCONF_EMU1 CONF_EMU1;
  uint8_t RESERVED_OFFSETS_25[12];
  RegisterCONF_RTC_PWRONRSTN CONF_RTC_PWRONRSTN;
  RegisterCONF_PMIC_POWER_EN CONF_PMIC_POWER_EN;
  RegisterCONF_EXT_WAKEUP CONF_EXT_WAKEUP;
  RegisterCONF_RTC_KALDO_ENN CONF_RTC_KALDO_ENN;
  uint8_t RESERVED_OFFSETS_26[20];
  RegisterCONF_USB0_DRVVBUS CONF_USB0_DRVVBUS;
  uint8_t RESERVED_OFFSETS_27[20];
  RegisterCONF_USB1_DRVVBUS CONF_USB1_DRVVBUS;
  uint8_t RESERVED_OFFSETS_28[968];
  RegisterCQDETECT_STATUS CQDETECT_STATUS;
  RegisterDDR_IO_CTRL DDR_IO_CTRL;
  uint8_t RESERVED_OFFSETS_29[4];
  RegisterVTP_CTRL VTP_CTRL;
  uint8_t RESERVED_OFFSETS_30[4];
  RegisterVREF_CTRL VREF_CTRL;
  uint8_t RESERVED_OFFSETS_31[376];
  RegisterTPCC_EVT_MUX_0_3 TPCC_EVT_MUX_0_3;
  RegisterTPCC_EVT_MUX_4_7 TPCC_EVT_MUX_4_7;
  RegisterTPCC_EVT_MUX_8_11 TPCC_EVT_MUX_8_11;
  RegisterTPCC_EVT_MUX_12_15 TPCC_EVT_MUX_12_15;
  RegisterTPCC_EVT_MUX_16_19 TPCC_EVT_MUX_16_19;
  RegisterTPCC_EVT_MUX_20_23 TPCC_EVT_MUX_20_23;
  RegisterTPCC_EVT_MUX_24_27 TPCC_EVT_MUX_24_27;
  RegisterTPCC_EVT_MUX_28_31 TPCC_EVT_MUX_28_31;
  RegisterTPCC_EVT_MUX_32_35 TPCC_EVT_MUX_32_35;
  RegisterTPCC_EVT_MUX_36_39 TPCC_EVT_MUX_36_39;
  RegisterTPCC_EVT_MUX_40_43 TPCC_EVT_MUX_40_43;
  RegisterTPCC_EVT_MUX_44_47 TPCC_EVT_MUX_44_47;
  RegisterTPCC_EVT_MUX_48_51 TPCC_EVT_MUX_48_51;
  RegisterTPCC_EVT_MUX_52_55 TPCC_EVT_MUX_52_55;
  RegisterTPCC_EVT_MUX_56_59 TPCC_EVT_MUX_56_59;
  RegisterTPCC_EVT_MUX_60_63 TPCC_EVT_MUX_60_63;
  RegisterTIMER_EVT_CAPT TIMER_EVT_CAPT;
  RegisterECAP_EVT_CAPT ECAP_EVT_CAPT;
  RegisterADC_EVT_CAPT ADC_EVT_CAPT;
  uint8_t RESERVED_OFFSETS_32[36];
  RegisterRESET_ISO RESET_ISO;
  uint8_t RESERVED_OFFSETS_33[788];
  RegisterDPLL_PWR_SW_CTRL DPLL_PWR_SW_CTRL;
  RegisterDDR_CKE_CTRL DDR_CKE_CTRL;
  RegisterSMA2 SMA2;
  RegisterM3_TXEV_EOI M3_TXEV_EOI;
  RegisterIPC_MSG_REG0 IPC_MSG_REG0;
  RegisterIPC_MSG_REG1 IPC_MSG_REG1;
  RegisterIPC_MSG_REG2 IPC_MSG_REG2;
  RegisterIPC_MSG_REG3 IPC_MSG_REG3;
  RegisterIPC_MSG_REG4 IPC_MSG_REG4;
  RegisterIPC_MSG_REG5 IPC_MSG_REG5;
  RegisterIPC_MSG_REG6 IPC_MSG_REG6;
  RegisterIPC_MSG_REG7 IPC_MSG_REG7;
  uint8_t RESERVED_OFFSETS_34[188];
  RegisterDDR_CMD0_IOCTRL DDR_CMD0_IOCTRL;
  RegisterDDR_CMD1_IOCTRL DDR_CMD1_IOCTRL;
  RegisterDDR_CMD2_IOCTRL DDR_CMD2_IOCTRL;
  uint8_t RESERVED_OFFSETS_35[48];
  RegisterDDR_DATA0_IOCTRL DDR_DATA0_IOCTRL;
  RegisterDDR_DATA1_IOCTRL DDR_DATA1_IOCTRL;
} PeripheralCONTROL_MODULE;

typedef union {
  struct {
    uint32_t CMD_SLAVE_RATIO : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCMD0_REG_PHY_CTRL_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t DLL_LOCK_DIFF : 4;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterCMD0_REG_PHY_DLL_LOCK_DIFF_0;

typedef union {
  struct {
    uint32_t INVERT_CLK_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterCMD0_REG_PHY_INVERT_CLKOUT_0;

typedef union {
  struct {
    uint32_t CMD_SLAVE_RATIO : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCMD1_REG_PHY_CTRL_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t DLL_LOCK_DIFF : 4;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterCMD1_REG_PHY_DLL_LOCK_DIFF_0;

typedef union {
  struct {
    uint32_t INVERT_CLK_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterCMD1_REG_PHY_INVERT_CLKOUT_0;

typedef union {
  struct {
    uint32_t CMD_SLAVE_RATIO : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCMD2_REG_PHY_CTRL_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t DLL_LOCK_DIFF : 4;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterCMD2_REG_PHY_DLL_LOCK_DIFF_0;

typedef union {
  struct {
    uint32_t INVERT_CLK_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterCMD2_REG_PHY_INVERT_CLKOUT_0;

typedef union {
  struct {
    uint32_t RD_DQS_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_RD_DQS_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t _WR_DQS_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_WR_DQS_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t WRLVL_INIT_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_WRLVL_INIT_RATIO_0;

typedef union {
  struct {
    uint32_t WRLVL_INIT_MODE_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_WRLVL_INIT_MODE_0;

typedef union {
  struct {
    uint32_t GATELVL_INIT_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_GATELVL_INIT_RATIO_0;

typedef union {
  struct {
    uint32_t GATELVL_INIT_MODE_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_GATELVL_INIT_MODE_0;

typedef union {
  struct {
    uint32_t RD_DQS_GATE_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_FIFO_WE_SLAVE_RATIO_0;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_DQ_OFFSET_0;

typedef union {
  struct {
    uint32_t WR_DATA_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_WR_DATA_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t PHY_USE_RANK0_DELAYS_0 : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_USE_RANK0_DELAYS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterDATA0_REG_PHY_DLL_LOCK_DIFF_0;

typedef union {
  struct {
    uint32_t RD_DQS_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_RD_DQS_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t _WR_DQS_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_WR_DQS_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t WRLVL_INIT_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_WRLVL_INIT_RATIO_0;

typedef union {
  struct {
    uint32_t WRLVL_INIT_MODE_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_WRLVL_INIT_MODE_0;

typedef union {
  struct {
    uint32_t GATELVL_INIT_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_GATELVL_INIT_RATIO_0;

typedef union {
  struct {
    uint32_t GATELVL_INIT_MODE_SEL : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_GATELVL_INIT_MODE_0;

typedef union {
  struct {
    uint32_t RD_DQS_GATE_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_FIFO_WE_SLAVE_RATIO_0;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_DQ_OFFSET_1;

typedef union {
  struct {
    uint32_t WR_DATA_SLAVE_RATIO_CS0 : 10;
    uint32_t RESERVED2 : 10;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_WR_DATA_SLAVE_RATIO_0;

typedef union {
  struct {
    uint32_t PHY_USE_RANK0_DELAYS_0 : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_USE_RANK0_DELAYS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterDATA1_REG_PHY_DLL_LOCK_DIFF_0;

typedef struct {
  uint8_t RESERVED_OFFSETS_0[28];
  RegisterCMD0_REG_PHY_CTRL_SLAVE_RATIO_0 CMD0_REG_PHY_CTRL_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_1[8];
  RegisterCMD0_REG_PHY_DLL_LOCK_DIFF_0 CMD0_REG_PHY_DLL_LOCK_DIFF_0;
  RegisterCMD0_REG_PHY_INVERT_CLKOUT_0 CMD0_REG_PHY_INVERT_CLKOUT_0;
  uint8_t RESERVED_OFFSETS_2[32];
  RegisterCMD1_REG_PHY_CTRL_SLAVE_RATIO_0 CMD1_REG_PHY_CTRL_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_3[8];
  RegisterCMD1_REG_PHY_DLL_LOCK_DIFF_0 CMD1_REG_PHY_DLL_LOCK_DIFF_0;
  RegisterCMD1_REG_PHY_INVERT_CLKOUT_0 CMD1_REG_PHY_INVERT_CLKOUT_0;
  uint8_t RESERVED_OFFSETS_4[32];
  RegisterCMD2_REG_PHY_CTRL_SLAVE_RATIO_0 CMD2_REG_PHY_CTRL_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_5[8];
  RegisterCMD2_REG_PHY_DLL_LOCK_DIFF_0 CMD2_REG_PHY_DLL_LOCK_DIFF_0;
  RegisterCMD2_REG_PHY_INVERT_CLKOUT_0 CMD2_REG_PHY_INVERT_CLKOUT_0;
  uint8_t RESERVED_OFFSETS_6[48];
  RegisterDATA0_REG_PHY_RD_DQS_SLAVE_RATIO_0 DATA0_REG_PHY_RD_DQS_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_7[16];
  RegisterDATA0_REG_PHY_WR_DQS_SLAVE_RATIO_0 DATA0_REG_PHY_WR_DQS_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_8[16];
  RegisterDATA0_REG_PHY_WRLVL_INIT_RATIO_0 DATA0_REG_PHY_WRLVL_INIT_RATIO_0;
  uint8_t RESERVED_OFFSETS_9[4];
  RegisterDATA0_REG_PHY_WRLVL_INIT_MODE_0 DATA0_REG_PHY_WRLVL_INIT_MODE_0;
  RegisterDATA0_REG_PHY_GATELVL_INIT_RATIO_0 DATA0_REG_PHY_GATELVL_INIT_RATIO_0;
  uint8_t RESERVED_OFFSETS_10[4];
  RegisterDATA0_REG_PHY_GATELVL_INIT_MODE_0 DATA0_REG_PHY_GATELVL_INIT_MODE_0;
  RegisterDATA0_REG_PHY_FIFO_WE_SLAVE_RATIO_0 DATA0_REG_PHY_FIFO_WE_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_11[16];
  RegisterDATA0_REG_PHY_DQ_OFFSET_0 DATA0_REG_PHY_DQ_OFFSET_0;
  RegisterDATA0_REG_PHY_WR_DATA_SLAVE_RATIO_0 DATA0_REG_PHY_WR_DATA_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_12[16];
  RegisterDATA0_REG_PHY_USE_RANK0_DELAYS DATA0_REG_PHY_USE_RANK0_DELAYS;
  RegisterDATA0_REG_PHY_DLL_LOCK_DIFF_0 DATA0_REG_PHY_DLL_LOCK_DIFF_0;
  uint8_t RESERVED_OFFSETS_13[48];
  RegisterDATA1_REG_PHY_RD_DQS_SLAVE_RATIO_0 DATA1_REG_PHY_RD_DQS_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_14[16];
  RegisterDATA1_REG_PHY_WR_DQS_SLAVE_RATIO_0 DATA1_REG_PHY_WR_DQS_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_15[16];
  RegisterDATA1_REG_PHY_WRLVL_INIT_RATIO_0 DATA1_REG_PHY_WRLVL_INIT_RATIO_0;
  uint8_t RESERVED_OFFSETS_16[4];
  RegisterDATA1_REG_PHY_WRLVL_INIT_MODE_0 DATA1_REG_PHY_WRLVL_INIT_MODE_0;
  RegisterDATA1_REG_PHY_GATELVL_INIT_RATIO_0 DATA1_REG_PHY_GATELVL_INIT_RATIO_0;
  uint8_t RESERVED_OFFSETS_17[4];
  RegisterDATA1_REG_PHY_GATELVL_INIT_MODE_0 DATA1_REG_PHY_GATELVL_INIT_MODE_0;
  RegisterDATA1_REG_PHY_FIFO_WE_SLAVE_RATIO_0 DATA1_REG_PHY_FIFO_WE_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_18[16];
  RegisterDATA1_REG_PHY_DQ_OFFSET_1 DATA1_REG_PHY_DQ_OFFSET_1;
  RegisterDATA1_REG_PHY_WR_DATA_SLAVE_RATIO_0 DATA1_REG_PHY_WR_DATA_SLAVE_RATIO_0;
  uint8_t RESERVED_OFFSETS_19[16];
  RegisterDATA1_REG_PHY_USE_RANK0_DELAYS DATA1_REG_PHY_USE_RANK0_DELAYS;
  RegisterDATA1_REG_PHY_DLL_LOCK_DIFF_0 DATA1_REG_PHY_DLL_LOCK_DIFF_0;
} PeripheralDDR2_3_PHY;

typedef union {
  struct {
    uint32_t TID_REV : 8;
    uint32_t RESERVED_24 : 24;
  };
  uint32_t raw;
} RegisterTIDR;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t ENAWAKEUP : 1;
    uint32_t IDLEMODE : 2;
    uint32_t EMUFREE : 1;
    uint32_t RESERVED_02 : 2;
    uint32_t CLOCKACTIVITY : 2;
    uint32_t RESERVED_22 : 22;
  };
  uint32_t raw;
} RegisterTIOCP_CFG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED_31 : 31;
  };
  uint32_t raw;
} RegisterTISTAT;

typedef union {
  struct {
    uint32_t MAT_IT_FLAG : 1;
    uint32_t OVF_IT_FLAG : 1;
    uint32_t TCAR_IT_FLAG : 1;
    uint32_t RESERVED_29 : 29;
  };
  uint32_t raw;
} RegisterTISR;

typedef union {
  struct {
    uint32_t MAT_IT_ENA : 1;
    uint32_t OVF_IT_ENA : 1;
    uint32_t TCAR_IT_ENA : 1;
    uint32_t RESERVED_29 : 29;
  };
  uint32_t raw;
} RegisterTIER;

typedef union {
  struct {
    uint32_t MAT_WUP_ENA : 1;
    uint32_t OVF_WUP_ENA : 1;
    uint32_t TCAR_WUP_ENA : 1;
    uint32_t RESERVED_29 : 29;
  };
  uint32_t raw;
} RegisterTWER;

typedef union {
  struct {
    uint32_t ST : 1;
    uint32_t AR : 1;
    uint32_t PTV : 3;
    uint32_t PRE : 1;
    uint32_t CE : 1;
    uint32_t SCPWM : 1;
    uint32_t TCM : 2;
    uint32_t TRG : 2;
    uint32_t PT : 1;
    uint32_t CAPT_MODE : 1;
    uint32_t GPO_CFG : 1;
    uint32_t RESERVED_17 : 17;
  };
  uint32_t raw;
} RegisterTCLR;

typedef union {
  struct {
    uint32_t TIMER_COUNTER : 32;
  };
  uint32_t raw;
} RegisterTCRR;

typedef union {
  struct {
    uint32_t LOAD_VALUE : 32;
  };
  uint32_t raw;
} RegisterTLDR;

typedef union {
  struct {
    uint32_t VALUE : 32;
  };
  uint32_t raw;
} RegisterTTGR;

typedef union {
  struct {
    uint32_t W_PEND_TCLR : 1;
    uint32_t W_PEND_TCRR : 1;
    uint32_t W_PEND_TLDR : 1;
    uint32_t W_PEND_TTGR : 1;
    uint32_t W_PEND_TMAR : 1;
    uint32_t W_PEND_TPIR : 1;
    uint32_t W_PEND_TNIR : 1;
    uint32_t W_PEND_TCVR : 1;
    uint32_t W_PEND_TOCR : 1;
    uint32_t W_PEND_TOWR : 1;
    uint32_t RESERVED_22 : 22;
  };
  uint32_t raw;
} RegisterTWPS;

typedef union {
  struct {
    uint32_t COMPARE_VALUE : 32;
  };
  uint32_t raw;
} RegisterTMAR;

typedef union {
  struct {
    uint32_t CAPTURE_VALUE1 : 32;
  };
  uint32_t raw;
} RegisterTCAR1;

typedef union {
  struct {
    uint32_t RESERVED_1 : 1;
    uint32_t SFT : 1;
    uint32_t POSTED : 1;
    uint32_t RESERVED_29 : 29;
  };
  uint32_t raw;
} RegisterTSICR;

typedef union {
  struct {
    uint32_t CAPTURE_VALUE2 : 32;
  };
  uint32_t raw;
} RegisterTCAR2;

typedef union {
  struct {
    uint32_t POSITIVE_INC_VALUE : 32;
  };
  uint32_t raw;
} RegisterTPIR;

typedef union {
  struct {
    uint32_t NEGATIVE_INV_VALUE : 32;
  };
  uint32_t raw;
} RegisterTNIR;

typedef union {
  struct {
    uint32_t COUNTER_VALUE : 32;
  };
  uint32_t raw;
} RegisterTCVR;

typedef union {
  struct {
    uint32_t OVF_COUNTER_VALUE : 24;
    uint32_t RESERVED_24 : 8;
  };
  uint32_t raw;
} RegisterTOCR;

typedef union {
  struct {
    uint32_t OVF_WRAPPING_VALUE : 24;
    uint32_t RESERVED_24 : 8;
  };
  uint32_t raw;
} RegisterTOWR;

typedef struct {
  RegisterTIDR TIDR;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterTIOCP_CFG TIOCP_CFG;
  RegisterTISTAT TISTAT;
  RegisterTISR TISR;
  RegisterTIER TIER;
  RegisterTWER TWER;
  RegisterTCLR TCLR;
  RegisterTCRR TCRR;
  RegisterTLDR TLDR;
  RegisterTTGR TTGR;
  RegisterTWPS TWPS;
  RegisterTMAR TMAR;
  RegisterTCAR1 TCAR1;
  RegisterTSICR TSICR;
  RegisterTCAR2 TCAR2;
  RegisterTPIR TPIR;
  RegisterTNIR TNIR;
  RegisterTCVR TCVR;
  RegisterTOCR TOCR;
  RegisterTOWR TOWR;
} PeripheralDMTIMER1_1MS;

typedef union {
  struct {
    uint32_t REVISION : 32;
  };
  uint32_t raw;
} RegisterWDT_WIDR;

typedef union {
  struct {
    uint32_t RESERVED3 : 1;
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED2 : 1;
    uint32_t IDLEMODE : 2;
    uint32_t EMUFREE : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterWDT_WDSC;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterWDT_WDST;

typedef union {
  struct {
    uint32_t OVF_IT_FLAG : 1;
    uint32_t DLY_IT_FLAG : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WISR;

typedef union {
  struct {
    uint32_t OVF_IT_ENA : 1;
    uint32_t DLY_IT_ENA : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WIER;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t PTV : 3;
    uint32_t PRE : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterWDT_WCLR;

typedef union {
  struct {
    uint32_t TIMER_COUNTER : 32;
  };
  uint32_t raw;
} RegisterWDT_WCRR;

typedef union {
  struct {
    uint32_t TIMER_LOAD : 32;
  };
  uint32_t raw;
} RegisterWDT_WLDR;

typedef union {
  struct {
    uint32_t TTGR_VALUE : 32;
  };
  uint32_t raw;
} RegisterWDT_WTGR;

typedef union {
  struct {
    uint32_t W_PEND_WCLR : 1;
    uint32_t W_PEND_WCRR : 1;
    uint32_t W_PEND_WLDR : 1;
    uint32_t W_PEND_WTGR : 1;
    uint32_t W_PEND_WSPR : 1;
    uint32_t W_PEND_WDLY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterWDT_WWPS;

typedef union {
  struct {
    uint32_t WDLY_VALUE : 32;
  };
  uint32_t raw;
} RegisterWDT_WDLY;

typedef union {
  struct {
    uint32_t WSPR_VALUE : 32;
  };
  uint32_t raw;
} RegisterWDT_WSPR;

typedef union {
  struct {
    uint32_t EVENT_OVF : 1;
    uint32_t EVENT_DLY : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WIRQSTATRAW;

typedef union {
  struct {
    uint32_t EVENT_OVF : 1;
    uint32_t EVENT_DLY : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WIRQSTAT;

typedef union {
  struct {
    uint32_t ENABLE_OVF : 1;
    uint32_t ENABLE_DLY : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WIRQENSET;

typedef union {
  struct {
    uint32_t ENABLE_OVF : 1;
    uint32_t ENABLE_DLY : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterWDT_WIRQENCLR;

typedef struct {
  RegisterWDT_WIDR WDT_WIDR;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterWDT_WDSC WDT_WDSC;
  RegisterWDT_WDST WDT_WDST;
  RegisterWDT_WISR WDT_WISR;
  RegisterWDT_WIER WDT_WIER;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterWDT_WCLR WDT_WCLR;
  RegisterWDT_WCRR WDT_WCRR;
  RegisterWDT_WLDR WDT_WLDR;
  RegisterWDT_WTGR WDT_WTGR;
  RegisterWDT_WWPS WDT_WWPS;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterWDT_WDLY WDT_WDLY;
  RegisterWDT_WSPR WDT_WSPR;
  uint8_t RESERVED_OFFSETS_3[8];
  RegisterWDT_WIRQSTATRAW WDT_WIRQSTATRAW;
  RegisterWDT_WIRQSTAT WDT_WIRQSTAT;
  RegisterWDT_WIRQENSET WDT_WIRQENSET;
  RegisterWDT_WIRQENCLR WDT_WIRQENCLR;
} PeripheralWDT1;

typedef union {
  struct {
    uint32_t SEC0 : 4;
    uint32_t SEC1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterSECONDS_REG;

typedef union {
  struct {
    uint32_t MIN0 : 4;
    uint32_t MIN1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterMINUTES_REG;

typedef union {
  struct {
    uint32_t HOUR0 : 4;
    uint32_t HOUR1 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t PM_NAM : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterHOURS_REG;

typedef union {
  struct {
    uint32_t DAY0 : 4;
    uint32_t DAY1 : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterDAYS_REG;

typedef union {
  struct {
    uint32_t MONTH0 : 4;
    uint32_t MONTH1 : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterMONTHS_REG;

typedef union {
  struct {
    uint32_t YEAR0 : 4;
    uint32_t YEAR1 : 4;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterYEARS_REG;

typedef union {
  struct {
    uint32_t WEEK : 3;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterWEEKS_REG;

typedef union {
  struct {
    uint32_t ALARMSEC0 : 4;
    uint32_t ALARMSEC1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterALARM_SECONDS_REG;

typedef union {
  struct {
    uint32_t ALARM_MIN0 : 4;
    uint32_t ALARM_MIN1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterALARM_MINUTES_REG;

typedef union {
  struct {
    uint32_t ALARM_HOUR0 : 4;
    uint32_t ALARM_HOUR1 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t ALARM_PM_NAM : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterALARM_HOURS_REG;

typedef union {
  struct {
    uint32_t ALARM_DAY0 : 4;
    uint32_t ALARM_DAY1 : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterALARM_DAYS_REG;

typedef union {
  struct {
    uint32_t ALARM_MONTH0 : 4;
    uint32_t ALARM_MONTH1 : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterALARM_MONTHS_REG;

typedef union {
  struct {
    uint32_t ALARM_YEAR0 : 4;
    uint32_t ALARM_YEAR1 : 4;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterALARM_YEARS_REG;

typedef union {
  struct {
    uint32_t STOP_RTC : 1;
    uint32_t ROUND_30S : 1;
    uint32_t AUTO_COMP : 1;
    uint32_t MODE_12_24 : 1;
    uint32_t TEST_MODE : 1;
    uint32_t SET_32_COUNTER : 1;
    uint32_t RTC_DISABLE : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterRTC_CTRL_REG;

typedef union {
  struct {
    uint32_t BUSY : 1;
    uint32_t RUN : 1;
    uint32_t _1S_EVENT : 1;
    uint32_t _1M_EVENT : 1;
    uint32_t _1H_EVENT : 1;
    uint32_t _1D_EVENT : 1;
    uint32_t ALARM : 1;
    uint32_t ALARM2 : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRTC_STATUS_REG;

typedef union {
  struct {
    uint32_t EVERY : 2;
    uint32_t IT_TIMER : 1;
    uint32_t IT_ALARM : 1;
    uint32_t IT_ALARM2 : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterRTC_INTERRUPTS_REG;

typedef union {
  struct {
    uint32_t RTC_COMP_LSB : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRTC_COMP_LSB_REG;

typedef union {
  struct {
    uint32_t RTC_COMP_MSB : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRTC_COMP_MSB_REG;

typedef union {
  struct {
    uint32_t SW1 : 1;
    uint32_t SW2 : 1;
    uint32_t RES_SELECT : 1;
    uint32_t _32KCLK_SEL : 1;
    uint32_t OSC32K_GZ : 1;
    uint32_t RESERVED2 : 1;
    uint32_t _32KCLK_EN : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterRTC_OSC_REG;

typedef union {
  struct {
    uint32_t RTCSCRATCH0 : 32;
  };
  uint32_t raw;
} RegisterRTC_SCRATCH0_REG;

typedef union {
  struct {
    uint32_t RTCSCRATCH1 : 32;
  };
  uint32_t raw;
} RegisterRTC_SCRATCH1_REG;

typedef union {
  struct {
    uint32_t RTCSCRATCH2 : 32;
  };
  uint32_t raw;
} RegisterRTC_SCRATCH2_REG;

typedef union {
  struct {
    uint32_t KICK0 : 32;
  };
  uint32_t raw;
} RegisterKICK0R;

typedef union {
  struct {
    uint32_t KICK1 : 32;
  };
  uint32_t raw;
} RegisterKICK1R;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterRTC_REVISION;

typedef union {
  struct {
    uint32_t IDLEMODE : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterRTC_SYSCONFIG;

typedef union {
  struct {
    uint32_t TIMER_WAKEEN : 1;
    uint32_t ALARM_WAKEEN : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterRTC_IRQWAKEEN;

typedef union {
  struct {
    uint32_t ALARM2_SEC0 : 4;
    uint32_t ALARM2_SEC1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterALARM2_SECONDS_REG;

typedef union {
  struct {
    uint32_t ALARM2_MIN0 : 4;
    uint32_t ALARM2_MIN1 : 3;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterALARM2_MINUTES_REG;

typedef union {
  struct {
    uint32_t ALARM2_HOUR0 : 4;
    uint32_t ALARM2_HOUR1 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t ALARM2_PM_NAM : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterALARM2_HOURS_REG;

typedef union {
  struct {
    uint32_t ALARM2_DAY0 : 4;
    uint32_t ALARM2_DAY1 : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterALARM2_DAYS_REG;

typedef union {
  struct {
    uint32_t ALARM2_MONTH0 : 4;
    uint32_t ALARM2_MONTH1 : 1;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterALARM2_MONTHS_REG;

typedef union {
  struct {
    uint32_t ALARM2_YEAR0 : 4;
    uint32_t ALARM2_YEAR1 : 4;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterALARM2_YEARS_REG;

typedef union {
  struct {
    uint32_t EXT_WAKEUP_EN : 4;
    uint32_t EXT_WAKEUP_POL : 4;
    uint32_t EXT_WAKEUP_DB_EN : 4;
    uint32_t EXT_WAKEUP_STATUS : 4;
    uint32_t PWR_ENABLE_EN : 1;
    uint32_t PWR_ENABLE_SM : 2;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterRTC_PMIC;

typedef union {
  struct {
    uint32_t DEBOUNCE_REG : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRTC_DEBOUNCE;

typedef struct {
  RegisterSECONDS_REG SECONDS_REG;
  RegisterMINUTES_REG MINUTES_REG;
  RegisterHOURS_REG HOURS_REG;
  RegisterDAYS_REG DAYS_REG;
  RegisterMONTHS_REG MONTHS_REG;
  RegisterYEARS_REG YEARS_REG;
  RegisterWEEKS_REG WEEKS_REG;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterALARM_SECONDS_REG ALARM_SECONDS_REG;
  RegisterALARM_MINUTES_REG ALARM_MINUTES_REG;
  RegisterALARM_HOURS_REG ALARM_HOURS_REG;
  RegisterALARM_DAYS_REG ALARM_DAYS_REG;
  RegisterALARM_MONTHS_REG ALARM_MONTHS_REG;
  RegisterALARM_YEARS_REG ALARM_YEARS_REG;
  uint8_t RESERVED_OFFSETS_1[8];
  RegisterRTC_CTRL_REG RTC_CTRL_REG;
  RegisterRTC_STATUS_REG RTC_STATUS_REG;
  RegisterRTC_INTERRUPTS_REG RTC_INTERRUPTS_REG;
  RegisterRTC_COMP_LSB_REG RTC_COMP_LSB_REG;
  RegisterRTC_COMP_MSB_REG RTC_COMP_MSB_REG;
  RegisterRTC_OSC_REG RTC_OSC_REG;
  uint8_t RESERVED_OFFSETS_2[8];
  RegisterRTC_SCRATCH0_REG RTC_SCRATCH0_REG;
  RegisterRTC_SCRATCH1_REG RTC_SCRATCH1_REG;
  RegisterRTC_SCRATCH2_REG RTC_SCRATCH2_REG;
  RegisterKICK0R KICK0R;
  RegisterKICK1R KICK1R;
  RegisterRTC_REVISION RTC_REVISION;
  RegisterRTC_SYSCONFIG RTC_SYSCONFIG;
  RegisterRTC_IRQWAKEEN RTC_IRQWAKEEN;
  RegisterALARM2_SECONDS_REG ALARM2_SECONDS_REG;
  RegisterALARM2_MINUTES_REG ALARM2_MINUTES_REG;
  RegisterALARM2_HOURS_REG ALARM2_HOURS_REG;
  RegisterALARM2_DAYS_REG ALARM2_DAYS_REG;
  RegisterALARM2_MONTHS_REG ALARM2_MONTHS_REG;
  RegisterALARM2_YEARS_REG ALARM2_YEARS_REG;
  RegisterRTC_PMIC RTC_PMIC;
  RegisterRTC_DEBOUNCE RTC_DEBOUNCE;
} PeripheralRTCSS;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterREVREG;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t FREEEMU : 1;
    uint32_t IDLEMODE : 2;
    uint32_t STANDBY_MODE : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t PHY1_UTMI_EN_N : 1;
    uint32_t USB1_OCP_EN_N : 1;
    uint32_t PHY0_UTMI_EN_N : 1;
    uint32_t USB0_OCP_EN_N : 1;
    uint32_t RESERVED_BITS_1 : 20;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t RX_SOP_STARVATION : 1;
    uint32_t RX_MOP_STARVATION : 1;
    uint32_t PD_CMP_FLAG : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t TX_PKT_CMP_0 : 1;
    uint32_t RX_PKT_CMP_0 : 1;
    uint32_t TX_PKT_CMP_1 : 1;
    uint32_t RX_PKT_CMP_1 : 1;
    uint32_t RESERVED_BITS_1 : 20;
  };
  uint32_t raw;
} RegisterIRQSTATRAW;

typedef union {
  struct {
    uint32_t RX_SOP_STARVATION : 1;
    uint32_t RX_MOP_STARVATION : 1;
    uint32_t PD_CMP_FLAG : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t TX_PKT_CMP_0 : 1;
    uint32_t RX_PKT_CMP_0 : 1;
    uint32_t TX_PKT_CMP_1 : 1;
    uint32_t RX_PKT_CMP_1 : 1;
    uint32_t RESERVED_BITS_1 : 20;
  };
  uint32_t raw;
} RegisterIRQSTAT;

typedef union {
  struct {
    uint32_t RX_SOP_STARVATION : 1;
    uint32_t RX_MOP_STARVATION : 1;
    uint32_t PD_CMP_FLAG : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t TX_PKT_CMP_0 : 1;
    uint32_t RX_PKT_CMP_0 : 1;
    uint32_t TX_PKT_CMP_1 : 1;
    uint32_t RX_PKT_CMP_1 : 1;
    uint32_t RESERVED_BITS_1 : 20;
  };
  uint32_t raw;
} RegisterIRQENABLER;

typedef union {
  struct {
    uint32_t RX_SOP_STARVATION : 1;
    uint32_t RX_MOP_STARVATION : 1;
    uint32_t PD_CMP_FLAG : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t TX_PKT_CMP_0 : 1;
    uint32_t RX_PKT_CMP_0 : 1;
    uint32_t TX_PKT_CMP_1 : 1;
    uint32_t RX_PKT_CMP_1 : 1;
    uint32_t RESERVED_BITS_1 : 20;
  };
  uint32_t raw;
} RegisterIRQCLEARR;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t DMA_THRES_TX0_1 : 8;
    uint32_t DMA_THRES_TX0_2 : 8;
    uint32_t DMA_THRES_TX0_3 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX00;

typedef union {
  struct {
    uint32_t DMA_THRES_TX0_4 : 8;
    uint32_t DMA_THRES_TX0_5 : 8;
    uint32_t DMA_THRES_TX0_6 : 8;
    uint32_t DMA_THRES_TX0_7 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX01;

typedef union {
  struct {
    uint32_t DMA_THRES_TX0_8 : 8;
    uint32_t DMA_THRES_TX0_9 : 8;
    uint32_t DMA_THRES_TX0_10 : 8;
    uint32_t DMA_THRES_TX0_11 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX02;

typedef union {
  struct {
    uint32_t DMA_THRES_TX0_12 : 8;
    uint32_t DMA_THRES_TX0_13 : 8;
    uint32_t DMA_THRES_TX0_14 : 8;
    uint32_t DMA_THRES_TX0_15 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX03;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t DMA_THRES_RX0_1 : 8;
    uint32_t DMA_THRES_RX0_2 : 8;
    uint32_t DMA_THRES_RX0_3 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX00;

typedef union {
  struct {
    uint32_t DMA_THRES_RX0_4 : 8;
    uint32_t DMA_THRES_RX0_5 : 8;
    uint32_t DMA_THRES_RX0_6 : 8;
    uint32_t DMA_THRES_RX0_7 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX01;

typedef union {
  struct {
    uint32_t DMA_THRES_RX0_8 : 8;
    uint32_t DMA_THRES_RX0_9 : 8;
    uint32_t DMA_THRES_RX0_10 : 8;
    uint32_t DMA_THRES_RX0_11 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX02;

typedef union {
  struct {
    uint32_t DMA_THRES_RX0_12 : 8;
    uint32_t DMA_THRES_RX0_13 : 8;
    uint32_t DMA_THRES_RX0_14 : 8;
    uint32_t DMA_THRES_RX0_15 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX03;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t DMA_THRES_TX1_1 : 8;
    uint32_t DMA_THRES_TX1_2 : 8;
    uint32_t DMA_THRES_TX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX10;

typedef union {
  struct {
    uint32_t DMA_THRES_TX1_4 : 8;
    uint32_t DMA_THRES_TX1_5 : 8;
    uint32_t DMA_THRES_TX1_6 : 8;
    uint32_t DMA_THRES_TX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX11;

typedef union {
  struct {
    uint32_t DMA_THRES_TX1_8 : 8;
    uint32_t DMA_THRES_TX1_9 : 8;
    uint32_t DMA_THRES_TX1_10 : 8;
    uint32_t DMA_THRES_TX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX12;

typedef union {
  struct {
    uint32_t DMA_THRES_TX1_12 : 8;
    uint32_t DMA_THRES_TX1_13 : 8;
    uint32_t DMA_THRES_TX1_14 : 8;
    uint32_t DMA_THRES_TX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDTX13;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t DMA_THRES_RX1_1 : 8;
    uint32_t DMA_THRES_RX1_2 : 8;
    uint32_t DMA_THRES_RX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX10;

typedef union {
  struct {
    uint32_t DMA_THRES_RX1_4 : 8;
    uint32_t DMA_THRES_RX1_5 : 8;
    uint32_t DMA_THRES_RX1_6 : 8;
    uint32_t DMA_THRES_RX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX11;

typedef union {
  struct {
    uint32_t DMA_THRES_RX1_8 : 8;
    uint32_t DMA_THRES_RX1_9 : 8;
    uint32_t DMA_THRES_RX1_10 : 8;
    uint32_t DMA_THRES_RX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX12;

typedef union {
  struct {
    uint32_t DMA_THRES_RX1_12 : 8;
    uint32_t DMA_THRES_RX1_13 : 8;
    uint32_t DMA_THRES_RX1_14 : 8;
    uint32_t DMA_THRES_RX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQDMATHOLDRX13;

typedef union {
  struct {
    uint32_t DMA_EN_TX0_1 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t DMA_EN_TX0_2 : 1;
    uint32_t RESERVED_BITS_1 : 12;
    uint32_t DMA_EN_TX0_15 : 1;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t DMA_EN_RX0_1 : 1;
    uint32_t RESERVED_BITS_3 : 13;
    uint32_t DMA_EN_RX0_15 : 1;
  };
  uint32_t raw;
} RegisterIRQDMAENABLE0;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t DMA_EN_TX1_1 : 1;
    uint32_t RESERVED_BITS_1 : 13;
    uint32_t DMA_EN_TX1_15 : 1;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t DMA_EN_RX1_1 : 1;
    uint32_t RESERVED_BITS_3 : 13;
    uint32_t DMA_EN_RX1_15 : 1;
  };
  uint32_t raw;
} RegisterIRQDMAENABLE1;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t FRAME_THRES_TX1_1 : 8;
    uint32_t FRAME_THRES_TX1_2 : 8;
    uint32_t FRAME_THRES_TX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX00;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_4 : 8;
    uint32_t FRAME_THRES_TX1_5 : 8;
    uint32_t FRAME_THRES_TX1_6 : 8;
    uint32_t FRAME_THRES_TX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX01;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_8 : 8;
    uint32_t FRAME_THRES_TX1_9 : 8;
    uint32_t FRAME_THRES_TX1_10 : 8;
    uint32_t FRAME_THRES_TX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX02;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_12 : 8;
    uint32_t FRAME_THRES_TX1_13 : 8;
    uint32_t FRAME_THRES_TX1_14 : 8;
    uint32_t FRAME_THRES_TX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX03;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t FRAME_THRES_RX1_1 : 8;
    uint32_t FRAME_THRES_RX1_2 : 8;
    uint32_t FRAME_THRES_RX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX00;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_4 : 8;
    uint32_t FRAME_THRES_RX1_5 : 8;
    uint32_t FRAME_THRES_RX1_6 : 8;
    uint32_t FRAME_THRES_RX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX01;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_8 : 8;
    uint32_t FRAME_THRES_RX1_9 : 8;
    uint32_t FRAME_THRES_RX1_10 : 8;
    uint32_t FRAME_THRES_RX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX02;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_12 : 8;
    uint32_t FRAME_THRES_RX1_13 : 8;
    uint32_t FRAME_THRES_RX1_14 : 8;
    uint32_t FRAME_THRES_RX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX03;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t FRAME_THRES_TX1_1 : 8;
    uint32_t FRAME_THRES_TX1_2 : 8;
    uint32_t FRAME_THRES_TX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX10;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_4 : 8;
    uint32_t FRAME_THRES_TX1_5 : 8;
    uint32_t FRAME_THRES_TX1_6 : 8;
    uint32_t FRAME_THRES_TX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX11;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_8 : 8;
    uint32_t FRAME_THRES_TX1_9 : 8;
    uint32_t FRAME_THRES_TX1_10 : 8;
    uint32_t FRAME_THRES_TX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX12;

typedef union {
  struct {
    uint32_t FRAME_THRES_TX1_12 : 8;
    uint32_t FRAME_THRES_TX1_13 : 8;
    uint32_t FRAME_THRES_TX1_14 : 8;
    uint32_t FRAME_THRES_TX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDTX13;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t FRAME_THRES_RX1_1 : 8;
    uint32_t FRAME_THRES_RX1_2 : 8;
    uint32_t FRAME_THRES_RX1_3 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX10;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_4 : 8;
    uint32_t FRAME_THRES_RX1_5 : 8;
    uint32_t FRAME_THRES_RX1_6 : 8;
    uint32_t FRAME_THRES_RX1_7 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX11;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_8 : 8;
    uint32_t FRAME_THRES_RX1_9 : 8;
    uint32_t FRAME_THRES_RX1_10 : 8;
    uint32_t FRAME_THRES_RX1_11 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX12;

typedef union {
  struct {
    uint32_t FRAME_THRES_RX1_12 : 8;
    uint32_t FRAME_THRES_RX1_13 : 8;
    uint32_t FRAME_THRES_RX1_14 : 8;
    uint32_t FRAME_THRES_RX1_15 : 8;
  };
  uint32_t raw;
} RegisterIRQFRAMETHOLDRX13;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t FRAME_EN_TX0_1 : 1;
    uint32_t RESERVED_BITS_1 : 13;
    uint32_t FRAME_EN_TX0_15 : 1;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t FRAME_EN_RX0_1 : 1;
    uint32_t RESERVED_BITS_3 : 13;
    uint32_t FRAME_EN_RX0_15 : 1;
  };
  uint32_t raw;
} RegisterIRQFRAMEENABLE0;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t FRAME_EN_TX1_1 : 1;
    uint32_t RESERVED_BITS_1 : 13;
    uint32_t FRAME_EN_TX1_15 : 1;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t FRAME_EN_RX1_1 : 1;
    uint32_t RESERVED_BITS_3 : 13;
    uint32_t FRAME_EN_RX1_15 : 1;
  };
  uint32_t raw;
} RegisterIRQFRAMEENABLE1;

typedef struct {
  RegisterREVREG REVREG;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  uint8_t RESERVED_OFFSETS_1[16];
  RegisterIRQSTATRAW IRQSTATRAW;
  RegisterIRQSTAT IRQSTAT;
  RegisterIRQENABLER IRQENABLER;
  RegisterIRQCLEARR IRQCLEARR;
  uint8_t RESERVED_OFFSETS_2[204];
  RegisterIRQDMATHOLDTX00 IRQDMATHOLDTX00;
  RegisterIRQDMATHOLDTX01 IRQDMATHOLDTX01;
  RegisterIRQDMATHOLDTX02 IRQDMATHOLDTX02;
  RegisterIRQDMATHOLDTX03 IRQDMATHOLDTX03;
  RegisterIRQDMATHOLDRX00 IRQDMATHOLDRX00;
  RegisterIRQDMATHOLDRX01 IRQDMATHOLDRX01;
  RegisterIRQDMATHOLDRX02 IRQDMATHOLDRX02;
  RegisterIRQDMATHOLDRX03 IRQDMATHOLDRX03;
  RegisterIRQDMATHOLDTX10 IRQDMATHOLDTX10;
  RegisterIRQDMATHOLDTX11 IRQDMATHOLDTX11;
  RegisterIRQDMATHOLDTX12 IRQDMATHOLDTX12;
  RegisterIRQDMATHOLDTX13 IRQDMATHOLDTX13;
  RegisterIRQDMATHOLDRX10 IRQDMATHOLDRX10;
  RegisterIRQDMATHOLDRX11 IRQDMATHOLDRX11;
  RegisterIRQDMATHOLDRX12 IRQDMATHOLDRX12;
  RegisterIRQDMATHOLDRX13 IRQDMATHOLDRX13;
  RegisterIRQDMAENABLE0 IRQDMAENABLE0;
  RegisterIRQDMAENABLE1 IRQDMAENABLE1;
  uint8_t RESERVED_OFFSETS_3[184];
  RegisterIRQFRAMETHOLDTX00 IRQFRAMETHOLDTX00;
  RegisterIRQFRAMETHOLDTX01 IRQFRAMETHOLDTX01;
  RegisterIRQFRAMETHOLDTX02 IRQFRAMETHOLDTX02;
  RegisterIRQFRAMETHOLDTX03 IRQFRAMETHOLDTX03;
  RegisterIRQFRAMETHOLDRX00 IRQFRAMETHOLDRX00;
  RegisterIRQFRAMETHOLDRX01 IRQFRAMETHOLDRX01;
  RegisterIRQFRAMETHOLDRX02 IRQFRAMETHOLDRX02;
  RegisterIRQFRAMETHOLDRX03 IRQFRAMETHOLDRX03;
  RegisterIRQFRAMETHOLDTX10 IRQFRAMETHOLDTX10;
  RegisterIRQFRAMETHOLDTX11 IRQFRAMETHOLDTX11;
  RegisterIRQFRAMETHOLDTX12 IRQFRAMETHOLDTX12;
  RegisterIRQFRAMETHOLDTX13 IRQFRAMETHOLDTX13;
  RegisterIRQFRAMETHOLDRX10 IRQFRAMETHOLDRX10;
  RegisterIRQFRAMETHOLDRX11 IRQFRAMETHOLDRX11;
  RegisterIRQFRAMETHOLDRX12 IRQFRAMETHOLDRX12;
  RegisterIRQFRAMETHOLDRX13 IRQFRAMETHOLDRX13;
  RegisterIRQFRAMEENABLE0 IRQFRAMEENABLE0;
  RegisterIRQFRAMEENABLE1 IRQFRAMEENABLE1;
} PeripheralUSBSS;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterUSB0REV;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t CLKFACK : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t UINT : 1;
    uint32_t RNDIS : 1;
    uint32_t SOFT_RESET_ISOLATION : 1;
    uint32_t RESERVED_BITS_1 : 24;
    uint32_t DIS_SRP : 1;
    uint32_t DIS_DEB : 1;
  };
  uint32_t raw;
} RegisterUSB0CTRL;

typedef union {
  struct {
    uint32_t DRVVBUS : 1;
    uint32_t RESERVED_BITS_0 : 31;
  };
  uint32_t raw;
} RegisterUSB0STAT;

typedef union {
  struct {
    uint32_t BANK0 : 1;
    uint32_t BANK1 : 1;
    uint32_t RESERVED_BITS_0 : 30;
  };
  uint32_t raw;
} RegisterUSB0IRQMSTAT;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQSTATRAW0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 6;
    uint32_t TX_FIFO_0 : 1;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQSTATRAW1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQSTAT0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 6;
    uint32_t TX_FIFO_0 : 1;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQSTAT1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQENABLESET0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 6;
    uint32_t TX_FIFO_0 : 1;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQENABLESET1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQENABLECLR0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 6;
    uint32_t TX_FIFO_0 : 1;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB0IRQENABLECLR1;

typedef union {
  struct {
    uint32_t TX1_MODE : 2;
    uint32_t TX2_MODE : 2;
    uint32_t TX3_MODE : 2;
    uint32_t TX4_MODE : 2;
    uint32_t TX5_MODE : 2;
    uint32_t TX6_MODE : 2;
    uint32_t TX7_MODE : 2;
    uint32_t TX8_MODE : 2;
    uint32_t TX9_MODE : 2;
    uint32_t TX10_MODE : 2;
    uint32_t TX11_MODE : 2;
    uint32_t TX12_MODE : 2;
    uint32_t TX13_MODE : 2;
    uint32_t TX14_MODE : 2;
    uint32_t TX15_MODE : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB0TXMODE;

typedef union {
  struct {
    uint32_t RX1_MODE : 2;
    uint32_t RX2_MODE : 2;
    uint32_t RX3_MODE : 2;
    uint32_t RX4_MODE : 2;
    uint32_t RX5_MODE : 2;
    uint32_t RX6_MODE : 2;
    uint32_t RX7_MODE : 2;
    uint32_t RX8_MODE : 2;
    uint32_t RX9_MODE : 2;
    uint32_t RX10_MODE : 2;
    uint32_t RX11_MODE : 2;
    uint32_t RX12_MODE : 2;
    uint32_t RX13_MODE : 2;
    uint32_t RX14_MODE : 2;
    uint32_t RX15_MODE : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB0RXMODE;

typedef union {
  struct {
    uint32_t EP1_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP1;

typedef union {
  struct {
    uint32_t EP2_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP2;

typedef union {
  struct {
    uint32_t EP3_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP3;

typedef union {
  struct {
    uint32_t EP4_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP4;

typedef union {
  struct {
    uint32_t EP5_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP5;

typedef union {
  struct {
    uint32_t EP6_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP6;

typedef union {
  struct {
    uint32_t EP7_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP7;

typedef union {
  struct {
    uint32_t EP8_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP8;

typedef union {
  struct {
    uint32_t EP9_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP9;

typedef union {
  struct {
    uint32_t EP10_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP10;

typedef union {
  struct {
    uint32_t EP11_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP11;

typedef union {
  struct {
    uint32_t EP12_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP12;

typedef union {
  struct {
    uint32_t EP13_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP13;

typedef union {
  struct {
    uint32_t EP14_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP14;

typedef union {
  struct {
    uint32_t EP15_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB0GENRNDISEP15;

typedef union {
  struct {
    uint32_t RX1_AUTOREQ : 2;
    uint32_t RX2_AUTOREQ : 2;
    uint32_t RX3_AUTOREQ : 2;
    uint32_t RX4_AUTOREQ : 2;
    uint32_t RX5_AUTOREQ : 2;
    uint32_t RX6_AUTOREQ : 2;
    uint32_t RX7_AUTOREQ : 2;
    uint32_t RX8_AUTOREQ : 2;
    uint32_t RX9_AUTOREQ : 2;
    uint32_t RX10_AUTOREQ : 2;
    uint32_t RX11_AUTOREQ : 2;
    uint32_t RX12_AUTOREQ : 2;
    uint32_t RX13_AUTOREQ : 2;
    uint32_t RX14_AUTOREQ : 2;
    uint32_t RX15_AUTOREQ : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB0AUTOREQ;

typedef union {
  struct {
    uint32_t SRPFIXTIME : 32;
  };
  uint32_t raw;
} RegisterUSB0SRPFIXTIME;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_TDOWN : 15;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t TX_TDOWN : 15;
  };
  uint32_t raw;
} RegisterTDOWN;

typedef union {
  struct {
    uint32_t FSSE0EXT : 1;
    uint32_t FSDATAEXT : 1;
    uint32_t WORDINTERFACE : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DATAINH : 8;
    uint32_t TXVALIDH : 1;
    uint32_t FSXCVROWNER : 1;
    uint32_t TXENABLEN : 1;
    uint32_t VBUSVLDEXT : 1;
    uint32_t VBUSVLDEXTSEL : 1;
    uint32_t OTGDISABLE : 1;
    uint32_t TXBITSTUFFENH : 1;
    uint32_t TXBITSTUFFEN : 1;
    uint32_t RESERVED_BITS_1 : 8;
  };
  uint32_t raw;
} RegisterUSB0UTMI;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t LINESTATE : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t RXERROR : 1;
    uint32_t VBUSVALID : 1;
    uint32_t AVALID : 1;
    uint32_t SESSEND : 1;
    uint32_t HOSTDISCON : 1;
    uint32_t IDDIG : 1;
    uint32_t RESERVED_BITS_2 : 4;
    uint32_t IDPULLUP : 1;
    uint32_t DMPULLDOWN : 1;
    uint32_t DPPULLDOWN : 1;
    uint32_t DISCHRGVBUS : 1;
    uint32_t CHRGVBUS : 1;
    uint32_t DRVVBUS : 1;
    uint32_t TERMSEL : 1;
    uint32_t XCVRSEL : 2;
    uint32_t TXVALID : 1;
    uint32_t OPMODE : 2;
    uint32_t SUSPENDM : 1;
    uint32_t RESERVED_BITS_3 : 3;
  };
  uint32_t raw;
} RegisterUSB0MGCUTMILB;

typedef union {
  struct {
    uint32_t LOOPBACK : 1;
    uint32_t PHY_TEST : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t IDDIG_MUX : 1;
    uint32_t IDDIG : 1;
    uint32_t RESERVED_BITS_1 : 23;
  };
  uint32_t raw;
} RegisterUSB0MODE;

typedef struct {
  RegisterUSB0REV USB0REV;
  uint8_t RESERVED_OFFSETS_0[16];
  RegisterUSB0CTRL USB0CTRL;
  RegisterUSB0STAT USB0STAT;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterUSB0IRQMSTAT USB0IRQMSTAT;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterUSB0IRQSTATRAW0 USB0IRQSTATRAW0;
  RegisterUSB0IRQSTATRAW1 USB0IRQSTATRAW1;
  RegisterUSB0IRQSTAT0 USB0IRQSTAT0;
  RegisterUSB0IRQSTAT1 USB0IRQSTAT1;
  RegisterUSB0IRQENABLESET0 USB0IRQENABLESET0;
  RegisterUSB0IRQENABLESET1 USB0IRQENABLESET1;
  RegisterUSB0IRQENABLECLR0 USB0IRQENABLECLR0;
  RegisterUSB0IRQENABLECLR1 USB0IRQENABLECLR1;
  uint8_t RESERVED_OFFSETS_3[40];
  RegisterUSB0TXMODE USB0TXMODE;
  RegisterUSB0RXMODE USB0RXMODE;
  uint8_t RESERVED_OFFSETS_4[8];
  RegisterUSB0GENRNDISEP1 USB0GENRNDISEP1;
  RegisterUSB0GENRNDISEP2 USB0GENRNDISEP2;
  RegisterUSB0GENRNDISEP3 USB0GENRNDISEP3;
  RegisterUSB0GENRNDISEP4 USB0GENRNDISEP4;
  RegisterUSB0GENRNDISEP5 USB0GENRNDISEP5;
  RegisterUSB0GENRNDISEP6 USB0GENRNDISEP6;
  RegisterUSB0GENRNDISEP7 USB0GENRNDISEP7;
  RegisterUSB0GENRNDISEP8 USB0GENRNDISEP8;
  RegisterUSB0GENRNDISEP9 USB0GENRNDISEP9;
  RegisterUSB0GENRNDISEP10 USB0GENRNDISEP10;
  RegisterUSB0GENRNDISEP11 USB0GENRNDISEP11;
  RegisterUSB0GENRNDISEP12 USB0GENRNDISEP12;
  RegisterUSB0GENRNDISEP13 USB0GENRNDISEP13;
  RegisterUSB0GENRNDISEP14 USB0GENRNDISEP14;
  RegisterUSB0GENRNDISEP15 USB0GENRNDISEP15;
  uint8_t RESERVED_OFFSETS_5[20];
  RegisterUSB0AUTOREQ USB0AUTOREQ;
  RegisterUSB0SRPFIXTIME USB0SRPFIXTIME;
  RegisterTDOWN TDOWN;
  uint8_t RESERVED_OFFSETS_6[4];
  RegisterUSB0UTMI USB0UTMI;
  RegisterUSB0MGCUTMILB USB0MGCUTMILB;
  RegisterUSB0MODE USB0MODE;
} PeripheralUSB0;

typedef union {
  struct {
    uint32_t RTERM_CAL : 7;
    uint32_t USE_RTERM_CAL_REG : 1;
    uint32_t DISABLE_TEMP_TRACK : 1;
    uint32_t RESTART_RTERM_CAL : 1;
    uint32_t RTERM_COMP_OUT : 1;
    uint32_t HS_CODE_SEL : 3;
    uint32_t RTERM_RMX : 7;
    uint32_t USE_RTERM_RMX_REG : 1;
    uint32_t RESERVED : 2;
    uint32_t FS_CODE_SEL : 4;
    uint32_t RTERM_CAL_DONE : 1;
    uint32_t ALWAYS_UPDATE : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTERMINATION_CONTROL;

typedef union {
  struct {
    uint32_t RESTART_SQ_CAL : 1;
    uint32_t SQ_CAL_DONE : 1;
    uint32_t SQ_COMP_OUT : 1;
    uint32_t SQ_OFF_CODE_DAC3 : 5;
    uint32_t USE_SQ_OFF_DAC3 : 1;
    uint32_t SQ_OFF_CODE_DAC2 : 5;
    uint32_t USE_SQ_OFF_DAC2 : 1;
    uint32_t SQ_OFF_CODE_DAC1 : 6;
    uint32_t USE_SQ_OFF_DAC1 : 1;
    uint32_t HSRX_CAL_DONE : 1;
    uint32_t HSRX_COMP_OUT : 1;
    uint32_t HS_OFF_CODE : 6;
    uint32_t USE_HS_OFF_REG : 1;
    uint32_t RESTART_HSRX_CAL : 1;
  };
  uint32_t raw;
} RegisterRX_CALIB;

typedef union {
  struct {
    uint32_t LINESTATE_DEBOUNCE_CNTL : 4;
    uint32_t LINESTATE_DEBOUNCE_EN : 1;
    uint32_t RESERVED : 11;
    uint32_t DLLHS_STATUS_LDO : 8;
    uint32_t DLLHS_CNTRL_LDO : 8;
  };
  uint32_t raw;
} RegisterDLLHS_2;

typedef union {
  struct {
    uint32_t CDR_TESTOUT : 8;
    uint32_t RESERVED : 3;
    uint32_t INTDATAOUTREG : 16;
    uint32_t USEINTDATAOUT : 1;
    uint32_t RXPIDERR : 1;
    uint32_t PHYCLKOUTINVERSION : 1;
    uint32_t HSOSBITINVERSION : 1;
    uint32_t HSOSREVERSAL : 1;
  };
  uint32_t raw;
} RegisterRX_TEST_2;

typedef union {
  struct {
    uint32_t FOR_CE : 1;
    uint32_t CHG_DET_VCTRL : 2;
    uint32_t CHG_DET_ICTRL : 2;
    uint32_t RESERVED : 2;
    uint32_t CHG_DET_TIMER : 6;
    uint32_t CHG_DET_OSC_CNTRL : 2;
    uint32_t COMP_DM : 1;
    uint32_t COMP_DP : 1;
    uint32_t CHG_VSRC_EN : 1;
    uint32_t CHG_ISINK_EN : 1;
    uint32_t RESERVED1 : 2;
    uint32_t DATA_DET : 1;
    uint32_t CHG_DETECTED : 1;
    uint32_t CHG_DET_DONE : 1;
    uint32_t RESTART_CHG_DET : 1;
    uint32_t CHG_DET_EXT_CTL : 1;
    uint32_t SINK_ON_DP : 1;
    uint32_t SRC_ON_DM : 1;
    uint32_t DIS_CHG_DET : 1;
    uint32_t USE_CHG_DET_REG : 1;
    uint32_t RESERVED2 : 2;
  };
  uint32_t raw;
} RegisterCHRG_DET;

typedef union {
  struct {
    uint32_t RESERVED : 1;
    uint32_t PD : 1;
    uint32_t USE_PD_REG : 1;
    uint32_t DATAPOLARITYN : 1;
    uint32_t USE_DATAPOLARITYN_REG : 1;
    uint32_t USEPLLLOCK : 1;
    uint32_t PLLLOCK : 1;
    uint32_t RESERVED1 : 2;
    uint32_t FORCEPLLON : 1;
    uint32_t FORCELDOON : 1;
    uint32_t FORCEPLLSLOWCLK : 1;
    uint32_t LDOPWRCOUNTER : 15;
    uint32_t RESETDONE_CHGDET : 1;
    uint32_t RESETDONEMCLK : 1;
    uint32_t VMAIN_GLOBAL_RESET_DONE : 1;
    uint32_t RESET_DONE_VMAIN : 1;
    uint32_t RESETDONETCLK : 1;
  };
  uint32_t raw;
} RegisterPWR_CNTL;

typedef union {
  struct {
    uint32_t TXVALIDH : 1;
    uint32_t TXVALID : 1;
    uint32_t USETXVALIDREG : 1;
    uint32_t XCVRSEL : 2;
    uint32_t OVERRIDEXCVRSEL : 1;
    uint32_t UTMIRESET : 1;
    uint32_t SUSPENDM : 1;
    uint32_t OVERRIDESUSRESET : 1;
    uint32_t OPMODE : 2;
    uint32_t USEOPMODEREG : 1;
    uint32_t DATABUS16OR8 : 1;
    uint32_t USEDATABUSREG : 1;
    uint32_t RESERVED : 1;
    uint32_t UTMIDATAIN : 16;
    uint32_t USEUTMIDATAREG : 1;
  };
  uint32_t raw;
} RegisterUTMI_INTERFACE_CNTL_1;

typedef union {
  struct {
    uint32_t SIG_BYPASS_SUSPENDMPULSE_INCR : 1;
    uint32_t RESERVED : 4;
    uint32_t TXENABLEN : 1;
    uint32_t FSLSSERIALMODE : 1;
    uint32_t TXDAT : 1;
    uint32_t TXSE0 : 1;
    uint32_t USEREGSERIALMODE : 1;
    uint32_t RESERVED6 : 3;
    uint32_t DMPULLDOWN : 1;
    uint32_t DPPULLDOWN : 1;
    uint32_t TERMSEL : 1;
    uint32_t USETERMCONTROLREG : 1;
    uint32_t TXBITSTUFFENABLEH : 1;
    uint32_t TXBITSTUFFENABLE : 1;
    uint32_t USEBITSTUFFREG : 1;
    uint32_t UTMIRESETDONE : 1;
    uint32_t TXREADY : 1;
    uint32_t RXERROR : 1;
    uint32_t RXACTIVE : 1;
    uint32_t RXVALIDH : 1;
    uint32_t RXVALID : 1;
    uint32_t LINESTATE : 2;
    uint32_t HOSTDISCONNECT : 1;
    uint32_t RXDM : 1;
    uint32_t RXDP : 1;
    uint32_t RXRCV : 1;
  };
  uint32_t raw;
} RegisterUTMI_INTERFACE_CNTL_2;

typedef union {
  struct {
    uint32_t USE_BIST_TX_PHASES : 1;
    uint32_t HS_ALL_ONES_TEST : 1;
    uint32_t INTER_PKT_DELAY_TEST : 1;
    uint32_t RESERVED : 1;
    uint32_t RX_TEST_MODE : 1;
    uint32_t OP_CODE : 2;
    uint32_t RESERVED2 : 3;
    uint32_t BUSY : 1;
    uint32_t PASS : 1;
    uint32_t SWEEP_MODE : 3;
    uint32_t SWEEP_EN : 1;
    uint32_t OP_PHASE_SEL : 3;
    uint32_t LOOPBACK_EN : 1;
    uint32_t PKT_LENGTH : 9;
    uint32_t CRC_CALC_EN : 1;
    uint32_t REDUCED_SWING : 1;
    uint32_t START : 1;
  };
  uint32_t raw;
} RegisterBIST;

typedef union {
  struct {
    uint32_t BIST_CRC : 32;
  };
  uint32_t raw;
} RegisterBIST_CRC;

typedef union {
  struct {
    uint32_t BIST_END_ADDR : 6;
    uint32_t BIST_START_ADDR : 6;
    uint32_t FORCE_CDR_PHASE_EN : 1;
    uint32_t CDR_CONFIGURE : 5;
    uint32_t DISABLE_CDR_FREQ_TRACK : 1;
    uint32_t FORCE_CDR_PHASE : 3;
    uint32_t CDR_CHOSEN_PHASE : 3;
    uint32_t NUM_DECISIONS : 3;
    uint32_t CDR_EXE_MODE : 3;
    uint32_t CDR_EXE_EN : 1;
  };
  uint32_t raw;
} RegisterCDR_BIST2;

typedef union {
  struct {
    uint32_t RESERVED : 18;
    uint32_t DPGPIOPIPD : 1;
    uint32_t DMGPIOPIPD : 1;
    uint32_t GPIOCONFIG : 3;
    uint32_t GPIO1P8VCONFIG : 1;
    uint32_t DMGPIOY : 1;
    uint32_t DPGPIOY : 1;
    uint32_t DMGPIOA : 1;
    uint32_t DPGPIOA : 1;
    uint32_t DMGPIOGZ : 1;
    uint32_t DPGPIOGZ : 1;
    uint32_t GPIOMODE : 1;
    uint32_t USEGPIOMODEREG : 1;
  };
  uint32_t raw;
} RegisterGPIO;

typedef union {
  struct {
    uint32_t RESERVED : 1;
    uint32_t DLL_FREEZE : 1;
    uint32_t DLL_IDLE : 1;
    uint32_t DLL_CDR_MODE : 1;
    uint32_t DLL_FILT : 2;
    uint32_t DLL_RATE : 2;
    uint32_t FORCE_DLL_CODE : 1;
    uint32_t DLL_FORCED_CODE : 6;
    uint32_t DLL_PHS0_8 : 1;
    uint32_t DLL_SEL_COD : 3;
    uint32_t DLL_LOCKCHK : 2;
    uint32_t DLL_SEL_CODE_PHS : 1;
    uint32_t GENERATED_CODE : 6;
    uint32_t LOCK : 1;
    uint32_t RESERVED2 : 3;
  };
  uint32_t raw;
} RegisterDLLHS;

typedef union {
  struct {
    uint32_t LDOSTATUS : 2;
    uint32_t LDOCONFIG : 16;
    uint32_t CMSTATUS : 6;
    uint32_t CONFIGURECM : 8;
  };
  uint32_t raw;
} RegisterUSB2PHYCM_CONFIG;

typedef union {
  struct {
    uint32_t SQUELCH : 1;
    uint32_t LSFS_RX_DATA : 1;
    uint32_t LSHOSTMODE : 1;
    uint32_t USE_LSHOST_REG : 1;
    uint32_t DISCON_DETECT : 1;
    uint32_t DLL_RX_DATA : 1;
    uint32_t RTERM_CAL_EN : 1;
    uint32_t TEST_RTERM_CAL_CONTROL : 1;
    uint32_t SQ_CAL_EN2 : 1;
    uint32_t SQ_CAL_EN1 : 1;
    uint32_t SQ_CAL_EN3 : 1;
    uint32_t TEST_SQ_CAL_CONTROL : 1;
    uint32_t RESERVED : 1;
    uint32_t FSTX_PRE_EN : 1;
    uint32_t FSTX_GZ : 1;
    uint32_t TEST_FS_MODE : 1;
    uint32_t HS_CHIRP : 1;
    uint32_t HS_HV_SW : 1;
    uint32_t TEST_HS_MODE : 1;
    uint32_t HS_RX_EN : 1;
    uint32_t SQ_EN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t FS_RX_EN : 1;
    uint32_t HS_TX_EN : 1;
    uint32_t TEST_EN_CNTRL : 1;
    uint32_t HS_RX_PRE_EN : 1;
    uint32_t HS_TX_PRE_EN : 1;
    uint32_t SQ_PRE_EN : 1;
    uint32_t TEST_PRE_EN_CNTRL : 1;
    uint32_t FS_TX_DATA : 1;
    uint32_t HS_TX_DATA : 1;
    uint32_t USE_AD_DATA_REG : 1;
  };
  uint32_t raw;
} RegisterAD_INTERFACE_REG1;

typedef union {
  struct {
    uint32_t PORZ : 1;
    uint32_t SPARE_IN_CORE : 5;
    uint32_t DP_DM_5V_SHORT : 1;
    uint32_t DM_PULLDOWN_EN_CORE : 1;
    uint32_t DP_PULLDOWN_EN_CORE : 1;
    uint32_t RPU_DM_SW2_EN_CORE : 1;
    uint32_t RPU_DM_SW1_EN_CORE : 1;
    uint32_t RPU_DP_SW2_EN_CORE : 1;
    uint32_t RPU_DP_SW1_EN_CORE : 1;
    uint32_t USE_RPU_RPD_REG : 1;
    uint32_t HSRX_CAL_EN : 1;
    uint32_t USE_HSRX_CAL_EN_REG : 1;
    uint32_t SERX_DM_CORE : 1;
    uint32_t SERX_DP_CORE : 1;
    uint32_t SPARE_OUT_CORE : 5;
    uint32_t RESERVED : 1;
    uint32_t DISCON_PRE_EN : 1;
    uint32_t DISCON_EN : 1;
    uint32_t USE_DISCON_REG : 1;
    uint32_t SUS_DRV_DM_EN : 1;
    uint32_t SUS_DRV_DM_DATA : 1;
    uint32_t SUS_DRV_DP_EN : 1;
    uint32_t SUS_DRV_DP_DATA : 1;
    uint32_t USE_SUSP_DRV_REG : 1;
  };
  uint32_t raw;
} RegisterAD_INTERFACE_REG2;

typedef union {
  struct {
    uint32_t FARCORE : 1;
    uint32_t USE_FARCORE_REG : 1;
    uint32_t SPARE_OUT_LDO : 8;
    uint32_t SPARE_IN_LDO : 8;
    uint32_t HS_TERM_RES : 1;
    uint32_t USE_HS_TERM_RES_REG : 1;
    uint32_t FSTX_SE0 : 1;
    uint32_t FSTX_MODE : 1;
    uint32_t USE_FS_REG3 : 1;
    uint32_t HSOS_DATA : 8;
    uint32_t USE_HSOS_DATA_REG : 1;
  };
  uint32_t raw;
} RegisterAD_INTERFACE_REG3;

typedef union {
  struct {
    uint32_t RESERVED3 : 15;
    uint32_t RTERM_TEST : 3;
    uint32_t RESERVED2 : 2;
    uint32_t REF_GEN_TEST : 7;
    uint32_t RESERVED : 5;
  };
  uint32_t raw;
} RegisterANA_CONFIG2;

typedef union {
  struct {
    uint32_t RESERVED : 1;
    uint32_t SYNCBITCOUNT : 4;
    uint32_t BYTECOUNT : 5;
    uint32_t PKTCOUNT : 3;
    uint32_t EOPERR : 1;
    uint32_t UTMIRXDATARCV : 16;
    uint32_t BITSTUFFERR : 1;
    uint32_t SYNCERR : 1;
  };
  uint32_t raw;
} RegisterRX_DEBUG_REG;

typedef struct {
  RegisterTERMINATION_CONTROL TERMINATION_CONTROL;
  RegisterRX_CALIB RX_CALIB;
  RegisterDLLHS_2 DLLHS_2;
  RegisterRX_TEST_2 RX_TEST_2;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterCHRG_DET CHRG_DET;
  RegisterPWR_CNTL PWR_CNTL;
  RegisterUTMI_INTERFACE_CNTL_1 UTMI_INTERFACE_CNTL_1;
  RegisterUTMI_INTERFACE_CNTL_2 UTMI_INTERFACE_CNTL_2;
  RegisterBIST BIST;
  RegisterBIST_CRC BIST_CRC;
  RegisterCDR_BIST2 CDR_BIST2;
  RegisterGPIO GPIO;
  RegisterDLLHS DLLHS;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterUSB2PHYCM_CONFIG USB2PHYCM_CONFIG;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterAD_INTERFACE_REG1 AD_INTERFACE_REG1;
  RegisterAD_INTERFACE_REG2 AD_INTERFACE_REG2;
  RegisterAD_INTERFACE_REG3 AD_INTERFACE_REG3;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterANA_CONFIG2 ANA_CONFIG2;
  RegisterRX_DEBUG_REG RX_DEBUG_REG;
} PeripheralUSB0_PHY;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterUSB1REV;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t CLKFACK : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t UINT : 1;
    uint32_t RNDIS : 1;
    uint32_t SOFT_RESET_ISOLATION : 1;
    uint32_t RESERVED_BITS_1 : 24;
    uint32_t DIS_SRP : 1;
    uint32_t DIS_DEB : 1;
  };
  uint32_t raw;
} RegisterUSB1CTRL;

typedef union {
  struct {
    uint32_t DRVVBUS : 1;
    uint32_t RESERVED_BITS_0 : 31;
  };
  uint32_t raw;
} RegisterUSB1STAT;

typedef union {
  struct {
    uint32_t BANK0 : 1;
    uint32_t BANK1 : 1;
    uint32_t RESERVED_BITS_0 : 30;
  };
  uint32_t raw;
} RegisterUSB1IRQMSTAT;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQSTATRAW0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 7;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQSTATRAW1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQSTAT0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 7;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQSTAT1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQENABLESET0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 7;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQENABLESET1;

typedef union {
  struct {
    uint32_t TX_EP_0 : 1;
    uint32_t TX_EP_1 : 1;
    uint32_t TX_EP_2 : 1;
    uint32_t TX_EP_3 : 1;
    uint32_t TX_EP_4 : 1;
    uint32_t TX_EP_5 : 1;
    uint32_t TX_EP_6 : 1;
    uint32_t TX_EP_7 : 1;
    uint32_t TX_EP_8 : 1;
    uint32_t TX_EP_9 : 1;
    uint32_t TX_EP_10 : 1;
    uint32_t TX_EP_11 : 1;
    uint32_t TX_EP_12 : 1;
    uint32_t TX_EP_13 : 1;
    uint32_t TX_EP_14 : 1;
    uint32_t TX_EP_15 : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_EP_1 : 1;
    uint32_t RX_EP_2 : 1;
    uint32_t RX_EP_3 : 1;
    uint32_t RX_EP_4 : 1;
    uint32_t RX_EP_5 : 1;
    uint32_t RX_EP_6 : 1;
    uint32_t RX_EP_7 : 1;
    uint32_t RX_EP_8 : 1;
    uint32_t RX_EP_9 : 1;
    uint32_t RX_EP_10 : 1;
    uint32_t RX_EP_11 : 1;
    uint32_t RX_EP_12 : 1;
    uint32_t RX_EP_13 : 1;
    uint32_t RX_EP_14 : 1;
    uint32_t RX_EP_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQENABLECLR0;

typedef union {
  struct {
    uint32_t USB_0 : 1;
    uint32_t USB_1 : 1;
    uint32_t USB_2 : 1;
    uint32_t USB_3 : 1;
    uint32_t USB_4 : 1;
    uint32_t USB_5 : 1;
    uint32_t USB_6 : 1;
    uint32_t USB_7 : 1;
    uint32_t USB_8 : 1;
    uint32_t USB_9 : 1;
    uint32_t RESERVED_BITS_0 : 7;
    uint32_t TX_FIFO_1 : 1;
    uint32_t TX_FIFO_2 : 1;
    uint32_t TX_FIFO_3 : 1;
    uint32_t TX_FIFO_4 : 1;
    uint32_t TX_FIFO_5 : 1;
    uint32_t TX_FIFO_6 : 1;
    uint32_t TX_FIFO_7 : 1;
    uint32_t TX_FIFO_8 : 1;
    uint32_t TX_FIFO_9 : 1;
    uint32_t TX_FIFO_10 : 1;
    uint32_t TX_FIFO_11 : 1;
    uint32_t TX_FIFO_12 : 1;
    uint32_t TX_FIFO_13 : 1;
    uint32_t TX_FIFO_14 : 1;
    uint32_t TX_FIFO_15 : 1;
  };
  uint32_t raw;
} RegisterUSB1IRQENABLECLR1;

typedef union {
  struct {
    uint32_t TX1_MODE : 2;
    uint32_t TX2_MODE : 2;
    uint32_t TX3_MODE : 2;
    uint32_t TX4_MODE : 2;
    uint32_t TX5_MODE : 2;
    uint32_t TX6_MODE : 2;
    uint32_t TX7_MODE : 2;
    uint32_t TX8_MODE : 2;
    uint32_t TX9_MODE : 2;
    uint32_t TX10_MODE : 2;
    uint32_t TX11_MODE : 2;
    uint32_t TX12_MODE : 2;
    uint32_t TX13_MODE : 2;
    uint32_t TX14_MODE : 2;
    uint32_t TX15_MODE : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB1TXMODE;

typedef union {
  struct {
    uint32_t RX1_MODE : 2;
    uint32_t RX2_MODE : 2;
    uint32_t RX3_MODE : 2;
    uint32_t RX4_MODE : 2;
    uint32_t RX5_MODE : 2;
    uint32_t RX6_MODE : 2;
    uint32_t RX7_MODE : 2;
    uint32_t RX8_MODE : 2;
    uint32_t RX9_MODE : 2;
    uint32_t RX10_MODE : 2;
    uint32_t RX11_MODE : 2;
    uint32_t RX12_MODE : 2;
    uint32_t RX13_MODE : 2;
    uint32_t RX14_MODE : 2;
    uint32_t RX15_MODE : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB1RXMODE;

typedef union {
  struct {
    uint32_t EP1_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP1;

typedef union {
  struct {
    uint32_t EP2_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP2;

typedef union {
  struct {
    uint32_t EP3_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP3;

typedef union {
  struct {
    uint32_t EP4_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP4;

typedef union {
  struct {
    uint32_t EP5_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP5;

typedef union {
  struct {
    uint32_t EP6_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP6;

typedef union {
  struct {
    uint32_t EP7_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP7;

typedef union {
  struct {
    uint32_t EP8_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP8;

typedef union {
  struct {
    uint32_t EP9_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP9;

typedef union {
  struct {
    uint32_t EP10_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP10;

typedef union {
  struct {
    uint32_t EP11_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP11;

typedef union {
  struct {
    uint32_t EP12_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP12;

typedef union {
  struct {
    uint32_t EP13_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP13;

typedef union {
  struct {
    uint32_t EP14_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP14;

typedef union {
  struct {
    uint32_t EP15_SIZE : 17;
    uint32_t RESERVED_BITS_0 : 15;
  };
  uint32_t raw;
} RegisterUSB1GENRNDISEP15;

typedef union {
  struct {
    uint32_t RX1_AUTOREQ : 2;
    uint32_t RX2_AUTOREQ : 2;
    uint32_t RX3_AUTOREQ : 2;
    uint32_t RX4_AUTOREQ : 2;
    uint32_t RX5_AUTOREQ : 2;
    uint32_t RX6_AUTOREQ : 2;
    uint32_t RX7_AUTOREQ : 2;
    uint32_t RX8_AUTOREQ : 2;
    uint32_t RX9_AUTOREQ : 2;
    uint32_t RX10_AUTOREQ : 2;
    uint32_t RX11_AUTOREQ : 2;
    uint32_t RX12_AUTOREQ : 2;
    uint32_t RX13_AUTOREQ : 2;
    uint32_t RX14_AUTOREQ : 2;
    uint32_t RX15_AUTOREQ : 2;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterUSB1AUTOREQ;

typedef union {
  struct {
    uint32_t SRPFIXTIME : 32;
  };
  uint32_t raw;
} RegisterUSB1SRPFIXTIME;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RX_TDOWN : 15;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t TX_TDOWN : 15;
  };
  uint32_t raw;
} RegisterUSB1TDOWN;

typedef union {
  struct {
    uint32_t FSSE0EXT : 1;
    uint32_t FSDATAEXT : 1;
    uint32_t WORDINTERFACE : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DATAINH : 8;
    uint32_t TXVALIDH : 1;
    uint32_t FSXCVROWNER : 1;
    uint32_t TXENABLEN : 1;
    uint32_t VBUSVLDEXT : 1;
    uint32_t VBUSVLDEXTSEL : 1;
    uint32_t OTGDISABLE : 1;
    uint32_t TXBITSTUFFENH : 1;
    uint32_t TXBITSTUFFEN : 1;
    uint32_t RESERVED_BITS_1 : 8;
  };
  uint32_t raw;
} RegisterUSB1UTMI;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t LINESTATE : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t RXERROR : 1;
    uint32_t VBUSVALID : 1;
    uint32_t AVALID : 1;
    uint32_t SESSEND : 1;
    uint32_t HOSTDISCON : 1;
    uint32_t IDDIG : 1;
    uint32_t RESERVED_BITS_2 : 4;
    uint32_t IDPULLUP : 1;
    uint32_t DMPULLDOWN : 1;
    uint32_t DPPULLDOWN : 1;
    uint32_t DISCHRGVBUS : 1;
    uint32_t CHRGVBUS : 1;
    uint32_t DRVVBUS : 1;
    uint32_t TERMSEL : 1;
    uint32_t XCVRSEL : 2;
    uint32_t TXVALID : 1;
    uint32_t OPMODE : 2;
    uint32_t SUSPENDM : 1;
    uint32_t RESERVED_BITS_3 : 3;
  };
  uint32_t raw;
} RegisterUSB1UTMILB;

typedef union {
  struct {
    uint32_t LOOPBACK : 1;
    uint32_t PHY_TEST : 1;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t IDDIG_MUX : 1;
    uint32_t IDDIG : 1;
    uint32_t RESERVED_BITS_1 : 23;
  };
  uint32_t raw;
} RegisterUSB1MODE;

typedef struct {
  RegisterUSB1REV USB1REV;
  uint8_t RESERVED_OFFSETS_0[16];
  RegisterUSB1CTRL USB1CTRL;
  RegisterUSB1STAT USB1STAT;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterUSB1IRQMSTAT USB1IRQMSTAT;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterUSB1IRQSTATRAW0 USB1IRQSTATRAW0;
  RegisterUSB1IRQSTATRAW1 USB1IRQSTATRAW1;
  RegisterUSB1IRQSTAT0 USB1IRQSTAT0;
  RegisterUSB1IRQSTAT1 USB1IRQSTAT1;
  RegisterUSB1IRQENABLESET0 USB1IRQENABLESET0;
  RegisterUSB1IRQENABLESET1 USB1IRQENABLESET1;
  RegisterUSB1IRQENABLECLR0 USB1IRQENABLECLR0;
  RegisterUSB1IRQENABLECLR1 USB1IRQENABLECLR1;
  uint8_t RESERVED_OFFSETS_3[40];
  RegisterUSB1TXMODE USB1TXMODE;
  RegisterUSB1RXMODE USB1RXMODE;
  uint8_t RESERVED_OFFSETS_4[8];
  RegisterUSB1GENRNDISEP1 USB1GENRNDISEP1;
  RegisterUSB1GENRNDISEP2 USB1GENRNDISEP2;
  RegisterUSB1GENRNDISEP3 USB1GENRNDISEP3;
  RegisterUSB1GENRNDISEP4 USB1GENRNDISEP4;
  RegisterUSB1GENRNDISEP5 USB1GENRNDISEP5;
  RegisterUSB1GENRNDISEP6 USB1GENRNDISEP6;
  RegisterUSB1GENRNDISEP7 USB1GENRNDISEP7;
  RegisterUSB1GENRNDISEP8 USB1GENRNDISEP8;
  RegisterUSB1GENRNDISEP9 USB1GENRNDISEP9;
  RegisterUSB1GENRNDISEP10 USB1GENRNDISEP10;
  RegisterUSB1GENRNDISEP11 USB1GENRNDISEP11;
  RegisterUSB1GENRNDISEP12 USB1GENRNDISEP12;
  RegisterUSB1GENRNDISEP13 USB1GENRNDISEP13;
  RegisterUSB1GENRNDISEP14 USB1GENRNDISEP14;
  RegisterUSB1GENRNDISEP15 USB1GENRNDISEP15;
  uint8_t RESERVED_OFFSETS_5[20];
  RegisterUSB1AUTOREQ USB1AUTOREQ;
  RegisterUSB1SRPFIXTIME USB1SRPFIXTIME;
  RegisterUSB1TDOWN USB1TDOWN;
  uint8_t RESERVED_OFFSETS_6[4];
  RegisterUSB1UTMI USB1UTMI;
  RegisterUSB1UTMILB USB1UTMILB;
  RegisterUSB1MODE USB1MODE;
} PeripheralUSB1;

typedef union {
  struct {
    uint32_t REVMIN : 8;
    uint32_t REVMAJ : 3;
    uint32_t REVRTL : 5;
    uint32_t MODID : 14;
    uint32_t RESERVED_BITS_0 : 2;
  };
  uint32_t raw;
} RegisterDMAREVID;

typedef union {
  struct {
    uint32_t TD_DESC_QNUM : 12;
    uint32_t TD_DESC_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterTDFDQ;

typedef union {
  struct {
    uint32_t FREE : 1;
    uint32_t SOFT : 1;
    uint32_t RESERVED_BITS_0 : 30;
  };
  uint32_t raw;
} RegisterDMAEMU;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR0;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR0;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA0;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB0;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR1;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR1;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA1;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB1;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR2;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR2;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA2;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB2;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR3;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR3;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA3;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB3;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR4;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR4;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA4;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB4;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR5;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR5;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA5;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB5;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR6;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR6;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA6;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB6;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR7;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR7;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA7;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB7;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR8;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR8;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA8;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB8;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR9;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR9;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA9;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB9;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR10;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR10;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA10;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB10;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR11;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR11;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA11;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB11;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR12;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR12;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA12;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB12;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR13;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR13;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA13;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB13;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR14;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR14;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA14;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB14;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR15;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR15;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA15;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB15;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR16;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR16;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA16;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB16;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR17;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR17;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA17;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB17;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR18;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR18;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA18;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB18;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR19;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR19;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA19;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB19;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR20;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR20;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA20;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB20;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR21;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR21;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA21;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB21;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR22;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR22;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA22;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB22;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR23;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR23;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA23;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB23;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR24;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR24;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA24;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB24;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR25;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR25;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA25;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB25;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR26;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR26;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA26;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB26;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR27;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR27;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA27;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB27;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR28;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR28;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA28;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB28;

typedef union {
  struct {
    uint32_t TX_DEFAULT_QNUM : 12;
    uint32_t TX_DEFAULT_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t TX_TEARDOWN : 1;
    uint32_t TX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterTXGCR29;

typedef union {
  struct {
    uint32_t RX_DEFAULT_RQ_QNUM : 12;
    uint32_t RX_DEFAULT_RQ_QMGR : 2;
    uint32_t RX_DEFAULT_DESC_TYPE : 2;
    uint32_t RX_SOP_OFFSET : 8;
    uint32_t RX_ERROR_HANDLING : 1;
    uint32_t RESERVED_BITS_0 : 4;
    uint32_t RX_PAUSE : 1;
    uint32_t RX_TEARDOWN : 1;
    uint32_t RX_ENABLE : 1;
  };
  uint32_t raw;
} RegisterRXGCR29;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ0_QNUM : 12;
    uint32_t RX_HOST_FDQ0_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ1_QNUM : 12;
    uint32_t RX_HOST_FDQ1_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRA29;

typedef union {
  struct {
    uint32_t RX_HOST_FDQ2_QNUM : 12;
    uint32_t RX_HOST_FDQ2_QMGR : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t RX_HOST_FDQ3_QNUM : 12;
    uint32_t RX_HOST_FDQ3_QMGR : 2;
    uint32_t RESERVED_BITS_1 : 2;
  };
  uint32_t raw;
} RegisterRXHPCRB29;

typedef struct {
  RegisterDMAREVID DMAREVID;
  RegisterTDFDQ TDFDQ;
  RegisterDMAEMU DMAEMU;
  uint8_t RESERVED_OFFSETS_0[2036];
  RegisterTXGCR0 TXGCR0;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterRXGCR0 RXGCR0;
  RegisterRXHPCRA0 RXHPCRA0;
  RegisterRXHPCRB0 RXHPCRB0;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterTXGCR1 TXGCR1;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterRXGCR1 RXGCR1;
  RegisterRXHPCRA1 RXHPCRA1;
  RegisterRXHPCRB1 RXHPCRB1;
  uint8_t RESERVED_OFFSETS_4[12];
  RegisterTXGCR2 TXGCR2;
  uint8_t RESERVED_OFFSETS_5[4];
  RegisterRXGCR2 RXGCR2;
  RegisterRXHPCRA2 RXHPCRA2;
  RegisterRXHPCRB2 RXHPCRB2;
  uint8_t RESERVED_OFFSETS_6[12];
  RegisterTXGCR3 TXGCR3;
  uint8_t RESERVED_OFFSETS_7[4];
  RegisterRXGCR3 RXGCR3;
  RegisterRXHPCRA3 RXHPCRA3;
  RegisterRXHPCRB3 RXHPCRB3;
  uint8_t RESERVED_OFFSETS_8[12];
  RegisterTXGCR4 TXGCR4;
  uint8_t RESERVED_OFFSETS_9[4];
  RegisterRXGCR4 RXGCR4;
  RegisterRXHPCRA4 RXHPCRA4;
  RegisterRXHPCRB4 RXHPCRB4;
  uint8_t RESERVED_OFFSETS_10[12];
  RegisterTXGCR5 TXGCR5;
  uint8_t RESERVED_OFFSETS_11[4];
  RegisterRXGCR5 RXGCR5;
  RegisterRXHPCRA5 RXHPCRA5;
  RegisterRXHPCRB5 RXHPCRB5;
  uint8_t RESERVED_OFFSETS_12[12];
  RegisterTXGCR6 TXGCR6;
  uint8_t RESERVED_OFFSETS_13[4];
  RegisterRXGCR6 RXGCR6;
  RegisterRXHPCRA6 RXHPCRA6;
  RegisterRXHPCRB6 RXHPCRB6;
  uint8_t RESERVED_OFFSETS_14[12];
  RegisterTXGCR7 TXGCR7;
  uint8_t RESERVED_OFFSETS_15[4];
  RegisterRXGCR7 RXGCR7;
  RegisterRXHPCRA7 RXHPCRA7;
  RegisterRXHPCRB7 RXHPCRB7;
  uint8_t RESERVED_OFFSETS_16[12];
  RegisterTXGCR8 TXGCR8;
  uint8_t RESERVED_OFFSETS_17[4];
  RegisterRXGCR8 RXGCR8;
  RegisterRXHPCRA8 RXHPCRA8;
  RegisterRXHPCRB8 RXHPCRB8;
  uint8_t RESERVED_OFFSETS_18[12];
  RegisterTXGCR9 TXGCR9;
  uint8_t RESERVED_OFFSETS_19[4];
  RegisterRXGCR9 RXGCR9;
  RegisterRXHPCRA9 RXHPCRA9;
  RegisterRXHPCRB9 RXHPCRB9;
  uint8_t RESERVED_OFFSETS_20[12];
  RegisterTXGCR10 TXGCR10;
  uint8_t RESERVED_OFFSETS_21[4];
  RegisterRXGCR10 RXGCR10;
  RegisterRXHPCRA10 RXHPCRA10;
  RegisterRXHPCRB10 RXHPCRB10;
  uint8_t RESERVED_OFFSETS_22[12];
  RegisterTXGCR11 TXGCR11;
  uint8_t RESERVED_OFFSETS_23[4];
  RegisterRXGCR11 RXGCR11;
  RegisterRXHPCRA11 RXHPCRA11;
  RegisterRXHPCRB11 RXHPCRB11;
  uint8_t RESERVED_OFFSETS_24[12];
  RegisterTXGCR12 TXGCR12;
  uint8_t RESERVED_OFFSETS_25[4];
  RegisterRXGCR12 RXGCR12;
  RegisterRXHPCRA12 RXHPCRA12;
  RegisterRXHPCRB12 RXHPCRB12;
  uint8_t RESERVED_OFFSETS_26[12];
  RegisterTXGCR13 TXGCR13;
  uint8_t RESERVED_OFFSETS_27[4];
  RegisterRXGCR13 RXGCR13;
  RegisterRXHPCRA13 RXHPCRA13;
  RegisterRXHPCRB13 RXHPCRB13;
  uint8_t RESERVED_OFFSETS_28[12];
  RegisterTXGCR14 TXGCR14;
  uint8_t RESERVED_OFFSETS_29[4];
  RegisterRXGCR14 RXGCR14;
  RegisterRXHPCRA14 RXHPCRA14;
  RegisterRXHPCRB14 RXHPCRB14;
  uint8_t RESERVED_OFFSETS_30[12];
  RegisterTXGCR15 TXGCR15;
  uint8_t RESERVED_OFFSETS_31[4];
  RegisterRXGCR15 RXGCR15;
  RegisterRXHPCRA15 RXHPCRA15;
  RegisterRXHPCRB15 RXHPCRB15;
  uint8_t RESERVED_OFFSETS_32[12];
  RegisterTXGCR16 TXGCR16;
  uint8_t RESERVED_OFFSETS_33[4];
  RegisterRXGCR16 RXGCR16;
  RegisterRXHPCRA16 RXHPCRA16;
  RegisterRXHPCRB16 RXHPCRB16;
  uint8_t RESERVED_OFFSETS_34[12];
  RegisterTXGCR17 TXGCR17;
  uint8_t RESERVED_OFFSETS_35[4];
  RegisterRXGCR17 RXGCR17;
  RegisterRXHPCRA17 RXHPCRA17;
  RegisterRXHPCRB17 RXHPCRB17;
  uint8_t RESERVED_OFFSETS_36[12];
  RegisterTXGCR18 TXGCR18;
  uint8_t RESERVED_OFFSETS_37[4];
  RegisterRXGCR18 RXGCR18;
  RegisterRXHPCRA18 RXHPCRA18;
  RegisterRXHPCRB18 RXHPCRB18;
  uint8_t RESERVED_OFFSETS_38[12];
  RegisterTXGCR19 TXGCR19;
  uint8_t RESERVED_OFFSETS_39[4];
  RegisterRXGCR19 RXGCR19;
  RegisterRXHPCRA19 RXHPCRA19;
  RegisterRXHPCRB19 RXHPCRB19;
  uint8_t RESERVED_OFFSETS_40[12];
  RegisterTXGCR20 TXGCR20;
  uint8_t RESERVED_OFFSETS_41[4];
  RegisterRXGCR20 RXGCR20;
  RegisterRXHPCRA20 RXHPCRA20;
  RegisterRXHPCRB20 RXHPCRB20;
  uint8_t RESERVED_OFFSETS_42[12];
  RegisterTXGCR21 TXGCR21;
  uint8_t RESERVED_OFFSETS_43[4];
  RegisterRXGCR21 RXGCR21;
  RegisterRXHPCRA21 RXHPCRA21;
  RegisterRXHPCRB21 RXHPCRB21;
  uint8_t RESERVED_OFFSETS_44[12];
  RegisterTXGCR22 TXGCR22;
  uint8_t RESERVED_OFFSETS_45[4];
  RegisterRXGCR22 RXGCR22;
  RegisterRXHPCRA22 RXHPCRA22;
  RegisterRXHPCRB22 RXHPCRB22;
  uint8_t RESERVED_OFFSETS_46[12];
  RegisterTXGCR23 TXGCR23;
  uint8_t RESERVED_OFFSETS_47[4];
  RegisterRXGCR23 RXGCR23;
  RegisterRXHPCRA23 RXHPCRA23;
  RegisterRXHPCRB23 RXHPCRB23;
  uint8_t RESERVED_OFFSETS_48[12];
  RegisterTXGCR24 TXGCR24;
  uint8_t RESERVED_OFFSETS_49[4];
  RegisterRXGCR24 RXGCR24;
  RegisterRXHPCRA24 RXHPCRA24;
  RegisterRXHPCRB24 RXHPCRB24;
  uint8_t RESERVED_OFFSETS_50[12];
  RegisterTXGCR25 TXGCR25;
  uint8_t RESERVED_OFFSETS_51[4];
  RegisterRXGCR25 RXGCR25;
  RegisterRXHPCRA25 RXHPCRA25;
  RegisterRXHPCRB25 RXHPCRB25;
  uint8_t RESERVED_OFFSETS_52[12];
  RegisterTXGCR26 TXGCR26;
  uint8_t RESERVED_OFFSETS_53[4];
  RegisterRXGCR26 RXGCR26;
  RegisterRXHPCRA26 RXHPCRA26;
  RegisterRXHPCRB26 RXHPCRB26;
  uint8_t RESERVED_OFFSETS_54[12];
  RegisterTXGCR27 TXGCR27;
  uint8_t RESERVED_OFFSETS_55[4];
  RegisterRXGCR27 RXGCR27;
  RegisterRXHPCRA27 RXHPCRA27;
  RegisterRXHPCRB27 RXHPCRB27;
  uint8_t RESERVED_OFFSETS_56[12];
  RegisterTXGCR28 TXGCR28;
  uint8_t RESERVED_OFFSETS_57[4];
  RegisterRXGCR28 RXGCR28;
  RegisterRXHPCRA28 RXHPCRA28;
  RegisterRXHPCRB28 RXHPCRB28;
  uint8_t RESERVED_OFFSETS_58[12];
  RegisterTXGCR29 TXGCR29;
  uint8_t RESERVED_OFFSETS_59[4];
  RegisterRXGCR29 RXGCR29;
  RegisterRXHPCRA29 RXHPCRA29;
  RegisterRXHPCRB29 RXHPCRB29;
} PeripheralUSB_CPPI_DMA_CTRL;

typedef union {
  struct {
    uint32_t LAST_ENTRY : 8;
    uint32_t RESERVED_BITS_0 : 23;
    uint32_t ENABLE : 1;
  };
  uint32_t raw;
} RegisterDMA_SCHED_CTRL;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_0;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_1;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_2;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_3;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_4;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_5;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_6;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_7;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_8;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_9;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_10;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_11;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_12;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_13;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_14;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_15;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_16;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_17;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_18;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_19;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_20;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_21;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_22;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_23;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_24;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_25;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_26;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_27;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_28;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_29;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_30;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_31;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_32;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_33;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_34;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_35;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_36;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_37;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_38;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_39;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_40;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_41;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_42;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_43;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_44;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_45;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_46;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_47;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_48;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_49;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_50;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_51;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_52;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_53;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_54;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_55;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_56;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_57;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_58;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_59;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_60;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_61;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_62;

typedef union {
  struct {
    uint32_t ENTRY0_CHANNEL : 5;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t ENTRY0_RXTX : 1;
    uint32_t ENTRY1_CHANNEL : 5;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t ENTRY1_RXTX : 1;
    uint32_t ENTRY2_CHANNEL : 5;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t ENTRY2_RXTX : 1;
    uint32_t ENTRY3_CHANNEL : 5;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t ENTRY3_RXTX : 1;
  };
  uint32_t raw;
} RegisterWORDX_63;

typedef struct {
  RegisterDMA_SCHED_CTRL DMA_SCHED_CTRL;
  uint8_t RESERVED_OFFSETS_0[2044];
  RegisterWORDX_0 WORDX_0;
  RegisterWORDX_1 WORDX_1;
  RegisterWORDX_2 WORDX_2;
  RegisterWORDX_3 WORDX_3;
  RegisterWORDX_4 WORDX_4;
  RegisterWORDX_5 WORDX_5;
  RegisterWORDX_6 WORDX_6;
  RegisterWORDX_7 WORDX_7;
  RegisterWORDX_8 WORDX_8;
  RegisterWORDX_9 WORDX_9;
  RegisterWORDX_10 WORDX_10;
  RegisterWORDX_11 WORDX_11;
  RegisterWORDX_12 WORDX_12;
  RegisterWORDX_13 WORDX_13;
  RegisterWORDX_14 WORDX_14;
  RegisterWORDX_15 WORDX_15;
  RegisterWORDX_16 WORDX_16;
  RegisterWORDX_17 WORDX_17;
  RegisterWORDX_18 WORDX_18;
  RegisterWORDX_19 WORDX_19;
  RegisterWORDX_20 WORDX_20;
  RegisterWORDX_21 WORDX_21;
  RegisterWORDX_22 WORDX_22;
  RegisterWORDX_23 WORDX_23;
  RegisterWORDX_24 WORDX_24;
  RegisterWORDX_25 WORDX_25;
  RegisterWORDX_26 WORDX_26;
  RegisterWORDX_27 WORDX_27;
  RegisterWORDX_28 WORDX_28;
  RegisterWORDX_29 WORDX_29;
  RegisterWORDX_30 WORDX_30;
  RegisterWORDX_31 WORDX_31;
  RegisterWORDX_32 WORDX_32;
  RegisterWORDX_33 WORDX_33;
  RegisterWORDX_34 WORDX_34;
  RegisterWORDX_35 WORDX_35;
  RegisterWORDX_36 WORDX_36;
  RegisterWORDX_37 WORDX_37;
  RegisterWORDX_38 WORDX_38;
  RegisterWORDX_39 WORDX_39;
  RegisterWORDX_40 WORDX_40;
  RegisterWORDX_41 WORDX_41;
  RegisterWORDX_42 WORDX_42;
  RegisterWORDX_43 WORDX_43;
  RegisterWORDX_44 WORDX_44;
  RegisterWORDX_45 WORDX_45;
  RegisterWORDX_46 WORDX_46;
  RegisterWORDX_47 WORDX_47;
  RegisterWORDX_48 WORDX_48;
  RegisterWORDX_49 WORDX_49;
  RegisterWORDX_50 WORDX_50;
  RegisterWORDX_51 WORDX_51;
  RegisterWORDX_52 WORDX_52;
  RegisterWORDX_53 WORDX_53;
  RegisterWORDX_54 WORDX_54;
  RegisterWORDX_55 WORDX_55;
  RegisterWORDX_56 WORDX_56;
  RegisterWORDX_57 WORDX_57;
  RegisterWORDX_58 WORDX_58;
  RegisterWORDX_59 WORDX_59;
  RegisterWORDX_60 WORDX_60;
  RegisterWORDX_61 WORDX_61;
  RegisterWORDX_62 WORDX_62;
  RegisterWORDX_63 WORDX_63;
} PeripheralUSB_CPPI_DMA_SCH;

typedef union {
  struct {
    uint32_t REVMIN : 6;
    uint32_t REVCUSTOM : 2;
    uint32_t REVMAJ : 3;
    uint32_t REVRTL : 5;
    uint32_t FUNCTION : 12;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterQMGRREVID;

typedef union {
  struct {
    uint32_t SOURCE_QNUM : 14;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t DEST_QNUM : 14;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQMGRRST;

typedef union {
  struct {
    uint32_t FDBQ0_STARVE_CNT : 8;
    uint32_t FDBQ1_STARVE_CNT : 8;
    uint32_t FDBQ2_STARVE_CNT : 8;
    uint32_t FDBQ3_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC0;

typedef union {
  struct {
    uint32_t FDBQ4_STARVE_CNT : 8;
    uint32_t FDBQ5_STARVE_CNT : 8;
    uint32_t FDBQ6_STARVE_CNT : 8;
    uint32_t FDBQ7_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC1;

typedef union {
  struct {
    uint32_t FDBQ8_STARVE_CNT : 8;
    uint32_t FDBQ9_STARVE_CNT : 8;
    uint32_t FDBQ10_STARVE_CNT : 8;
    uint32_t FDBQ11_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC2;

typedef union {
  struct {
    uint32_t FDBQ12_STARVE_CNT : 8;
    uint32_t FDBQ13_STARVE_CNT : 8;
    uint32_t FDBQ14_STARVE_CNT : 8;
    uint32_t FDBQ15_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC3;

typedef union {
  struct {
    uint32_t FDBQ16_STARVE_CNT : 8;
    uint32_t FDBQ17_STARVE_CNT : 8;
    uint32_t FDBQ18_STARVE_CNT : 8;
    uint32_t FDBQ19_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC4;

typedef union {
  struct {
    uint32_t FDBQ20_STARVE_CNT : 8;
    uint32_t FDBQ21_STARVE_CNT : 8;
    uint32_t FDBQ22_STARVE_CNT : 8;
    uint32_t FDBQ23_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC5;

typedef union {
  struct {
    uint32_t FDBQ24_STARVE_CNT : 8;
    uint32_t FDBQ25_STARVE_CNT : 8;
    uint32_t FDBQ26_STARVE_CNT : 8;
    uint32_t FDBQ27_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC6;

typedef union {
  struct {
    uint32_t FDBQ28_STARVE_CNT : 8;
    uint32_t FDBQ29_STARVE_CNT : 8;
    uint32_t FDBQ30_STARVE_CNT : 8;
    uint32_t FDBQ31_STARVE_CNT : 8;
  };
  uint32_t raw;
} RegisterFDBSC7;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t REGION0_BASE : 30;
  };
  uint32_t raw;
} RegisterLRAM0BASE;

typedef union {
  struct {
    uint32_t REGION0_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterLRAM0SIZE;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t REGION1_BASE : 30;
  };
  uint32_t raw;
} RegisterLRAM1BASE;

typedef union {
  struct {
    uint32_t QPEND0 : 32;
  };
  uint32_t raw;
} RegisterPEND0;

typedef union {
  struct {
    uint32_t QPEND1 : 32;
  };
  uint32_t raw;
} RegisterPEND1;

typedef union {
  struct {
    uint32_t QPEND2 : 32;
  };
  uint32_t raw;
} RegisterPEND2;

typedef union {
  struct {
    uint32_t QPEND3 : 32;
  };
  uint32_t raw;
} RegisterPEND3;

typedef union {
  struct {
    uint32_t QPEND4 : 32;
  };
  uint32_t raw;
} RegisterPEND4;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE0;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL0;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE1;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL1;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE2;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL2;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE3;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL3;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE4;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL4;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE5;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL5;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE6;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL6;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t REG : 27;
  };
  uint32_t raw;
} RegisterQMEMRBASE7;

typedef union {
  struct {
    uint32_t REG_SIZE : 3;
    uint32_t RESERVED_BITS_0 : 5;
    uint32_t DESC_SIZE : 4;
    uint32_t RESERVED_BITS_1 : 4;
    uint32_t START_INDEX : 14;
    uint32_t RESERVED_BITS_2 : 2;
  };
  uint32_t raw;
} RegisterQMEMCTRL7;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_0_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_0_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_0_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_0_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_1_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_1_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_1_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_1_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_2_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_2_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_2_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_2_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_3_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_3_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_3_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_3_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_4_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_4_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_4_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_4_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_5_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_5_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_5_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_5_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_6_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_6_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_6_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_6_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_7_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_7_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_7_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_7_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_8_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_8_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_8_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_8_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_9_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_9_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_9_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_9_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_10_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_10_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_10_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_10_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_11_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_11_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_11_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_11_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_12_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_12_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_12_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_12_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_13_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_13_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_13_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_13_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_14_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_14_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_14_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_14_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_15_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_15_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_15_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_15_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_16_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_16_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_16_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_16_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_17_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_17_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_17_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_17_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_18_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_18_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_18_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_18_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_19_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_19_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_19_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_19_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_20_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_20_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_20_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_20_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_21_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_21_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_21_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_21_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_22_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_22_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_22_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_22_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_23_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_23_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_23_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_23_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_24_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_24_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_24_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_24_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_25_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_25_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_25_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_25_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_26_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_26_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_26_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_26_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_27_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_27_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_27_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_27_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_28_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_28_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_28_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_28_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_29_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_29_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_29_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_29_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_30_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_30_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_30_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_30_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_31_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_31_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_31_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_31_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_32_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_32_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_32_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_32_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_33_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_33_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_33_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_33_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_34_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_34_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_34_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_34_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_35_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_35_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_35_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_35_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_36_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_36_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_36_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_36_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_37_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_37_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_37_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_37_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_38_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_38_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_38_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_38_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_39_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_39_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_39_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_39_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_40_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_40_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_40_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_40_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_41_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_41_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_41_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_41_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_42_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_42_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_42_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_42_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_43_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_43_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_43_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_43_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_44_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_44_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_44_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_44_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_45_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_45_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_45_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_45_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_46_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_46_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_46_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_46_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_47_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_47_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_47_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_47_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_48_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_48_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_48_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_48_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_49_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_49_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_49_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_49_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_50_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_50_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_50_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_50_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_51_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_51_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_51_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_51_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_52_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_52_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_52_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_52_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_53_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_53_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_53_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_53_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_54_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_54_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_54_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_54_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_55_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_55_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_55_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_55_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_56_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_56_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_56_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_56_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_57_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_57_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_57_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_57_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_58_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_58_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_58_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_58_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_59_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_59_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_59_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_59_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_60_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_60_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_60_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_60_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_61_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_61_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_61_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_61_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_62_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_62_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_62_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_62_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_63_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_63_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_63_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_63_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_64_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_64_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_64_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_64_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_65_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_65_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_65_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_65_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_66_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_66_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_66_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_66_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_67_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_67_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_67_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_67_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_68_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_68_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_68_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_68_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_69_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_69_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_69_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_69_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_70_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_70_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_70_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_70_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_71_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_71_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_71_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_71_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_72_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_72_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_72_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_72_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_73_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_73_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_73_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_73_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_74_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_74_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_74_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_74_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_75_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_75_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_75_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_75_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_76_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_76_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_76_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_76_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_77_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_77_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_77_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_77_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_78_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_78_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_78_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_78_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_79_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_79_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_79_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_79_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_80_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_80_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_80_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_80_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_81_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_81_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_81_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_81_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_82_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_82_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_82_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_82_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_83_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_83_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_83_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_83_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_84_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_84_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_84_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_84_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_85_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_85_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_85_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_85_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_86_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_86_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_86_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_86_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_87_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_87_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_87_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_87_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_88_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_88_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_88_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_88_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_89_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_89_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_89_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_89_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_90_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_90_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_90_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_90_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_91_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_91_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_91_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_91_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_92_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_92_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_92_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_92_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_93_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_93_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_93_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_93_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_94_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_94_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_94_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_94_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_95_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_95_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_95_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_95_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_96_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_96_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_96_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_96_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_97_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_97_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_97_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_97_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_98_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_98_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_98_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_98_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_99_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_99_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_99_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_99_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_100_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_100_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_100_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_100_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_101_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_101_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_101_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_101_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_102_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_102_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_102_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_102_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_103_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_103_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_103_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_103_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_104_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_104_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_104_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_104_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_105_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_105_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_105_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_105_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_106_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_106_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_106_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_106_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_107_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_107_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_107_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_107_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_108_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_108_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_108_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_108_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_109_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_109_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_109_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_109_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_110_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_110_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_110_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_110_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_111_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_111_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_111_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_111_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_112_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_112_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_112_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_112_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_113_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_113_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_113_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_113_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_114_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_114_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_114_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_114_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_115_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_115_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_115_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_115_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_116_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_116_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_116_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_116_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_117_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_117_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_117_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_117_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_118_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_118_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_118_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_118_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_119_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_119_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_119_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_119_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_120_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_120_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_120_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_120_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_121_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_121_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_121_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_121_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_122_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_122_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_122_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_122_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_123_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_123_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_123_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_123_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_124_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_124_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_124_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_124_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_125_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_125_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_125_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_125_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_126_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_126_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_126_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_126_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_127_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_127_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_127_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_127_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_128_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_128_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_128_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_128_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_129_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_129_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_129_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_129_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_130_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_130_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_130_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_130_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_131_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_131_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_131_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_131_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_132_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_132_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_132_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_132_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_133_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_133_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_133_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_133_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_134_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_134_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_134_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_134_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_135_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_135_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_135_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_135_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_136_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_136_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_136_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_136_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_137_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_137_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_137_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_137_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_138_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_138_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_138_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_138_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_139_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_139_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_139_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_139_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_140_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_140_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_140_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_140_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_141_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_141_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_141_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_141_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_142_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_142_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_142_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_142_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_143_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_143_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_143_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_143_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_144_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_144_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_144_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_144_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_145_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_145_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_145_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_145_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_146_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_146_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_146_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_146_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_147_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_147_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_147_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_147_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_148_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_148_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_148_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_148_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_149_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_149_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_149_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_149_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_150_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_150_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_150_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_150_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_151_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_151_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_151_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_151_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_152_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_152_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_152_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_152_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_153_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_153_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_153_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_153_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_154_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_154_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_154_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_154_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_155_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_155_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 17;
    uint32_t HEAD_TAIL : 1;
  };
  uint32_t raw;
} RegisterQUEUE_155_C;

typedef union {
  struct {
    uint32_t DESC_SIZE : 5;
    uint32_t DESC_PTR : 27;
  };
  uint32_t raw;
} RegisterQUEUE_155_D;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_0_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_0_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_0_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_1_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_1_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_1_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_2_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_2_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_2_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_3_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_3_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_3_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_4_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_4_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_4_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_5_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_5_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_5_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_6_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_6_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_6_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_7_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_7_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_7_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_8_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_8_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_8_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_9_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_9_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_9_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_10_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_10_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_10_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_11_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_11_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_11_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_12_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_12_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_12_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_13_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_13_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_13_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_14_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_14_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_14_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_15_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_15_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_15_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_16_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_16_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_16_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_17_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_17_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_17_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_18_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_18_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_18_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_19_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_19_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_19_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_20_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_20_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_20_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_21_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_21_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_21_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_22_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_22_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_22_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_23_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_23_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_23_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_24_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_24_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_24_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_25_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_25_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_25_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_26_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_26_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_26_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_27_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_27_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_27_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_28_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_28_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_28_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_29_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_29_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_29_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_30_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_30_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_30_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_31_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_31_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_31_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_32_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_32_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_32_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_33_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_33_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_33_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_34_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_34_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_34_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_35_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_35_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_35_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_36_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_36_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_36_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_37_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_37_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_37_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_38_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_38_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_38_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_39_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_39_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_39_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_40_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_40_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_40_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_41_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_41_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_41_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_42_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_42_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_42_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_43_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_43_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_43_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_44_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_44_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_44_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_45_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_45_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_45_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_46_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_46_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_46_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_47_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_47_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_47_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_48_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_48_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_48_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_49_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_49_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_49_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_50_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_50_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_50_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_51_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_51_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_51_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_52_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_52_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_52_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_53_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_53_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_53_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_54_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_54_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_54_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_55_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_55_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_55_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_56_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_56_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_56_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_57_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_57_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_57_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_58_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_58_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_58_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_59_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_59_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_59_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_60_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_60_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_60_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_61_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_61_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_61_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_62_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_62_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_62_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_63_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_63_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_63_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_64_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_64_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_64_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_65_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_65_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_65_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_66_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_66_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_66_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_67_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_67_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_67_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_68_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_68_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_68_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_69_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_69_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_69_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_70_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_70_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_70_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_71_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_71_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_71_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_72_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_72_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_72_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_73_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_73_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_73_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_74_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_74_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_74_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_75_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_75_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_75_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_76_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_76_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_76_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_77_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_77_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_77_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_78_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_78_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_78_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_79_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_79_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_79_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_80_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_80_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_80_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_81_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_81_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_81_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_82_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_82_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_82_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_83_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_83_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_83_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_84_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_84_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_84_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_85_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_85_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_85_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_86_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_86_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_86_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_87_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_87_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_87_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_88_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_88_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_88_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_89_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_89_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_89_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_90_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_90_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_90_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_91_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_91_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_91_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_92_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_92_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_92_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_93_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_93_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_93_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_94_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_94_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_94_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_95_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_95_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_95_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_96_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_96_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_96_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_97_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_97_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_97_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_98_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_98_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_98_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_99_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_99_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_99_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_100_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_100_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_100_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_101_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_101_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_101_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_102_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_102_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_102_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_103_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_103_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_103_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_104_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_104_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_104_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_105_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_105_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_105_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_106_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_106_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_106_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_107_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_107_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_107_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_108_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_108_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_108_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_109_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_109_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_109_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_110_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_110_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_110_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_111_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_111_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_111_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_112_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_112_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_112_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_113_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_113_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_113_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_114_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_114_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_114_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_115_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_115_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_115_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_116_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_116_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_116_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_117_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_117_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_117_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_118_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_118_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_118_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_119_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_119_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_119_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_120_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_120_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_120_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_121_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_121_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_121_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_122_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_122_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_122_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_123_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_123_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_123_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_124_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_124_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_124_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_125_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_125_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_125_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_126_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_126_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_126_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_127_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_127_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_127_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_128_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_128_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_128_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_129_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_129_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_129_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_130_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_130_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_130_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_131_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_131_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_131_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_132_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_132_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_132_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_133_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_133_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_133_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_134_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_134_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_134_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_135_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_135_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_135_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_136_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_136_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_136_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_137_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_137_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_137_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_138_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_138_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_138_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_139_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_139_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_139_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_140_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_140_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_140_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_141_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_141_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_141_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_142_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_142_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_142_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_143_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_143_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_143_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_144_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_144_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_144_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_145_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_145_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_145_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_146_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_146_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_146_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_147_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_147_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_147_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_148_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_148_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_148_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_149_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_149_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_149_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_150_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_150_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_150_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_151_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_151_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_151_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_152_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_152_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_152_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_153_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_153_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_153_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_154_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_154_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_154_STATUS_C;

typedef union {
  struct {
    uint32_t QUEUE_ENTRY_COUNT : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_155_STATUS_A;

typedef union {
  struct {
    uint32_t QUEUE_BYTE_COUNT : 28;
    uint32_t RESERVED_BITS_0 : 4;
  };
  uint32_t raw;
} RegisterQUEUE_155_STATUS_B;

typedef union {
  struct {
    uint32_t PACKET_SIZE : 14;
    uint32_t RESERVED_BITS_0 : 18;
  };
  uint32_t raw;
} RegisterQUEUE_155_STATUS_C;

typedef struct {
  RegisterQMGRREVID QMGRREVID;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterQMGRRST QMGRRST;
  uint8_t RESERVED_OFFSETS_1[20];
  RegisterFDBSC0 FDBSC0;
  RegisterFDBSC1 FDBSC1;
  RegisterFDBSC2 FDBSC2;
  RegisterFDBSC3 FDBSC3;
  RegisterFDBSC4 FDBSC4;
  RegisterFDBSC5 FDBSC5;
  RegisterFDBSC6 FDBSC6;
  RegisterFDBSC7 FDBSC7;
  uint8_t RESERVED_OFFSETS_2[64];
  RegisterLRAM0BASE LRAM0BASE;
  RegisterLRAM0SIZE LRAM0SIZE;
  RegisterLRAM1BASE LRAM1BASE;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterPEND0 PEND0;
  RegisterPEND1 PEND1;
  RegisterPEND2 PEND2;
  RegisterPEND3 PEND3;
  RegisterPEND4 PEND4;
  uint8_t RESERVED_OFFSETS_4[3932];
  RegisterQMEMRBASE0 QMEMRBASE0;
  RegisterQMEMCTRL0 QMEMCTRL0;
  uint8_t RESERVED_OFFSETS_5[8];
  RegisterQMEMRBASE1 QMEMRBASE1;
  RegisterQMEMCTRL1 QMEMCTRL1;
  uint8_t RESERVED_OFFSETS_6[8];
  RegisterQMEMRBASE2 QMEMRBASE2;
  RegisterQMEMCTRL2 QMEMCTRL2;
  uint8_t RESERVED_OFFSETS_7[8];
  RegisterQMEMRBASE3 QMEMRBASE3;
  RegisterQMEMCTRL3 QMEMCTRL3;
  uint8_t RESERVED_OFFSETS_8[8];
  RegisterQMEMRBASE4 QMEMRBASE4;
  RegisterQMEMCTRL4 QMEMCTRL4;
  uint8_t RESERVED_OFFSETS_9[8];
  RegisterQMEMRBASE5 QMEMRBASE5;
  RegisterQMEMCTRL5 QMEMCTRL5;
  uint8_t RESERVED_OFFSETS_10[8];
  RegisterQMEMRBASE6 QMEMRBASE6;
  RegisterQMEMCTRL6 QMEMCTRL6;
  uint8_t RESERVED_OFFSETS_11[8];
  RegisterQMEMRBASE7 QMEMRBASE7;
  RegisterQMEMCTRL7 QMEMCTRL7;
  uint8_t RESERVED_OFFSETS_12[3976];
  RegisterQUEUE_0_A QUEUE_0_A;
  RegisterQUEUE_0_B QUEUE_0_B;
  RegisterQUEUE_0_C QUEUE_0_C;
  RegisterQUEUE_0_D QUEUE_0_D;
  RegisterQUEUE_1_A QUEUE_1_A;
  RegisterQUEUE_1_B QUEUE_1_B;
  RegisterQUEUE_1_C QUEUE_1_C;
  RegisterQUEUE_1_D QUEUE_1_D;
  RegisterQUEUE_2_A QUEUE_2_A;
  RegisterQUEUE_2_B QUEUE_2_B;
  RegisterQUEUE_2_C QUEUE_2_C;
  RegisterQUEUE_2_D QUEUE_2_D;
  RegisterQUEUE_3_A QUEUE_3_A;
  RegisterQUEUE_3_B QUEUE_3_B;
  RegisterQUEUE_3_C QUEUE_3_C;
  RegisterQUEUE_3_D QUEUE_3_D;
  RegisterQUEUE_4_A QUEUE_4_A;
  RegisterQUEUE_4_B QUEUE_4_B;
  RegisterQUEUE_4_C QUEUE_4_C;
  RegisterQUEUE_4_D QUEUE_4_D;
  RegisterQUEUE_5_A QUEUE_5_A;
  RegisterQUEUE_5_B QUEUE_5_B;
  RegisterQUEUE_5_C QUEUE_5_C;
  RegisterQUEUE_5_D QUEUE_5_D;
  RegisterQUEUE_6_A QUEUE_6_A;
  RegisterQUEUE_6_B QUEUE_6_B;
  RegisterQUEUE_6_C QUEUE_6_C;
  RegisterQUEUE_6_D QUEUE_6_D;
  RegisterQUEUE_7_A QUEUE_7_A;
  RegisterQUEUE_7_B QUEUE_7_B;
  RegisterQUEUE_7_C QUEUE_7_C;
  RegisterQUEUE_7_D QUEUE_7_D;
  RegisterQUEUE_8_A QUEUE_8_A;
  RegisterQUEUE_8_B QUEUE_8_B;
  RegisterQUEUE_8_C QUEUE_8_C;
  RegisterQUEUE_8_D QUEUE_8_D;
  RegisterQUEUE_9_A QUEUE_9_A;
  RegisterQUEUE_9_B QUEUE_9_B;
  RegisterQUEUE_9_C QUEUE_9_C;
  RegisterQUEUE_9_D QUEUE_9_D;
  RegisterQUEUE_10_A QUEUE_10_A;
  RegisterQUEUE_10_B QUEUE_10_B;
  RegisterQUEUE_10_C QUEUE_10_C;
  RegisterQUEUE_10_D QUEUE_10_D;
  RegisterQUEUE_11_A QUEUE_11_A;
  RegisterQUEUE_11_B QUEUE_11_B;
  RegisterQUEUE_11_C QUEUE_11_C;
  RegisterQUEUE_11_D QUEUE_11_D;
  RegisterQUEUE_12_A QUEUE_12_A;
  RegisterQUEUE_12_B QUEUE_12_B;
  RegisterQUEUE_12_C QUEUE_12_C;
  RegisterQUEUE_12_D QUEUE_12_D;
  RegisterQUEUE_13_A QUEUE_13_A;
  RegisterQUEUE_13_B QUEUE_13_B;
  RegisterQUEUE_13_C QUEUE_13_C;
  RegisterQUEUE_13_D QUEUE_13_D;
  RegisterQUEUE_14_A QUEUE_14_A;
  RegisterQUEUE_14_B QUEUE_14_B;
  RegisterQUEUE_14_C QUEUE_14_C;
  RegisterQUEUE_14_D QUEUE_14_D;
  RegisterQUEUE_15_A QUEUE_15_A;
  RegisterQUEUE_15_B QUEUE_15_B;
  RegisterQUEUE_15_C QUEUE_15_C;
  RegisterQUEUE_15_D QUEUE_15_D;
  RegisterQUEUE_16_A QUEUE_16_A;
  RegisterQUEUE_16_B QUEUE_16_B;
  RegisterQUEUE_16_C QUEUE_16_C;
  RegisterQUEUE_16_D QUEUE_16_D;
  RegisterQUEUE_17_A QUEUE_17_A;
  RegisterQUEUE_17_B QUEUE_17_B;
  RegisterQUEUE_17_C QUEUE_17_C;
  RegisterQUEUE_17_D QUEUE_17_D;
  RegisterQUEUE_18_A QUEUE_18_A;
  RegisterQUEUE_18_B QUEUE_18_B;
  RegisterQUEUE_18_C QUEUE_18_C;
  RegisterQUEUE_18_D QUEUE_18_D;
  RegisterQUEUE_19_A QUEUE_19_A;
  RegisterQUEUE_19_B QUEUE_19_B;
  RegisterQUEUE_19_C QUEUE_19_C;
  RegisterQUEUE_19_D QUEUE_19_D;
  RegisterQUEUE_20_A QUEUE_20_A;
  RegisterQUEUE_20_B QUEUE_20_B;
  RegisterQUEUE_20_C QUEUE_20_C;
  RegisterQUEUE_20_D QUEUE_20_D;
  RegisterQUEUE_21_A QUEUE_21_A;
  RegisterQUEUE_21_B QUEUE_21_B;
  RegisterQUEUE_21_C QUEUE_21_C;
  RegisterQUEUE_21_D QUEUE_21_D;
  RegisterQUEUE_22_A QUEUE_22_A;
  RegisterQUEUE_22_B QUEUE_22_B;
  RegisterQUEUE_22_C QUEUE_22_C;
  RegisterQUEUE_22_D QUEUE_22_D;
  RegisterQUEUE_23_A QUEUE_23_A;
  RegisterQUEUE_23_B QUEUE_23_B;
  RegisterQUEUE_23_C QUEUE_23_C;
  RegisterQUEUE_23_D QUEUE_23_D;
  RegisterQUEUE_24_A QUEUE_24_A;
  RegisterQUEUE_24_B QUEUE_24_B;
  RegisterQUEUE_24_C QUEUE_24_C;
  RegisterQUEUE_24_D QUEUE_24_D;
  RegisterQUEUE_25_A QUEUE_25_A;
  RegisterQUEUE_25_B QUEUE_25_B;
  RegisterQUEUE_25_C QUEUE_25_C;
  RegisterQUEUE_25_D QUEUE_25_D;
  RegisterQUEUE_26_A QUEUE_26_A;
  RegisterQUEUE_26_B QUEUE_26_B;
  RegisterQUEUE_26_C QUEUE_26_C;
  RegisterQUEUE_26_D QUEUE_26_D;
  RegisterQUEUE_27_A QUEUE_27_A;
  RegisterQUEUE_27_B QUEUE_27_B;
  RegisterQUEUE_27_C QUEUE_27_C;
  RegisterQUEUE_27_D QUEUE_27_D;
  RegisterQUEUE_28_A QUEUE_28_A;
  RegisterQUEUE_28_B QUEUE_28_B;
  RegisterQUEUE_28_C QUEUE_28_C;
  RegisterQUEUE_28_D QUEUE_28_D;
  RegisterQUEUE_29_A QUEUE_29_A;
  RegisterQUEUE_29_B QUEUE_29_B;
  RegisterQUEUE_29_C QUEUE_29_C;
  RegisterQUEUE_29_D QUEUE_29_D;
  RegisterQUEUE_30_A QUEUE_30_A;
  RegisterQUEUE_30_B QUEUE_30_B;
  RegisterQUEUE_30_C QUEUE_30_C;
  RegisterQUEUE_30_D QUEUE_30_D;
  RegisterQUEUE_31_A QUEUE_31_A;
  RegisterQUEUE_31_B QUEUE_31_B;
  RegisterQUEUE_31_C QUEUE_31_C;
  RegisterQUEUE_31_D QUEUE_31_D;
  RegisterQUEUE_32_A QUEUE_32_A;
  RegisterQUEUE_32_B QUEUE_32_B;
  RegisterQUEUE_32_C QUEUE_32_C;
  RegisterQUEUE_32_D QUEUE_32_D;
  RegisterQUEUE_33_A QUEUE_33_A;
  RegisterQUEUE_33_B QUEUE_33_B;
  RegisterQUEUE_33_C QUEUE_33_C;
  RegisterQUEUE_33_D QUEUE_33_D;
  RegisterQUEUE_34_A QUEUE_34_A;
  RegisterQUEUE_34_B QUEUE_34_B;
  RegisterQUEUE_34_C QUEUE_34_C;
  RegisterQUEUE_34_D QUEUE_34_D;
  RegisterQUEUE_35_A QUEUE_35_A;
  RegisterQUEUE_35_B QUEUE_35_B;
  RegisterQUEUE_35_C QUEUE_35_C;
  RegisterQUEUE_35_D QUEUE_35_D;
  RegisterQUEUE_36_A QUEUE_36_A;
  RegisterQUEUE_36_B QUEUE_36_B;
  RegisterQUEUE_36_C QUEUE_36_C;
  RegisterQUEUE_36_D QUEUE_36_D;
  RegisterQUEUE_37_A QUEUE_37_A;
  RegisterQUEUE_37_B QUEUE_37_B;
  RegisterQUEUE_37_C QUEUE_37_C;
  RegisterQUEUE_37_D QUEUE_37_D;
  RegisterQUEUE_38_A QUEUE_38_A;
  RegisterQUEUE_38_B QUEUE_38_B;
  RegisterQUEUE_38_C QUEUE_38_C;
  RegisterQUEUE_38_D QUEUE_38_D;
  RegisterQUEUE_39_A QUEUE_39_A;
  RegisterQUEUE_39_B QUEUE_39_B;
  RegisterQUEUE_39_C QUEUE_39_C;
  RegisterQUEUE_39_D QUEUE_39_D;
  RegisterQUEUE_40_A QUEUE_40_A;
  RegisterQUEUE_40_B QUEUE_40_B;
  RegisterQUEUE_40_C QUEUE_40_C;
  RegisterQUEUE_40_D QUEUE_40_D;
  RegisterQUEUE_41_A QUEUE_41_A;
  RegisterQUEUE_41_B QUEUE_41_B;
  RegisterQUEUE_41_C QUEUE_41_C;
  RegisterQUEUE_41_D QUEUE_41_D;
  RegisterQUEUE_42_A QUEUE_42_A;
  RegisterQUEUE_42_B QUEUE_42_B;
  RegisterQUEUE_42_C QUEUE_42_C;
  RegisterQUEUE_42_D QUEUE_42_D;
  RegisterQUEUE_43_A QUEUE_43_A;
  RegisterQUEUE_43_B QUEUE_43_B;
  RegisterQUEUE_43_C QUEUE_43_C;
  RegisterQUEUE_43_D QUEUE_43_D;
  RegisterQUEUE_44_A QUEUE_44_A;
  RegisterQUEUE_44_B QUEUE_44_B;
  RegisterQUEUE_44_C QUEUE_44_C;
  RegisterQUEUE_44_D QUEUE_44_D;
  RegisterQUEUE_45_A QUEUE_45_A;
  RegisterQUEUE_45_B QUEUE_45_B;
  RegisterQUEUE_45_C QUEUE_45_C;
  RegisterQUEUE_45_D QUEUE_45_D;
  RegisterQUEUE_46_A QUEUE_46_A;
  RegisterQUEUE_46_B QUEUE_46_B;
  RegisterQUEUE_46_C QUEUE_46_C;
  RegisterQUEUE_46_D QUEUE_46_D;
  RegisterQUEUE_47_A QUEUE_47_A;
  RegisterQUEUE_47_B QUEUE_47_B;
  RegisterQUEUE_47_C QUEUE_47_C;
  RegisterQUEUE_47_D QUEUE_47_D;
  RegisterQUEUE_48_A QUEUE_48_A;
  RegisterQUEUE_48_B QUEUE_48_B;
  RegisterQUEUE_48_C QUEUE_48_C;
  RegisterQUEUE_48_D QUEUE_48_D;
  RegisterQUEUE_49_A QUEUE_49_A;
  RegisterQUEUE_49_B QUEUE_49_B;
  RegisterQUEUE_49_C QUEUE_49_C;
  RegisterQUEUE_49_D QUEUE_49_D;
  RegisterQUEUE_50_A QUEUE_50_A;
  RegisterQUEUE_50_B QUEUE_50_B;
  RegisterQUEUE_50_C QUEUE_50_C;
  RegisterQUEUE_50_D QUEUE_50_D;
  RegisterQUEUE_51_A QUEUE_51_A;
  RegisterQUEUE_51_B QUEUE_51_B;
  RegisterQUEUE_51_C QUEUE_51_C;
  RegisterQUEUE_51_D QUEUE_51_D;
  RegisterQUEUE_52_A QUEUE_52_A;
  RegisterQUEUE_52_B QUEUE_52_B;
  RegisterQUEUE_52_C QUEUE_52_C;
  RegisterQUEUE_52_D QUEUE_52_D;
  RegisterQUEUE_53_A QUEUE_53_A;
  RegisterQUEUE_53_B QUEUE_53_B;
  RegisterQUEUE_53_C QUEUE_53_C;
  RegisterQUEUE_53_D QUEUE_53_D;
  RegisterQUEUE_54_A QUEUE_54_A;
  RegisterQUEUE_54_B QUEUE_54_B;
  RegisterQUEUE_54_C QUEUE_54_C;
  RegisterQUEUE_54_D QUEUE_54_D;
  RegisterQUEUE_55_A QUEUE_55_A;
  RegisterQUEUE_55_B QUEUE_55_B;
  RegisterQUEUE_55_C QUEUE_55_C;
  RegisterQUEUE_55_D QUEUE_55_D;
  RegisterQUEUE_56_A QUEUE_56_A;
  RegisterQUEUE_56_B QUEUE_56_B;
  RegisterQUEUE_56_C QUEUE_56_C;
  RegisterQUEUE_56_D QUEUE_56_D;
  RegisterQUEUE_57_A QUEUE_57_A;
  RegisterQUEUE_57_B QUEUE_57_B;
  RegisterQUEUE_57_C QUEUE_57_C;
  RegisterQUEUE_57_D QUEUE_57_D;
  RegisterQUEUE_58_A QUEUE_58_A;
  RegisterQUEUE_58_B QUEUE_58_B;
  RegisterQUEUE_58_C QUEUE_58_C;
  RegisterQUEUE_58_D QUEUE_58_D;
  RegisterQUEUE_59_A QUEUE_59_A;
  RegisterQUEUE_59_B QUEUE_59_B;
  RegisterQUEUE_59_C QUEUE_59_C;
  RegisterQUEUE_59_D QUEUE_59_D;
  RegisterQUEUE_60_A QUEUE_60_A;
  RegisterQUEUE_60_B QUEUE_60_B;
  RegisterQUEUE_60_C QUEUE_60_C;
  RegisterQUEUE_60_D QUEUE_60_D;
  RegisterQUEUE_61_A QUEUE_61_A;
  RegisterQUEUE_61_B QUEUE_61_B;
  RegisterQUEUE_61_C QUEUE_61_C;
  RegisterQUEUE_61_D QUEUE_61_D;
  RegisterQUEUE_62_A QUEUE_62_A;
  RegisterQUEUE_62_B QUEUE_62_B;
  RegisterQUEUE_62_C QUEUE_62_C;
  RegisterQUEUE_62_D QUEUE_62_D;
  RegisterQUEUE_63_A QUEUE_63_A;
  RegisterQUEUE_63_B QUEUE_63_B;
  RegisterQUEUE_63_C QUEUE_63_C;
  RegisterQUEUE_63_D QUEUE_63_D;
  RegisterQUEUE_64_A QUEUE_64_A;
  RegisterQUEUE_64_B QUEUE_64_B;
  RegisterQUEUE_64_C QUEUE_64_C;
  RegisterQUEUE_64_D QUEUE_64_D;
  RegisterQUEUE_65_A QUEUE_65_A;
  RegisterQUEUE_65_B QUEUE_65_B;
  RegisterQUEUE_65_C QUEUE_65_C;
  RegisterQUEUE_65_D QUEUE_65_D;
  RegisterQUEUE_66_A QUEUE_66_A;
  RegisterQUEUE_66_B QUEUE_66_B;
  RegisterQUEUE_66_C QUEUE_66_C;
  RegisterQUEUE_66_D QUEUE_66_D;
  RegisterQUEUE_67_A QUEUE_67_A;
  RegisterQUEUE_67_B QUEUE_67_B;
  RegisterQUEUE_67_C QUEUE_67_C;
  RegisterQUEUE_67_D QUEUE_67_D;
  RegisterQUEUE_68_A QUEUE_68_A;
  RegisterQUEUE_68_B QUEUE_68_B;
  RegisterQUEUE_68_C QUEUE_68_C;
  RegisterQUEUE_68_D QUEUE_68_D;
  RegisterQUEUE_69_A QUEUE_69_A;
  RegisterQUEUE_69_B QUEUE_69_B;
  RegisterQUEUE_69_C QUEUE_69_C;
  RegisterQUEUE_69_D QUEUE_69_D;
  RegisterQUEUE_70_A QUEUE_70_A;
  RegisterQUEUE_70_B QUEUE_70_B;
  RegisterQUEUE_70_C QUEUE_70_C;
  RegisterQUEUE_70_D QUEUE_70_D;
  RegisterQUEUE_71_A QUEUE_71_A;
  RegisterQUEUE_71_B QUEUE_71_B;
  RegisterQUEUE_71_C QUEUE_71_C;
  RegisterQUEUE_71_D QUEUE_71_D;
  RegisterQUEUE_72_A QUEUE_72_A;
  RegisterQUEUE_72_B QUEUE_72_B;
  RegisterQUEUE_72_C QUEUE_72_C;
  RegisterQUEUE_72_D QUEUE_72_D;
  RegisterQUEUE_73_A QUEUE_73_A;
  RegisterQUEUE_73_B QUEUE_73_B;
  RegisterQUEUE_73_C QUEUE_73_C;
  RegisterQUEUE_73_D QUEUE_73_D;
  RegisterQUEUE_74_A QUEUE_74_A;
  RegisterQUEUE_74_B QUEUE_74_B;
  RegisterQUEUE_74_C QUEUE_74_C;
  RegisterQUEUE_74_D QUEUE_74_D;
  RegisterQUEUE_75_A QUEUE_75_A;
  RegisterQUEUE_75_B QUEUE_75_B;
  RegisterQUEUE_75_C QUEUE_75_C;
  RegisterQUEUE_75_D QUEUE_75_D;
  RegisterQUEUE_76_A QUEUE_76_A;
  RegisterQUEUE_76_B QUEUE_76_B;
  RegisterQUEUE_76_C QUEUE_76_C;
  RegisterQUEUE_76_D QUEUE_76_D;
  RegisterQUEUE_77_A QUEUE_77_A;
  RegisterQUEUE_77_B QUEUE_77_B;
  RegisterQUEUE_77_C QUEUE_77_C;
  RegisterQUEUE_77_D QUEUE_77_D;
  RegisterQUEUE_78_A QUEUE_78_A;
  RegisterQUEUE_78_B QUEUE_78_B;
  RegisterQUEUE_78_C QUEUE_78_C;
  RegisterQUEUE_78_D QUEUE_78_D;
  RegisterQUEUE_79_A QUEUE_79_A;
  RegisterQUEUE_79_B QUEUE_79_B;
  RegisterQUEUE_79_C QUEUE_79_C;
  RegisterQUEUE_79_D QUEUE_79_D;
  RegisterQUEUE_80_A QUEUE_80_A;
  RegisterQUEUE_80_B QUEUE_80_B;
  RegisterQUEUE_80_C QUEUE_80_C;
  RegisterQUEUE_80_D QUEUE_80_D;
  RegisterQUEUE_81_A QUEUE_81_A;
  RegisterQUEUE_81_B QUEUE_81_B;
  RegisterQUEUE_81_C QUEUE_81_C;
  RegisterQUEUE_81_D QUEUE_81_D;
  RegisterQUEUE_82_A QUEUE_82_A;
  RegisterQUEUE_82_B QUEUE_82_B;
  RegisterQUEUE_82_C QUEUE_82_C;
  RegisterQUEUE_82_D QUEUE_82_D;
  RegisterQUEUE_83_A QUEUE_83_A;
  RegisterQUEUE_83_B QUEUE_83_B;
  RegisterQUEUE_83_C QUEUE_83_C;
  RegisterQUEUE_83_D QUEUE_83_D;
  RegisterQUEUE_84_A QUEUE_84_A;
  RegisterQUEUE_84_B QUEUE_84_B;
  RegisterQUEUE_84_C QUEUE_84_C;
  RegisterQUEUE_84_D QUEUE_84_D;
  RegisterQUEUE_85_A QUEUE_85_A;
  RegisterQUEUE_85_B QUEUE_85_B;
  RegisterQUEUE_85_C QUEUE_85_C;
  RegisterQUEUE_85_D QUEUE_85_D;
  RegisterQUEUE_86_A QUEUE_86_A;
  RegisterQUEUE_86_B QUEUE_86_B;
  RegisterQUEUE_86_C QUEUE_86_C;
  RegisterQUEUE_86_D QUEUE_86_D;
  RegisterQUEUE_87_A QUEUE_87_A;
  RegisterQUEUE_87_B QUEUE_87_B;
  RegisterQUEUE_87_C QUEUE_87_C;
  RegisterQUEUE_87_D QUEUE_87_D;
  RegisterQUEUE_88_A QUEUE_88_A;
  RegisterQUEUE_88_B QUEUE_88_B;
  RegisterQUEUE_88_C QUEUE_88_C;
  RegisterQUEUE_88_D QUEUE_88_D;
  RegisterQUEUE_89_A QUEUE_89_A;
  RegisterQUEUE_89_B QUEUE_89_B;
  RegisterQUEUE_89_C QUEUE_89_C;
  RegisterQUEUE_89_D QUEUE_89_D;
  RegisterQUEUE_90_A QUEUE_90_A;
  RegisterQUEUE_90_B QUEUE_90_B;
  RegisterQUEUE_90_C QUEUE_90_C;
  RegisterQUEUE_90_D QUEUE_90_D;
  RegisterQUEUE_91_A QUEUE_91_A;
  RegisterQUEUE_91_B QUEUE_91_B;
  RegisterQUEUE_91_C QUEUE_91_C;
  RegisterQUEUE_91_D QUEUE_91_D;
  RegisterQUEUE_92_A QUEUE_92_A;
  RegisterQUEUE_92_B QUEUE_92_B;
  RegisterQUEUE_92_C QUEUE_92_C;
  RegisterQUEUE_92_D QUEUE_92_D;
  RegisterQUEUE_93_A QUEUE_93_A;
  RegisterQUEUE_93_B QUEUE_93_B;
  RegisterQUEUE_93_C QUEUE_93_C;
  RegisterQUEUE_93_D QUEUE_93_D;
  RegisterQUEUE_94_A QUEUE_94_A;
  RegisterQUEUE_94_B QUEUE_94_B;
  RegisterQUEUE_94_C QUEUE_94_C;
  RegisterQUEUE_94_D QUEUE_94_D;
  RegisterQUEUE_95_A QUEUE_95_A;
  RegisterQUEUE_95_B QUEUE_95_B;
  RegisterQUEUE_95_C QUEUE_95_C;
  RegisterQUEUE_95_D QUEUE_95_D;
  RegisterQUEUE_96_A QUEUE_96_A;
  RegisterQUEUE_96_B QUEUE_96_B;
  RegisterQUEUE_96_C QUEUE_96_C;
  RegisterQUEUE_96_D QUEUE_96_D;
  RegisterQUEUE_97_A QUEUE_97_A;
  RegisterQUEUE_97_B QUEUE_97_B;
  RegisterQUEUE_97_C QUEUE_97_C;
  RegisterQUEUE_97_D QUEUE_97_D;
  RegisterQUEUE_98_A QUEUE_98_A;
  RegisterQUEUE_98_B QUEUE_98_B;
  RegisterQUEUE_98_C QUEUE_98_C;
  RegisterQUEUE_98_D QUEUE_98_D;
  RegisterQUEUE_99_A QUEUE_99_A;
  RegisterQUEUE_99_B QUEUE_99_B;
  RegisterQUEUE_99_C QUEUE_99_C;
  RegisterQUEUE_99_D QUEUE_99_D;
  RegisterQUEUE_100_A QUEUE_100_A;
  RegisterQUEUE_100_B QUEUE_100_B;
  RegisterQUEUE_100_C QUEUE_100_C;
  RegisterQUEUE_100_D QUEUE_100_D;
  RegisterQUEUE_101_A QUEUE_101_A;
  RegisterQUEUE_101_B QUEUE_101_B;
  RegisterQUEUE_101_C QUEUE_101_C;
  RegisterQUEUE_101_D QUEUE_101_D;
  RegisterQUEUE_102_A QUEUE_102_A;
  RegisterQUEUE_102_B QUEUE_102_B;
  RegisterQUEUE_102_C QUEUE_102_C;
  RegisterQUEUE_102_D QUEUE_102_D;
  RegisterQUEUE_103_A QUEUE_103_A;
  RegisterQUEUE_103_B QUEUE_103_B;
  RegisterQUEUE_103_C QUEUE_103_C;
  RegisterQUEUE_103_D QUEUE_103_D;
  RegisterQUEUE_104_A QUEUE_104_A;
  RegisterQUEUE_104_B QUEUE_104_B;
  RegisterQUEUE_104_C QUEUE_104_C;
  RegisterQUEUE_104_D QUEUE_104_D;
  RegisterQUEUE_105_A QUEUE_105_A;
  RegisterQUEUE_105_B QUEUE_105_B;
  RegisterQUEUE_105_C QUEUE_105_C;
  RegisterQUEUE_105_D QUEUE_105_D;
  RegisterQUEUE_106_A QUEUE_106_A;
  RegisterQUEUE_106_B QUEUE_106_B;
  RegisterQUEUE_106_C QUEUE_106_C;
  RegisterQUEUE_106_D QUEUE_106_D;
  RegisterQUEUE_107_A QUEUE_107_A;
  RegisterQUEUE_107_B QUEUE_107_B;
  RegisterQUEUE_107_C QUEUE_107_C;
  RegisterQUEUE_107_D QUEUE_107_D;
  RegisterQUEUE_108_A QUEUE_108_A;
  RegisterQUEUE_108_B QUEUE_108_B;
  RegisterQUEUE_108_C QUEUE_108_C;
  RegisterQUEUE_108_D QUEUE_108_D;
  RegisterQUEUE_109_A QUEUE_109_A;
  RegisterQUEUE_109_B QUEUE_109_B;
  RegisterQUEUE_109_C QUEUE_109_C;
  RegisterQUEUE_109_D QUEUE_109_D;
  RegisterQUEUE_110_A QUEUE_110_A;
  RegisterQUEUE_110_B QUEUE_110_B;
  RegisterQUEUE_110_C QUEUE_110_C;
  RegisterQUEUE_110_D QUEUE_110_D;
  RegisterQUEUE_111_A QUEUE_111_A;
  RegisterQUEUE_111_B QUEUE_111_B;
  RegisterQUEUE_111_C QUEUE_111_C;
  RegisterQUEUE_111_D QUEUE_111_D;
  RegisterQUEUE_112_A QUEUE_112_A;
  RegisterQUEUE_112_B QUEUE_112_B;
  RegisterQUEUE_112_C QUEUE_112_C;
  RegisterQUEUE_112_D QUEUE_112_D;
  RegisterQUEUE_113_A QUEUE_113_A;
  RegisterQUEUE_113_B QUEUE_113_B;
  RegisterQUEUE_113_C QUEUE_113_C;
  RegisterQUEUE_113_D QUEUE_113_D;
  RegisterQUEUE_114_A QUEUE_114_A;
  RegisterQUEUE_114_B QUEUE_114_B;
  RegisterQUEUE_114_C QUEUE_114_C;
  RegisterQUEUE_114_D QUEUE_114_D;
  RegisterQUEUE_115_A QUEUE_115_A;
  RegisterQUEUE_115_B QUEUE_115_B;
  RegisterQUEUE_115_C QUEUE_115_C;
  RegisterQUEUE_115_D QUEUE_115_D;
  RegisterQUEUE_116_A QUEUE_116_A;
  RegisterQUEUE_116_B QUEUE_116_B;
  RegisterQUEUE_116_C QUEUE_116_C;
  RegisterQUEUE_116_D QUEUE_116_D;
  RegisterQUEUE_117_A QUEUE_117_A;
  RegisterQUEUE_117_B QUEUE_117_B;
  RegisterQUEUE_117_C QUEUE_117_C;
  RegisterQUEUE_117_D QUEUE_117_D;
  RegisterQUEUE_118_A QUEUE_118_A;
  RegisterQUEUE_118_B QUEUE_118_B;
  RegisterQUEUE_118_C QUEUE_118_C;
  RegisterQUEUE_118_D QUEUE_118_D;
  RegisterQUEUE_119_A QUEUE_119_A;
  RegisterQUEUE_119_B QUEUE_119_B;
  RegisterQUEUE_119_C QUEUE_119_C;
  RegisterQUEUE_119_D QUEUE_119_D;
  RegisterQUEUE_120_A QUEUE_120_A;
  RegisterQUEUE_120_B QUEUE_120_B;
  RegisterQUEUE_120_C QUEUE_120_C;
  RegisterQUEUE_120_D QUEUE_120_D;
  RegisterQUEUE_121_A QUEUE_121_A;
  RegisterQUEUE_121_B QUEUE_121_B;
  RegisterQUEUE_121_C QUEUE_121_C;
  RegisterQUEUE_121_D QUEUE_121_D;
  RegisterQUEUE_122_A QUEUE_122_A;
  RegisterQUEUE_122_B QUEUE_122_B;
  RegisterQUEUE_122_C QUEUE_122_C;
  RegisterQUEUE_122_D QUEUE_122_D;
  RegisterQUEUE_123_A QUEUE_123_A;
  RegisterQUEUE_123_B QUEUE_123_B;
  RegisterQUEUE_123_C QUEUE_123_C;
  RegisterQUEUE_123_D QUEUE_123_D;
  RegisterQUEUE_124_A QUEUE_124_A;
  RegisterQUEUE_124_B QUEUE_124_B;
  RegisterQUEUE_124_C QUEUE_124_C;
  RegisterQUEUE_124_D QUEUE_124_D;
  RegisterQUEUE_125_A QUEUE_125_A;
  RegisterQUEUE_125_B QUEUE_125_B;
  RegisterQUEUE_125_C QUEUE_125_C;
  RegisterQUEUE_125_D QUEUE_125_D;
  RegisterQUEUE_126_A QUEUE_126_A;
  RegisterQUEUE_126_B QUEUE_126_B;
  RegisterQUEUE_126_C QUEUE_126_C;
  RegisterQUEUE_126_D QUEUE_126_D;
  RegisterQUEUE_127_A QUEUE_127_A;
  RegisterQUEUE_127_B QUEUE_127_B;
  RegisterQUEUE_127_C QUEUE_127_C;
  RegisterQUEUE_127_D QUEUE_127_D;
  RegisterQUEUE_128_A QUEUE_128_A;
  RegisterQUEUE_128_B QUEUE_128_B;
  RegisterQUEUE_128_C QUEUE_128_C;
  RegisterQUEUE_128_D QUEUE_128_D;
  RegisterQUEUE_129_A QUEUE_129_A;
  RegisterQUEUE_129_B QUEUE_129_B;
  RegisterQUEUE_129_C QUEUE_129_C;
  RegisterQUEUE_129_D QUEUE_129_D;
  RegisterQUEUE_130_A QUEUE_130_A;
  RegisterQUEUE_130_B QUEUE_130_B;
  RegisterQUEUE_130_C QUEUE_130_C;
  RegisterQUEUE_130_D QUEUE_130_D;
  RegisterQUEUE_131_A QUEUE_131_A;
  RegisterQUEUE_131_B QUEUE_131_B;
  RegisterQUEUE_131_C QUEUE_131_C;
  RegisterQUEUE_131_D QUEUE_131_D;
  RegisterQUEUE_132_A QUEUE_132_A;
  RegisterQUEUE_132_B QUEUE_132_B;
  RegisterQUEUE_132_C QUEUE_132_C;
  RegisterQUEUE_132_D QUEUE_132_D;
  RegisterQUEUE_133_A QUEUE_133_A;
  RegisterQUEUE_133_B QUEUE_133_B;
  RegisterQUEUE_133_C QUEUE_133_C;
  RegisterQUEUE_133_D QUEUE_133_D;
  RegisterQUEUE_134_A QUEUE_134_A;
  RegisterQUEUE_134_B QUEUE_134_B;
  RegisterQUEUE_134_C QUEUE_134_C;
  RegisterQUEUE_134_D QUEUE_134_D;
  RegisterQUEUE_135_A QUEUE_135_A;
  RegisterQUEUE_135_B QUEUE_135_B;
  RegisterQUEUE_135_C QUEUE_135_C;
  RegisterQUEUE_135_D QUEUE_135_D;
  RegisterQUEUE_136_A QUEUE_136_A;
  RegisterQUEUE_136_B QUEUE_136_B;
  RegisterQUEUE_136_C QUEUE_136_C;
  RegisterQUEUE_136_D QUEUE_136_D;
  RegisterQUEUE_137_A QUEUE_137_A;
  RegisterQUEUE_137_B QUEUE_137_B;
  RegisterQUEUE_137_C QUEUE_137_C;
  RegisterQUEUE_137_D QUEUE_137_D;
  RegisterQUEUE_138_A QUEUE_138_A;
  RegisterQUEUE_138_B QUEUE_138_B;
  RegisterQUEUE_138_C QUEUE_138_C;
  RegisterQUEUE_138_D QUEUE_138_D;
  RegisterQUEUE_139_A QUEUE_139_A;
  RegisterQUEUE_139_B QUEUE_139_B;
  RegisterQUEUE_139_C QUEUE_139_C;
  RegisterQUEUE_139_D QUEUE_139_D;
  RegisterQUEUE_140_A QUEUE_140_A;
  RegisterQUEUE_140_B QUEUE_140_B;
  RegisterQUEUE_140_C QUEUE_140_C;
  RegisterQUEUE_140_D QUEUE_140_D;
  RegisterQUEUE_141_A QUEUE_141_A;
  RegisterQUEUE_141_B QUEUE_141_B;
  RegisterQUEUE_141_C QUEUE_141_C;
  RegisterQUEUE_141_D QUEUE_141_D;
  RegisterQUEUE_142_A QUEUE_142_A;
  RegisterQUEUE_142_B QUEUE_142_B;
  RegisterQUEUE_142_C QUEUE_142_C;
  RegisterQUEUE_142_D QUEUE_142_D;
  RegisterQUEUE_143_A QUEUE_143_A;
  RegisterQUEUE_143_B QUEUE_143_B;
  RegisterQUEUE_143_C QUEUE_143_C;
  RegisterQUEUE_143_D QUEUE_143_D;
  RegisterQUEUE_144_A QUEUE_144_A;
  RegisterQUEUE_144_B QUEUE_144_B;
  RegisterQUEUE_144_C QUEUE_144_C;
  RegisterQUEUE_144_D QUEUE_144_D;
  RegisterQUEUE_145_A QUEUE_145_A;
  RegisterQUEUE_145_B QUEUE_145_B;
  RegisterQUEUE_145_C QUEUE_145_C;
  RegisterQUEUE_145_D QUEUE_145_D;
  RegisterQUEUE_146_A QUEUE_146_A;
  RegisterQUEUE_146_B QUEUE_146_B;
  RegisterQUEUE_146_C QUEUE_146_C;
  RegisterQUEUE_146_D QUEUE_146_D;
  RegisterQUEUE_147_A QUEUE_147_A;
  RegisterQUEUE_147_B QUEUE_147_B;
  RegisterQUEUE_147_C QUEUE_147_C;
  RegisterQUEUE_147_D QUEUE_147_D;
  RegisterQUEUE_148_A QUEUE_148_A;
  RegisterQUEUE_148_B QUEUE_148_B;
  RegisterQUEUE_148_C QUEUE_148_C;
  RegisterQUEUE_148_D QUEUE_148_D;
  RegisterQUEUE_149_A QUEUE_149_A;
  RegisterQUEUE_149_B QUEUE_149_B;
  RegisterQUEUE_149_C QUEUE_149_C;
  RegisterQUEUE_149_D QUEUE_149_D;
  RegisterQUEUE_150_A QUEUE_150_A;
  RegisterQUEUE_150_B QUEUE_150_B;
  RegisterQUEUE_150_C QUEUE_150_C;
  RegisterQUEUE_150_D QUEUE_150_D;
  RegisterQUEUE_151_A QUEUE_151_A;
  RegisterQUEUE_151_B QUEUE_151_B;
  RegisterQUEUE_151_C QUEUE_151_C;
  RegisterQUEUE_151_D QUEUE_151_D;
  RegisterQUEUE_152_A QUEUE_152_A;
  RegisterQUEUE_152_B QUEUE_152_B;
  RegisterQUEUE_152_C QUEUE_152_C;
  RegisterQUEUE_152_D QUEUE_152_D;
  RegisterQUEUE_153_A QUEUE_153_A;
  RegisterQUEUE_153_B QUEUE_153_B;
  RegisterQUEUE_153_C QUEUE_153_C;
  RegisterQUEUE_153_D QUEUE_153_D;
  RegisterQUEUE_154_A QUEUE_154_A;
  RegisterQUEUE_154_B QUEUE_154_B;
  RegisterQUEUE_154_C QUEUE_154_C;
  RegisterQUEUE_154_D QUEUE_154_D;
  RegisterQUEUE_155_A QUEUE_155_A;
  RegisterQUEUE_155_B QUEUE_155_B;
  RegisterQUEUE_155_C QUEUE_155_C;
  RegisterQUEUE_155_D QUEUE_155_D;
  uint8_t RESERVED_OFFSETS_13[1600];
  RegisterQUEUE_0_STATUS_A QUEUE_0_STATUS_A;
  RegisterQUEUE_0_STATUS_B QUEUE_0_STATUS_B;
  RegisterQUEUE_0_STATUS_C QUEUE_0_STATUS_C;
  uint8_t RESERVED_OFFSETS_14[4];
  RegisterQUEUE_1_STATUS_A QUEUE_1_STATUS_A;
  RegisterQUEUE_1_STATUS_B QUEUE_1_STATUS_B;
  RegisterQUEUE_1_STATUS_C QUEUE_1_STATUS_C;
  uint8_t RESERVED_OFFSETS_15[4];
  RegisterQUEUE_2_STATUS_A QUEUE_2_STATUS_A;
  RegisterQUEUE_2_STATUS_B QUEUE_2_STATUS_B;
  RegisterQUEUE_2_STATUS_C QUEUE_2_STATUS_C;
  uint8_t RESERVED_OFFSETS_16[4];
  RegisterQUEUE_3_STATUS_A QUEUE_3_STATUS_A;
  RegisterQUEUE_3_STATUS_B QUEUE_3_STATUS_B;
  RegisterQUEUE_3_STATUS_C QUEUE_3_STATUS_C;
  uint8_t RESERVED_OFFSETS_17[4];
  RegisterQUEUE_4_STATUS_A QUEUE_4_STATUS_A;
  RegisterQUEUE_4_STATUS_B QUEUE_4_STATUS_B;
  RegisterQUEUE_4_STATUS_C QUEUE_4_STATUS_C;
  uint8_t RESERVED_OFFSETS_18[4];
  RegisterQUEUE_5_STATUS_A QUEUE_5_STATUS_A;
  RegisterQUEUE_5_STATUS_B QUEUE_5_STATUS_B;
  RegisterQUEUE_5_STATUS_C QUEUE_5_STATUS_C;
  uint8_t RESERVED_OFFSETS_19[4];
  RegisterQUEUE_6_STATUS_A QUEUE_6_STATUS_A;
  RegisterQUEUE_6_STATUS_B QUEUE_6_STATUS_B;
  RegisterQUEUE_6_STATUS_C QUEUE_6_STATUS_C;
  uint8_t RESERVED_OFFSETS_20[4];
  RegisterQUEUE_7_STATUS_A QUEUE_7_STATUS_A;
  RegisterQUEUE_7_STATUS_B QUEUE_7_STATUS_B;
  RegisterQUEUE_7_STATUS_C QUEUE_7_STATUS_C;
  uint8_t RESERVED_OFFSETS_21[4];
  RegisterQUEUE_8_STATUS_A QUEUE_8_STATUS_A;
  RegisterQUEUE_8_STATUS_B QUEUE_8_STATUS_B;
  RegisterQUEUE_8_STATUS_C QUEUE_8_STATUS_C;
  uint8_t RESERVED_OFFSETS_22[4];
  RegisterQUEUE_9_STATUS_A QUEUE_9_STATUS_A;
  RegisterQUEUE_9_STATUS_B QUEUE_9_STATUS_B;
  RegisterQUEUE_9_STATUS_C QUEUE_9_STATUS_C;
  uint8_t RESERVED_OFFSETS_23[4];
  RegisterQUEUE_10_STATUS_A QUEUE_10_STATUS_A;
  RegisterQUEUE_10_STATUS_B QUEUE_10_STATUS_B;
  RegisterQUEUE_10_STATUS_C QUEUE_10_STATUS_C;
  uint8_t RESERVED_OFFSETS_24[4];
  RegisterQUEUE_11_STATUS_A QUEUE_11_STATUS_A;
  RegisterQUEUE_11_STATUS_B QUEUE_11_STATUS_B;
  RegisterQUEUE_11_STATUS_C QUEUE_11_STATUS_C;
  uint8_t RESERVED_OFFSETS_25[4];
  RegisterQUEUE_12_STATUS_A QUEUE_12_STATUS_A;
  RegisterQUEUE_12_STATUS_B QUEUE_12_STATUS_B;
  RegisterQUEUE_12_STATUS_C QUEUE_12_STATUS_C;
  uint8_t RESERVED_OFFSETS_26[4];
  RegisterQUEUE_13_STATUS_A QUEUE_13_STATUS_A;
  RegisterQUEUE_13_STATUS_B QUEUE_13_STATUS_B;
  RegisterQUEUE_13_STATUS_C QUEUE_13_STATUS_C;
  uint8_t RESERVED_OFFSETS_27[4];
  RegisterQUEUE_14_STATUS_A QUEUE_14_STATUS_A;
  RegisterQUEUE_14_STATUS_B QUEUE_14_STATUS_B;
  RegisterQUEUE_14_STATUS_C QUEUE_14_STATUS_C;
  uint8_t RESERVED_OFFSETS_28[4];
  RegisterQUEUE_15_STATUS_A QUEUE_15_STATUS_A;
  RegisterQUEUE_15_STATUS_B QUEUE_15_STATUS_B;
  RegisterQUEUE_15_STATUS_C QUEUE_15_STATUS_C;
  uint8_t RESERVED_OFFSETS_29[4];
  RegisterQUEUE_16_STATUS_A QUEUE_16_STATUS_A;
  RegisterQUEUE_16_STATUS_B QUEUE_16_STATUS_B;
  RegisterQUEUE_16_STATUS_C QUEUE_16_STATUS_C;
  uint8_t RESERVED_OFFSETS_30[4];
  RegisterQUEUE_17_STATUS_A QUEUE_17_STATUS_A;
  RegisterQUEUE_17_STATUS_B QUEUE_17_STATUS_B;
  RegisterQUEUE_17_STATUS_C QUEUE_17_STATUS_C;
  uint8_t RESERVED_OFFSETS_31[4];
  RegisterQUEUE_18_STATUS_A QUEUE_18_STATUS_A;
  RegisterQUEUE_18_STATUS_B QUEUE_18_STATUS_B;
  RegisterQUEUE_18_STATUS_C QUEUE_18_STATUS_C;
  uint8_t RESERVED_OFFSETS_32[4];
  RegisterQUEUE_19_STATUS_A QUEUE_19_STATUS_A;
  RegisterQUEUE_19_STATUS_B QUEUE_19_STATUS_B;
  RegisterQUEUE_19_STATUS_C QUEUE_19_STATUS_C;
  uint8_t RESERVED_OFFSETS_33[4];
  RegisterQUEUE_20_STATUS_A QUEUE_20_STATUS_A;
  RegisterQUEUE_20_STATUS_B QUEUE_20_STATUS_B;
  RegisterQUEUE_20_STATUS_C QUEUE_20_STATUS_C;
  uint8_t RESERVED_OFFSETS_34[4];
  RegisterQUEUE_21_STATUS_A QUEUE_21_STATUS_A;
  RegisterQUEUE_21_STATUS_B QUEUE_21_STATUS_B;
  RegisterQUEUE_21_STATUS_C QUEUE_21_STATUS_C;
  uint8_t RESERVED_OFFSETS_35[4];
  RegisterQUEUE_22_STATUS_A QUEUE_22_STATUS_A;
  RegisterQUEUE_22_STATUS_B QUEUE_22_STATUS_B;
  RegisterQUEUE_22_STATUS_C QUEUE_22_STATUS_C;
  uint8_t RESERVED_OFFSETS_36[4];
  RegisterQUEUE_23_STATUS_A QUEUE_23_STATUS_A;
  RegisterQUEUE_23_STATUS_B QUEUE_23_STATUS_B;
  RegisterQUEUE_23_STATUS_C QUEUE_23_STATUS_C;
  uint8_t RESERVED_OFFSETS_37[4];
  RegisterQUEUE_24_STATUS_A QUEUE_24_STATUS_A;
  RegisterQUEUE_24_STATUS_B QUEUE_24_STATUS_B;
  RegisterQUEUE_24_STATUS_C QUEUE_24_STATUS_C;
  uint8_t RESERVED_OFFSETS_38[4];
  RegisterQUEUE_25_STATUS_A QUEUE_25_STATUS_A;
  RegisterQUEUE_25_STATUS_B QUEUE_25_STATUS_B;
  RegisterQUEUE_25_STATUS_C QUEUE_25_STATUS_C;
  uint8_t RESERVED_OFFSETS_39[4];
  RegisterQUEUE_26_STATUS_A QUEUE_26_STATUS_A;
  RegisterQUEUE_26_STATUS_B QUEUE_26_STATUS_B;
  RegisterQUEUE_26_STATUS_C QUEUE_26_STATUS_C;
  uint8_t RESERVED_OFFSETS_40[4];
  RegisterQUEUE_27_STATUS_A QUEUE_27_STATUS_A;
  RegisterQUEUE_27_STATUS_B QUEUE_27_STATUS_B;
  RegisterQUEUE_27_STATUS_C QUEUE_27_STATUS_C;
  uint8_t RESERVED_OFFSETS_41[4];
  RegisterQUEUE_28_STATUS_A QUEUE_28_STATUS_A;
  RegisterQUEUE_28_STATUS_B QUEUE_28_STATUS_B;
  RegisterQUEUE_28_STATUS_C QUEUE_28_STATUS_C;
  uint8_t RESERVED_OFFSETS_42[4];
  RegisterQUEUE_29_STATUS_A QUEUE_29_STATUS_A;
  RegisterQUEUE_29_STATUS_B QUEUE_29_STATUS_B;
  RegisterQUEUE_29_STATUS_C QUEUE_29_STATUS_C;
  uint8_t RESERVED_OFFSETS_43[4];
  RegisterQUEUE_30_STATUS_A QUEUE_30_STATUS_A;
  RegisterQUEUE_30_STATUS_B QUEUE_30_STATUS_B;
  RegisterQUEUE_30_STATUS_C QUEUE_30_STATUS_C;
  uint8_t RESERVED_OFFSETS_44[4];
  RegisterQUEUE_31_STATUS_A QUEUE_31_STATUS_A;
  RegisterQUEUE_31_STATUS_B QUEUE_31_STATUS_B;
  RegisterQUEUE_31_STATUS_C QUEUE_31_STATUS_C;
  uint8_t RESERVED_OFFSETS_45[4];
  RegisterQUEUE_32_STATUS_A QUEUE_32_STATUS_A;
  RegisterQUEUE_32_STATUS_B QUEUE_32_STATUS_B;
  RegisterQUEUE_32_STATUS_C QUEUE_32_STATUS_C;
  uint8_t RESERVED_OFFSETS_46[4];
  RegisterQUEUE_33_STATUS_A QUEUE_33_STATUS_A;
  RegisterQUEUE_33_STATUS_B QUEUE_33_STATUS_B;
  RegisterQUEUE_33_STATUS_C QUEUE_33_STATUS_C;
  uint8_t RESERVED_OFFSETS_47[4];
  RegisterQUEUE_34_STATUS_A QUEUE_34_STATUS_A;
  RegisterQUEUE_34_STATUS_B QUEUE_34_STATUS_B;
  RegisterQUEUE_34_STATUS_C QUEUE_34_STATUS_C;
  uint8_t RESERVED_OFFSETS_48[4];
  RegisterQUEUE_35_STATUS_A QUEUE_35_STATUS_A;
  RegisterQUEUE_35_STATUS_B QUEUE_35_STATUS_B;
  RegisterQUEUE_35_STATUS_C QUEUE_35_STATUS_C;
  uint8_t RESERVED_OFFSETS_49[4];
  RegisterQUEUE_36_STATUS_A QUEUE_36_STATUS_A;
  RegisterQUEUE_36_STATUS_B QUEUE_36_STATUS_B;
  RegisterQUEUE_36_STATUS_C QUEUE_36_STATUS_C;
  uint8_t RESERVED_OFFSETS_50[4];
  RegisterQUEUE_37_STATUS_A QUEUE_37_STATUS_A;
  RegisterQUEUE_37_STATUS_B QUEUE_37_STATUS_B;
  RegisterQUEUE_37_STATUS_C QUEUE_37_STATUS_C;
  uint8_t RESERVED_OFFSETS_51[4];
  RegisterQUEUE_38_STATUS_A QUEUE_38_STATUS_A;
  RegisterQUEUE_38_STATUS_B QUEUE_38_STATUS_B;
  RegisterQUEUE_38_STATUS_C QUEUE_38_STATUS_C;
  uint8_t RESERVED_OFFSETS_52[4];
  RegisterQUEUE_39_STATUS_A QUEUE_39_STATUS_A;
  RegisterQUEUE_39_STATUS_B QUEUE_39_STATUS_B;
  RegisterQUEUE_39_STATUS_C QUEUE_39_STATUS_C;
  uint8_t RESERVED_OFFSETS_53[4];
  RegisterQUEUE_40_STATUS_A QUEUE_40_STATUS_A;
  RegisterQUEUE_40_STATUS_B QUEUE_40_STATUS_B;
  RegisterQUEUE_40_STATUS_C QUEUE_40_STATUS_C;
  uint8_t RESERVED_OFFSETS_54[4];
  RegisterQUEUE_41_STATUS_A QUEUE_41_STATUS_A;
  RegisterQUEUE_41_STATUS_B QUEUE_41_STATUS_B;
  RegisterQUEUE_41_STATUS_C QUEUE_41_STATUS_C;
  uint8_t RESERVED_OFFSETS_55[4];
  RegisterQUEUE_42_STATUS_A QUEUE_42_STATUS_A;
  RegisterQUEUE_42_STATUS_B QUEUE_42_STATUS_B;
  RegisterQUEUE_42_STATUS_C QUEUE_42_STATUS_C;
  uint8_t RESERVED_OFFSETS_56[4];
  RegisterQUEUE_43_STATUS_A QUEUE_43_STATUS_A;
  RegisterQUEUE_43_STATUS_B QUEUE_43_STATUS_B;
  RegisterQUEUE_43_STATUS_C QUEUE_43_STATUS_C;
  uint8_t RESERVED_OFFSETS_57[4];
  RegisterQUEUE_44_STATUS_A QUEUE_44_STATUS_A;
  RegisterQUEUE_44_STATUS_B QUEUE_44_STATUS_B;
  RegisterQUEUE_44_STATUS_C QUEUE_44_STATUS_C;
  uint8_t RESERVED_OFFSETS_58[4];
  RegisterQUEUE_45_STATUS_A QUEUE_45_STATUS_A;
  RegisterQUEUE_45_STATUS_B QUEUE_45_STATUS_B;
  RegisterQUEUE_45_STATUS_C QUEUE_45_STATUS_C;
  uint8_t RESERVED_OFFSETS_59[4];
  RegisterQUEUE_46_STATUS_A QUEUE_46_STATUS_A;
  RegisterQUEUE_46_STATUS_B QUEUE_46_STATUS_B;
  RegisterQUEUE_46_STATUS_C QUEUE_46_STATUS_C;
  uint8_t RESERVED_OFFSETS_60[4];
  RegisterQUEUE_47_STATUS_A QUEUE_47_STATUS_A;
  RegisterQUEUE_47_STATUS_B QUEUE_47_STATUS_B;
  RegisterQUEUE_47_STATUS_C QUEUE_47_STATUS_C;
  uint8_t RESERVED_OFFSETS_61[4];
  RegisterQUEUE_48_STATUS_A QUEUE_48_STATUS_A;
  RegisterQUEUE_48_STATUS_B QUEUE_48_STATUS_B;
  RegisterQUEUE_48_STATUS_C QUEUE_48_STATUS_C;
  uint8_t RESERVED_OFFSETS_62[4];
  RegisterQUEUE_49_STATUS_A QUEUE_49_STATUS_A;
  RegisterQUEUE_49_STATUS_B QUEUE_49_STATUS_B;
  RegisterQUEUE_49_STATUS_C QUEUE_49_STATUS_C;
  uint8_t RESERVED_OFFSETS_63[4];
  RegisterQUEUE_50_STATUS_A QUEUE_50_STATUS_A;
  RegisterQUEUE_50_STATUS_B QUEUE_50_STATUS_B;
  RegisterQUEUE_50_STATUS_C QUEUE_50_STATUS_C;
  uint8_t RESERVED_OFFSETS_64[4];
  RegisterQUEUE_51_STATUS_A QUEUE_51_STATUS_A;
  RegisterQUEUE_51_STATUS_B QUEUE_51_STATUS_B;
  RegisterQUEUE_51_STATUS_C QUEUE_51_STATUS_C;
  uint8_t RESERVED_OFFSETS_65[4];
  RegisterQUEUE_52_STATUS_A QUEUE_52_STATUS_A;
  RegisterQUEUE_52_STATUS_B QUEUE_52_STATUS_B;
  RegisterQUEUE_52_STATUS_C QUEUE_52_STATUS_C;
  uint8_t RESERVED_OFFSETS_66[4];
  RegisterQUEUE_53_STATUS_A QUEUE_53_STATUS_A;
  RegisterQUEUE_53_STATUS_B QUEUE_53_STATUS_B;
  RegisterQUEUE_53_STATUS_C QUEUE_53_STATUS_C;
  uint8_t RESERVED_OFFSETS_67[4];
  RegisterQUEUE_54_STATUS_A QUEUE_54_STATUS_A;
  RegisterQUEUE_54_STATUS_B QUEUE_54_STATUS_B;
  RegisterQUEUE_54_STATUS_C QUEUE_54_STATUS_C;
  uint8_t RESERVED_OFFSETS_68[4];
  RegisterQUEUE_55_STATUS_A QUEUE_55_STATUS_A;
  RegisterQUEUE_55_STATUS_B QUEUE_55_STATUS_B;
  RegisterQUEUE_55_STATUS_C QUEUE_55_STATUS_C;
  uint8_t RESERVED_OFFSETS_69[4];
  RegisterQUEUE_56_STATUS_A QUEUE_56_STATUS_A;
  RegisterQUEUE_56_STATUS_B QUEUE_56_STATUS_B;
  RegisterQUEUE_56_STATUS_C QUEUE_56_STATUS_C;
  uint8_t RESERVED_OFFSETS_70[4];
  RegisterQUEUE_57_STATUS_A QUEUE_57_STATUS_A;
  RegisterQUEUE_57_STATUS_B QUEUE_57_STATUS_B;
  RegisterQUEUE_57_STATUS_C QUEUE_57_STATUS_C;
  uint8_t RESERVED_OFFSETS_71[4];
  RegisterQUEUE_58_STATUS_A QUEUE_58_STATUS_A;
  RegisterQUEUE_58_STATUS_B QUEUE_58_STATUS_B;
  RegisterQUEUE_58_STATUS_C QUEUE_58_STATUS_C;
  uint8_t RESERVED_OFFSETS_72[4];
  RegisterQUEUE_59_STATUS_A QUEUE_59_STATUS_A;
  RegisterQUEUE_59_STATUS_B QUEUE_59_STATUS_B;
  RegisterQUEUE_59_STATUS_C QUEUE_59_STATUS_C;
  uint8_t RESERVED_OFFSETS_73[4];
  RegisterQUEUE_60_STATUS_A QUEUE_60_STATUS_A;
  RegisterQUEUE_60_STATUS_B QUEUE_60_STATUS_B;
  RegisterQUEUE_60_STATUS_C QUEUE_60_STATUS_C;
  uint8_t RESERVED_OFFSETS_74[4];
  RegisterQUEUE_61_STATUS_A QUEUE_61_STATUS_A;
  RegisterQUEUE_61_STATUS_B QUEUE_61_STATUS_B;
  RegisterQUEUE_61_STATUS_C QUEUE_61_STATUS_C;
  uint8_t RESERVED_OFFSETS_75[4];
  RegisterQUEUE_62_STATUS_A QUEUE_62_STATUS_A;
  RegisterQUEUE_62_STATUS_B QUEUE_62_STATUS_B;
  RegisterQUEUE_62_STATUS_C QUEUE_62_STATUS_C;
  uint8_t RESERVED_OFFSETS_76[4];
  RegisterQUEUE_63_STATUS_A QUEUE_63_STATUS_A;
  RegisterQUEUE_63_STATUS_B QUEUE_63_STATUS_B;
  RegisterQUEUE_63_STATUS_C QUEUE_63_STATUS_C;
  uint8_t RESERVED_OFFSETS_77[4];
  RegisterQUEUE_64_STATUS_A QUEUE_64_STATUS_A;
  RegisterQUEUE_64_STATUS_B QUEUE_64_STATUS_B;
  RegisterQUEUE_64_STATUS_C QUEUE_64_STATUS_C;
  uint8_t RESERVED_OFFSETS_78[4];
  RegisterQUEUE_65_STATUS_A QUEUE_65_STATUS_A;
  RegisterQUEUE_65_STATUS_B QUEUE_65_STATUS_B;
  RegisterQUEUE_65_STATUS_C QUEUE_65_STATUS_C;
  uint8_t RESERVED_OFFSETS_79[4];
  RegisterQUEUE_66_STATUS_A QUEUE_66_STATUS_A;
  RegisterQUEUE_66_STATUS_B QUEUE_66_STATUS_B;
  RegisterQUEUE_66_STATUS_C QUEUE_66_STATUS_C;
  uint8_t RESERVED_OFFSETS_80[4];
  RegisterQUEUE_67_STATUS_A QUEUE_67_STATUS_A;
  RegisterQUEUE_67_STATUS_B QUEUE_67_STATUS_B;
  RegisterQUEUE_67_STATUS_C QUEUE_67_STATUS_C;
  uint8_t RESERVED_OFFSETS_81[4];
  RegisterQUEUE_68_STATUS_A QUEUE_68_STATUS_A;
  RegisterQUEUE_68_STATUS_B QUEUE_68_STATUS_B;
  RegisterQUEUE_68_STATUS_C QUEUE_68_STATUS_C;
  uint8_t RESERVED_OFFSETS_82[4];
  RegisterQUEUE_69_STATUS_A QUEUE_69_STATUS_A;
  RegisterQUEUE_69_STATUS_B QUEUE_69_STATUS_B;
  RegisterQUEUE_69_STATUS_C QUEUE_69_STATUS_C;
  uint8_t RESERVED_OFFSETS_83[4];
  RegisterQUEUE_70_STATUS_A QUEUE_70_STATUS_A;
  RegisterQUEUE_70_STATUS_B QUEUE_70_STATUS_B;
  RegisterQUEUE_70_STATUS_C QUEUE_70_STATUS_C;
  uint8_t RESERVED_OFFSETS_84[4];
  RegisterQUEUE_71_STATUS_A QUEUE_71_STATUS_A;
  RegisterQUEUE_71_STATUS_B QUEUE_71_STATUS_B;
  RegisterQUEUE_71_STATUS_C QUEUE_71_STATUS_C;
  uint8_t RESERVED_OFFSETS_85[4];
  RegisterQUEUE_72_STATUS_A QUEUE_72_STATUS_A;
  RegisterQUEUE_72_STATUS_B QUEUE_72_STATUS_B;
  RegisterQUEUE_72_STATUS_C QUEUE_72_STATUS_C;
  uint8_t RESERVED_OFFSETS_86[4];
  RegisterQUEUE_73_STATUS_A QUEUE_73_STATUS_A;
  RegisterQUEUE_73_STATUS_B QUEUE_73_STATUS_B;
  RegisterQUEUE_73_STATUS_C QUEUE_73_STATUS_C;
  uint8_t RESERVED_OFFSETS_87[4];
  RegisterQUEUE_74_STATUS_A QUEUE_74_STATUS_A;
  RegisterQUEUE_74_STATUS_B QUEUE_74_STATUS_B;
  RegisterQUEUE_74_STATUS_C QUEUE_74_STATUS_C;
  uint8_t RESERVED_OFFSETS_88[4];
  RegisterQUEUE_75_STATUS_A QUEUE_75_STATUS_A;
  RegisterQUEUE_75_STATUS_B QUEUE_75_STATUS_B;
  RegisterQUEUE_75_STATUS_C QUEUE_75_STATUS_C;
  uint8_t RESERVED_OFFSETS_89[4];
  RegisterQUEUE_76_STATUS_A QUEUE_76_STATUS_A;
  RegisterQUEUE_76_STATUS_B QUEUE_76_STATUS_B;
  RegisterQUEUE_76_STATUS_C QUEUE_76_STATUS_C;
  uint8_t RESERVED_OFFSETS_90[4];
  RegisterQUEUE_77_STATUS_A QUEUE_77_STATUS_A;
  RegisterQUEUE_77_STATUS_B QUEUE_77_STATUS_B;
  RegisterQUEUE_77_STATUS_C QUEUE_77_STATUS_C;
  uint8_t RESERVED_OFFSETS_91[4];
  RegisterQUEUE_78_STATUS_A QUEUE_78_STATUS_A;
  RegisterQUEUE_78_STATUS_B QUEUE_78_STATUS_B;
  RegisterQUEUE_78_STATUS_C QUEUE_78_STATUS_C;
  uint8_t RESERVED_OFFSETS_92[4];
  RegisterQUEUE_79_STATUS_A QUEUE_79_STATUS_A;
  RegisterQUEUE_79_STATUS_B QUEUE_79_STATUS_B;
  RegisterQUEUE_79_STATUS_C QUEUE_79_STATUS_C;
  uint8_t RESERVED_OFFSETS_93[4];
  RegisterQUEUE_80_STATUS_A QUEUE_80_STATUS_A;
  RegisterQUEUE_80_STATUS_B QUEUE_80_STATUS_B;
  RegisterQUEUE_80_STATUS_C QUEUE_80_STATUS_C;
  uint8_t RESERVED_OFFSETS_94[4];
  RegisterQUEUE_81_STATUS_A QUEUE_81_STATUS_A;
  RegisterQUEUE_81_STATUS_B QUEUE_81_STATUS_B;
  RegisterQUEUE_81_STATUS_C QUEUE_81_STATUS_C;
  uint8_t RESERVED_OFFSETS_95[4];
  RegisterQUEUE_82_STATUS_A QUEUE_82_STATUS_A;
  RegisterQUEUE_82_STATUS_B QUEUE_82_STATUS_B;
  RegisterQUEUE_82_STATUS_C QUEUE_82_STATUS_C;
  uint8_t RESERVED_OFFSETS_96[4];
  RegisterQUEUE_83_STATUS_A QUEUE_83_STATUS_A;
  RegisterQUEUE_83_STATUS_B QUEUE_83_STATUS_B;
  RegisterQUEUE_83_STATUS_C QUEUE_83_STATUS_C;
  uint8_t RESERVED_OFFSETS_97[4];
  RegisterQUEUE_84_STATUS_A QUEUE_84_STATUS_A;
  RegisterQUEUE_84_STATUS_B QUEUE_84_STATUS_B;
  RegisterQUEUE_84_STATUS_C QUEUE_84_STATUS_C;
  uint8_t RESERVED_OFFSETS_98[4];
  RegisterQUEUE_85_STATUS_A QUEUE_85_STATUS_A;
  RegisterQUEUE_85_STATUS_B QUEUE_85_STATUS_B;
  RegisterQUEUE_85_STATUS_C QUEUE_85_STATUS_C;
  uint8_t RESERVED_OFFSETS_99[4];
  RegisterQUEUE_86_STATUS_A QUEUE_86_STATUS_A;
  RegisterQUEUE_86_STATUS_B QUEUE_86_STATUS_B;
  RegisterQUEUE_86_STATUS_C QUEUE_86_STATUS_C;
  uint8_t RESERVED_OFFSETS_100[4];
  RegisterQUEUE_87_STATUS_A QUEUE_87_STATUS_A;
  RegisterQUEUE_87_STATUS_B QUEUE_87_STATUS_B;
  RegisterQUEUE_87_STATUS_C QUEUE_87_STATUS_C;
  uint8_t RESERVED_OFFSETS_101[4];
  RegisterQUEUE_88_STATUS_A QUEUE_88_STATUS_A;
  RegisterQUEUE_88_STATUS_B QUEUE_88_STATUS_B;
  RegisterQUEUE_88_STATUS_C QUEUE_88_STATUS_C;
  uint8_t RESERVED_OFFSETS_102[4];
  RegisterQUEUE_89_STATUS_A QUEUE_89_STATUS_A;
  RegisterQUEUE_89_STATUS_B QUEUE_89_STATUS_B;
  RegisterQUEUE_89_STATUS_C QUEUE_89_STATUS_C;
  uint8_t RESERVED_OFFSETS_103[4];
  RegisterQUEUE_90_STATUS_A QUEUE_90_STATUS_A;
  RegisterQUEUE_90_STATUS_B QUEUE_90_STATUS_B;
  RegisterQUEUE_90_STATUS_C QUEUE_90_STATUS_C;
  uint8_t RESERVED_OFFSETS_104[4];
  RegisterQUEUE_91_STATUS_A QUEUE_91_STATUS_A;
  RegisterQUEUE_91_STATUS_B QUEUE_91_STATUS_B;
  RegisterQUEUE_91_STATUS_C QUEUE_91_STATUS_C;
  uint8_t RESERVED_OFFSETS_105[4];
  RegisterQUEUE_92_STATUS_A QUEUE_92_STATUS_A;
  RegisterQUEUE_92_STATUS_B QUEUE_92_STATUS_B;
  RegisterQUEUE_92_STATUS_C QUEUE_92_STATUS_C;
  uint8_t RESERVED_OFFSETS_106[4];
  RegisterQUEUE_93_STATUS_A QUEUE_93_STATUS_A;
  RegisterQUEUE_93_STATUS_B QUEUE_93_STATUS_B;
  RegisterQUEUE_93_STATUS_C QUEUE_93_STATUS_C;
  uint8_t RESERVED_OFFSETS_107[4];
  RegisterQUEUE_94_STATUS_A QUEUE_94_STATUS_A;
  RegisterQUEUE_94_STATUS_B QUEUE_94_STATUS_B;
  RegisterQUEUE_94_STATUS_C QUEUE_94_STATUS_C;
  uint8_t RESERVED_OFFSETS_108[4];
  RegisterQUEUE_95_STATUS_A QUEUE_95_STATUS_A;
  RegisterQUEUE_95_STATUS_B QUEUE_95_STATUS_B;
  RegisterQUEUE_95_STATUS_C QUEUE_95_STATUS_C;
  uint8_t RESERVED_OFFSETS_109[4];
  RegisterQUEUE_96_STATUS_A QUEUE_96_STATUS_A;
  RegisterQUEUE_96_STATUS_B QUEUE_96_STATUS_B;
  RegisterQUEUE_96_STATUS_C QUEUE_96_STATUS_C;
  uint8_t RESERVED_OFFSETS_110[4];
  RegisterQUEUE_97_STATUS_A QUEUE_97_STATUS_A;
  RegisterQUEUE_97_STATUS_B QUEUE_97_STATUS_B;
  RegisterQUEUE_97_STATUS_C QUEUE_97_STATUS_C;
  uint8_t RESERVED_OFFSETS_111[4];
  RegisterQUEUE_98_STATUS_A QUEUE_98_STATUS_A;
  RegisterQUEUE_98_STATUS_B QUEUE_98_STATUS_B;
  RegisterQUEUE_98_STATUS_C QUEUE_98_STATUS_C;
  uint8_t RESERVED_OFFSETS_112[4];
  RegisterQUEUE_99_STATUS_A QUEUE_99_STATUS_A;
  RegisterQUEUE_99_STATUS_B QUEUE_99_STATUS_B;
  RegisterQUEUE_99_STATUS_C QUEUE_99_STATUS_C;
  uint8_t RESERVED_OFFSETS_113[4];
  RegisterQUEUE_100_STATUS_A QUEUE_100_STATUS_A;
  RegisterQUEUE_100_STATUS_B QUEUE_100_STATUS_B;
  RegisterQUEUE_100_STATUS_C QUEUE_100_STATUS_C;
  uint8_t RESERVED_OFFSETS_114[4];
  RegisterQUEUE_101_STATUS_A QUEUE_101_STATUS_A;
  RegisterQUEUE_101_STATUS_B QUEUE_101_STATUS_B;
  RegisterQUEUE_101_STATUS_C QUEUE_101_STATUS_C;
  uint8_t RESERVED_OFFSETS_115[4];
  RegisterQUEUE_102_STATUS_A QUEUE_102_STATUS_A;
  RegisterQUEUE_102_STATUS_B QUEUE_102_STATUS_B;
  RegisterQUEUE_102_STATUS_C QUEUE_102_STATUS_C;
  uint8_t RESERVED_OFFSETS_116[4];
  RegisterQUEUE_103_STATUS_A QUEUE_103_STATUS_A;
  RegisterQUEUE_103_STATUS_B QUEUE_103_STATUS_B;
  RegisterQUEUE_103_STATUS_C QUEUE_103_STATUS_C;
  uint8_t RESERVED_OFFSETS_117[4];
  RegisterQUEUE_104_STATUS_A QUEUE_104_STATUS_A;
  RegisterQUEUE_104_STATUS_B QUEUE_104_STATUS_B;
  RegisterQUEUE_104_STATUS_C QUEUE_104_STATUS_C;
  uint8_t RESERVED_OFFSETS_118[4];
  RegisterQUEUE_105_STATUS_A QUEUE_105_STATUS_A;
  RegisterQUEUE_105_STATUS_B QUEUE_105_STATUS_B;
  RegisterQUEUE_105_STATUS_C QUEUE_105_STATUS_C;
  uint8_t RESERVED_OFFSETS_119[4];
  RegisterQUEUE_106_STATUS_A QUEUE_106_STATUS_A;
  RegisterQUEUE_106_STATUS_B QUEUE_106_STATUS_B;
  RegisterQUEUE_106_STATUS_C QUEUE_106_STATUS_C;
  uint8_t RESERVED_OFFSETS_120[4];
  RegisterQUEUE_107_STATUS_A QUEUE_107_STATUS_A;
  RegisterQUEUE_107_STATUS_B QUEUE_107_STATUS_B;
  RegisterQUEUE_107_STATUS_C QUEUE_107_STATUS_C;
  uint8_t RESERVED_OFFSETS_121[4];
  RegisterQUEUE_108_STATUS_A QUEUE_108_STATUS_A;
  RegisterQUEUE_108_STATUS_B QUEUE_108_STATUS_B;
  RegisterQUEUE_108_STATUS_C QUEUE_108_STATUS_C;
  uint8_t RESERVED_OFFSETS_122[4];
  RegisterQUEUE_109_STATUS_A QUEUE_109_STATUS_A;
  RegisterQUEUE_109_STATUS_B QUEUE_109_STATUS_B;
  RegisterQUEUE_109_STATUS_C QUEUE_109_STATUS_C;
  uint8_t RESERVED_OFFSETS_123[4];
  RegisterQUEUE_110_STATUS_A QUEUE_110_STATUS_A;
  RegisterQUEUE_110_STATUS_B QUEUE_110_STATUS_B;
  RegisterQUEUE_110_STATUS_C QUEUE_110_STATUS_C;
  uint8_t RESERVED_OFFSETS_124[4];
  RegisterQUEUE_111_STATUS_A QUEUE_111_STATUS_A;
  RegisterQUEUE_111_STATUS_B QUEUE_111_STATUS_B;
  RegisterQUEUE_111_STATUS_C QUEUE_111_STATUS_C;
  uint8_t RESERVED_OFFSETS_125[4];
  RegisterQUEUE_112_STATUS_A QUEUE_112_STATUS_A;
  RegisterQUEUE_112_STATUS_B QUEUE_112_STATUS_B;
  RegisterQUEUE_112_STATUS_C QUEUE_112_STATUS_C;
  uint8_t RESERVED_OFFSETS_126[4];
  RegisterQUEUE_113_STATUS_A QUEUE_113_STATUS_A;
  RegisterQUEUE_113_STATUS_B QUEUE_113_STATUS_B;
  RegisterQUEUE_113_STATUS_C QUEUE_113_STATUS_C;
  uint8_t RESERVED_OFFSETS_127[4];
  RegisterQUEUE_114_STATUS_A QUEUE_114_STATUS_A;
  RegisterQUEUE_114_STATUS_B QUEUE_114_STATUS_B;
  RegisterQUEUE_114_STATUS_C QUEUE_114_STATUS_C;
  uint8_t RESERVED_OFFSETS_128[4];
  RegisterQUEUE_115_STATUS_A QUEUE_115_STATUS_A;
  RegisterQUEUE_115_STATUS_B QUEUE_115_STATUS_B;
  RegisterQUEUE_115_STATUS_C QUEUE_115_STATUS_C;
  uint8_t RESERVED_OFFSETS_129[4];
  RegisterQUEUE_116_STATUS_A QUEUE_116_STATUS_A;
  RegisterQUEUE_116_STATUS_B QUEUE_116_STATUS_B;
  RegisterQUEUE_116_STATUS_C QUEUE_116_STATUS_C;
  uint8_t RESERVED_OFFSETS_130[4];
  RegisterQUEUE_117_STATUS_A QUEUE_117_STATUS_A;
  RegisterQUEUE_117_STATUS_B QUEUE_117_STATUS_B;
  RegisterQUEUE_117_STATUS_C QUEUE_117_STATUS_C;
  uint8_t RESERVED_OFFSETS_131[4];
  RegisterQUEUE_118_STATUS_A QUEUE_118_STATUS_A;
  RegisterQUEUE_118_STATUS_B QUEUE_118_STATUS_B;
  RegisterQUEUE_118_STATUS_C QUEUE_118_STATUS_C;
  uint8_t RESERVED_OFFSETS_132[4];
  RegisterQUEUE_119_STATUS_A QUEUE_119_STATUS_A;
  RegisterQUEUE_119_STATUS_B QUEUE_119_STATUS_B;
  RegisterQUEUE_119_STATUS_C QUEUE_119_STATUS_C;
  uint8_t RESERVED_OFFSETS_133[4];
  RegisterQUEUE_120_STATUS_A QUEUE_120_STATUS_A;
  RegisterQUEUE_120_STATUS_B QUEUE_120_STATUS_B;
  RegisterQUEUE_120_STATUS_C QUEUE_120_STATUS_C;
  uint8_t RESERVED_OFFSETS_134[4];
  RegisterQUEUE_121_STATUS_A QUEUE_121_STATUS_A;
  RegisterQUEUE_121_STATUS_B QUEUE_121_STATUS_B;
  RegisterQUEUE_121_STATUS_C QUEUE_121_STATUS_C;
  uint8_t RESERVED_OFFSETS_135[4];
  RegisterQUEUE_122_STATUS_A QUEUE_122_STATUS_A;
  RegisterQUEUE_122_STATUS_B QUEUE_122_STATUS_B;
  RegisterQUEUE_122_STATUS_C QUEUE_122_STATUS_C;
  uint8_t RESERVED_OFFSETS_136[4];
  RegisterQUEUE_123_STATUS_A QUEUE_123_STATUS_A;
  RegisterQUEUE_123_STATUS_B QUEUE_123_STATUS_B;
  RegisterQUEUE_123_STATUS_C QUEUE_123_STATUS_C;
  uint8_t RESERVED_OFFSETS_137[4];
  RegisterQUEUE_124_STATUS_A QUEUE_124_STATUS_A;
  RegisterQUEUE_124_STATUS_B QUEUE_124_STATUS_B;
  RegisterQUEUE_124_STATUS_C QUEUE_124_STATUS_C;
  uint8_t RESERVED_OFFSETS_138[4];
  RegisterQUEUE_125_STATUS_A QUEUE_125_STATUS_A;
  RegisterQUEUE_125_STATUS_B QUEUE_125_STATUS_B;
  RegisterQUEUE_125_STATUS_C QUEUE_125_STATUS_C;
  uint8_t RESERVED_OFFSETS_139[4];
  RegisterQUEUE_126_STATUS_A QUEUE_126_STATUS_A;
  RegisterQUEUE_126_STATUS_B QUEUE_126_STATUS_B;
  RegisterQUEUE_126_STATUS_C QUEUE_126_STATUS_C;
  uint8_t RESERVED_OFFSETS_140[4];
  RegisterQUEUE_127_STATUS_A QUEUE_127_STATUS_A;
  RegisterQUEUE_127_STATUS_B QUEUE_127_STATUS_B;
  RegisterQUEUE_127_STATUS_C QUEUE_127_STATUS_C;
  uint8_t RESERVED_OFFSETS_141[4];
  RegisterQUEUE_128_STATUS_A QUEUE_128_STATUS_A;
  RegisterQUEUE_128_STATUS_B QUEUE_128_STATUS_B;
  RegisterQUEUE_128_STATUS_C QUEUE_128_STATUS_C;
  uint8_t RESERVED_OFFSETS_142[4];
  RegisterQUEUE_129_STATUS_A QUEUE_129_STATUS_A;
  RegisterQUEUE_129_STATUS_B QUEUE_129_STATUS_B;
  RegisterQUEUE_129_STATUS_C QUEUE_129_STATUS_C;
  uint8_t RESERVED_OFFSETS_143[4];
  RegisterQUEUE_130_STATUS_A QUEUE_130_STATUS_A;
  RegisterQUEUE_130_STATUS_B QUEUE_130_STATUS_B;
  RegisterQUEUE_130_STATUS_C QUEUE_130_STATUS_C;
  uint8_t RESERVED_OFFSETS_144[4];
  RegisterQUEUE_131_STATUS_A QUEUE_131_STATUS_A;
  RegisterQUEUE_131_STATUS_B QUEUE_131_STATUS_B;
  RegisterQUEUE_131_STATUS_C QUEUE_131_STATUS_C;
  uint8_t RESERVED_OFFSETS_145[4];
  RegisterQUEUE_132_STATUS_A QUEUE_132_STATUS_A;
  RegisterQUEUE_132_STATUS_B QUEUE_132_STATUS_B;
  RegisterQUEUE_132_STATUS_C QUEUE_132_STATUS_C;
  uint8_t RESERVED_OFFSETS_146[4];
  RegisterQUEUE_133_STATUS_A QUEUE_133_STATUS_A;
  RegisterQUEUE_133_STATUS_B QUEUE_133_STATUS_B;
  RegisterQUEUE_133_STATUS_C QUEUE_133_STATUS_C;
  uint8_t RESERVED_OFFSETS_147[4];
  RegisterQUEUE_134_STATUS_A QUEUE_134_STATUS_A;
  RegisterQUEUE_134_STATUS_B QUEUE_134_STATUS_B;
  RegisterQUEUE_134_STATUS_C QUEUE_134_STATUS_C;
  uint8_t RESERVED_OFFSETS_148[4];
  RegisterQUEUE_135_STATUS_A QUEUE_135_STATUS_A;
  RegisterQUEUE_135_STATUS_B QUEUE_135_STATUS_B;
  RegisterQUEUE_135_STATUS_C QUEUE_135_STATUS_C;
  uint8_t RESERVED_OFFSETS_149[4];
  RegisterQUEUE_136_STATUS_A QUEUE_136_STATUS_A;
  RegisterQUEUE_136_STATUS_B QUEUE_136_STATUS_B;
  RegisterQUEUE_136_STATUS_C QUEUE_136_STATUS_C;
  uint8_t RESERVED_OFFSETS_150[4];
  RegisterQUEUE_137_STATUS_A QUEUE_137_STATUS_A;
  RegisterQUEUE_137_STATUS_B QUEUE_137_STATUS_B;
  RegisterQUEUE_137_STATUS_C QUEUE_137_STATUS_C;
  uint8_t RESERVED_OFFSETS_151[4];
  RegisterQUEUE_138_STATUS_A QUEUE_138_STATUS_A;
  RegisterQUEUE_138_STATUS_B QUEUE_138_STATUS_B;
  RegisterQUEUE_138_STATUS_C QUEUE_138_STATUS_C;
  uint8_t RESERVED_OFFSETS_152[4];
  RegisterQUEUE_139_STATUS_A QUEUE_139_STATUS_A;
  RegisterQUEUE_139_STATUS_B QUEUE_139_STATUS_B;
  RegisterQUEUE_139_STATUS_C QUEUE_139_STATUS_C;
  uint8_t RESERVED_OFFSETS_153[4];
  RegisterQUEUE_140_STATUS_A QUEUE_140_STATUS_A;
  RegisterQUEUE_140_STATUS_B QUEUE_140_STATUS_B;
  RegisterQUEUE_140_STATUS_C QUEUE_140_STATUS_C;
  uint8_t RESERVED_OFFSETS_154[4];
  RegisterQUEUE_141_STATUS_A QUEUE_141_STATUS_A;
  RegisterQUEUE_141_STATUS_B QUEUE_141_STATUS_B;
  RegisterQUEUE_141_STATUS_C QUEUE_141_STATUS_C;
  uint8_t RESERVED_OFFSETS_155[4];
  RegisterQUEUE_142_STATUS_A QUEUE_142_STATUS_A;
  RegisterQUEUE_142_STATUS_B QUEUE_142_STATUS_B;
  RegisterQUEUE_142_STATUS_C QUEUE_142_STATUS_C;
  uint8_t RESERVED_OFFSETS_156[4];
  RegisterQUEUE_143_STATUS_A QUEUE_143_STATUS_A;
  RegisterQUEUE_143_STATUS_B QUEUE_143_STATUS_B;
  RegisterQUEUE_143_STATUS_C QUEUE_143_STATUS_C;
  uint8_t RESERVED_OFFSETS_157[4];
  RegisterQUEUE_144_STATUS_A QUEUE_144_STATUS_A;
  RegisterQUEUE_144_STATUS_B QUEUE_144_STATUS_B;
  RegisterQUEUE_144_STATUS_C QUEUE_144_STATUS_C;
  uint8_t RESERVED_OFFSETS_158[4];
  RegisterQUEUE_145_STATUS_A QUEUE_145_STATUS_A;
  RegisterQUEUE_145_STATUS_B QUEUE_145_STATUS_B;
  RegisterQUEUE_145_STATUS_C QUEUE_145_STATUS_C;
  uint8_t RESERVED_OFFSETS_159[4];
  RegisterQUEUE_146_STATUS_A QUEUE_146_STATUS_A;
  RegisterQUEUE_146_STATUS_B QUEUE_146_STATUS_B;
  RegisterQUEUE_146_STATUS_C QUEUE_146_STATUS_C;
  uint8_t RESERVED_OFFSETS_160[4];
  RegisterQUEUE_147_STATUS_A QUEUE_147_STATUS_A;
  RegisterQUEUE_147_STATUS_B QUEUE_147_STATUS_B;
  RegisterQUEUE_147_STATUS_C QUEUE_147_STATUS_C;
  uint8_t RESERVED_OFFSETS_161[4];
  RegisterQUEUE_148_STATUS_A QUEUE_148_STATUS_A;
  RegisterQUEUE_148_STATUS_B QUEUE_148_STATUS_B;
  RegisterQUEUE_148_STATUS_C QUEUE_148_STATUS_C;
  uint8_t RESERVED_OFFSETS_162[4];
  RegisterQUEUE_149_STATUS_A QUEUE_149_STATUS_A;
  RegisterQUEUE_149_STATUS_B QUEUE_149_STATUS_B;
  RegisterQUEUE_149_STATUS_C QUEUE_149_STATUS_C;
  uint8_t RESERVED_OFFSETS_163[4];
  RegisterQUEUE_150_STATUS_A QUEUE_150_STATUS_A;
  RegisterQUEUE_150_STATUS_B QUEUE_150_STATUS_B;
  RegisterQUEUE_150_STATUS_C QUEUE_150_STATUS_C;
  uint8_t RESERVED_OFFSETS_164[4];
  RegisterQUEUE_151_STATUS_A QUEUE_151_STATUS_A;
  RegisterQUEUE_151_STATUS_B QUEUE_151_STATUS_B;
  RegisterQUEUE_151_STATUS_C QUEUE_151_STATUS_C;
  uint8_t RESERVED_OFFSETS_165[4];
  RegisterQUEUE_152_STATUS_A QUEUE_152_STATUS_A;
  RegisterQUEUE_152_STATUS_B QUEUE_152_STATUS_B;
  RegisterQUEUE_152_STATUS_C QUEUE_152_STATUS_C;
  uint8_t RESERVED_OFFSETS_166[4];
  RegisterQUEUE_153_STATUS_A QUEUE_153_STATUS_A;
  RegisterQUEUE_153_STATUS_B QUEUE_153_STATUS_B;
  RegisterQUEUE_153_STATUS_C QUEUE_153_STATUS_C;
  uint8_t RESERVED_OFFSETS_167[4];
  RegisterQUEUE_154_STATUS_A QUEUE_154_STATUS_A;
  RegisterQUEUE_154_STATUS_B QUEUE_154_STATUS_B;
  RegisterQUEUE_154_STATUS_C QUEUE_154_STATUS_C;
  uint8_t RESERVED_OFFSETS_168[4];
  RegisterQUEUE_155_STATUS_A QUEUE_155_STATUS_A;
  RegisterQUEUE_155_STATUS_B QUEUE_155_STATUS_B;
  RegisterQUEUE_155_STATUS_C QUEUE_155_STATUS_C;
} PeripheralUSB_QUEUE_MGR;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t ENAWAKEUP : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED3 : 3;
    uint32_t CLOCKACTIVITY : 2;
    uint32_t RESERVED2 : 2;
    uint32_t STANDBYMODE : 2;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterSD_SYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterSD_SYSSTATUS;

typedef union {
  struct {
    uint32_t CSRE : 32;
  };
  uint32_t raw;
} RegisterSD_CSRE;

typedef union {
  struct {
    uint32_t MCKD : 1;
    uint32_t CDIR : 1;
    uint32_t CDAT : 1;
    uint32_t DDIR : 1;
    uint32_t D0D : 1;
    uint32_t D1D : 1;
    uint32_t D2D : 1;
    uint32_t D3D : 1;
    uint32_t D4D : 1;
    uint32_t D5D : 1;
    uint32_t D6D : 1;
    uint32_t D7D : 1;
    uint32_t SSB : 1;
    uint32_t WAKD : 1;
    uint32_t SDWP : 1;
    uint32_t SDCD : 1;
    uint32_t OBI : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSD_SYSTEST;

typedef union {
  struct {
    uint32_t OD : 1;
    uint32_t INIT : 1;
    uint32_t HR : 1;
    uint32_t STR : 1;
    uint32_t MODE : 1;
    uint32_t DW8 : 1;
    uint32_t MIT : 1;
    uint32_t CDP : 1;
    uint32_t WPP : 1;
    uint32_t DVAL : 2;
    uint32_t CTPL : 1;
    uint32_t CEATA : 1;
    uint32_t RESERVED2 : 2;
    uint32_t PADEN : 1;
    uint32_t CLKEXTFREE : 1;
    uint32_t BOOT_ACK : 1;
    uint32_t BOOT_CF0 : 1;
    uint32_t DDR : 1;
    uint32_t DMA_MNS : 1;
    uint32_t SDMA_LNE : 1;
    uint32_t RESERVED1 : 10;
  };
  uint32_t raw;
} RegisterSD_CON;

typedef union {
  struct {
    uint32_t PWRCNT : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterSD_PWCNT;

typedef union {
  struct {
    uint32_t SDMA_SYSADDR : 32;
  };
  uint32_t raw;
} RegisterSD_SDMASA;

typedef union {
  struct {
    uint32_t BLEN : 12;
    uint32_t RESERVED1 : 4;
    uint32_t NBLK : 16;
  };
  uint32_t raw;
} RegisterSD_BLK;

typedef union {
  struct {
    uint32_t ARG : 32;
  };
  uint32_t raw;
} RegisterSD_ARG;

typedef union {
  struct {
    uint32_t DE : 1;
    uint32_t BCE : 1;
    uint32_t ACEN : 1;
    uint32_t RESERVED4 : 1;
    uint32_t DDIR : 1;
    uint32_t MSBS : 1;
    uint32_t RESERVED3 : 10;
    uint32_t RSP_TYPE : 2;
    uint32_t RESERVED2 : 1;
    uint32_t CCCE : 1;
    uint32_t CICE : 1;
    uint32_t DP : 1;
    uint32_t CMD_TYPE : 2;
    uint32_t INDX : 6;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterSD_CMD;

typedef union {
  struct {
    uint32_t RSP0 : 16;
    uint32_t RSP1 : 16;
  };
  uint32_t raw;
} RegisterSD_RSP10;

typedef union {
  struct {
    uint32_t RSP2 : 16;
    uint32_t RSP3 : 16;
  };
  uint32_t raw;
} RegisterSD_RSP32;

typedef union {
  struct {
    uint32_t RSP4 : 16;
    uint32_t RSP5 : 16;
  };
  uint32_t raw;
} RegisterSD_RSP54;

typedef union {
  struct {
    uint32_t RSP6 : 16;
    uint32_t RSP7 : 16;
  };
  uint32_t raw;
} RegisterSD_RSP76;

typedef union {
  struct {
    uint32_t DATA : 32;
  };
  uint32_t raw;
} RegisterSD_DATA;

typedef union {
  struct {
    uint32_t CMDI : 1;
    uint32_t DATI : 1;
    uint32_t DLA : 1;
    uint32_t RESERVED3 : 5;
    uint32_t WTA : 1;
    uint32_t RTA : 1;
    uint32_t BWE : 1;
    uint32_t BRE : 1;
    uint32_t RESERVED2 : 4;
    uint32_t CINS : 1;
    uint32_t CSS : 1;
    uint32_t CDPL : 1;
    uint32_t WP : 1;
    uint32_t DLEV : 4;
    uint32_t CLEV : 1;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterSD_PSTATE;

typedef union {
  struct {
    uint32_t RESERVED5 : 1;
    uint32_t DTW : 1;
    uint32_t HSPE : 1;
    uint32_t DMAS : 2;
    uint32_t RESERVED4 : 1;
    uint32_t CDTL : 1;
    uint32_t CDSS : 1;
    uint32_t SDBP : 1;
    uint32_t SDVS : 3;
    uint32_t RESERVED3 : 4;
    uint32_t SBGR : 1;
    uint32_t CR : 1;
    uint32_t RWC : 1;
    uint32_t IBG : 1;
    uint32_t RESERVED2 : 4;
    uint32_t IWE : 1;
    uint32_t INS : 1;
    uint32_t REM : 1;
    uint32_t OBWE : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterSD_HCTL;

typedef union {
  struct {
    uint32_t ICE : 1;
    uint32_t ICS : 1;
    uint32_t CEN : 1;
    uint32_t RESERVED3 : 3;
    uint32_t CLKD : 10;
    uint32_t DTO : 4;
    uint32_t RESERVED2 : 4;
    uint32_t SRA : 1;
    uint32_t SRC : 1;
    uint32_t SRD : 1;
    uint32_t RESERVED1 : 5;
  };
  uint32_t raw;
} RegisterSD_SYSCTL;

typedef union {
  struct {
    uint32_t CC : 1;
    uint32_t TC : 1;
    uint32_t BGE : 1;
    uint32_t DMA : 1;
    uint32_t BWR : 1;
    uint32_t BRR : 1;
    uint32_t CINS : 1;
    uint32_t CREM : 1;
    uint32_t CIRQ : 1;
    uint32_t OBI : 1;
    uint32_t BSR : 1;
    uint32_t RESERVED4 : 4;
    uint32_t ERRI : 1;
    uint32_t CTO : 1;
    uint32_t CCRC : 1;
    uint32_t CEB : 1;
    uint32_t CIE : 1;
    uint32_t DTO : 1;
    uint32_t DCRC : 1;
    uint32_t DEB : 1;
    uint32_t RESERVED3 : 1;
    uint32_t ACE : 1;
    uint32_t ADMAE : 1;
    uint32_t RESERVED2 : 2;
    uint32_t CERR : 1;
    uint32_t BADA : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterSD_STAT;

typedef union {
  struct {
    uint32_t CC_ENABLE : 1;
    uint32_t TC_ENABLE : 1;
    uint32_t BGE_ENABLE : 1;
    uint32_t DMA_ENABLE : 1;
    uint32_t BWR_ENABLE : 1;
    uint32_t BRR_ENABLE : 1;
    uint32_t CINS_ENABLE : 1;
    uint32_t CREM_ENABLE : 1;
    uint32_t CIRQ_ENABLE : 1;
    uint32_t OBI_ENABLE : 1;
    uint32_t BSR_ENABLE : 1;
    uint32_t RESERVED4 : 4;
    uint32_t NULL : 1;
    uint32_t CTO_ENABLE : 1;
    uint32_t CCRC_ENABLE : 1;
    uint32_t CEB_ENABLE : 1;
    uint32_t CIE_ENABLE : 1;
    uint32_t DTO_ENABLE : 1;
    uint32_t DCRC_ENABLE : 1;
    uint32_t DEB_ENABLE : 1;
    uint32_t RESERVED3 : 1;
    uint32_t ACE_ENABLE : 1;
    uint32_t ADMA_ENABLE : 1;
    uint32_t RESERVED2 : 2;
    uint32_t CERR_ENABLE : 1;
    uint32_t BADA_ENABLE : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterSD_IE;

typedef union {
  struct {
    uint32_t CC_SIGEN : 1;
    uint32_t TC_SIGEN : 1;
    uint32_t BGE_SIGEN : 1;
    uint32_t DMA_SIGEN : 1;
    uint32_t BWR_SIGEN : 1;
    uint32_t BRR_SIGEN : 1;
    uint32_t CINS_SIGEN : 1;
    uint32_t CREM_SIGEN : 1;
    uint32_t CIRQ_SIGEN : 1;
    uint32_t OBI_SIGEN : 1;
    uint32_t BSR_SIGEN : 1;
    uint32_t RESERVED4 : 4;
    uint32_t NULL : 1;
    uint32_t CTO_SIGEN : 1;
    uint32_t CCRC_SIGEN : 1;
    uint32_t CEB_SIGEN : 1;
    uint32_t CIE_SIGEN : 1;
    uint32_t DTO_SIGEN : 1;
    uint32_t DCRC_SIGEN : 1;
    uint32_t DEB_SIGEN : 1;
    uint32_t RESERVED3 : 1;
    uint32_t ACE_SIGEN : 1;
    uint32_t ADMA_SIGEN : 1;
    uint32_t RESERVED2 : 2;
    uint32_t CERR_SIGEN : 1;
    uint32_t BADA_SIGEN : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterSD_ISE;

typedef union {
  struct {
    uint32_t ACNE : 1;
    uint32_t ACTO : 1;
    uint32_t ACCE : 1;
    uint32_t ACEB : 1;
    uint32_t ACIE : 1;
    uint32_t RESERVED2 : 2;
    uint32_t CNI : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterSD_AC12;

typedef union {
  struct {
    uint32_t TCF : 6;
    uint32_t RESERVED6 : 1;
    uint32_t TCU : 1;
    uint32_t BCF : 6;
    uint32_t RESERVED5 : 2;
    uint32_t MBL : 2;
    uint32_t RESERVED4 : 1;
    uint32_t AD2S : 1;
    uint32_t RESERVED3 : 1;
    uint32_t HSS : 1;
    uint32_t DS : 1;
    uint32_t SRS : 1;
    uint32_t VS33 : 1;
    uint32_t VS30 : 1;
    uint32_t VS18 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t _64BIT : 1;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterSD_CAPA;

typedef union {
  struct {
    uint32_t CUR_3V3 : 8;
    uint32_t CUR_3V0 : 8;
    uint32_t CUR_1V8 : 8;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterSD_CUR_CAPA;

typedef union {
  struct {
    uint32_t FE_ACNE : 1;
    uint32_t FE_ACTO : 1;
    uint32_t FE_ACCE : 1;
    uint32_t FE_ACEB : 1;
    uint32_t FE_ACIE : 1;
    uint32_t RESERVED5 : 2;
    uint32_t FE_CNI : 1;
    uint32_t RESERVED4 : 8;
    uint32_t FE_CTO : 1;
    uint32_t FE_CCRC : 1;
    uint32_t FE_CEB : 1;
    uint32_t FE_CIE : 1;
    uint32_t FE_DTO : 1;
    uint32_t FE_DCRC : 1;
    uint32_t FE_DEB : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FE_ACE : 1;
    uint32_t FE_ADMAE : 1;
    uint32_t RESERVED2 : 2;
    uint32_t FE_CERR : 1;
    uint32_t FE_BADA : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterSD_FE;

typedef union {
  struct {
    uint32_t AES : 2;
    uint32_t LME : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterSD_ADMAES;

typedef union {
  struct {
    uint32_t ADMA_A32B : 32;
  };
  uint32_t raw;
} RegisterSD_ADMASAL;

typedef union {
  struct {
    uint32_t ADMA_A32B : 32;
  };
  uint32_t raw;
} RegisterSD_ADMASAH;

typedef union {
  struct {
    uint32_t SIS : 1;
    uint32_t RESERVED1 : 15;
    uint32_t SREV : 8;
    uint32_t VREV : 8;
  };
  uint32_t raw;
} RegisterSD_REV;

typedef struct {
  uint8_t RESERVED_OFFSETS_0[272];
  RegisterSD_SYSCONFIG SD_SYSCONFIG;
  RegisterSD_SYSSTATUS SD_SYSSTATUS;
  uint8_t RESERVED_OFFSETS_1[12];
  RegisterSD_CSRE SD_CSRE;
  RegisterSD_SYSTEST SD_SYSTEST;
  RegisterSD_CON SD_CON;
  RegisterSD_PWCNT SD_PWCNT;
  uint8_t RESERVED_OFFSETS_2[204];
  RegisterSD_SDMASA SD_SDMASA;
  RegisterSD_BLK SD_BLK;
  RegisterSD_ARG SD_ARG;
  RegisterSD_CMD SD_CMD;
  RegisterSD_RSP10 SD_RSP10;
  RegisterSD_RSP32 SD_RSP32;
  RegisterSD_RSP54 SD_RSP54;
  RegisterSD_RSP76 SD_RSP76;
  RegisterSD_DATA SD_DATA;
  RegisterSD_PSTATE SD_PSTATE;
  RegisterSD_HCTL SD_HCTL;
  RegisterSD_SYSCTL SD_SYSCTL;
  RegisterSD_STAT SD_STAT;
  RegisterSD_IE SD_IE;
  RegisterSD_ISE SD_ISE;
  RegisterSD_AC12 SD_AC12;
  RegisterSD_CAPA SD_CAPA;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterSD_CUR_CAPA SD_CUR_CAPA;
  uint8_t RESERVED_OFFSETS_4[4];
  RegisterSD_FE SD_FE;
  RegisterSD_ADMAES SD_ADMAES;
  RegisterSD_ADMASAL SD_ADMASAL;
  RegisterSD_ADMASAH SD_ADMASAH;
  uint8_t RESERVED_OFFSETS_5[156];
  RegisterSD_REV SD_REV;
} PeripheralMMCHS2;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterMCSPI_REVISION;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED3 : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED2 : 3;
    uint32_t CLOCKACTIVITY : 2;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterMCSPI_SYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterMCSPI_SYSSTATUS;

typedef union {
  struct {
    uint32_t TX0_EMPTY : 1;
    uint32_t TX0_UNDERFLOW : 1;
    uint32_t RX0_FULL : 1;
    uint32_t RX0_OVERFLOW : 1;
    uint32_t TX1_EMPTY : 1;
    uint32_t TX1_UNDERFLOW : 1;
    uint32_t RX1_FULL : 1;
    uint32_t RESERVED5 : 1;
    uint32_t TX2_EMPTY : 1;
    uint32_t TX2_UNDERFLOW : 1;
    uint32_t RX2_FULL : 1;
    uint32_t RESERVED4 : 1;
    uint32_t TX3_EMPTY : 1;
    uint32_t TX3_UNDERFLOW : 1;
    uint32_t RX3_FULL : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOW : 1;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMCSPI_IRQSTATUS;

typedef union {
  struct {
    uint32_t TX0_EMPTY_ENABLE : 1;
    uint32_t TX0_UNDERFLOW_ENABLE : 1;
    uint32_t RX0_FULL_ENABLE : 1;
    uint32_t RX0_OVERFLOW_ENABLE : 1;
    uint32_t TX1_EMPTY_ENABLE : 1;
    uint32_t TX1_UNDERFLOW_ENABLE : 1;
    uint32_t RX1_FULL_ENABLE : 1;
    uint32_t RESERVED5 : 1;
    uint32_t TX2_EMPTY_ENABLE : 1;
    uint32_t TX2_UNDERFLOW_ENABLE : 1;
    uint32_t RX2_FULL_ENABLE : 1;
    uint32_t RESERVED4 : 1;
    uint32_t TX3_EMPTY_ENABLE : 1;
    uint32_t TX3_UNDERFLOW_ENABLE : 1;
    uint32_t RX3_FULL_ENABLE : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOWKE : 1;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterMCSPI_IRQENABLE;

typedef union {
  struct {
    uint32_t SPIEN_0 : 1;
    uint32_t SPIEN_1 : 1;
    uint32_t SPIEN_2 : 1;
    uint32_t SPIEN_3 : 1;
    uint32_t SPIDAT_0 : 1;
    uint32_t SPIDAT_1 : 1;
    uint32_t SPICLK : 1;
    uint32_t RESERVED2 : 1;
    uint32_t SPIDATDIR0 : 1;
    uint32_t SPIDATDIR1 : 1;
    uint32_t SPIENDIR : 1;
    uint32_t SSB : 1;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterMCSPI_SYST;

typedef union {
  struct {
    uint32_t SINGLE : 1;
    uint32_t PIN34 : 1;
    uint32_t MS : 1;
    uint32_t SYSTEM_TEST : 1;
    uint32_t INITDLY : 3;
    uint32_t MOA : 1;
    uint32_t FDAA : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterMCSPI_MODULCTRL;

typedef union {
  struct {
    uint32_t PHA : 1;
    uint32_t POL : 1;
    uint32_t CLKD : 4;
    uint32_t EPOL : 1;
    uint32_t WL : 5;
    uint32_t TRM : 2;
    uint32_t DMAW : 1;
    uint32_t DMAR : 1;
    uint32_t DPE0 : 1;
    uint32_t DPE1 : 1;
    uint32_t IS : 1;
    uint32_t TURBO : 1;
    uint32_t FORCE : 1;
    uint32_t SPIENSLV : 2;
    uint32_t SBE : 1;
    uint32_t SBPOL : 1;
    uint32_t TCS : 2;
    uint32_t FFEW : 1;
    uint32_t FFER : 1;
    uint32_t CLKG : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterMCSPI_CH0CONF;

typedef union {
  struct {
    uint32_t RXS : 1;
    uint32_t TXS : 1;
    uint32_t EOT : 1;
    uint32_t TXFFE : 1;
    uint32_t TXFFF : 1;
    uint32_t RXFFE : 1;
    uint32_t RXFFF : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterMCSPI_CH0STAT;

typedef union {
  struct {
    uint32_t EN : 1;
    uint32_t RESERVED2 : 7;
    uint32_t EXTCLK : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMCSPI_CH0CTRL;

typedef union {
  struct {
    uint32_t TDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_TX0;

typedef union {
  struct {
    uint32_t RDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_RX0;

typedef union {
  struct {
    uint32_t PHA : 1;
    uint32_t POL : 1;
    uint32_t CLKD : 4;
    uint32_t EPOL : 1;
    uint32_t WL : 5;
    uint32_t TRM : 2;
    uint32_t DMAW : 1;
    uint32_t DMAR : 1;
    uint32_t DPE0 : 1;
    uint32_t DPE1 : 1;
    uint32_t IS : 1;
    uint32_t TURBO : 1;
    uint32_t FORCE : 1;
    uint32_t SPIENSLV : 2;
    uint32_t SBE : 1;
    uint32_t SBPOL : 1;
    uint32_t TCS : 2;
    uint32_t FFEW : 1;
    uint32_t FFER : 1;
    uint32_t CLKG : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterMCSPI_CH1CONF;

typedef union {
  struct {
    uint32_t RXS : 1;
    uint32_t TXS : 1;
    uint32_t EOT : 1;
    uint32_t TXFFE : 1;
    uint32_t TXFFF : 1;
    uint32_t RXFFE : 1;
    uint32_t RXFFF : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterMCSPI_CH1STAT;

typedef union {
  struct {
    uint32_t EN : 1;
    uint32_t RESERVED2 : 7;
    uint32_t EXTCLK : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMCSPI_CH1CTRL;

typedef union {
  struct {
    uint32_t TDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_TX1;

typedef union {
  struct {
    uint32_t RDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_RX1;

typedef union {
  struct {
    uint32_t PHA : 1;
    uint32_t POL : 1;
    uint32_t CLKD : 4;
    uint32_t EPOL : 1;
    uint32_t WL : 5;
    uint32_t TRM : 2;
    uint32_t DMAW : 1;
    uint32_t DMAR : 1;
    uint32_t DPE0 : 1;
    uint32_t DPE1 : 1;
    uint32_t IS : 1;
    uint32_t TURBO : 1;
    uint32_t FORCE : 1;
    uint32_t SPIENSLV : 2;
    uint32_t SBE : 1;
    uint32_t SBPOL : 1;
    uint32_t TCS : 2;
    uint32_t FFEW : 1;
    uint32_t FFER : 1;
    uint32_t CLKG : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterMCSPI_CH2CONF;

typedef union {
  struct {
    uint32_t RXS : 1;
    uint32_t TXS : 1;
    uint32_t EOT : 1;
    uint32_t TXFFE : 1;
    uint32_t TXFFF : 1;
    uint32_t RXFFE : 1;
    uint32_t RXFFF : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterMCSPI_CH2STAT;

typedef union {
  struct {
    uint32_t EN : 1;
    uint32_t RESERVED2 : 7;
    uint32_t EXTCLK : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMCSPI_CH2CTRL;

typedef union {
  struct {
    uint32_t TDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_TX2;

typedef union {
  struct {
    uint32_t RDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_RX2;

typedef union {
  struct {
    uint32_t PHA : 1;
    uint32_t POL : 1;
    uint32_t CLKD : 4;
    uint32_t EPOL : 1;
    uint32_t WL : 5;
    uint32_t TRM : 2;
    uint32_t DMAW : 1;
    uint32_t DMAR : 1;
    uint32_t DPE0 : 1;
    uint32_t DPE1 : 1;
    uint32_t IS : 1;
    uint32_t TURBO : 1;
    uint32_t FORCE : 1;
    uint32_t SPIENSLV : 2;
    uint32_t SBE : 1;
    uint32_t SBPOL : 1;
    uint32_t TCS : 2;
    uint32_t FFEW : 1;
    uint32_t FFER : 1;
    uint32_t CLKG : 1;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterMCSPI_CH3CONF;

typedef union {
  struct {
    uint32_t RXS : 1;
    uint32_t TXS : 1;
    uint32_t EOT : 1;
    uint32_t TXFFE : 1;
    uint32_t TXFFF : 1;
    uint32_t RXFFE : 1;
    uint32_t RXFFF : 1;
    uint32_t RESERVED1 : 25;
  };
  uint32_t raw;
} RegisterMCSPI_CH3STAT;

typedef union {
  struct {
    uint32_t EN : 1;
    uint32_t RESERVED2 : 7;
    uint32_t EXTCLK : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMCSPI_CH3CTRL;

typedef union {
  struct {
    uint32_t TDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_TX3;

typedef union {
  struct {
    uint32_t RDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_RX3;

typedef union {
  struct {
    uint32_t AEL : 8;
    uint32_t AFL : 8;
    uint32_t WCNT : 16;
  };
  uint32_t raw;
} RegisterMCSPI_XFERLEVEL;

typedef union {
  struct {
    uint32_t DAFTDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_DAFTX;

typedef union {
  struct {
    uint32_t DAFRDATA : 32;
  };
  uint32_t raw;
} RegisterMCSPI_DAFRX;

typedef struct {
  RegisterMCSPI_REVISION MCSPI_REVISION;
  uint8_t RESERVED_OFFSETS_0[268];
  RegisterMCSPI_SYSCONFIG MCSPI_SYSCONFIG;
  RegisterMCSPI_SYSSTATUS MCSPI_SYSSTATUS;
  RegisterMCSPI_IRQSTATUS MCSPI_IRQSTATUS;
  RegisterMCSPI_IRQENABLE MCSPI_IRQENABLE;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterMCSPI_SYST MCSPI_SYST;
  RegisterMCSPI_MODULCTRL MCSPI_MODULCTRL;
  RegisterMCSPI_CH0CONF MCSPI_CH0CONF;
  RegisterMCSPI_CH0STAT MCSPI_CH0STAT;
  RegisterMCSPI_CH0CTRL MCSPI_CH0CTRL;
  RegisterMCSPI_TX0 MCSPI_TX0;
  RegisterMCSPI_RX0 MCSPI_RX0;
  RegisterMCSPI_CH1CONF MCSPI_CH1CONF;
  RegisterMCSPI_CH1STAT MCSPI_CH1STAT;
  RegisterMCSPI_CH1CTRL MCSPI_CH1CTRL;
  RegisterMCSPI_TX1 MCSPI_TX1;
  RegisterMCSPI_RX1 MCSPI_RX1;
  RegisterMCSPI_CH2CONF MCSPI_CH2CONF;
  RegisterMCSPI_CH2STAT MCSPI_CH2STAT;
  RegisterMCSPI_CH2CTRL MCSPI_CH2CTRL;
  RegisterMCSPI_TX2 MCSPI_TX2;
  RegisterMCSPI_RX2 MCSPI_RX2;
  RegisterMCSPI_CH3CONF MCSPI_CH3CONF;
  RegisterMCSPI_CH3STAT MCSPI_CH3STAT;
  RegisterMCSPI_CH3CTRL MCSPI_CH3CTRL;
  RegisterMCSPI_TX3 MCSPI_TX3;
  RegisterMCSPI_RX3 MCSPI_RX3;
  RegisterMCSPI_XFERLEVEL MCSPI_XFERLEVEL;
  RegisterMCSPI_DAFTX MCSPI_DAFTX;
  uint8_t RESERVED_OFFSETS_2[28];
  RegisterMCSPI_DAFRX MCSPI_DAFRX;
} PeripheralMCSPI0;

typedef union {
  struct {
    uint32_t REV : 32;
  };
  uint32_t raw;
} RegisterREV;

typedef union {
  struct {
    uint32_t IDLEMODE : 2;
    uint32_t OTHER : 4;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterPWRIDLESYSCONFIG;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPFUNC;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPDIR;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPDOUT;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPDSET;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPDIN;

typedef union {
  struct {
    uint32_t AXR_5_0 : 6;
    uint32_t RESERVED1 : 19;
    uint32_t AMUTE : 1;
    uint32_t ACLKX : 1;
    uint32_t AHCLKX : 1;
    uint32_t AFSX : 1;
    uint32_t ACLKR : 1;
    uint32_t AHCLKR : 1;
    uint32_t AFSR : 1;
  };
  uint32_t raw;
} RegisterPDCLR;

typedef union {
  struct {
    uint32_t RCLKRST : 1;
    uint32_t RHCLKRST : 1;
    uint32_t RSRCLR : 1;
    uint32_t RSMRST : 1;
    uint32_t RFRST : 1;
    uint32_t RESERVED2 : 3;
    uint32_t XCLKRST : 1;
    uint32_t XHCLKRST : 1;
    uint32_t XSRCLR : 1;
    uint32_t XSMRST : 1;
    uint32_t XFRST : 1;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterGBLCTL;

typedef union {
  struct {
    uint32_t MUTEN : 2;
    uint32_t INPOL : 1;
    uint32_t INEN : 1;
    uint32_t INSTAT : 1;
    uint32_t ROVRN : 1;
    uint32_t XUNDRN : 1;
    uint32_t RSYNCERR : 1;
    uint32_t XSYNCERR : 1;
    uint32_t RCKFAIL : 1;
    uint32_t XCKFAIL : 1;
    uint32_t RDMAERR : 1;
    uint32_t XDMAERR : 1;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterAMUTE;

typedef union {
  struct {
    uint32_t DLBEN : 1;
    uint32_t ORD : 1;
    uint32_t MODE : 2;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterDLBCTL;

typedef union {
  struct {
    uint32_t DITEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t VA : 1;
    uint32_t VB : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterDITCTL;

typedef union {
  struct {
    uint32_t RCLKRST : 1;
    uint32_t RHCLKRST : 1;
    uint32_t RSRCLR : 1;
    uint32_t RSMRST : 1;
    uint32_t RFRST : 1;
    uint32_t RESERVED2 : 3;
    uint32_t XCLKRST : 1;
    uint32_t XHCLKRST : 1;
    uint32_t XSRCLR : 1;
    uint32_t XSMRST : 1;
    uint32_t XFRST : 1;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterRGBLCTL;

typedef union {
  struct {
    uint32_t 31_0 : 32;
  };
  uint32_t raw;
} RegisterRMASK;

typedef union {
  struct {
    uint32_t RROT : 3;
    uint32_t RBUSEL : 1;
    uint32_t RSSZ : 4;
    uint32_t RPBIT : 5;
    uint32_t RPAD : 2;
    uint32_t RRVRS : 1;
    uint32_t RDATDLY : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterRFMT;

typedef union {
  struct {
    uint32_t FSRP : 1;
    uint32_t FSRM : 1;
    uint32_t RESERVED3 : 2;
    uint32_t FRWID : 1;
    uint32_t RESERVED2 : 2;
    uint32_t RMOD : 9;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterAFSRCTL;

typedef union {
  struct {
    uint32_t CLKRDIV : 5;
    uint32_t CLKRM : 1;
    uint32_t RESERVED2 : 1;
    uint32_t CLKRP : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterACLKRCTL;

typedef union {
  struct {
    uint32_t HCLKRDIV : 12;
    uint32_t RESERVED2 : 2;
    uint32_t HCLKRP : 1;
    uint32_t HCLKRM : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterAHCLKRCTL;

typedef union {
  struct {
    uint32_t RTDMS_31_0 : 32;
  };
  uint32_t raw;
} RegisterRTDM;

typedef union {
  struct {
    uint32_t ROVRN : 1;
    uint32_t RSYNCERR : 1;
    uint32_t RCKFAIL : 1;
    uint32_t RDMAERR : 1;
    uint32_t RLAST : 1;
    uint32_t RDATA : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RSTAFRM : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRINTCTL;

typedef union {
  struct {
    uint32_t ROVRN : 1;
    uint32_t RSYNCERR : 1;
    uint32_t RCKFAIL : 1;
    uint32_t RTDMSLOT : 1;
    uint32_t RLAST : 1;
    uint32_t RDATA : 1;
    uint32_t RSTAFRM : 1;
    uint32_t RDMAERR : 1;
    uint32_t RERR : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterRSTAT;

typedef union {
  struct {
    uint32_t RSLOTCNT : 9;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterRSLOT;

typedef union {
  struct {
    uint32_t RPS : 4;
    uint32_t RESERVED1 : 4;
    uint32_t RMIN : 8;
    uint32_t RMAX : 8;
    uint32_t RCNT : 8;
  };
  uint32_t raw;
} RegisterRCLKCHK;

typedef union {
  struct {
    uint32_t RDATDMA : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterREVTCTL;

typedef union {
  struct {
    uint32_t RCLKRST : 1;
    uint32_t RHCLKRST : 1;
    uint32_t RSRCLR : 1;
    uint32_t RSMRST : 1;
    uint32_t RFRST : 1;
    uint32_t RESERVED2 : 3;
    uint32_t XCLKRST : 1;
    uint32_t XHCLKRST : 1;
    uint32_t XSRCLR : 1;
    uint32_t XSMRST : 1;
    uint32_t XFRST : 1;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterXGBLCTL;

typedef union {
  struct {
    uint32_t 31_0 : 32;
  };
  uint32_t raw;
} RegisterXMASK;

typedef union {
  struct {
    uint32_t XROT : 3;
    uint32_t XBUSEL : 1;
    uint32_t XSSZ : 4;
    uint32_t XPBIT : 5;
    uint32_t XPAD : 2;
    uint32_t XRVRS : 1;
    uint32_t XDATDLY : 2;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterXFMT;

typedef union {
  struct {
    uint32_t FSXP : 1;
    uint32_t FSXM : 1;
    uint32_t RESERVED3 : 2;
    uint32_t FXWID : 1;
    uint32_t RESERVED2 : 2;
    uint32_t XMOD : 9;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterAFSXCTL;

typedef union {
  struct {
    uint32_t CLKXDIV : 5;
    uint32_t CLKXM : 1;
    uint32_t ASYNC : 1;
    uint32_t CLKXP : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterACLKXCTL;

typedef union {
  struct {
    uint32_t HCLKXDIV : 12;
    uint32_t RESERVED2 : 2;
    uint32_t HCLKXP : 1;
    uint32_t HCLKXM : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterAHCLKXCTL;

typedef union {
  struct {
    uint32_t XTDMS_31_0 : 32;
  };
  uint32_t raw;
} RegisterXTDM;

typedef union {
  struct {
    uint32_t XUNDRN : 1;
    uint32_t XSYNCERR : 1;
    uint32_t XCKFAIL : 1;
    uint32_t XDMAERR : 1;
    uint32_t XLAST : 1;
    uint32_t XDATA : 1;
    uint32_t RESERVED2 : 1;
    uint32_t XSTAFRM : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterXINTCTL;

typedef union {
  struct {
    uint32_t XUNDRN : 1;
    uint32_t XSYNCERR : 1;
    uint32_t XCKFAIL : 1;
    uint32_t XTDMSLOT : 1;
    uint32_t XLAST : 1;
    uint32_t XDATA : 1;
    uint32_t XSTAFRM : 1;
    uint32_t XDMAERR : 1;
    uint32_t XERR : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterXSTAT;

typedef union {
  struct {
    uint32_t XSLOTCNT : 10;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterXSLOT;

typedef union {
  struct {
    uint32_t XPS : 4;
    uint32_t RESERVED1 : 4;
    uint32_t XMIN : 8;
    uint32_t XMAX : 8;
    uint32_t XCNT : 8;
  };
  uint32_t raw;
} RegisterXCLKCHK;

typedef union {
  struct {
    uint32_t XDATDMA : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterXEVTCTL;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_0;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_1;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_2;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_3;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_4;

typedef union {
  struct {
    uint32_t DITCSRA_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRA_5;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_0;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_1;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_2;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_3;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_4;

typedef union {
  struct {
    uint32_t DITCSRB_N : 32;
  };
  uint32_t raw;
} RegisterDITCSRB_5;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_0;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_1;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_2;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_3;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_4;

typedef union {
  struct {
    uint32_t DITUDRA_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRA_5;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_0;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_1;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_2;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_3;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_4;

typedef union {
  struct {
    uint32_t DITUDRB_N : 32;
  };
  uint32_t raw;
} RegisterDITUDRB_5;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_0;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_1;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_2;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_3;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_4;

typedef union {
  struct {
    uint32_t SRMOD : 2;
    uint32_t DISMOD : 2;
    uint32_t XRDY : 1;
    uint32_t RRDY : 1;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSRCTL_5;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_0;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_1;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_2;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_3;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_4;

typedef union {
  struct {
    uint32_t XBUF_N : 32;
  };
  uint32_t raw;
} RegisterXBUF_5;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_0;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_1;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_2;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_3;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_4;

typedef union {
  struct {
    uint32_t RBUF_N : 32;
  };
  uint32_t raw;
} RegisterRBUF_5;

typedef union {
  struct {
    uint32_t WNUMDMA : 8;
    uint32_t WNUMEVT : 8;
    uint32_t WENA : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterWFIFOCTL;

typedef union {
  struct {
    uint32_t WLVL : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterWFIFOSTS;

typedef union {
  struct {
    uint32_t RNUMDMA : 8;
    uint32_t RNUMEVT : 8;
    uint32_t RENA : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterRFIFOCTL;

typedef union {
  struct {
    uint32_t RLVL : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterRFIFOSTS;

typedef struct {
  RegisterREV REV;
  RegisterPWRIDLESYSCONFIG PWRIDLESYSCONFIG;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterPFUNC PFUNC;
  RegisterPDIR PDIR;
  RegisterPDOUT PDOUT;
  union {
    RegisterPDSET PDSET;
    RegisterPDIN PDIN;
  };
  RegisterPDCLR PDCLR;
  uint8_t RESERVED_OFFSETS_1[32];
  RegisterGBLCTL GBLCTL;
  RegisterAMUTE AMUTE;
  RegisterDLBCTL DLBCTL;
  RegisterDITCTL DITCTL;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterRGBLCTL RGBLCTL;
  RegisterRMASK RMASK;
  RegisterRFMT RFMT;
  RegisterAFSRCTL AFSRCTL;
  RegisterACLKRCTL ACLKRCTL;
  RegisterAHCLKRCTL AHCLKRCTL;
  RegisterRTDM RTDM;
  RegisterRINTCTL RINTCTL;
  RegisterRSTAT RSTAT;
  RegisterRSLOT RSLOT;
  RegisterRCLKCHK RCLKCHK;
  RegisterREVTCTL REVTCTL;
  uint8_t RESERVED_OFFSETS_3[16];
  RegisterXGBLCTL XGBLCTL;
  RegisterXMASK XMASK;
  RegisterXFMT XFMT;
  RegisterAFSXCTL AFSXCTL;
  RegisterACLKXCTL ACLKXCTL;
  RegisterAHCLKXCTL AHCLKXCTL;
  RegisterXTDM XTDM;
  RegisterXINTCTL XINTCTL;
  RegisterXSTAT XSTAT;
  RegisterXSLOT XSLOT;
  RegisterXCLKCHK XCLKCHK;
  RegisterXEVTCTL XEVTCTL;
  uint8_t RESERVED_OFFSETS_4[48];
  RegisterDITCSRA_0 DITCSRA_0;
  RegisterDITCSRA_1 DITCSRA_1;
  RegisterDITCSRA_2 DITCSRA_2;
  RegisterDITCSRA_3 DITCSRA_3;
  RegisterDITCSRA_4 DITCSRA_4;
  RegisterDITCSRA_5 DITCSRA_5;
  RegisterDITCSRB_0 DITCSRB_0;
  RegisterDITCSRB_1 DITCSRB_1;
  RegisterDITCSRB_2 DITCSRB_2;
  RegisterDITCSRB_3 DITCSRB_3;
  RegisterDITCSRB_4 DITCSRB_4;
  RegisterDITCSRB_5 DITCSRB_5;
  RegisterDITUDRA_0 DITUDRA_0;
  RegisterDITUDRA_1 DITUDRA_1;
  RegisterDITUDRA_2 DITUDRA_2;
  RegisterDITUDRA_3 DITUDRA_3;
  RegisterDITUDRA_4 DITUDRA_4;
  RegisterDITUDRA_5 DITUDRA_5;
  RegisterDITUDRB_0 DITUDRB_0;
  RegisterDITUDRB_1 DITUDRB_1;
  RegisterDITUDRB_2 DITUDRB_2;
  RegisterDITUDRB_3 DITUDRB_3;
  RegisterDITUDRB_4 DITUDRB_4;
  RegisterDITUDRB_5 DITUDRB_5;
  uint8_t RESERVED_OFFSETS_5[32];
  RegisterSRCTL_0 SRCTL_0;
  RegisterSRCTL_1 SRCTL_1;
  RegisterSRCTL_2 SRCTL_2;
  RegisterSRCTL_3 SRCTL_3;
  RegisterSRCTL_4 SRCTL_4;
  RegisterSRCTL_5 SRCTL_5;
  uint8_t RESERVED_OFFSETS_6[104];
  RegisterXBUF_0 XBUF_0;
  RegisterXBUF_1 XBUF_1;
  RegisterXBUF_2 XBUF_2;
  RegisterXBUF_3 XBUF_3;
  RegisterXBUF_4 XBUF_4;
  RegisterXBUF_5 XBUF_5;
  uint8_t RESERVED_OFFSETS_7[104];
  RegisterRBUF_0 RBUF_0;
  RegisterRBUF_1 RBUF_1;
  RegisterRBUF_2 RBUF_2;
  RegisterRBUF_3 RBUF_3;
  RegisterRBUF_4 RBUF_4;
  RegisterRBUF_5 RBUF_5;
  uint8_t RESERVED_OFFSETS_8[3432];
  RegisterWFIFOCTL WFIFOCTL;
  RegisterWFIFOSTS WFIFOSTS;
  RegisterRFIFOCTL RFIFOCTL;
  RegisterRFIFOSTS RFIFOSTS;
} PeripheralMCASP0_CFG;

typedef union {
  struct {
    uint32_t REVISION : 32;
  };
  uint32_t raw;
} RegisterREVISION;

typedef union {
  struct {
    uint32_t AUTOGATING : 1;
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED3 : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED2 : 3;
    uint32_t CLOCKACTIVITYOCPZ : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterSYSSTATUS;

typedef union {
  struct {
    uint32_t LOC_VALID_0 : 1;
    uint32_t LOC_VALID_1 : 1;
    uint32_t LOC_VALID_2 : 1;
    uint32_t LOC_VALID_3 : 1;
    uint32_t LOC_VALID_4 : 1;
    uint32_t LOC_VALID_5 : 1;
    uint32_t LOC_VALID_6 : 1;
    uint32_t LOC_VALID_7 : 1;
    uint32_t PAGE_VALID : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterIRQSTATUS;

typedef union {
  struct {
    uint32_t LOCATION_MASK_0 : 1;
    uint32_t LOCATION_MASK_1 : 1;
    uint32_t LOCATION_MASK_2 : 1;
    uint32_t LOCATION_MASK_3 : 1;
    uint32_t LOCATION_MASK_4 : 1;
    uint32_t LOCATION_MASK_5 : 1;
    uint32_t LOCATION_MASK_6 : 1;
    uint32_t LOCATION_MASK_7 : 1;
    uint32_t PAGE_MASK : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterIRQENABLE;

typedef union {
  struct {
    uint32_t ECC_BCH_LEVEL : 2;
    uint32_t RESERVED2 : 14;
    uint32_t ECC_SIZE : 11;
    uint32_t RESERVED1 : 5;
  };
  uint32_t raw;
} RegisterLOCATION_CONFIG;

typedef union {
  struct {
    uint32_t SECTOR_0 : 1;
    uint32_t SECTOR_1 : 1;
    uint32_t SECTOR_2 : 1;
    uint32_t SECTOR_3 : 1;
    uint32_t SECTOR_4 : 1;
    uint32_t SECTOR_5 : 1;
    uint32_t SECTOR_6 : 1;
    uint32_t SECTOR_7 : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterPAGE_CTRL;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_0;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_0;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_0;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_0;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_0;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_0;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_0;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_1;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_1;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_1;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_1;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_1;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_1;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_1;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_2;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_2;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_2;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_2;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_2;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_2;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_2;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_3;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_3;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_3;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_3;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_3;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_3;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_3;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_4;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_4;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_4;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_4;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_4;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_4;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_4;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_5;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_5;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_5;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_5;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_5;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_5;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_5;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_6;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_6;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_6;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_6;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_6;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_6;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_6;

typedef union {
  struct {
    uint32_t SYNDROME_0 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_0_7;

typedef union {
  struct {
    uint32_t SYNDROME_1 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_1_7;

typedef union {
  struct {
    uint32_t SYNDROME_2 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_2_7;

typedef union {
  struct {
    uint32_t SYNDROME_3 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_3_7;

typedef union {
  struct {
    uint32_t SYNDROME_4 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_4_7;

typedef union {
  struct {
    uint32_t SYNDROME_5 : 32;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_5_7;

typedef union {
  struct {
    uint32_t SYNDROME_6 : 16;
    uint32_t SYNDROME_VALID : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterSYNDROME_FRAGMENT_6_7;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_0;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_0;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_1;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_1;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_2;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_3;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_3;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_5;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_5;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_4;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_6;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_0_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_1_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_2_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_3_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_4_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_5_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_6_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_7_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_8_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_9_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_10_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_11_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_12_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_13_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_14_7;

typedef union {
  struct {
    uint32_t ECC_ERROR_LOCATION : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterERROR_LOCATION_15_7;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_5;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_6;

typedef union {
  struct {
    uint32_t ECC_NB_ERRORS : 5;
    uint32_t RESERVED2 : 3;
    uint32_t ECC_CORRECTABL : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterLOCATION_STATUS_7;

typedef struct {
  RegisterREVISION REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  RegisterSYSSTATUS SYSSTATUS;
  RegisterIRQSTATUS IRQSTATUS;
  RegisterIRQENABLE IRQENABLE;
  RegisterLOCATION_CONFIG LOCATION_CONFIG;
  uint8_t RESERVED_OFFSETS_1[92];
  RegisterPAGE_CTRL PAGE_CTRL;
  uint8_t RESERVED_OFFSETS_2[892];
  RegisterSYNDROME_FRAGMENT_0_0 SYNDROME_FRAGMENT_0_0;
  RegisterSYNDROME_FRAGMENT_1_0 SYNDROME_FRAGMENT_1_0;
  RegisterSYNDROME_FRAGMENT_2_0 SYNDROME_FRAGMENT_2_0;
  RegisterSYNDROME_FRAGMENT_3_0 SYNDROME_FRAGMENT_3_0;
  RegisterSYNDROME_FRAGMENT_4_0 SYNDROME_FRAGMENT_4_0;
  RegisterSYNDROME_FRAGMENT_5_0 SYNDROME_FRAGMENT_5_0;
  RegisterSYNDROME_FRAGMENT_6_0 SYNDROME_FRAGMENT_6_0;
  uint8_t RESERVED_OFFSETS_3[36];
  RegisterSYNDROME_FRAGMENT_0_1 SYNDROME_FRAGMENT_0_1;
  RegisterSYNDROME_FRAGMENT_1_1 SYNDROME_FRAGMENT_1_1;
  RegisterSYNDROME_FRAGMENT_2_1 SYNDROME_FRAGMENT_2_1;
  RegisterSYNDROME_FRAGMENT_3_1 SYNDROME_FRAGMENT_3_1;
  RegisterSYNDROME_FRAGMENT_4_1 SYNDROME_FRAGMENT_4_1;
  RegisterSYNDROME_FRAGMENT_5_1 SYNDROME_FRAGMENT_5_1;
  RegisterSYNDROME_FRAGMENT_6_1 SYNDROME_FRAGMENT_6_1;
  uint8_t RESERVED_OFFSETS_4[36];
  RegisterSYNDROME_FRAGMENT_0_2 SYNDROME_FRAGMENT_0_2;
  RegisterSYNDROME_FRAGMENT_1_2 SYNDROME_FRAGMENT_1_2;
  RegisterSYNDROME_FRAGMENT_2_2 SYNDROME_FRAGMENT_2_2;
  RegisterSYNDROME_FRAGMENT_3_2 SYNDROME_FRAGMENT_3_2;
  RegisterSYNDROME_FRAGMENT_4_2 SYNDROME_FRAGMENT_4_2;
  RegisterSYNDROME_FRAGMENT_5_2 SYNDROME_FRAGMENT_5_2;
  RegisterSYNDROME_FRAGMENT_6_2 SYNDROME_FRAGMENT_6_2;
  uint8_t RESERVED_OFFSETS_5[36];
  RegisterSYNDROME_FRAGMENT_0_3 SYNDROME_FRAGMENT_0_3;
  RegisterSYNDROME_FRAGMENT_1_3 SYNDROME_FRAGMENT_1_3;
  RegisterSYNDROME_FRAGMENT_2_3 SYNDROME_FRAGMENT_2_3;
  RegisterSYNDROME_FRAGMENT_3_3 SYNDROME_FRAGMENT_3_3;
  RegisterSYNDROME_FRAGMENT_4_3 SYNDROME_FRAGMENT_4_3;
  RegisterSYNDROME_FRAGMENT_5_3 SYNDROME_FRAGMENT_5_3;
  RegisterSYNDROME_FRAGMENT_6_3 SYNDROME_FRAGMENT_6_3;
  uint8_t RESERVED_OFFSETS_6[36];
  RegisterSYNDROME_FRAGMENT_0_4 SYNDROME_FRAGMENT_0_4;
  RegisterSYNDROME_FRAGMENT_1_4 SYNDROME_FRAGMENT_1_4;
  RegisterSYNDROME_FRAGMENT_2_4 SYNDROME_FRAGMENT_2_4;
  RegisterSYNDROME_FRAGMENT_3_4 SYNDROME_FRAGMENT_3_4;
  RegisterSYNDROME_FRAGMENT_4_4 SYNDROME_FRAGMENT_4_4;
  RegisterSYNDROME_FRAGMENT_5_4 SYNDROME_FRAGMENT_5_4;
  RegisterSYNDROME_FRAGMENT_6_4 SYNDROME_FRAGMENT_6_4;
  uint8_t RESERVED_OFFSETS_7[36];
  RegisterSYNDROME_FRAGMENT_0_5 SYNDROME_FRAGMENT_0_5;
  RegisterSYNDROME_FRAGMENT_1_5 SYNDROME_FRAGMENT_1_5;
  RegisterSYNDROME_FRAGMENT_2_5 SYNDROME_FRAGMENT_2_5;
  RegisterSYNDROME_FRAGMENT_3_5 SYNDROME_FRAGMENT_3_5;
  RegisterSYNDROME_FRAGMENT_4_5 SYNDROME_FRAGMENT_4_5;
  RegisterSYNDROME_FRAGMENT_5_5 SYNDROME_FRAGMENT_5_5;
  RegisterSYNDROME_FRAGMENT_6_5 SYNDROME_FRAGMENT_6_5;
  uint8_t RESERVED_OFFSETS_8[36];
  RegisterSYNDROME_FRAGMENT_0_6 SYNDROME_FRAGMENT_0_6;
  RegisterSYNDROME_FRAGMENT_1_6 SYNDROME_FRAGMENT_1_6;
  RegisterSYNDROME_FRAGMENT_2_6 SYNDROME_FRAGMENT_2_6;
  RegisterSYNDROME_FRAGMENT_3_6 SYNDROME_FRAGMENT_3_6;
  RegisterSYNDROME_FRAGMENT_4_6 SYNDROME_FRAGMENT_4_6;
  RegisterSYNDROME_FRAGMENT_5_6 SYNDROME_FRAGMENT_5_6;
  RegisterSYNDROME_FRAGMENT_6_6 SYNDROME_FRAGMENT_6_6;
  uint8_t RESERVED_OFFSETS_9[36];
  RegisterSYNDROME_FRAGMENT_0_7 SYNDROME_FRAGMENT_0_7;
  RegisterSYNDROME_FRAGMENT_1_7 SYNDROME_FRAGMENT_1_7;
  RegisterSYNDROME_FRAGMENT_2_7 SYNDROME_FRAGMENT_2_7;
  RegisterSYNDROME_FRAGMENT_3_7 SYNDROME_FRAGMENT_3_7;
  RegisterSYNDROME_FRAGMENT_4_7 SYNDROME_FRAGMENT_4_7;
  RegisterSYNDROME_FRAGMENT_5_7 SYNDROME_FRAGMENT_5_7;
  RegisterSYNDROME_FRAGMENT_6_7 SYNDROME_FRAGMENT_6_7;
  uint8_t RESERVED_OFFSETS_10[548];
  RegisterLOCATION_STATUS_0 LOCATION_STATUS_0;
  uint8_t RESERVED_OFFSETS_11[124];
  RegisterERROR_LOCATION_0_0 ERROR_LOCATION_0_0;
  RegisterERROR_LOCATION_1_0 ERROR_LOCATION_1_0;
  RegisterERROR_LOCATION_2_0 ERROR_LOCATION_2_0;
  RegisterERROR_LOCATION_3_0 ERROR_LOCATION_3_0;
  RegisterERROR_LOCATION_4_0 ERROR_LOCATION_4_0;
  RegisterERROR_LOCATION_5_0 ERROR_LOCATION_5_0;
  RegisterERROR_LOCATION_6_0 ERROR_LOCATION_6_0;
  RegisterERROR_LOCATION_7_0 ERROR_LOCATION_7_0;
  RegisterERROR_LOCATION_8_0 ERROR_LOCATION_8_0;
  RegisterERROR_LOCATION_9_0 ERROR_LOCATION_9_0;
  RegisterERROR_LOCATION_10_0 ERROR_LOCATION_10_0;
  RegisterERROR_LOCATION_11_0 ERROR_LOCATION_11_0;
  RegisterERROR_LOCATION_12_0 ERROR_LOCATION_12_0;
  RegisterERROR_LOCATION_13_0 ERROR_LOCATION_13_0;
  RegisterERROR_LOCATION_14_0 ERROR_LOCATION_14_0;
  RegisterERROR_LOCATION_15_0 ERROR_LOCATION_15_0;
  uint8_t RESERVED_OFFSETS_12[64];
  RegisterLOCATION_STATUS_1 LOCATION_STATUS_1;
  uint8_t RESERVED_OFFSETS_13[124];
  RegisterERROR_LOCATION_0_1 ERROR_LOCATION_0_1;
  RegisterERROR_LOCATION_1_1 ERROR_LOCATION_1_1;
  RegisterERROR_LOCATION_2_1 ERROR_LOCATION_2_1;
  RegisterERROR_LOCATION_3_1 ERROR_LOCATION_3_1;
  RegisterERROR_LOCATION_4_1 ERROR_LOCATION_4_1;
  RegisterERROR_LOCATION_5_1 ERROR_LOCATION_5_1;
  RegisterERROR_LOCATION_6_1 ERROR_LOCATION_6_1;
  RegisterERROR_LOCATION_7_1 ERROR_LOCATION_7_1;
  RegisterERROR_LOCATION_8_1 ERROR_LOCATION_8_1;
  RegisterERROR_LOCATION_9_1 ERROR_LOCATION_9_1;
  RegisterERROR_LOCATION_10_1 ERROR_LOCATION_10_1;
  RegisterERROR_LOCATION_11_1 ERROR_LOCATION_11_1;
  RegisterERROR_LOCATION_12_1 ERROR_LOCATION_12_1;
  RegisterERROR_LOCATION_13_1 ERROR_LOCATION_13_1;
  RegisterERROR_LOCATION_14_1 ERROR_LOCATION_14_1;
  RegisterERROR_LOCATION_15_1 ERROR_LOCATION_15_1;
  uint8_t RESERVED_OFFSETS_14[64];
  RegisterLOCATION_STATUS_2 LOCATION_STATUS_2;
  uint8_t RESERVED_OFFSETS_15[124];
  RegisterERROR_LOCATION_0_2 ERROR_LOCATION_0_2;
  RegisterERROR_LOCATION_1_2 ERROR_LOCATION_1_2;
  RegisterERROR_LOCATION_2_2 ERROR_LOCATION_2_2;
  RegisterERROR_LOCATION_3_2 ERROR_LOCATION_3_2;
  RegisterERROR_LOCATION_4_2 ERROR_LOCATION_4_2;
  RegisterERROR_LOCATION_5_2 ERROR_LOCATION_5_2;
  RegisterERROR_LOCATION_6_2 ERROR_LOCATION_6_2;
  RegisterERROR_LOCATION_7_2 ERROR_LOCATION_7_2;
  RegisterERROR_LOCATION_8_2 ERROR_LOCATION_8_2;
  RegisterERROR_LOCATION_9_2 ERROR_LOCATION_9_2;
  RegisterERROR_LOCATION_10_2 ERROR_LOCATION_10_2;
  RegisterERROR_LOCATION_11_2 ERROR_LOCATION_11_2;
  RegisterERROR_LOCATION_12_2 ERROR_LOCATION_12_2;
  RegisterERROR_LOCATION_13_2 ERROR_LOCATION_13_2;
  RegisterERROR_LOCATION_14_2 ERROR_LOCATION_14_2;
  RegisterERROR_LOCATION_15_2 ERROR_LOCATION_15_2;
  uint8_t RESERVED_OFFSETS_16[192];
  RegisterERROR_LOCATION_0_3 ERROR_LOCATION_0_3;
  RegisterERROR_LOCATION_1_3 ERROR_LOCATION_1_3;
  RegisterERROR_LOCATION_2_3 ERROR_LOCATION_2_3;
  RegisterERROR_LOCATION_3_3 ERROR_LOCATION_3_3;
  RegisterERROR_LOCATION_4_3 ERROR_LOCATION_4_3;
  RegisterERROR_LOCATION_5_3 ERROR_LOCATION_5_3;
  RegisterERROR_LOCATION_6_3 ERROR_LOCATION_6_3;
  RegisterERROR_LOCATION_7_3 ERROR_LOCATION_7_3;
  RegisterERROR_LOCATION_8_3 ERROR_LOCATION_8_3;
  RegisterERROR_LOCATION_9_3 ERROR_LOCATION_9_3;
  RegisterERROR_LOCATION_10_3 ERROR_LOCATION_10_3;
  RegisterERROR_LOCATION_11_3 ERROR_LOCATION_11_3;
  RegisterERROR_LOCATION_12_3 ERROR_LOCATION_12_3;
  RegisterERROR_LOCATION_13_3 ERROR_LOCATION_13_3;
  RegisterERROR_LOCATION_14_3 ERROR_LOCATION_14_3;
  RegisterERROR_LOCATION_15_3 ERROR_LOCATION_15_3;
  uint8_t RESERVED_OFFSETS_17[64];
  RegisterLOCATION_STATUS_3 LOCATION_STATUS_3;
  uint8_t RESERVED_OFFSETS_18[124];
  RegisterERROR_LOCATION_0_4 ERROR_LOCATION_0_4;
  RegisterERROR_LOCATION_1_4 ERROR_LOCATION_1_4;
  RegisterERROR_LOCATION_2_4 ERROR_LOCATION_2_4;
  RegisterERROR_LOCATION_3_4 ERROR_LOCATION_3_4;
  RegisterERROR_LOCATION_4_4 ERROR_LOCATION_4_4;
  RegisterERROR_LOCATION_5_4 ERROR_LOCATION_5_4;
  RegisterERROR_LOCATION_6_4 ERROR_LOCATION_6_4;
  RegisterERROR_LOCATION_7_4 ERROR_LOCATION_7_4;
  RegisterERROR_LOCATION_8_4 ERROR_LOCATION_8_4;
  RegisterERROR_LOCATION_9_4 ERROR_LOCATION_9_4;
  RegisterERROR_LOCATION_10_4 ERROR_LOCATION_10_4;
  RegisterERROR_LOCATION_11_4 ERROR_LOCATION_11_4;
  RegisterERROR_LOCATION_12_4 ERROR_LOCATION_12_4;
  RegisterERROR_LOCATION_13_4 ERROR_LOCATION_13_4;
  RegisterERROR_LOCATION_14_4 ERROR_LOCATION_14_4;
  RegisterERROR_LOCATION_15_4 ERROR_LOCATION_15_4;
  uint8_t RESERVED_OFFSETS_19[192];
  RegisterERROR_LOCATION_0_5 ERROR_LOCATION_0_5;
  RegisterERROR_LOCATION_1_5 ERROR_LOCATION_1_5;
  RegisterERROR_LOCATION_2_5 ERROR_LOCATION_2_5;
  RegisterERROR_LOCATION_3_5 ERROR_LOCATION_3_5;
  RegisterERROR_LOCATION_4_5 ERROR_LOCATION_4_5;
  RegisterERROR_LOCATION_5_5 ERROR_LOCATION_5_5;
  RegisterERROR_LOCATION_6_5 ERROR_LOCATION_6_5;
  RegisterERROR_LOCATION_7_5 ERROR_LOCATION_7_5;
  RegisterERROR_LOCATION_8_5 ERROR_LOCATION_8_5;
  RegisterERROR_LOCATION_9_5 ERROR_LOCATION_9_5;
  RegisterERROR_LOCATION_10_5 ERROR_LOCATION_10_5;
  RegisterERROR_LOCATION_11_5 ERROR_LOCATION_11_5;
  RegisterERROR_LOCATION_12_5 ERROR_LOCATION_12_5;
  RegisterERROR_LOCATION_13_5 ERROR_LOCATION_13_5;
  RegisterERROR_LOCATION_14_5 ERROR_LOCATION_14_5;
  RegisterERROR_LOCATION_15_5 ERROR_LOCATION_15_5;
  uint8_t RESERVED_OFFSETS_20[64];
  RegisterLOCATION_STATUS_4 LOCATION_STATUS_4;
  uint8_t RESERVED_OFFSETS_21[124];
  RegisterERROR_LOCATION_0_6 ERROR_LOCATION_0_6;
  RegisterERROR_LOCATION_1_6 ERROR_LOCATION_1_6;
  RegisterERROR_LOCATION_2_6 ERROR_LOCATION_2_6;
  RegisterERROR_LOCATION_3_6 ERROR_LOCATION_3_6;
  RegisterERROR_LOCATION_4_6 ERROR_LOCATION_4_6;
  RegisterERROR_LOCATION_5_6 ERROR_LOCATION_5_6;
  RegisterERROR_LOCATION_6_6 ERROR_LOCATION_6_6;
  RegisterERROR_LOCATION_7_6 ERROR_LOCATION_7_6;
  RegisterERROR_LOCATION_8_6 ERROR_LOCATION_8_6;
  RegisterERROR_LOCATION_9_6 ERROR_LOCATION_9_6;
  RegisterERROR_LOCATION_10_6 ERROR_LOCATION_10_6;
  RegisterERROR_LOCATION_11_6 ERROR_LOCATION_11_6;
  RegisterERROR_LOCATION_12_6 ERROR_LOCATION_12_6;
  RegisterERROR_LOCATION_13_6 ERROR_LOCATION_13_6;
  RegisterERROR_LOCATION_14_6 ERROR_LOCATION_14_6;
  RegisterERROR_LOCATION_15_6 ERROR_LOCATION_15_6;
  uint8_t RESERVED_OFFSETS_22[192];
  RegisterERROR_LOCATION_0_7 ERROR_LOCATION_0_7;
  RegisterERROR_LOCATION_1_7 ERROR_LOCATION_1_7;
  RegisterERROR_LOCATION_2_7 ERROR_LOCATION_2_7;
  RegisterERROR_LOCATION_3_7 ERROR_LOCATION_3_7;
  RegisterERROR_LOCATION_4_7 ERROR_LOCATION_4_7;
  RegisterERROR_LOCATION_5_7 ERROR_LOCATION_5_7;
  RegisterERROR_LOCATION_6_7 ERROR_LOCATION_6_7;
  RegisterERROR_LOCATION_7_7 ERROR_LOCATION_7_7;
  RegisterERROR_LOCATION_8_7 ERROR_LOCATION_8_7;
  RegisterERROR_LOCATION_9_7 ERROR_LOCATION_9_7;
  RegisterERROR_LOCATION_10_7 ERROR_LOCATION_10_7;
  RegisterERROR_LOCATION_11_7 ERROR_LOCATION_11_7;
  RegisterERROR_LOCATION_12_7 ERROR_LOCATION_12_7;
  RegisterERROR_LOCATION_13_7 ERROR_LOCATION_13_7;
  RegisterERROR_LOCATION_14_7 ERROR_LOCATION_14_7;
  RegisterERROR_LOCATION_15_7 ERROR_LOCATION_15_7;
  uint8_t RESERVED_OFFSETS_23[64];
  RegisterLOCATION_STATUS_5 LOCATION_STATUS_5;
  uint8_t RESERVED_OFFSETS_24[508];
  RegisterLOCATION_STATUS_6 LOCATION_STATUS_6;
  uint8_t RESERVED_OFFSETS_25[508];
  RegisterLOCATION_STATUS_7 LOCATION_STATUS_7;
} PeripheralELM;

typedef union {
  struct {
    uint32_t MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t MAJOR : 3;
    uint32_t RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RES : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterREVISION;

typedef union {
  struct {
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED_3 : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED_4 : 28;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_0;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_1;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_2;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_3;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_4;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_5;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_6;

typedef union {
  struct {
    uint32_t MESSAGEVALUEMBM : 32;
  };
  uint32_t raw;
} RegisterMESSAGE_7;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_0;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_1;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_2;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_3;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_4;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_5;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_6;

typedef union {
  struct {
    uint32_t FIFOFULLMBM : 1;
    uint32_t MESSAGEVALUEMBM : 31;
  };
  uint32_t raw;
} RegisterFIFOSTATUS_7;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_0;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_1;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_2;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_3;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_4;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_5;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_6;

typedef union {
  struct {
    uint32_t NBOFMSGMBM : 3;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterMSGSTATUS_7;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW_0;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_CLR_0;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET_0;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR_0;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW_1;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_CLR_1;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET_1;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR_1;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW_2;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_CLR_2;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET_2;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR_2;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW_3;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQSTATUS_CLR_3;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET_3;

typedef union {
  struct {
    uint32_t NEWMSGSTATUSUUMB0 : 1;
    uint32_t NOTFULLSTATUSUUMB0 : 1;
    uint32_t NEWMSGSTATUSUUMB1 : 1;
    uint32_t NOTFULLSTATUSUUMB1 : 1;
    uint32_t NEWMSGSTATUSUUMB2 : 1;
    uint32_t NOTFULLSTATUSUUMB2 : 1;
    uint32_t NEWMSGSTATUSUUMB3 : 1;
    uint32_t NOTFULLSTATUSUUMB3 : 1;
    uint32_t NEWMSGSTATUSUUMB4 : 1;
    uint32_t NOTFULLSTATUSUUMB4 : 1;
    uint32_t NEWMSGSTATUSUUMB5 : 1;
    uint32_t NOTFULLSTATUSUUMB5 : 1;
    uint32_t NEWMSGSTATUSUUMB6 : 1;
    uint32_t NOTFULLSTATUSUUMB6 : 1;
    uint32_t NEWMSGSTATUSUUMB7 : 1;
    uint32_t NOTFULLSTATUSUUMB7 : 1;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR_3;

typedef struct {
  RegisterREVISION REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  uint8_t RESERVED_OFFSETS_1[44];
  RegisterMESSAGE_0 MESSAGE_0;
  RegisterMESSAGE_1 MESSAGE_1;
  RegisterMESSAGE_2 MESSAGE_2;
  RegisterMESSAGE_3 MESSAGE_3;
  RegisterMESSAGE_4 MESSAGE_4;
  RegisterMESSAGE_5 MESSAGE_5;
  RegisterMESSAGE_6 MESSAGE_6;
  RegisterMESSAGE_7 MESSAGE_7;
  uint8_t RESERVED_OFFSETS_2[32];
  RegisterFIFOSTATUS_0 FIFOSTATUS_0;
  RegisterFIFOSTATUS_1 FIFOSTATUS_1;
  RegisterFIFOSTATUS_2 FIFOSTATUS_2;
  RegisterFIFOSTATUS_3 FIFOSTATUS_3;
  RegisterFIFOSTATUS_4 FIFOSTATUS_4;
  RegisterFIFOSTATUS_5 FIFOSTATUS_5;
  RegisterFIFOSTATUS_6 FIFOSTATUS_6;
  RegisterFIFOSTATUS_7 FIFOSTATUS_7;
  uint8_t RESERVED_OFFSETS_3[32];
  RegisterMSGSTATUS_0 MSGSTATUS_0;
  RegisterMSGSTATUS_1 MSGSTATUS_1;
  RegisterMSGSTATUS_2 MSGSTATUS_2;
  RegisterMSGSTATUS_3 MSGSTATUS_3;
  RegisterMSGSTATUS_4 MSGSTATUS_4;
  RegisterMSGSTATUS_5 MSGSTATUS_5;
  RegisterMSGSTATUS_6 MSGSTATUS_6;
  RegisterMSGSTATUS_7 MSGSTATUS_7;
  uint8_t RESERVED_OFFSETS_4[32];
  RegisterIRQSTATUS_RAW_0 IRQSTATUS_RAW_0;
  RegisterIRQSTATUS_CLR_0 IRQSTATUS_CLR_0;
  RegisterIRQENABLE_SET_0 IRQENABLE_SET_0;
  RegisterIRQENABLE_CLR_0 IRQENABLE_CLR_0;
  RegisterIRQSTATUS_RAW_1 IRQSTATUS_RAW_1;
  RegisterIRQSTATUS_CLR_1 IRQSTATUS_CLR_1;
  RegisterIRQENABLE_SET_1 IRQENABLE_SET_1;
  RegisterIRQENABLE_CLR_1 IRQENABLE_CLR_1;
  RegisterIRQSTATUS_RAW_2 IRQSTATUS_RAW_2;
  RegisterIRQSTATUS_CLR_2 IRQSTATUS_CLR_2;
  RegisterIRQENABLE_SET_2 IRQENABLE_SET_2;
  RegisterIRQENABLE_CLR_2 IRQENABLE_CLR_2;
  RegisterIRQSTATUS_RAW_3 IRQSTATUS_RAW_3;
  RegisterIRQSTATUS_CLR_3 IRQSTATUS_CLR_3;
  RegisterIRQENABLE_SET_3 IRQENABLE_SET_3;
  RegisterIRQENABLE_CLR_3 IRQENABLE_CLR_3;
} PeripheralMAILBOX0;

typedef union {
  struct {
    uint32_t REV : 32;
  };
  uint32_t raw;
} RegisterREV;

typedef union {
  struct {
    uint32_t AUTOGATING : 1;
    uint32_t SOFTRESET : 1;
    uint32_t ENWAKEUP : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED0 : 3;
    uint32_t CLOCKACTIVITY : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 7;
    uint32_t IU0 : 1;
    uint32_t IU1 : 1;
    uint32_t IU2 : 1;
    uint32_t IU3 : 1;
    uint32_t IU4 : 1;
    uint32_t IU5 : 1;
    uint32_t IU6 : 1;
    uint32_t IU7 : 1;
    uint32_t RESERVED : 8;
    uint32_t NUMLOCKS : 8;
  };
  uint32_t raw;
} RegisterSYSTATUS;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_0;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_1;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_2;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_3;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_4;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_5;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_6;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_7;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_8;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_9;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_10;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_11;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_12;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_13;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_14;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_15;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_16;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_17;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_18;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_19;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_20;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_21;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_22;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_23;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_24;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_25;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_26;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_27;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_28;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_29;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_30;

typedef union {
  struct {
    uint32_t TAKEN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterLOCK_REG_31;

typedef struct {
  RegisterREV REV;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  RegisterSYSTATUS SYSTATUS;
  uint8_t RESERVED_OFFSETS_1[2024];
  RegisterLOCK_REG_0 LOCK_REG_0;
  RegisterLOCK_REG_1 LOCK_REG_1;
  RegisterLOCK_REG_2 LOCK_REG_2;
  RegisterLOCK_REG_3 LOCK_REG_3;
  RegisterLOCK_REG_4 LOCK_REG_4;
  RegisterLOCK_REG_5 LOCK_REG_5;
  RegisterLOCK_REG_6 LOCK_REG_6;
  RegisterLOCK_REG_7 LOCK_REG_7;
  RegisterLOCK_REG_8 LOCK_REG_8;
  RegisterLOCK_REG_9 LOCK_REG_9;
  RegisterLOCK_REG_10 LOCK_REG_10;
  RegisterLOCK_REG_11 LOCK_REG_11;
  RegisterLOCK_REG_12 LOCK_REG_12;
  RegisterLOCK_REG_13 LOCK_REG_13;
  RegisterLOCK_REG_14 LOCK_REG_14;
  RegisterLOCK_REG_15 LOCK_REG_15;
  RegisterLOCK_REG_16 LOCK_REG_16;
  RegisterLOCK_REG_17 LOCK_REG_17;
  RegisterLOCK_REG_18 LOCK_REG_18;
  RegisterLOCK_REG_19 LOCK_REG_19;
  RegisterLOCK_REG_20 LOCK_REG_20;
  RegisterLOCK_REG_21 LOCK_REG_21;
  RegisterLOCK_REG_22 LOCK_REG_22;
  RegisterLOCK_REG_23 LOCK_REG_23;
  RegisterLOCK_REG_24 LOCK_REG_24;
  RegisterLOCK_REG_25 LOCK_REG_25;
  RegisterLOCK_REG_26 LOCK_REG_26;
  RegisterLOCK_REG_27 LOCK_REG_27;
  RegisterLOCK_REG_28 LOCK_REG_28;
  RegisterLOCK_REG_29 LOCK_REG_29;
  RegisterLOCK_REG_30 LOCK_REG_30;
  RegisterLOCK_REG_31 LOCK_REG_31;
} PeripheralSPINLOCK;

typedef union {
  struct {
    uint32_t INIT : 1;
    uint32_t IE0 : 1;
    uint32_t SIE : 1;
    uint32_t EIE : 1;
    uint32_t RESERVED4 : 1;
    uint32_t DAR : 1;
    uint32_t CCE : 1;
    uint32_t TEST : 1;
    uint32_t IDS : 1;
    uint32_t ABO : 1;
    uint32_t PMD : 4;
    uint32_t RESERVED3 : 1;
    uint32_t SWR : 1;
    uint32_t INITDBG : 1;
    uint32_t IE1 : 1;
    uint32_t DE1 : 1;
    uint32_t DE2 : 1;
    uint32_t DE3 : 1;
    uint32_t RESERVED2 : 3;
    uint32_t PDR : 1;
    uint32_t WUBA : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCTL;

typedef union {
  struct {
    uint32_t LEC : 3;
    uint32_t TXOK : 1;
    uint32_t RXOK : 1;
    uint32_t EPASS : 1;
    uint32_t EWARN : 1;
    uint32_t BOFF : 1;
    uint32_t PER : 1;
    uint32_t WAKEUP_PND : 1;
    uint32_t PDA : 1;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterES;

typedef union {
  struct {
    uint32_t TEC_7_0 : 8;
    uint32_t REC_6_0 : 7;
    uint32_t RP : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterERRC;

typedef union {
  struct {
    uint32_t BRP : 6;
    uint32_t SJW : 2;
    uint32_t TSEG1 : 4;
    uint32_t TSEG2 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t BRPE : 4;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterBTR;

typedef union {
  struct {
    uint32_t INT0ID_15_0 : 16;
    uint32_t INT1ID_23_16 : 8;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterINT;

typedef union {
  struct {
    uint32_t RESERVED2 : 3;
    uint32_t SILENT : 1;
    uint32_t LBACK : 1;
    uint32_t TX_1_0 : 2;
    uint32_t RX : 1;
    uint32_t EXL : 1;
    uint32_t RDA : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterTEST;

typedef union {
  struct {
    uint32_t MESSAGE_NUMBER : 8;
    uint32_t WORD_NUMBER : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterPERR;

typedef union {
  struct {
    uint32_t ABO_TIME : 32;
  };
  uint32_t raw;
} RegisterABOTR;

typedef union {
  struct {
    uint32_t TXRQSTREG1 : 2;
    uint32_t TXRQSTREG2 : 2;
    uint32_t TXRQSTREG3 : 2;
    uint32_t TXRQSTREG4 : 2;
    uint32_t TXRQSTREG5 : 2;
    uint32_t TXRQSTREG6 : 2;
    uint32_t TXRQSTREG7 : 2;
    uint32_t TXRQSTREG8 : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterTXRQ_X;

typedef union {
  struct {
    uint32_t TXRQS_16_1 : 16;
    uint32_t TXRQS_32_17 : 16;
  };
  uint32_t raw;
} RegisterTXRQ12;

typedef union {
  struct {
    uint32_t TXRQS_48_33 : 16;
    uint32_t TXRQS_64_49 : 16;
  };
  uint32_t raw;
} RegisterTXRQ34;

typedef union {
  struct {
    uint32_t TXRQS_80_65 : 16;
    uint32_t TXRQS_96_81 : 16;
  };
  uint32_t raw;
} RegisterTXRQ56;

typedef union {
  struct {
    uint32_t TXRQS_112_97 : 16;
    uint32_t TXRQS_128_113 : 16;
  };
  uint32_t raw;
} RegisterTXRQ78;

typedef union {
  struct {
    uint32_t NEWDATREG1 : 2;
    uint32_t NEWDATREG2 : 2;
    uint32_t NEWDATREG3 : 2;
    uint32_t NEWDATREG4 : 2;
    uint32_t NEWDATREG5 : 2;
    uint32_t NEWDATREG6 : 2;
    uint32_t NEWDATREG7 : 2;
    uint32_t NEWDATREG8 : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterNWDAT_X;

typedef union {
  struct {
    uint32_t NEWDAT_16_1 : 16;
    uint32_t NEWDAT_32_17 : 16;
  };
  uint32_t raw;
} RegisterNWDAT12;

typedef union {
  struct {
    uint32_t NEWDAT_48_33 : 16;
    uint32_t NEWDAT_64_49 : 16;
  };
  uint32_t raw;
} RegisterNWDAT34;

typedef union {
  struct {
    uint32_t NEWDAT_80_65 : 16;
    uint32_t NEWDAT_96_81 : 16;
  };
  uint32_t raw;
} RegisterNWDAT56;

typedef union {
  struct {
    uint32_t NEWDAT_112_97 : 16;
    uint32_t NEWDAT_128_113 : 16;
  };
  uint32_t raw;
} RegisterNWDAT78;

typedef union {
  struct {
    uint32_t INTPNDREG1 : 2;
    uint32_t INTPNDREG2 : 2;
    uint32_t INTPNDREG3 : 2;
    uint32_t INTPNDREG4 : 2;
    uint32_t INTPNDREG5 : 2;
    uint32_t INTPNDREG6 : 2;
    uint32_t INTPNDREG7 : 2;
    uint32_t INTPNDREG8 : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterINTPND_X;

typedef union {
  struct {
    uint32_t INTPND_16_1 : 16;
    uint32_t INTPND_32_17 : 16;
  };
  uint32_t raw;
} RegisterINTPND12;

typedef union {
  struct {
    uint32_t INTPND_48_33 : 16;
    uint32_t INTPND_64_49 : 16;
  };
  uint32_t raw;
} RegisterINTPND34;

typedef union {
  struct {
    uint32_t INTPND_80_65 : 16;
    uint32_t INTPND_96_81 : 16;
  };
  uint32_t raw;
} RegisterINTPND56;

typedef union {
  struct {
    uint32_t INTPND_112_97 : 16;
    uint32_t INTPND_128_113 : 16;
  };
  uint32_t raw;
} RegisterINTPND78;

typedef union {
  struct {
    uint32_t MSGVALREG1 : 2;
    uint32_t MSGVALREG2 : 2;
    uint32_t MSGVALREG3 : 2;
    uint32_t MSGVALREG4 : 2;
    uint32_t MSGVALREG5 : 2;
    uint32_t MSGVALREG6 : 2;
    uint32_t MSGVALREG7 : 2;
    uint32_t MSGVALREG8 : 2;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMSGVAL_X;

typedef union {
  struct {
    uint32_t MSGVAL_16_1 : 16;
    uint32_t MSGVAL_32_17 : 16;
  };
  uint32_t raw;
} RegisterMSGVAL12;

typedef union {
  struct {
    uint32_t MSGVAL_48_33 : 16;
    uint32_t MSGVAL_64_49 : 16;
  };
  uint32_t raw;
} RegisterMSGVAL34;

typedef union {
  struct {
    uint32_t MSGVAL_80_65 : 16;
    uint32_t MSGVAL_96_81 : 16;
  };
  uint32_t raw;
} RegisterMSGVAL56;

typedef union {
  struct {
    uint32_t MSGVAL_112_97 : 16;
    uint32_t MSGVAL_128_113 : 16;
  };
  uint32_t raw;
} RegisterMSGVAL78;

typedef union {
  struct {
    uint32_t INTMUX_16_1 : 16;
    uint32_t INTMUX_32_17 : 16;
  };
  uint32_t raw;
} RegisterINTMUX12;

typedef union {
  struct {
    uint32_t INTMUX_48_33 : 16;
    uint32_t INTMUX_64_49 : 16;
  };
  uint32_t raw;
} RegisterINTMUX34;

typedef union {
  struct {
    uint32_t INTMUX_80_65 : 16;
    uint32_t INTMUX_96_81 : 16;
  };
  uint32_t raw;
} RegisterINTMUX56;

typedef union {
  struct {
    uint32_t INTMUX_112_97 : 16;
    uint32_t INTMUX_128_113 : 16;
  };
  uint32_t raw;
} RegisterINTMUX78;

typedef union {
  struct {
    uint32_t MESSAGE_NUMBER : 8;
    uint32_t RESERVED2 : 6;
    uint32_t DMAACTIVE : 1;
    uint32_t BUSY : 1;
    uint32_t DATA_B : 1;
    uint32_t DATA_A : 1;
    uint32_t TXRQST_NEWDAT : 1;
    uint32_t CLRINTPND : 1;
    uint32_t CONTROL : 1;
    uint32_t ARB : 1;
    uint32_t MASK : 1;
    uint32_t WR_RD : 1;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterIF1CMD;

typedef union {
  struct {
    uint32_t MSK_28_0 : 29;
    uint32_t RESERVED1 : 1;
    uint32_t MDIR : 1;
    uint32_t MXTD : 1;
  };
  uint32_t raw;
} RegisterIF1MSK;

typedef union {
  struct {
    uint32_t ID28_TO_ID0 : 29;
    uint32_t DIR : 1;
    uint32_t XTD : 1;
    uint32_t MSGVAL : 1;
  };
  uint32_t raw;
} RegisterIF1ARB;

typedef union {
  struct {
    uint32_t DLC : 4;
    uint32_t RESERVED2 : 3;
    uint32_t EOB : 1;
    uint32_t TXRQST : 1;
    uint32_t RMTEN : 1;
    uint32_t RXIE : 1;
    uint32_t TXIE : 1;
    uint32_t UMASK : 1;
    uint32_t INTPND : 1;
    uint32_t MSGLST : 1;
    uint32_t NEWDAT : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterIF1MCTL;

typedef union {
  struct {
    uint32_t DATA_0 : 8;
    uint32_t DATA_1 : 8;
    uint32_t DATA_2 : 8;
    uint32_t DATA_3 : 8;
  };
  uint32_t raw;
} RegisterIF1DATA;

typedef union {
  struct {
    uint32_t DATA_4 : 8;
    uint32_t DATA_5 : 8;
    uint32_t DATA_6 : 8;
    uint32_t DATA_7 : 8;
  };
  uint32_t raw;
} RegisterIF1DATB;

typedef union {
  struct {
    uint32_t MESSAGE_NUMBER : 8;
    uint32_t RESERVED2 : 6;
    uint32_t DMAACTIVE : 1;
    uint32_t BUSY : 1;
    uint32_t DATA_B : 1;
    uint32_t DATA_A : 1;
    uint32_t TXRQST_NEWDAT : 1;
    uint32_t CLRINTPND : 1;
    uint32_t CONTROL : 1;
    uint32_t ARB : 1;
    uint32_t MASK : 1;
    uint32_t WR_RD : 1;
    uint32_t RESERVED1 : 8;
  };
  uint32_t raw;
} RegisterIF2CMD;

typedef union {
  struct {
    uint32_t MSK_28_0 : 29;
    uint32_t RESERVED1 : 1;
    uint32_t MDIR : 1;
    uint32_t MXTD : 1;
  };
  uint32_t raw;
} RegisterIF2MSK;

typedef union {
  struct {
    uint32_t ID28_TO_ID0 : 29;
    uint32_t DIR : 1;
    uint32_t XTD : 1;
    uint32_t MSGVAL : 1;
  };
  uint32_t raw;
} RegisterIF2ARB;

typedef union {
  struct {
    uint32_t DLC : 4;
    uint32_t RESERVED2 : 3;
    uint32_t EOB : 1;
    uint32_t TXRQST : 1;
    uint32_t RMTEN : 1;
    uint32_t RXIE : 1;
    uint32_t TXIE : 1;
    uint32_t UMASK : 1;
    uint32_t INTPND : 1;
    uint32_t MSGLST : 1;
    uint32_t NEWDAT : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterIF2MCTL;

typedef union {
  struct {
    uint32_t DATA_0 : 8;
    uint32_t DATA_1 : 8;
    uint32_t DATA_2 : 8;
    uint32_t DATA_3 : 8;
  };
  uint32_t raw;
} RegisterIF2DATA;

typedef union {
  struct {
    uint32_t DATA_4 : 8;
    uint32_t DATA_5 : 8;
    uint32_t DATA_6 : 8;
    uint32_t DATA_7 : 8;
  };
  uint32_t raw;
} RegisterIF2DATB;

typedef union {
  struct {
    uint32_t MASK : 1;
    uint32_t ARB : 1;
    uint32_t CTRL : 1;
    uint32_t DATAA : 1;
    uint32_t DATAB : 1;
    uint32_t RESERVED3 : 3;
    uint32_t IF3_SM : 1;
    uint32_t IF3_SA : 1;
    uint32_t IF3_SC : 1;
    uint32_t IF3_SDA : 1;
    uint32_t IF3_SDB : 1;
    uint32_t RESERVED2 : 2;
    uint32_t IF3_UPD : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterIF3OBS;

typedef union {
  struct {
    uint32_t MSK_28_0 : 29;
    uint32_t RESERVED1 : 1;
    uint32_t MDIR : 1;
    uint32_t MXTD : 1;
  };
  uint32_t raw;
} RegisterIF3MSK;

typedef union {
  struct {
    uint32_t ID28_TO_ID0 : 29;
    uint32_t DIR : 1;
    uint32_t XTD : 1;
    uint32_t MSGVAL : 1;
  };
  uint32_t raw;
} RegisterIF3ARB;

typedef union {
  struct {
    uint32_t DLC : 4;
    uint32_t RESERVED2 : 3;
    uint32_t EOB : 1;
    uint32_t TXRQST : 1;
    uint32_t RMTEN : 1;
    uint32_t RXIE : 1;
    uint32_t TXIE : 1;
    uint32_t UMASK : 1;
    uint32_t INTPND : 1;
    uint32_t MSGLST : 1;
    uint32_t NEWDAT : 1;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterIF3MCTL;

typedef union {
  struct {
    uint32_t DATA_0 : 8;
    uint32_t DATA_1 : 8;
    uint32_t DATA_2 : 8;
    uint32_t DATA_3 : 8;
  };
  uint32_t raw;
} RegisterIF3DATA;

typedef union {
  struct {
    uint32_t DATA_4 : 8;
    uint32_t DATA_5 : 8;
    uint32_t DATA_6 : 8;
    uint32_t DATA_7 : 8;
  };
  uint32_t raw;
} RegisterIF3DATB;

typedef union {
  struct {
    uint32_t IF3UPDEN_16_1 : 16;
    uint32_t IF3UPDEN_32_17 : 16;
  };
  uint32_t raw;
} RegisterIF3UPD12;

typedef union {
  struct {
    uint32_t IF3UPDEN_48_33 : 16;
    uint32_t IF3UPDEN_64_49 : 16;
  };
  uint32_t raw;
} RegisterIF3UPD34;

typedef union {
  struct {
    uint32_t IF3UPDEN_80_65 : 16;
    uint32_t IF3UPDEN_96_81 : 16;
  };
  uint32_t raw;
} RegisterIF3UPD56;

typedef union {
  struct {
    uint32_t IF3UPDEN_112_97 : 16;
    uint32_t IF3UPDEN_128_113 : 16;
  };
  uint32_t raw;
} RegisterIF3UPD78;

typedef union {
  struct {
    uint32_t IN : 1;
    uint32_t OUT : 1;
    uint32_t DIR : 1;
    uint32_t FUNC : 1;
    uint32_t RESERVED2 : 12;
    uint32_t OD : 1;
    uint32_t PD : 1;
    uint32_t PU : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterTIOC;

typedef union {
  struct {
    uint32_t IN : 1;
    uint32_t OUT : 1;
    uint32_t DIR : 1;
    uint32_t FUNC : 1;
    uint32_t RESERVED2 : 12;
    uint32_t OD : 1;
    uint32_t PD : 1;
    uint32_t PU : 1;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterRIOC;

typedef struct {
  RegisterCTL CTL;
  RegisterES ES;
  RegisterERRC ERRC;
  RegisterBTR BTR;
  RegisterINT INT;
  RegisterTEST TEST;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterPERR PERR;
  uint8_t RESERVED_OFFSETS_1[96];
  RegisterABOTR ABOTR;
  RegisterTXRQ_X TXRQ_X;
  RegisterTXRQ12 TXRQ12;
  RegisterTXRQ34 TXRQ34;
  RegisterTXRQ56 TXRQ56;
  RegisterTXRQ78 TXRQ78;
  RegisterNWDAT_X NWDAT_X;
  RegisterNWDAT12 NWDAT12;
  RegisterNWDAT34 NWDAT34;
  RegisterNWDAT56 NWDAT56;
  RegisterNWDAT78 NWDAT78;
  RegisterINTPND_X INTPND_X;
  RegisterINTPND12 INTPND12;
  RegisterINTPND34 INTPND34;
  RegisterINTPND56 INTPND56;
  RegisterINTPND78 INTPND78;
  RegisterMSGVAL_X MSGVAL_X;
  RegisterMSGVAL12 MSGVAL12;
  RegisterMSGVAL34 MSGVAL34;
  RegisterMSGVAL56 MSGVAL56;
  RegisterMSGVAL78 MSGVAL78;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterINTMUX12 INTMUX12;
  RegisterINTMUX34 INTMUX34;
  RegisterINTMUX56 INTMUX56;
  RegisterINTMUX78 INTMUX78;
  uint8_t RESERVED_OFFSETS_3[24];
  RegisterIF1CMD IF1CMD;
  RegisterIF1MSK IF1MSK;
  RegisterIF1ARB IF1ARB;
  RegisterIF1MCTL IF1MCTL;
  RegisterIF1DATA IF1DATA;
  RegisterIF1DATB IF1DATB;
  uint8_t RESERVED_OFFSETS_4[8];
  RegisterIF2CMD IF2CMD;
  RegisterIF2MSK IF2MSK;
  RegisterIF2ARB IF2ARB;
  RegisterIF2MCTL IF2MCTL;
  RegisterIF2DATA IF2DATA;
  RegisterIF2DATB IF2DATB;
  uint8_t RESERVED_OFFSETS_5[8];
  RegisterIF3OBS IF3OBS;
  RegisterIF3MSK IF3MSK;
  RegisterIF3ARB IF3ARB;
  RegisterIF3MCTL IF3MCTL;
  RegisterIF3DATA IF3DATA;
  RegisterIF3DATB IF3DATB;
  uint8_t RESERVED_OFFSETS_6[8];
  RegisterIF3UPD12 IF3UPD12;
  RegisterIF3UPD34 IF3UPD34;
  RegisterIF3UPD56 IF3UPD56;
  RegisterIF3UPD78 IF3UPD78;
  uint8_t RESERVED_OFFSETS_7[112];
  RegisterTIOC TIOC;
  RegisterRIOC RIOC;
} PeripheralDCAN0;

typedef union {
  struct {
    uint32_t REV : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_REVISION;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t RESERVED : 2;
    uint32_t RESERVED_BITS_1 : 27;
  };
  uint32_t raw;
} RegisterINTC_SYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED : 7;
    uint32_t RESERVED_BITS_0 : 24;
  };
  uint32_t raw;
} RegisterINTC_SYSSTATUS;

typedef union {
  struct {
    uint32_t ACTIVEIRQ : 7;
    uint32_t SPURIOUSIRQ : 25;
  };
  uint32_t raw;
} RegisterINTC_SIR_IRQ;

typedef union {
  struct {
    uint32_t ACTIVEFIQ : 7;
    uint32_t SPURIOUSFIQ : 25;
  };
  uint32_t raw;
} RegisterINTC_SIR_FIQ;

typedef union {
  struct {
    uint32_t NEWIRQAGR : 1;
    uint32_t NEWFIQAGR : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterINTC_CONTROL;

typedef union {
  struct {
    uint32_t PROTECTION : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterINTC_PROTECTION;

typedef union {
  struct {
    uint32_t FUNCIDLE : 1;
    uint32_t TURBO : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterINTC_IDLE;

typedef union {
  struct {
    uint32_t IRQPRIORITY : 7;
    uint32_t SPURIOUSIRQFLAG : 25;
  };
  uint32_t raw;
} RegisterINTC_IRQ_PRIORITY;

typedef union {
  struct {
    uint32_t FIQPRIORITY : 7;
    uint32_t SPURIOUSFIQFLAG : 25;
  };
  uint32_t raw;
} RegisterINTC_FIQ_PRIORITY;

typedef union {
  struct {
    uint32_t PRIORITYTHRESHOLD : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_THRESHOLD;

typedef union {
  struct {
    uint32_t ITR : 32;
  };
  uint32_t raw;
} RegisterINTC_ITR0;

typedef union {
  struct {
    uint32_t MIR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR0;

typedef union {
  struct {
    uint32_t MIRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_CLEAR0;

typedef union {
  struct {
    uint32_t MIRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_SET0;

typedef union {
  struct {
    uint32_t ISRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_SET0;

typedef union {
  struct {
    uint32_t ISRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_CLEAR0;

typedef union {
  struct {
    uint32_t PENDINGIRQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_IRQ0;

typedef union {
  struct {
    uint32_t PENDINGFIQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_FIQ0;

typedef union {
  struct {
    uint32_t ITR : 32;
  };
  uint32_t raw;
} RegisterINTC_ITR1;

typedef union {
  struct {
    uint32_t MIR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR1;

typedef union {
  struct {
    uint32_t MIRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_CLEAR1;

typedef union {
  struct {
    uint32_t MIRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_SET1;

typedef union {
  struct {
    uint32_t ISRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_SET1;

typedef union {
  struct {
    uint32_t ISRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_CLEAR1;

typedef union {
  struct {
    uint32_t PENDINGIRQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_IRQ1;

typedef union {
  struct {
    uint32_t PENDINGFIQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_FIQ1;

typedef union {
  struct {
    uint32_t ITR : 32;
  };
  uint32_t raw;
} RegisterINTC_ITR2;

typedef union {
  struct {
    uint32_t MIR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR2;

typedef union {
  struct {
    uint32_t MIRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_CLEAR2;

typedef union {
  struct {
    uint32_t MIRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_SET2;

typedef union {
  struct {
    uint32_t ISRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_SET2;

typedef union {
  struct {
    uint32_t ISRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_CLEAR2;

typedef union {
  struct {
    uint32_t PENDINGIRQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_IRQ2;

typedef union {
  struct {
    uint32_t PENDINGFIQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_FIQ2;

typedef union {
  struct {
    uint32_t ITR : 32;
  };
  uint32_t raw;
} RegisterINTC_ITR3;

typedef union {
  struct {
    uint32_t MIR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR3;

typedef union {
  struct {
    uint32_t MIRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_CLEAR3;

typedef union {
  struct {
    uint32_t MIRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_MIR_SET3;

typedef union {
  struct {
    uint32_t ISRSET : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_SET3;

typedef union {
  struct {
    uint32_t ISRCLEAR : 32;
  };
  uint32_t raw;
} RegisterINTC_ISR_CLEAR3;

typedef union {
  struct {
    uint32_t PENDINGIRQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_IRQ3;

typedef union {
  struct {
    uint32_t PENDINGFIQ : 32;
  };
  uint32_t raw;
} RegisterINTC_PENDING_FIQ3;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_0;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_1;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_2;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_3;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_4;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_5;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_6;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_7;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_8;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_9;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_10;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_11;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_12;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_13;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_14;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_15;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_16;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_17;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_18;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_19;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_20;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_21;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_22;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_23;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_24;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_25;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_26;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_27;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_28;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_29;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_30;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_31;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_32;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_33;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_34;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_35;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_36;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_37;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_38;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_39;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_40;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_41;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_42;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_43;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_44;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_45;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_46;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_47;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_48;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_49;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_50;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_51;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_52;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_53;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_54;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_55;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_56;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_57;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_58;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_59;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_60;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_61;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_62;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_63;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_64;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_65;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_66;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_67;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_68;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_69;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_70;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_71;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_72;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_73;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_74;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_75;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_76;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_77;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_78;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_79;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_80;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_81;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_82;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_83;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_84;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_85;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_86;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_87;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_88;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_89;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_90;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_91;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_92;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_93;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_94;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_95;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_96;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_97;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_98;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_99;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_100;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_101;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_102;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_103;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_104;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_105;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_106;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_107;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_108;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_109;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_110;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_111;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_112;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_113;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_114;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_115;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_116;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_117;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_118;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_119;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_120;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_121;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_122;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_123;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_124;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_125;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_126;

typedef union {
  struct {
    uint32_t FIQNIRQ : 1;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRIORITY : 6;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterINTC_ILR_127;

typedef struct {
  RegisterINTC_REVISION INTC_REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterINTC_SYSCONFIG INTC_SYSCONFIG;
  RegisterINTC_SYSSTATUS INTC_SYSSTATUS;
  uint8_t RESERVED_OFFSETS_1[40];
  RegisterINTC_SIR_IRQ INTC_SIR_IRQ;
  RegisterINTC_SIR_FIQ INTC_SIR_FIQ;
  RegisterINTC_CONTROL INTC_CONTROL;
  RegisterINTC_PROTECTION INTC_PROTECTION;
  RegisterINTC_IDLE INTC_IDLE;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterINTC_IRQ_PRIORITY INTC_IRQ_PRIORITY;
  RegisterINTC_FIQ_PRIORITY INTC_FIQ_PRIORITY;
  RegisterINTC_THRESHOLD INTC_THRESHOLD;
  uint8_t RESERVED_OFFSETS_3[20];
  RegisterINTC_ITR0 INTC_ITR0;
  RegisterINTC_MIR0 INTC_MIR0;
  RegisterINTC_MIR_CLEAR0 INTC_MIR_CLEAR0;
  RegisterINTC_MIR_SET0 INTC_MIR_SET0;
  RegisterINTC_ISR_SET0 INTC_ISR_SET0;
  RegisterINTC_ISR_CLEAR0 INTC_ISR_CLEAR0;
  RegisterINTC_PENDING_IRQ0 INTC_PENDING_IRQ0;
  RegisterINTC_PENDING_FIQ0 INTC_PENDING_FIQ0;
  RegisterINTC_ITR1 INTC_ITR1;
  RegisterINTC_MIR1 INTC_MIR1;
  RegisterINTC_MIR_CLEAR1 INTC_MIR_CLEAR1;
  RegisterINTC_MIR_SET1 INTC_MIR_SET1;
  RegisterINTC_ISR_SET1 INTC_ISR_SET1;
  RegisterINTC_ISR_CLEAR1 INTC_ISR_CLEAR1;
  RegisterINTC_PENDING_IRQ1 INTC_PENDING_IRQ1;
  RegisterINTC_PENDING_FIQ1 INTC_PENDING_FIQ1;
  RegisterINTC_ITR2 INTC_ITR2;
  RegisterINTC_MIR2 INTC_MIR2;
  RegisterINTC_MIR_CLEAR2 INTC_MIR_CLEAR2;
  RegisterINTC_MIR_SET2 INTC_MIR_SET2;
  RegisterINTC_ISR_SET2 INTC_ISR_SET2;
  RegisterINTC_ISR_CLEAR2 INTC_ISR_CLEAR2;
  RegisterINTC_PENDING_IRQ2 INTC_PENDING_IRQ2;
  RegisterINTC_PENDING_FIQ2 INTC_PENDING_FIQ2;
  RegisterINTC_ITR3 INTC_ITR3;
  RegisterINTC_MIR3 INTC_MIR3;
  RegisterINTC_MIR_CLEAR3 INTC_MIR_CLEAR3;
  RegisterINTC_MIR_SET3 INTC_MIR_SET3;
  RegisterINTC_ISR_SET3 INTC_ISR_SET3;
  RegisterINTC_ISR_CLEAR3 INTC_ISR_CLEAR3;
  RegisterINTC_PENDING_IRQ3 INTC_PENDING_IRQ3;
  RegisterINTC_PENDING_FIQ3 INTC_PENDING_FIQ3;
  RegisterINTC_ILR_0 INTC_ILR_0;
  RegisterINTC_ILR_1 INTC_ILR_1;
  RegisterINTC_ILR_2 INTC_ILR_2;
  RegisterINTC_ILR_3 INTC_ILR_3;
  RegisterINTC_ILR_4 INTC_ILR_4;
  RegisterINTC_ILR_5 INTC_ILR_5;
  RegisterINTC_ILR_6 INTC_ILR_6;
  RegisterINTC_ILR_7 INTC_ILR_7;
  RegisterINTC_ILR_8 INTC_ILR_8;
  RegisterINTC_ILR_9 INTC_ILR_9;
  RegisterINTC_ILR_10 INTC_ILR_10;
  RegisterINTC_ILR_11 INTC_ILR_11;
  RegisterINTC_ILR_12 INTC_ILR_12;
  RegisterINTC_ILR_13 INTC_ILR_13;
  RegisterINTC_ILR_14 INTC_ILR_14;
  RegisterINTC_ILR_15 INTC_ILR_15;
  RegisterINTC_ILR_16 INTC_ILR_16;
  RegisterINTC_ILR_17 INTC_ILR_17;
  RegisterINTC_ILR_18 INTC_ILR_18;
  RegisterINTC_ILR_19 INTC_ILR_19;
  RegisterINTC_ILR_20 INTC_ILR_20;
  RegisterINTC_ILR_21 INTC_ILR_21;
  RegisterINTC_ILR_22 INTC_ILR_22;
  RegisterINTC_ILR_23 INTC_ILR_23;
  RegisterINTC_ILR_24 INTC_ILR_24;
  RegisterINTC_ILR_25 INTC_ILR_25;
  RegisterINTC_ILR_26 INTC_ILR_26;
  RegisterINTC_ILR_27 INTC_ILR_27;
  RegisterINTC_ILR_28 INTC_ILR_28;
  RegisterINTC_ILR_29 INTC_ILR_29;
  RegisterINTC_ILR_30 INTC_ILR_30;
  RegisterINTC_ILR_31 INTC_ILR_31;
  RegisterINTC_ILR_32 INTC_ILR_32;
  RegisterINTC_ILR_33 INTC_ILR_33;
  RegisterINTC_ILR_34 INTC_ILR_34;
  RegisterINTC_ILR_35 INTC_ILR_35;
  RegisterINTC_ILR_36 INTC_ILR_36;
  RegisterINTC_ILR_37 INTC_ILR_37;
  RegisterINTC_ILR_38 INTC_ILR_38;
  RegisterINTC_ILR_39 INTC_ILR_39;
  RegisterINTC_ILR_40 INTC_ILR_40;
  RegisterINTC_ILR_41 INTC_ILR_41;
  RegisterINTC_ILR_42 INTC_ILR_42;
  RegisterINTC_ILR_43 INTC_ILR_43;
  RegisterINTC_ILR_44 INTC_ILR_44;
  RegisterINTC_ILR_45 INTC_ILR_45;
  RegisterINTC_ILR_46 INTC_ILR_46;
  RegisterINTC_ILR_47 INTC_ILR_47;
  RegisterINTC_ILR_48 INTC_ILR_48;
  RegisterINTC_ILR_49 INTC_ILR_49;
  RegisterINTC_ILR_50 INTC_ILR_50;
  RegisterINTC_ILR_51 INTC_ILR_51;
  RegisterINTC_ILR_52 INTC_ILR_52;
  RegisterINTC_ILR_53 INTC_ILR_53;
  RegisterINTC_ILR_54 INTC_ILR_54;
  RegisterINTC_ILR_55 INTC_ILR_55;
  RegisterINTC_ILR_56 INTC_ILR_56;
  RegisterINTC_ILR_57 INTC_ILR_57;
  RegisterINTC_ILR_58 INTC_ILR_58;
  RegisterINTC_ILR_59 INTC_ILR_59;
  RegisterINTC_ILR_60 INTC_ILR_60;
  RegisterINTC_ILR_61 INTC_ILR_61;
  RegisterINTC_ILR_62 INTC_ILR_62;
  RegisterINTC_ILR_63 INTC_ILR_63;
  RegisterINTC_ILR_64 INTC_ILR_64;
  RegisterINTC_ILR_65 INTC_ILR_65;
  RegisterINTC_ILR_66 INTC_ILR_66;
  RegisterINTC_ILR_67 INTC_ILR_67;
  RegisterINTC_ILR_68 INTC_ILR_68;
  RegisterINTC_ILR_69 INTC_ILR_69;
  RegisterINTC_ILR_70 INTC_ILR_70;
  RegisterINTC_ILR_71 INTC_ILR_71;
  RegisterINTC_ILR_72 INTC_ILR_72;
  RegisterINTC_ILR_73 INTC_ILR_73;
  RegisterINTC_ILR_74 INTC_ILR_74;
  RegisterINTC_ILR_75 INTC_ILR_75;
  RegisterINTC_ILR_76 INTC_ILR_76;
  RegisterINTC_ILR_77 INTC_ILR_77;
  RegisterINTC_ILR_78 INTC_ILR_78;
  RegisterINTC_ILR_79 INTC_ILR_79;
  RegisterINTC_ILR_80 INTC_ILR_80;
  RegisterINTC_ILR_81 INTC_ILR_81;
  RegisterINTC_ILR_82 INTC_ILR_82;
  RegisterINTC_ILR_83 INTC_ILR_83;
  RegisterINTC_ILR_84 INTC_ILR_84;
  RegisterINTC_ILR_85 INTC_ILR_85;
  RegisterINTC_ILR_86 INTC_ILR_86;
  RegisterINTC_ILR_87 INTC_ILR_87;
  RegisterINTC_ILR_88 INTC_ILR_88;
  RegisterINTC_ILR_89 INTC_ILR_89;
  RegisterINTC_ILR_90 INTC_ILR_90;
  RegisterINTC_ILR_91 INTC_ILR_91;
  RegisterINTC_ILR_92 INTC_ILR_92;
  RegisterINTC_ILR_93 INTC_ILR_93;
  RegisterINTC_ILR_94 INTC_ILR_94;
  RegisterINTC_ILR_95 INTC_ILR_95;
  RegisterINTC_ILR_96 INTC_ILR_96;
  RegisterINTC_ILR_97 INTC_ILR_97;
  RegisterINTC_ILR_98 INTC_ILR_98;
  RegisterINTC_ILR_99 INTC_ILR_99;
  RegisterINTC_ILR_100 INTC_ILR_100;
  RegisterINTC_ILR_101 INTC_ILR_101;
  RegisterINTC_ILR_102 INTC_ILR_102;
  RegisterINTC_ILR_103 INTC_ILR_103;
  RegisterINTC_ILR_104 INTC_ILR_104;
  RegisterINTC_ILR_105 INTC_ILR_105;
  RegisterINTC_ILR_106 INTC_ILR_106;
  RegisterINTC_ILR_107 INTC_ILR_107;
  RegisterINTC_ILR_108 INTC_ILR_108;
  RegisterINTC_ILR_109 INTC_ILR_109;
  RegisterINTC_ILR_110 INTC_ILR_110;
  RegisterINTC_ILR_111 INTC_ILR_111;
  RegisterINTC_ILR_112 INTC_ILR_112;
  RegisterINTC_ILR_113 INTC_ILR_113;
  RegisterINTC_ILR_114 INTC_ILR_114;
  RegisterINTC_ILR_115 INTC_ILR_115;
  RegisterINTC_ILR_116 INTC_ILR_116;
  RegisterINTC_ILR_117 INTC_ILR_117;
  RegisterINTC_ILR_118 INTC_ILR_118;
  RegisterINTC_ILR_119 INTC_ILR_119;
  RegisterINTC_ILR_120 INTC_ILR_120;
  RegisterINTC_ILR_121 INTC_ILR_121;
  RegisterINTC_ILR_122 INTC_ILR_122;
  RegisterINTC_ILR_123 INTC_ILR_123;
  RegisterINTC_ILR_124 INTC_ILR_124;
  RegisterINTC_ILR_125 INTC_ILR_125;
  RegisterINTC_ILR_126 INTC_ILR_126;
  RegisterINTC_ILR_127 INTC_ILR_127;
} PeripheralINTCPS;

typedef union {
  struct {
    uint32_t Y_MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t X_MAJOR : 3;
    uint32_t R_RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterIDVER;

typedef union {
  struct {
    uint32_t SOFTRESET : 1;
    uint32_t FREEEMU : 1;
    uint32_t IDLEMODE : 2;
    uint32_t STANDBYMODE : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t ECAPCLK_EN : 1;
    uint32_t ECAPCLKSTOP_REQ : 1;
    uint32_t RESERVED3 : 2;
    uint32_t EQEPCLK_EN : 1;
    uint32_t EQEPCLKSTOP_REQ : 1;
    uint32_t RESERVED2 : 2;
    uint32_t EPWMCLK_EN : 1;
    uint32_t EPWMCLKSTOP_REQ : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCLKCONFIG;

typedef union {
  struct {
    uint32_t ECAP_CLK_EN_ACK : 1;
    uint32_t ECAP_CLKSTOP_ACK : 1;
    uint32_t RESERVED3 : 2;
    uint32_t EQEP_CLK_EN_ACK : 1;
    uint32_t EQEP_CLKSTOP_ACK : 1;
    uint32_t RESERVED2 : 2;
    uint32_t EPWM_CLK_EN_ACK : 1;
    uint32_t EPWM_CLKSTOP_ACK : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCLKSTATUS;

typedef struct {
  RegisterIDVER IDVER;
  RegisterSYSCONFIG SYSCONFIG;
  RegisterCLKCONFIG CLKCONFIG;
  RegisterCLKSTATUS CLKSTATUS;
} PeripheralPWMSS0;

typedef union {
  struct {
    uint32_t TSCTR : 32;
  };
  uint32_t raw;
} RegisterTSCTR;

typedef union {
  struct {
    uint32_t CTRPHS : 32;
  };
  uint32_t raw;
} RegisterCTRPHS;

typedef union {
  struct {
    uint32_t CAP1 : 32;
  };
  uint32_t raw;
} RegisterCAP1;

typedef union {
  struct {
    uint32_t CAP2 : 32;
  };
  uint32_t raw;
} RegisterCAP2;

typedef union {
  struct {
    uint32_t CAP3 : 32;
  };
  uint32_t raw;
} RegisterCAP3;

typedef union {
  struct {
    uint32_t CAP4 : 32;
  };
  uint32_t raw;
} RegisterCAP4;

typedef union {
  struct {
    uint16_t CAP1POL : 1;
    uint16_t CTRRST1 : 1;
    uint16_t CAP2POL : 1;
    uint16_t CTRRST2 : 1;
    uint16_t CAP3POL : 1;
    uint16_t CTRRST3 : 1;
    uint16_t CAP4POL : 1;
    uint16_t CTRRST4 : 1;
    uint16_t CAPLDEN : 1;
    uint16_t PRESCALE : 5;
    uint16_t FREE_SOFT : 2;
  };
  uint16_t raw;
} RegisterECCTL1;

typedef union {
  struct {
    uint16_t CONT_ONESHT : 1;
    uint16_t STOP_WRAP : 2;
    uint16_t RE_ARM : 1;
    uint16_t TSCTRSTOP : 1;
    uint16_t SYNCI_EN : 1;
    uint16_t SYNCO_SEL : 2;
    uint16_t SWSYNC : 1;
    uint16_t CAP_APWM : 1;
    uint16_t APWMPOL : 1;
    uint16_t RESERVED1 : 5;
  };
  uint16_t raw;
} RegisterECCTL2;

typedef union {
  struct {
    uint16_t RESERVED2 : 1;
    uint16_t CEVT1 : 1;
    uint16_t CEVT2 : 1;
    uint16_t CEVT3 : 1;
    uint16_t CEVT4 : 1;
    uint16_t CTROVF : 1;
    uint16_t CTR_PRD : 1;
    uint16_t CTR_CMP : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterECEINT;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t CEVT1 : 1;
    uint16_t CEVT2 : 1;
    uint16_t CEVT3 : 1;
    uint16_t CEVT4 : 1;
    uint16_t CTROVF : 1;
    uint16_t CTR_PRD : 1;
    uint16_t CTR_CMP : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterECFLG;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t CEVT1 : 1;
    uint16_t CEVT2 : 1;
    uint16_t CEVT3 : 1;
    uint16_t CEVT4 : 1;
    uint16_t CTROVF : 1;
    uint16_t CTR_PRD : 1;
    uint16_t CTR_CMP : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterECCLR;

typedef union {
  struct {
    uint16_t RESERVED2 : 1;
    uint16_t CEVT1 : 1;
    uint16_t CEVT2 : 1;
    uint16_t CEVT3 : 1;
    uint16_t CEVT4 : 1;
    uint16_t CTROVF : 1;
    uint16_t CTR_PRD : 1;
    uint16_t CTR_CMP : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterECFRC;

typedef union {
  struct {
    uint32_t REV : 32;
  };
  uint32_t raw;
} RegisterREVID;

typedef struct {
  RegisterTSCTR TSCTR;
  RegisterCTRPHS CTRPHS;
  RegisterCAP1 CAP1;
  RegisterCAP2 CAP2;
  RegisterCAP3 CAP3;
  RegisterCAP4 CAP4;
  uint8_t RESERVED_OFFSETS_0[16];
  RegisterECCTL1 ECCTL1;
  RegisterECCTL2 ECCTL2;
  RegisterECEINT ECEINT;
  RegisterECFLG ECFLG;
  RegisterECCLR ECCLR;
  RegisterECFRC ECFRC;
  uint8_t RESERVED_OFFSETS_1[40];
  RegisterREVID REVID;
} PeripheralECAP0;

typedef union {
  struct {
    uint32_t QPOSCNT : 32;
  };
  uint32_t raw;
} RegisterQPOSCNT;

typedef union {
  struct {
    uint32_t QPOSINIT : 32;
  };
  uint32_t raw;
} RegisterQPOSINIT;

typedef union {
  struct {
    uint32_t QPOSMAX : 32;
  };
  uint32_t raw;
} RegisterQPOSMAX;

typedef union {
  struct {
    uint32_t QPOSCMP : 32;
  };
  uint32_t raw;
} RegisterQPOSCMP;

typedef union {
  struct {
    uint32_t QPOSILAT : 32;
  };
  uint32_t raw;
} RegisterQPOSILAT;

typedef union {
  struct {
    uint32_t QPOSSLAT : 32;
  };
  uint32_t raw;
} RegisterQPOSSLAT;

typedef union {
  struct {
    uint32_t QPOSLAT : 32;
  };
  uint32_t raw;
} RegisterQPOSLAT;

typedef union {
  struct {
    uint32_t QUTMR : 32;
  };
  uint32_t raw;
} RegisterQUTMR;

typedef union {
  struct {
    uint32_t QUPRD : 32;
  };
  uint32_t raw;
} RegisterQUPRD;

typedef union {
  struct {
    uint16_t QWDTMR : 16;
  };
  uint16_t raw;
} RegisterQWDTMR;

typedef union {
  struct {
    uint16_t QWDPRD : 16;
  };
  uint16_t raw;
} RegisterQWDPRD;

typedef union {
  struct {
    uint16_t RESERVED1 : 5;
    uint16_t QSP : 1;
    uint16_t QIP : 1;
    uint16_t QBP : 1;
    uint16_t QAP : 1;
    uint16_t IGATE : 1;
    uint16_t SWAP : 1;
    uint16_t XCR : 1;
    uint16_t SPSEL : 1;
    uint16_t SOEN : 1;
    uint16_t QSRC : 2;
  };
  uint16_t raw;
} RegisterQDECCTL;

typedef union {
  struct {
    uint16_t WDE : 1;
    uint16_t UTE : 1;
    uint16_t QCLM : 1;
    uint16_t PHEN : 1;
    uint16_t IEL : 2;
    uint16_t SEL : 1;
    uint16_t SWI : 1;
    uint16_t IEI : 2;
    uint16_t SEI : 2;
    uint16_t PCRM : 2;
    uint16_t FREE_SOFT : 2;
  };
  uint16_t raw;
} RegisterQEPCTL;

typedef union {
  struct {
    uint16_t UPPS : 4;
    uint16_t CCPS : 3;
    uint16_t RESERVED1 : 8;
    uint16_t CEN : 1;
  };
  uint16_t raw;
} RegisterQCAPCTL;

typedef union {
  struct {
    uint16_t PCSPW : 12;
    uint16_t PCE : 1;
    uint16_t PCPOL : 1;
    uint16_t PCLOAD : 1;
    uint16_t PCSHDW : 1;
  };
  uint16_t raw;
} RegisterQPOSCTL;

typedef union {
  struct {
    uint16_t RESERVED2 : 1;
    uint16_t PCE : 1;
    uint16_t PHE : 1;
    uint16_t QDC : 1;
    uint16_t WTO : 1;
    uint16_t PCU : 1;
    uint16_t PCO : 1;
    uint16_t PCR : 1;
    uint16_t PCM : 1;
    uint16_t SEL : 1;
    uint16_t IEL : 1;
    uint16_t UTO : 1;
    uint16_t RESERVED1 : 4;
  };
  uint16_t raw;
} RegisterQEINT;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t PCE : 1;
    uint16_t PHE : 1;
    uint16_t QDC : 1;
    uint16_t WTO : 1;
    uint16_t PCU : 1;
    uint16_t PCO : 1;
    uint16_t PCR : 1;
    uint16_t PCM : 1;
    uint16_t SEL : 1;
    uint16_t IEL : 1;
    uint16_t UTO : 1;
    uint16_t RESERVED1 : 4;
  };
  uint16_t raw;
} RegisterQFLG;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t PCE : 1;
    uint16_t PHE : 1;
    uint16_t QDC : 1;
    uint16_t WTO : 1;
    uint16_t PCU : 1;
    uint16_t PCO : 1;
    uint16_t PCR : 1;
    uint16_t PCM : 1;
    uint16_t SEL : 1;
    uint16_t IEL : 1;
    uint16_t UTO : 1;
    uint16_t RESERVED1 : 4;
  };
  uint16_t raw;
} RegisterQCLR;

typedef union {
  struct {
    uint16_t RESERVED2 : 1;
    uint16_t PCE : 1;
    uint16_t PHE : 1;
    uint16_t QDC : 1;
    uint16_t WTO : 1;
    uint16_t PCU : 1;
    uint16_t PCO : 1;
    uint16_t PCR : 1;
    uint16_t PCM : 1;
    uint16_t SEL : 1;
    uint16_t IEL : 1;
    uint16_t UTO : 1;
    uint16_t RESERVED1 : 4;
  };
  uint16_t raw;
} RegisterQFRC;

typedef union {
  struct {
    uint16_t PCEF : 1;
    uint16_t FIMF : 1;
    uint16_t CDEF : 1;
    uint16_t COEF : 1;
    uint16_t QDLF : 1;
    uint16_t QDF : 1;
    uint16_t FDF : 1;
    uint16_t UPEVNT : 1;
    uint16_t RESERVED1 : 8;
  };
  uint16_t raw;
} RegisterQEPSTS;

typedef union {
  struct {
    uint16_t QCTMR : 16;
  };
  uint16_t raw;
} RegisterQCTMR;

typedef union {
  struct {
    uint16_t QCPRD : 16;
  };
  uint16_t raw;
} RegisterQCPRD;

typedef union {
  struct {
    uint16_t QCTMRLAT : 16;
  };
  uint16_t raw;
} RegisterQCTMRLAT;

typedef union {
  struct {
    uint16_t QCPRDLAT : 16;
  };
  uint16_t raw;
} RegisterQCPRDLAT;

typedef union {
  struct {
    uint32_t REV : 32;
  };
  uint32_t raw;
} RegisterREVID;

typedef struct {
  RegisterQPOSCNT QPOSCNT;
  RegisterQPOSINIT QPOSINIT;
  RegisterQPOSMAX QPOSMAX;
  RegisterQPOSCMP QPOSCMP;
  RegisterQPOSILAT QPOSILAT;
  RegisterQPOSSLAT QPOSSLAT;
  RegisterQPOSLAT QPOSLAT;
  RegisterQUTMR QUTMR;
  RegisterQUPRD QUPRD;
  RegisterQWDTMR QWDTMR;
  RegisterQWDPRD QWDPRD;
  RegisterQDECCTL QDECCTL;
  RegisterQEPCTL QEPCTL;
  RegisterQCAPCTL QCAPCTL;
  RegisterQPOSCTL QPOSCTL;
  RegisterQEINT QEINT;
  RegisterQFLG QFLG;
  RegisterQCLR QCLR;
  RegisterQFRC QFRC;
  RegisterQEPSTS QEPSTS;
  RegisterQCTMR QCTMR;
  RegisterQCPRD QCPRD;
  RegisterQCTMRLAT QCTMRLAT;
  RegisterQCPRDLAT QCPRDLAT;
  uint8_t RESERVED_OFFSETS_0[26];
  RegisterREVID REVID;
} PeripheralEQEP0;

typedef union {
  struct {
    uint16_t CTRMODE : 2;
    uint16_t PHSEN : 1;
    uint16_t PRDLD : 1;
    uint16_t SYNCOSEL : 2;
    uint16_t SWFSYNC : 1;
    uint16_t HSPCLKDIV : 3;
    uint16_t CLKDIV : 3;
    uint16_t PHSDIR : 1;
    uint16_t FREE_SOFT : 2;
  };
  uint16_t raw;
} RegisterTBCTL;

typedef union {
  struct {
    uint16_t CTRDIR : 1;
    uint16_t SYNCI : 1;
    uint16_t CTRMAX : 1;
    uint16_t RESERVED_1 : 13;
  };
  uint16_t raw;
} RegisterTBSTS;

typedef union {
  struct {
    uint16_t RESERVED_1 : 8;
    uint16_t TBPHSH : 8;
  };
  uint16_t raw;
} RegisterTBPHSHR;

typedef union {
  struct {
    uint16_t TBPHS : 16;
  };
  uint16_t raw;
} RegisterTBPHS;

typedef union {
  struct {
    uint16_t TBCNT : 16;
  };
  uint16_t raw;
} RegisterTBCNT;

typedef union {
  struct {
    uint16_t TBPRD : 16;
  };
  uint16_t raw;
} RegisterTBPRD;

typedef union {
  struct {
    uint16_t LOADAMODE : 2;
    uint16_t LOADBMODE : 2;
    uint16_t SHDWAMODE : 1;
    uint16_t RESERVED_3 : 1;
    uint16_t SHDWBMODE : 1;
    uint16_t RESERVED_2 : 1;
    uint16_t SHDWAFULL : 1;
    uint16_t SHDWBFULL : 1;
    uint16_t RESERVED_1 : 6;
  };
  uint16_t raw;
} RegisterCMPCTL;

typedef union {
  struct {
    uint16_t RESERVED_1 : 8;
    uint16_t CMPAHR : 8;
  };
  uint16_t raw;
} RegisterCMPAHR;

typedef union {
  struct {
    uint16_t CMPA : 16;
  };
  uint16_t raw;
} RegisterCMPA;

typedef union {
  struct {
    uint16_t CMPB : 16;
  };
  uint16_t raw;
} RegisterCMPB;

typedef union {
  struct {
    uint16_t ZRO : 2;
    uint16_t PRD : 2;
    uint16_t CAU : 2;
    uint16_t CAD : 2;
    uint16_t CBU : 2;
    uint16_t CBD : 2;
    uint16_t RESERVED_1 : 4;
  };
  uint16_t raw;
} RegisterAQCTLA;

typedef union {
  struct {
    uint16_t ZRO : 2;
    uint16_t PRD : 2;
    uint16_t CAU : 2;
    uint16_t CAD : 2;
    uint16_t CBU : 2;
    uint16_t CBD : 2;
    uint16_t RESERVED_1 : 4;
  };
  uint16_t raw;
} RegisterAQCTLB;

typedef union {
  struct {
    uint16_t ACTSFA : 2;
    uint16_t OTSFA : 1;
    uint16_t ACTSFB : 2;
    uint16_t OTSFB : 1;
    uint16_t RLDCSF : 2;
    uint16_t RESERVED_1 : 8;
  };
  uint16_t raw;
} RegisterAQSFRC;

typedef union {
  struct {
    uint16_t CSFA : 2;
    uint16_t CSFB : 2;
    uint16_t RESERVED_1 : 12;
  };
  uint16_t raw;
} RegisterAQCSFRC;

typedef union {
  struct {
    uint16_t OUT_MODE : 2;
    uint16_t POLSEL : 2;
    uint16_t IN_MODE : 2;
    uint16_t RESERVED_1 : 10;
  };
  uint16_t raw;
} RegisterDBCTL;

typedef union {
  struct {
    uint16_t DEL : 10;
    uint16_t RESERVED_1 : 6;
  };
  uint16_t raw;
} RegisterDBRED;

typedef union {
  struct {
    uint16_t DEL : 10;
    uint16_t RESERVED_1 : 6;
  };
  uint16_t raw;
} RegisterDBFED;

typedef union {
  struct {
    uint16_t CBCN : 8;
    uint16_t OSHTN : 8;
  };
  uint16_t raw;
} RegisterTZSEL;

typedef union {
  struct {
    uint16_t TZA : 2;
    uint16_t TZB : 2;
    uint16_t RESERVED_1 : 12;
  };
  uint16_t raw;
} RegisterTZCTL;

typedef union {
  struct {
    uint16_t RESERVED_2 : 1;
    uint16_t CBC : 1;
    uint16_t OST : 1;
    uint16_t RESERVED_1 : 13;
  };
  uint16_t raw;
} RegisterTZEINT;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t CBC : 1;
    uint16_t OST : 1;
    uint16_t RESERVED_1 : 13;
  };
  uint16_t raw;
} RegisterTZFLG;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t CBC : 1;
    uint16_t OST : 1;
    uint16_t RESERVED_1 : 13;
  };
  uint16_t raw;
} RegisterTZCLR;

typedef union {
  struct {
    uint16_t RESERVED_2 : 1;
    uint16_t CBC : 1;
    uint16_t OST : 1;
    uint16_t RESERVED_1 : 13;
  };
  uint16_t raw;
} RegisterTZFRC;

typedef union {
  struct {
    uint16_t INTSEL : 3;
    uint16_t INTEN : 1;
    uint16_t RESERVED_1 : 12;
  };
  uint16_t raw;
} RegisterETSEL;

typedef union {
  struct {
    uint16_t INTPRD : 2;
    uint16_t INTCNT : 2;
    uint16_t RESERVED_1 : 12;
  };
  uint16_t raw;
} RegisterETPS;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t RESERVED_1 : 15;
  };
  uint16_t raw;
} RegisterETFLG;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t RESERVED_1 : 15;
  };
  uint16_t raw;
} RegisterETCLR;

typedef union {
  struct {
    uint16_t INT : 1;
    uint16_t RESERVED_1 : 15;
  };
  uint16_t raw;
} RegisterETFRC;

typedef union {
  struct {
    uint16_t CHPEN : 1;
    uint16_t OSHTWTH : 4;
    uint16_t CHPFREQ : 3;
    uint16_t CHPDUTY : 3;
    uint16_t RESERVED_1 : 5;
  };
  uint16_t raw;
} RegisterPCCTL;

typedef union {
  struct {
    uint16_t EDGMODE : 2;
    uint16_t CTLMODE : 1;
    uint16_t HRLOAD : 1;
    uint16_t RESERVED_1 : 12;
  };
  uint16_t raw;
} RegisterHRCNFG;

typedef struct {
  RegisterTBCTL TBCTL;
  RegisterTBSTS TBSTS;
  RegisterTBPHSHR TBPHSHR;
  RegisterTBPHS TBPHS;
  RegisterTBCNT TBCNT;
  RegisterTBPRD TBPRD;
  uint8_t RESERVED_OFFSETS_0[2];
  RegisterCMPCTL CMPCTL;
  RegisterCMPAHR CMPAHR;
  RegisterCMPA CMPA;
  RegisterCMPB CMPB;
  RegisterAQCTLA AQCTLA;
  RegisterAQCTLB AQCTLB;
  RegisterAQSFRC AQSFRC;
  RegisterAQCSFRC AQCSFRC;
  RegisterDBCTL DBCTL;
  RegisterDBRED DBRED;
  RegisterDBFED DBFED;
  RegisterTZSEL TZSEL;
  uint8_t RESERVED_OFFSETS_1[2];
  RegisterTZCTL TZCTL;
  RegisterTZEINT TZEINT;
  RegisterTZFLG TZFLG;
  RegisterTZCLR TZCLR;
  RegisterTZFRC TZFRC;
  RegisterETSEL ETSEL;
  RegisterETPS ETPS;
  RegisterETFLG ETFLG;
  RegisterETCLR ETCLR;
  RegisterETFRC ETFRC;
  RegisterPCCTL PCCTL;
  uint8_t RESERVED_OFFSETS_2[130];
  RegisterHRCNFG HRCNFG;
} PeripheralEPWM0;

typedef union {
  struct {
    uint32_t MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t MAJOR : 3;
    uint32_t RTL : 5;
    uint32_t FUNC : 12;
    uint32_t RESERVED1 : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterPID;

typedef union {
  struct {
    uint32_t MODESEL : 1;
    uint32_t AUTO_UFLOW_RESTART : 1;
    uint32_t RESERVED2 : 6;
    uint32_t CLKDIV : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterCTRL;

typedef union {
  struct {
    uint32_t LIDD_MODE_SEL : 3;
    uint32_t ALEPOL : 1;
    uint32_t RS_EN_POL : 1;
    uint32_t WS_DIR_POL : 1;
    uint32_t CS0_E0_POL : 1;
    uint32_t CS1_E1_POL : 1;
    uint32_t LIDD_DMA_EN : 1;
    uint32_t DMA_CS0_CS1 : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterLIDD_CTRL;

typedef union {
  struct {
    uint32_t TA : 2;
    uint32_t R_HOLD : 4;
    uint32_t R_STROBE : 6;
    uint32_t R_SU : 5;
    uint32_t W_HOLD : 4;
    uint32_t W_STROBE : 6;
    uint32_t W_SU : 5;
  };
  uint32_t raw;
} RegisterLIDD_CS0_CONF;

typedef union {
  struct {
    uint32_t ADR_INDX : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterLIDD_CS0_ADDR;

typedef union {
  struct {
    uint32_t DATA : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterLIDD_CS0_DATA;

typedef union {
  struct {
    uint32_t TA : 2;
    uint32_t R_HOLD : 4;
    uint32_t R_STROBE : 6;
    uint32_t R_SU : 5;
    uint32_t W_HOLD : 4;
    uint32_t W_STROBE : 6;
    uint32_t W_SU : 5;
  };
  uint32_t raw;
} RegisterLIDD_CS1_CONF;

typedef union {
  struct {
    uint32_t ADR_INDX : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterLIDD_CS1_ADDR;

typedef union {
  struct {
    uint32_t DATA : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterLIDD_CS1_DATA;

typedef union {
  struct {
    uint32_t LCDEN : 1;
    uint32_t LCDBW : 1;
    uint32_t RESERVED3 : 5;
    uint32_t LCDTFT : 1;
    uint32_t RDORDER : 1;
    uint32_t NONO8B : 1;
    uint32_t RESERVED2 : 2;
    uint32_t REQDLY : 8;
    uint32_t PALMODE : 2;
    uint32_t NIBMODE : 1;
    uint32_t TFTMAP : 1;
    uint32_t STN565 : 1;
    uint32_t TFT24 : 1;
    uint32_t TFT24UNPACKED : 1;
    uint32_t RESERVED1 : 5;
  };
  uint32_t raw;
} RegisterRASTER_CTRL;

typedef union {
  struct {
    uint32_t RESERVED1 : 3;
    uint32_t PPLMSB : 1;
    uint32_t PPLLSB : 6;
    uint32_t HSW : 6;
    uint32_t HFP : 8;
    uint32_t HBP : 8;
  };
  uint32_t raw;
} RegisterRASTER_TIMING_0;

typedef union {
  struct {
    uint32_t LPP : 10;
    uint32_t VSW : 6;
    uint32_t VFP : 8;
    uint32_t VBP : 8;
  };
  uint32_t raw;
} RegisterRASTER_TIMING_1;

typedef union {
  struct {
    uint32_t HFP_HIGHBITS : 2;
    uint32_t RESERVED3 : 2;
    uint32_t HBP_HIGHBITS : 2;
    uint32_t RESERVED2 : 2;
    uint32_t ACB : 8;
    uint32_t ACBI : 4;
    uint32_t IVS : 1;
    uint32_t IHS : 1;
    uint32_t IPC : 1;
    uint32_t IEO : 1;
    uint32_t PHSVS_RF : 1;
    uint32_t PHSVS_ON_OFF : 1;
    uint32_t LPP_B10 : 1;
    uint32_t HSW_HIGHBITS : 4;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterRASTER_TIMING_2;

typedef union {
  struct {
    uint32_t DPDLSB : 16;
    uint32_t LPPT : 10;
    uint32_t RESERVED2 : 3;
    uint32_t HOLS : 1;
    uint32_t RESERVED1 : 1;
    uint32_t SPEN : 1;
  };
  uint32_t raw;
} RegisterRASTER_SUBPANEL;

typedef union {
  struct {
    uint32_t DPDMSB : 8;
    uint32_t LPPT_B10 : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterRASTER_SUBPANEL2;

typedef union {
  struct {
    uint32_t FRAME_MODE : 1;
    uint32_t BIGENDIAN : 1;
    uint32_t RESERVED4 : 1;
    uint32_t BYTE_SWAP : 1;
    uint32_t BURST_SIZE : 3;
    uint32_t RESERVED3 : 1;
    uint32_t TH_FIFO_READY : 3;
    uint32_t RESERVED2 : 5;
    uint32_t DMA_MASTER_PRIO : 3;
    uint32_t RESERVED1 : 13;
  };
  uint32_t raw;
} RegisterLCDDMA_CTRL;

typedef union {
  struct {
    uint32_t RESERVED1 : 2;
    uint32_t FB0_BASE : 30;
  };
  uint32_t raw;
} RegisterLCDDMA_FB0_BASE;

typedef union {
  struct {
    uint32_t RESERVED1 : 2;
    uint32_t FB0_CEIL : 30;
  };
  uint32_t raw;
} RegisterLCDDMA_FB0_CEILING;

typedef union {
  struct {
    uint32_t RESERVED1 : 2;
    uint32_t FB1_BASE : 30;
  };
  uint32_t raw;
} RegisterLCDDMA_FB1_BASE;

typedef union {
  struct {
    uint32_t RESERVED1 : 2;
    uint32_t FB1_CEIL : 30;
  };
  uint32_t raw;
} RegisterLCDDMA_FB1_CEILING;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t IDLEMODE : 2;
    uint32_t STANDBYMODE : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t DONE_RAW_SET : 1;
    uint32_t RECURRENT_RASTER_DONE_RAW_SET : 1;
    uint32_t SYNC_RAW_SET : 1;
    uint32_t ACB_RAW_SET : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FUF_RAW_SET : 1;
    uint32_t PL_RAW_SET : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOF0_RAW_SET : 1;
    uint32_t EOF1_RAW_SET : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW;

typedef union {
  struct {
    uint32_t DONE_EN_CLR : 1;
    uint32_t RECURRENT_RASTER_DONE_EN_CLR : 1;
    uint32_t SYNC_EN_CLR : 1;
    uint32_t ACB_EN_CLR : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FUF_EN_CLR : 1;
    uint32_t PL_EN_CLR : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOF0_EN_CLR : 1;
    uint32_t EOF1_EN_CLR : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQSTATUS;

typedef union {
  struct {
    uint32_t DONE_EN_SET : 1;
    uint32_t RECURRENT_RASTER_DONE_EN_SET : 1;
    uint32_t SYNC_EN_SET : 1;
    uint32_t ACB_EN_SET : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FUF_EN_SET : 1;
    uint32_t PL_EN_SET : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOF0_EN_SET : 1;
    uint32_t EOF1_EN_SET : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET;

typedef union {
  struct {
    uint32_t DONE_EN_CLR : 1;
    uint32_t RECURRENT_RASTER_DONE_EN_CLR : 1;
    uint32_t SYNC_EN_CLR : 1;
    uint32_t ACB_EN_CLR : 1;
    uint32_t RESERVED3 : 1;
    uint32_t FUF_EN_CLR : 1;
    uint32_t PL_EN_CLR : 1;
    uint32_t RESERVED2 : 1;
    uint32_t EOF0_EN_CLR : 1;
    uint32_t EOF1_EN_CLR : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLEAR;

typedef union {
  struct {
    uint32_t CORE_CLK_EN : 1;
    uint32_t LIDD_CLK_EN : 1;
    uint32_t DMA_CLK_EN : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterCLKC_ENABLE;

typedef union {
  struct {
    uint32_t CORE_RST : 1;
    uint32_t LIDD_RST : 1;
    uint32_t DMA_RST : 1;
    uint32_t MAIN_RST : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterCLKC_RESET;

typedef struct {
  RegisterPID PID;
  RegisterCTRL CTRL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterLIDD_CTRL LIDD_CTRL;
  RegisterLIDD_CS0_CONF LIDD_CS0_CONF;
  RegisterLIDD_CS0_ADDR LIDD_CS0_ADDR;
  RegisterLIDD_CS0_DATA LIDD_CS0_DATA;
  RegisterLIDD_CS1_CONF LIDD_CS1_CONF;
  RegisterLIDD_CS1_ADDR LIDD_CS1_ADDR;
  RegisterLIDD_CS1_DATA LIDD_CS1_DATA;
  RegisterRASTER_CTRL RASTER_CTRL;
  RegisterRASTER_TIMING_0 RASTER_TIMING_0;
  RegisterRASTER_TIMING_1 RASTER_TIMING_1;
  RegisterRASTER_TIMING_2 RASTER_TIMING_2;
  RegisterRASTER_SUBPANEL RASTER_SUBPANEL;
  RegisterRASTER_SUBPANEL2 RASTER_SUBPANEL2;
  RegisterLCDDMA_CTRL LCDDMA_CTRL;
  RegisterLCDDMA_FB0_BASE LCDDMA_FB0_BASE;
  RegisterLCDDMA_FB0_CEILING LCDDMA_FB0_CEILING;
  RegisterLCDDMA_FB1_BASE LCDDMA_FB1_BASE;
  RegisterLCDDMA_FB1_CEILING LCDDMA_FB1_CEILING;
  RegisterSYSCONFIG SYSCONFIG;
  RegisterIRQSTATUS_RAW IRQSTATUS_RAW;
  RegisterIRQSTATUS IRQSTATUS;
  RegisterIRQENABLE_SET IRQENABLE_SET;
  RegisterIRQENABLE_CLEAR IRQENABLE_CLEAR;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterCLKC_ENABLE CLKC_ENABLE;
  RegisterCLKC_RESET CLKC_RESET;
} PeripheralLCD_CONTROLLER;

typedef union {
  struct {
    uint16_t PID : 16;
  };
  uint16_t raw;
} RegisterPID;

typedef union {
  struct {
    uint32_t NUM_DMACH : 3;
    uint32_t RESERVED7 : 1;
    uint32_t NUM_QDMACH : 3;
    uint32_t RESERVED6 : 1;
    uint32_t NUM_INTCH : 3;
    uint32_t RESERVED5 : 1;
    uint32_t NUM_PAENTRY : 3;
    uint32_t RESERVED4 : 1;
    uint32_t NUM_EVQUE : 3;
    uint32_t RESERVED3 : 1;
    uint32_t NUM_REGN : 2;
    uint32_t RESERVED2 : 2;
    uint32_t CHMAP_EXIST : 1;
    uint32_t MP_EXIST : 1;
    uint32_t RESERVED1 : 6;
  };
  uint32_t raw;
} RegisterCCCFG;

typedef union {
  struct {
    uint32_t SOFTRESET : 1;
    uint32_t FREEEMU : 1;
    uint32_t IDLEMODE : 2;
    uint32_t STANDBYMODE : 2;
    uint32_t RESERVED1 : 26;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_0;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_1;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_2;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_3;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_4;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_5;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_6;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_7;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_8;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_9;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_10;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_11;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_12;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_13;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_14;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_15;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_16;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_17;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_18;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_19;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_20;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_21;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_22;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_23;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_24;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_25;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_26;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_27;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_28;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_29;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_30;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_31;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_32;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_33;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_34;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_35;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_36;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_37;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_38;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_39;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_40;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_41;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_42;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_43;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_44;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_45;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_46;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_47;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_48;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_49;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_50;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_51;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_52;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_53;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_54;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_55;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_56;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_57;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_58;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_59;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_60;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_61;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_62;

typedef union {
  struct {
    uint32_t RESERVED2 : 5;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterDCHMAP_63;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_0;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_1;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_2;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_3;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_4;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_5;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_6;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t TRWORD : 3;
    uint32_t PAENTRY : 9;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterQCHMAP_7;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_0;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_1;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_2;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_3;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_4;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_5;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_6;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterDMAQNUM_7;

typedef union {
  struct {
    uint32_t E0 : 3;
    uint32_t RESERVED8 : 1;
    uint32_t E1 : 3;
    uint32_t RESERVED7 : 1;
    uint32_t E2 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t E3 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t E4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t E5 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t E6 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t E7 : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterQDMAQNUM;

typedef union {
  struct {
    uint32_t PRIQ0 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t PRIQ1 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t PRIQ2 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t PRIQ3 : 3;
    uint32_t RESERVED1 : 17;
  };
  uint32_t raw;
} RegisterQUEPRI;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEMR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEMRH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEMCR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEMCRH;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQEMR;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQEMCR;

typedef union {
  struct {
    uint32_t QTHRXCD0 : 1;
    uint32_t QTHRXCD1 : 1;
    uint32_t QTHRXCD2 : 1;
    uint32_t QTHRXCD3 : 1;
    uint32_t RESERVED2 : 12;
    uint32_t TCCERR : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterCCERR;

typedef union {
  struct {
    uint32_t QTHRXCD0 : 1;
    uint32_t QTHRXCD1 : 1;
    uint32_t QTHRXCD2 : 1;
    uint32_t QTHRXCD3 : 1;
    uint32_t RESERVED2 : 12;
    uint32_t TCCERR : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterCCERRCLR;

typedef union {
  struct {
    uint32_t EVAL : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterEEVAL;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE0;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH0;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE1;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH1;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE2;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH2;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE3;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH3;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE4;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH4;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE5;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH5;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE6;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH6;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAE7;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterDRAEH7;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_0;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_1;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_2;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_3;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_4;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_5;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_6;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQRAE_7;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E0;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E1;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E2;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E3;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E4;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E5;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E6;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E7;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E8;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E9;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E10;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E11;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E12;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E13;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E14;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ0E15;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E0;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E1;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E2;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E3;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E4;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E5;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E6;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E7;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E8;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E9;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E10;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E11;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E12;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E13;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E14;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ1E15;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E0;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E1;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E2;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E3;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E4;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E5;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E6;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E7;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E8;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E9;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E10;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E11;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E12;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E13;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E14;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ2E15;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E0;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E1;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E2;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E3;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E4;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E5;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E6;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E7;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E8;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E9;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E10;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E11;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E12;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E13;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E14;

typedef union {
  struct {
    uint32_t ENUM : 6;
    uint32_t ETYPE : 2;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQ3E15;

typedef union {
  struct {
    uint32_t STRTPTR : 4;
    uint32_t RESERVED4 : 4;
    uint32_t NUMVAL : 5;
    uint32_t RESERVED3 : 3;
    uint32_t WM : 5;
    uint32_t RESERVED2 : 3;
    uint32_t THRXCD : 1;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterQSTAT_0;

typedef union {
  struct {
    uint32_t STRTPTR : 4;
    uint32_t RESERVED4 : 4;
    uint32_t NUMVAL : 5;
    uint32_t RESERVED3 : 3;
    uint32_t WM : 5;
    uint32_t RESERVED2 : 3;
    uint32_t THRXCD : 1;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterQSTAT_1;

typedef union {
  struct {
    uint32_t STRTPTR : 4;
    uint32_t RESERVED4 : 4;
    uint32_t NUMVAL : 5;
    uint32_t RESERVED3 : 3;
    uint32_t WM : 5;
    uint32_t RESERVED2 : 3;
    uint32_t THRXCD : 1;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterQSTAT_2;

typedef union {
  struct {
    uint32_t STRTPTR : 4;
    uint32_t RESERVED4 : 4;
    uint32_t NUMVAL : 5;
    uint32_t RESERVED3 : 3;
    uint32_t WM : 5;
    uint32_t RESERVED2 : 3;
    uint32_t THRXCD : 1;
    uint32_t RESERVED1 : 7;
  };
  uint32_t raw;
} RegisterQSTAT_3;

typedef union {
  struct {
    uint32_t Q0 : 5;
    uint32_t RESERVED4 : 3;
    uint32_t Q1 : 5;
    uint32_t RESERVED3 : 3;
    uint32_t Q2 : 5;
    uint32_t RESERVED2 : 3;
    uint32_t Q3 : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterQWMTHRA;

typedef union {
  struct {
    uint32_t EVTACTV : 1;
    uint32_t QEVTACTV : 1;
    uint32_t TRACTV : 1;
    uint32_t RESERVED4 : 1;
    uint32_t ACTV : 1;
    uint32_t RESERVED3 : 3;
    uint32_t COMPACTV : 6;
    uint32_t RESERVED2 : 2;
    uint32_t QUEACTV0 : 1;
    uint32_t QUEACTV1 : 1;
    uint32_t QUEACTV2 : 1;
    uint32_t QUEACTV3 : 1;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterCCSTAT;

typedef union {
  struct {
    uint32_t FADDR : 32;
  };
  uint32_t raw;
} RegisterMPFAR;

typedef union {
  struct {
    uint32_t UXE : 1;
    uint32_t UWE : 1;
    uint32_t URE : 1;
    uint32_t SXE : 1;
    uint32_t SWE : 1;
    uint32_t SRE : 1;
    uint32_t RESERVED2 : 3;
    uint32_t FID : 4;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterMPFSR;

typedef union {
  struct {
    uint32_t MPFCLR : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterMPFCR;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPAG;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_0;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_1;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_2;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_3;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_4;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_5;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_6;

typedef union {
  struct {
    uint32_t UX : 1;
    uint32_t UW : 1;
    uint32_t UR : 1;
    uint32_t SX : 1;
    uint32_t SW : 1;
    uint32_t SR : 1;
    uint32_t RESERVED3 : 2;
    uint32_t RESERVED2 : 1;
    uint32_t EXT : 1;
    uint32_t AIDM : 6;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterMPPA_7;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterER;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterERH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterECR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterECRH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterESR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterESRH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterCER;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterCERH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEER;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEERH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEECR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEECRH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEESR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterEESRH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterSER;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterSERH;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterSECR;

typedef union {
  struct {
    uint32_t EN : 32;
  };
  uint32_t raw;
} RegisterSECRH;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIER;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIERH;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIECR;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIECRH;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIESR;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIESRH;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIPR;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterIPRH;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterICR;

typedef union {
  struct {
    uint32_t IN : 32;
  };
  uint32_t raw;
} RegisterICRH;

typedef union {
  struct {
    uint32_t EVAL : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterIEVAL;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQER;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQEER;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQEECR;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQEESR;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQSER;

typedef union {
  struct {
    uint32_t EN : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterQSECR;

typedef struct {
  RegisterPID PID;
  uint8_t RESERVED_OFFSETS_0[2];
  RegisterCCCFG CCCFG;
  uint8_t RESERVED_OFFSETS_1[8];
  RegisterSYSCONFIG SYSCONFIG;
  uint8_t RESERVED_OFFSETS_2[236];
  RegisterDCHMAP_0 DCHMAP_0;
  RegisterDCHMAP_1 DCHMAP_1;
  RegisterDCHMAP_2 DCHMAP_2;
  RegisterDCHMAP_3 DCHMAP_3;
  RegisterDCHMAP_4 DCHMAP_4;
  RegisterDCHMAP_5 DCHMAP_5;
  RegisterDCHMAP_6 DCHMAP_6;
  RegisterDCHMAP_7 DCHMAP_7;
  RegisterDCHMAP_8 DCHMAP_8;
  RegisterDCHMAP_9 DCHMAP_9;
  RegisterDCHMAP_10 DCHMAP_10;
  RegisterDCHMAP_11 DCHMAP_11;
  RegisterDCHMAP_12 DCHMAP_12;
  RegisterDCHMAP_13 DCHMAP_13;
  RegisterDCHMAP_14 DCHMAP_14;
  RegisterDCHMAP_15 DCHMAP_15;
  RegisterDCHMAP_16 DCHMAP_16;
  RegisterDCHMAP_17 DCHMAP_17;
  RegisterDCHMAP_18 DCHMAP_18;
  RegisterDCHMAP_19 DCHMAP_19;
  RegisterDCHMAP_20 DCHMAP_20;
  RegisterDCHMAP_21 DCHMAP_21;
  RegisterDCHMAP_22 DCHMAP_22;
  RegisterDCHMAP_23 DCHMAP_23;
  RegisterDCHMAP_24 DCHMAP_24;
  RegisterDCHMAP_25 DCHMAP_25;
  RegisterDCHMAP_26 DCHMAP_26;
  RegisterDCHMAP_27 DCHMAP_27;
  RegisterDCHMAP_28 DCHMAP_28;
  RegisterDCHMAP_29 DCHMAP_29;
  RegisterDCHMAP_30 DCHMAP_30;
  RegisterDCHMAP_31 DCHMAP_31;
  RegisterDCHMAP_32 DCHMAP_32;
  RegisterDCHMAP_33 DCHMAP_33;
  RegisterDCHMAP_34 DCHMAP_34;
  RegisterDCHMAP_35 DCHMAP_35;
  RegisterDCHMAP_36 DCHMAP_36;
  RegisterDCHMAP_37 DCHMAP_37;
  RegisterDCHMAP_38 DCHMAP_38;
  RegisterDCHMAP_39 DCHMAP_39;
  RegisterDCHMAP_40 DCHMAP_40;
  RegisterDCHMAP_41 DCHMAP_41;
  RegisterDCHMAP_42 DCHMAP_42;
  RegisterDCHMAP_43 DCHMAP_43;
  RegisterDCHMAP_44 DCHMAP_44;
  RegisterDCHMAP_45 DCHMAP_45;
  RegisterDCHMAP_46 DCHMAP_46;
  RegisterDCHMAP_47 DCHMAP_47;
  RegisterDCHMAP_48 DCHMAP_48;
  RegisterDCHMAP_49 DCHMAP_49;
  RegisterDCHMAP_50 DCHMAP_50;
  RegisterDCHMAP_51 DCHMAP_51;
  RegisterDCHMAP_52 DCHMAP_52;
  RegisterDCHMAP_53 DCHMAP_53;
  RegisterDCHMAP_54 DCHMAP_54;
  RegisterDCHMAP_55 DCHMAP_55;
  RegisterDCHMAP_56 DCHMAP_56;
  RegisterDCHMAP_57 DCHMAP_57;
  RegisterDCHMAP_58 DCHMAP_58;
  RegisterDCHMAP_59 DCHMAP_59;
  RegisterDCHMAP_60 DCHMAP_60;
  RegisterDCHMAP_61 DCHMAP_61;
  RegisterDCHMAP_62 DCHMAP_62;
  RegisterDCHMAP_63 DCHMAP_63;
  RegisterQCHMAP_0 QCHMAP_0;
  RegisterQCHMAP_1 QCHMAP_1;
  RegisterQCHMAP_2 QCHMAP_2;
  RegisterQCHMAP_3 QCHMAP_3;
  RegisterQCHMAP_4 QCHMAP_4;
  RegisterQCHMAP_5 QCHMAP_5;
  RegisterQCHMAP_6 QCHMAP_6;
  RegisterQCHMAP_7 QCHMAP_7;
  uint8_t RESERVED_OFFSETS_3[32];
  RegisterDMAQNUM_0 DMAQNUM_0;
  RegisterDMAQNUM_1 DMAQNUM_1;
  RegisterDMAQNUM_2 DMAQNUM_2;
  RegisterDMAQNUM_3 DMAQNUM_3;
  RegisterDMAQNUM_4 DMAQNUM_4;
  RegisterDMAQNUM_5 DMAQNUM_5;
  RegisterDMAQNUM_6 DMAQNUM_6;
  RegisterDMAQNUM_7 DMAQNUM_7;
  RegisterQDMAQNUM QDMAQNUM;
  uint8_t RESERVED_OFFSETS_4[32];
  RegisterQUEPRI QUEPRI;
  uint8_t RESERVED_OFFSETS_5[120];
  RegisterEMR EMR;
  RegisterEMRH EMRH;
  RegisterEMCR EMCR;
  RegisterEMCRH EMCRH;
  RegisterQEMR QEMR;
  RegisterQEMCR QEMCR;
  RegisterCCERR CCERR;
  RegisterCCERRCLR CCERRCLR;
  RegisterEEVAL EEVAL;
  uint8_t RESERVED_OFFSETS_6[28];
  RegisterDRAE0 DRAE0;
  RegisterDRAEH0 DRAEH0;
  RegisterDRAE1 DRAE1;
  RegisterDRAEH1 DRAEH1;
  RegisterDRAE2 DRAE2;
  RegisterDRAEH2 DRAEH2;
  RegisterDRAE3 DRAE3;
  RegisterDRAEH3 DRAEH3;
  RegisterDRAE4 DRAE4;
  RegisterDRAEH4 DRAEH4;
  RegisterDRAE5 DRAE5;
  RegisterDRAEH5 DRAEH5;
  RegisterDRAE6 DRAE6;
  RegisterDRAEH6 DRAEH6;
  RegisterDRAE7 DRAE7;
  RegisterDRAEH7 DRAEH7;
  RegisterQRAE_0 QRAE_0;
  RegisterQRAE_1 QRAE_1;
  RegisterQRAE_2 QRAE_2;
  RegisterQRAE_3 QRAE_3;
  RegisterQRAE_4 QRAE_4;
  RegisterQRAE_5 QRAE_5;
  RegisterQRAE_6 QRAE_6;
  RegisterQRAE_7 QRAE_7;
  uint8_t RESERVED_OFFSETS_7[96];
  RegisterQ0E0 Q0E0;
  RegisterQ0E1 Q0E1;
  RegisterQ0E2 Q0E2;
  RegisterQ0E3 Q0E3;
  RegisterQ0E4 Q0E4;
  RegisterQ0E5 Q0E5;
  RegisterQ0E6 Q0E6;
  RegisterQ0E7 Q0E7;
  RegisterQ0E8 Q0E8;
  RegisterQ0E9 Q0E9;
  RegisterQ0E10 Q0E10;
  RegisterQ0E11 Q0E11;
  RegisterQ0E12 Q0E12;
  RegisterQ0E13 Q0E13;
  RegisterQ0E14 Q0E14;
  RegisterQ0E15 Q0E15;
  RegisterQ1E0 Q1E0;
  RegisterQ1E1 Q1E1;
  RegisterQ1E2 Q1E2;
  RegisterQ1E3 Q1E3;
  RegisterQ1E4 Q1E4;
  RegisterQ1E5 Q1E5;
  RegisterQ1E6 Q1E6;
  RegisterQ1E7 Q1E7;
  RegisterQ1E8 Q1E8;
  RegisterQ1E9 Q1E9;
  RegisterQ1E10 Q1E10;
  RegisterQ1E11 Q1E11;
  RegisterQ1E12 Q1E12;
  RegisterQ1E13 Q1E13;
  RegisterQ1E14 Q1E14;
  RegisterQ1E15 Q1E15;
  RegisterQ2E0 Q2E0;
  RegisterQ2E1 Q2E1;
  RegisterQ2E2 Q2E2;
  RegisterQ2E3 Q2E3;
  RegisterQ2E4 Q2E4;
  RegisterQ2E5 Q2E5;
  RegisterQ2E6 Q2E6;
  RegisterQ2E7 Q2E7;
  RegisterQ2E8 Q2E8;
  RegisterQ2E9 Q2E9;
  RegisterQ2E10 Q2E10;
  RegisterQ2E11 Q2E11;
  RegisterQ2E12 Q2E12;
  RegisterQ2E13 Q2E13;
  RegisterQ2E14 Q2E14;
  RegisterQ2E15 Q2E15;
  RegisterQ3E0 Q3E0;
  RegisterQ3E1 Q3E1;
  RegisterQ3E2 Q3E2;
  RegisterQ3E3 Q3E3;
  RegisterQ3E4 Q3E4;
  RegisterQ3E5 Q3E5;
  RegisterQ3E6 Q3E6;
  RegisterQ3E7 Q3E7;
  RegisterQ3E8 Q3E8;
  RegisterQ3E9 Q3E9;
  RegisterQ3E10 Q3E10;
  RegisterQ3E11 Q3E11;
  RegisterQ3E12 Q3E12;
  RegisterQ3E13 Q3E13;
  RegisterQ3E14 Q3E14;
  RegisterQ3E15 Q3E15;
  uint8_t RESERVED_OFFSETS_8[256];
  RegisterQSTAT_0 QSTAT_0;
  RegisterQSTAT_1 QSTAT_1;
  RegisterQSTAT_2 QSTAT_2;
  RegisterQSTAT_3 QSTAT_3;
  uint8_t RESERVED_OFFSETS_9[16];
  RegisterQWMTHRA QWMTHRA;
  uint8_t RESERVED_OFFSETS_10[28];
  RegisterCCSTAT CCSTAT;
  uint8_t RESERVED_OFFSETS_11[444];
  RegisterMPFAR MPFAR;
  RegisterMPFSR MPFSR;
  RegisterMPFCR MPFCR;
  RegisterMPPAG MPPAG;
  RegisterMPPA_0 MPPA_0;
  RegisterMPPA_1 MPPA_1;
  RegisterMPPA_2 MPPA_2;
  RegisterMPPA_3 MPPA_3;
  RegisterMPPA_4 MPPA_4;
  RegisterMPPA_5 MPPA_5;
  RegisterMPPA_6 MPPA_6;
  RegisterMPPA_7 MPPA_7;
  uint8_t RESERVED_OFFSETS_12[2000];
  RegisterER ER;
  RegisterERH ERH;
  RegisterECR ECR;
  RegisterECRH ECRH;
  RegisterESR ESR;
  RegisterESRH ESRH;
  RegisterCER CER;
  RegisterCERH CERH;
  RegisterEER EER;
  RegisterEERH EERH;
  RegisterEECR EECR;
  RegisterEECRH EECRH;
  RegisterEESR EESR;
  RegisterEESRH EESRH;
  RegisterSER SER;
  RegisterSERH SERH;
  RegisterSECR SECR;
  RegisterSECRH SECRH;
  uint8_t RESERVED_OFFSETS_13[8];
  RegisterIER IER;
  RegisterIERH IERH;
  RegisterIECR IECR;
  RegisterIECRH IECRH;
  RegisterIESR IESR;
  RegisterIESRH IESRH;
  RegisterIPR IPR;
  RegisterIPRH IPRH;
  RegisterICR ICR;
  RegisterICRH ICRH;
  RegisterIEVAL IEVAL;
  uint8_t RESERVED_OFFSETS_14[4];
  RegisterQER QER;
  RegisterQEER QEER;
  RegisterQEECR QEECR;
  RegisterQEESR QEESR;
  RegisterQSER QSER;
  RegisterQSECR QSECR;
} PeripheralEDMA3CC;

typedef union {
  struct {
    uint32_t PID : 32;
  };
  uint32_t raw;
} RegisterPID;

typedef union {
  struct {
    uint32_t FIFOSIZE : 3;
    uint32_t RESERVED3 : 1;
    uint32_t BUSWIDTH : 2;
    uint32_t RESERVED2 : 2;
    uint32_t DREGDEPTH : 2;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterTCCFG;

typedef union {
  struct {
    uint32_t PROGBUSY : 1;
    uint32_t SRCACTV : 1;
    uint32_t WSACTV : 1;
    uint32_t RESERVED5 : 1;
    uint32_t DSTACTV : 3;
    uint32_t RESERVED4 : 1;
    uint32_t RESERVED3 : 1;
    uint32_t RESERVED2 : 3;
    uint32_t DFSTRTPTR : 2;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterTCSTAT;

typedef union {
  struct {
    uint32_t BUSERR : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TRERR : 1;
    uint32_t MMRAERR : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterERRSTAT;

typedef union {
  struct {
    uint32_t BUSERR : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TRERR : 1;
    uint32_t MMRAERR : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterERREN;

typedef union {
  struct {
    uint32_t BUSERR : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TRERR : 1;
    uint32_t MMRAERR : 1;
    uint32_t RESERVED1 : 28;
  };
  uint32_t raw;
} RegisterERRCLR;

typedef union {
  struct {
    uint32_t STAT : 4;
    uint32_t RESERVED3 : 4;
    uint32_t TCC : 6;
    uint32_t RESERVED2 : 2;
    uint32_t TCINTEN : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 14;
  };
  uint32_t raw;
} RegisterERRDET;

typedef union {
  struct {
    uint32_t EVAL : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterERRCMD;

typedef union {
  struct {
    uint32_t RDRATE : 3;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterRDRATE;

typedef union {
  struct {
    uint32_t SAM : 1;
    uint32_t DAM : 1;
    uint32_t RESERVED6 : 2;
    uint32_t PRI : 3;
    uint32_t RESERVED5 : 1;
    uint32_t FWID : 3;
    uint32_t RESERVED4 : 1;
    uint32_t TCC : 6;
    uint32_t RESERVED3 : 2;
    uint32_t TCINTEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterSAOPT;

typedef union {
  struct {
    uint32_t SADDR : 32;
  };
  uint32_t raw;
} RegisterSASRC;

typedef union {
  struct {
    uint32_t ACNT : 16;
    uint32_t BCNT : 16;
  };
  uint32_t raw;
} RegisterSACNT;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterSADST;

typedef union {
  struct {
    uint32_t SBIDX : 16;
    uint32_t DBIDX : 16;
  };
  uint32_t raw;
} RegisterSABIDX;

typedef union {
  struct {
    uint32_t PRIVID : 4;
    uint32_t RESERVED2 : 4;
    uint32_t PRIV : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterSAMPPRXY;

typedef union {
  struct {
    uint32_t ACNTRLD : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterSACNTRLD;

typedef union {
  struct {
    uint32_t SADDRBREF : 32;
  };
  uint32_t raw;
} RegisterSASRCBREF;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterSADSTBREF;

typedef union {
  struct {
    uint32_t ACNTRLD : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterDFCNTRLD;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterDFSRCBREF;

typedef union {
  struct {
    uint32_t DADDRBREF : 32;
  };
  uint32_t raw;
} RegisterDFDSTBREF;

typedef union {
  struct {
    uint32_t SAM : 1;
    uint32_t DAM : 1;
    uint32_t RESERVED6 : 2;
    uint32_t PRI : 3;
    uint32_t RESERVED5 : 1;
    uint32_t FWID : 3;
    uint32_t RESERVED4 : 1;
    uint32_t TCC : 6;
    uint32_t RESERVED3 : 2;
    uint32_t TCINTEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterDFOPT0;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterDFSRC0;

typedef union {
  struct {
    uint32_t ACNT : 16;
    uint32_t BCNT : 16;
  };
  uint32_t raw;
} RegisterDFCNT0;

typedef union {
  struct {
    uint32_t DADDR : 32;
  };
  uint32_t raw;
} RegisterDFDST0;

typedef union {
  struct {
    uint32_t SBIDX : 16;
    uint32_t DBIDX : 16;
  };
  uint32_t raw;
} RegisterDFBIDX0;

typedef union {
  struct {
    uint32_t PRIVID : 4;
    uint32_t RESERVED2 : 4;
    uint32_t PRIV : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterDFMPPRXY0;

typedef union {
  struct {
    uint32_t SAM : 1;
    uint32_t DAM : 1;
    uint32_t RESERVED6 : 2;
    uint32_t PRI : 3;
    uint32_t RESERVED5 : 1;
    uint32_t FWID : 3;
    uint32_t RESERVED4 : 1;
    uint32_t TCC : 6;
    uint32_t RESERVED3 : 2;
    uint32_t TCINTEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterDFOPT1;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterDFSRC1;

typedef union {
  struct {
    uint32_t ACNT : 16;
    uint32_t BCNT : 16;
  };
  uint32_t raw;
} RegisterDFCNT1;

typedef union {
  struct {
    uint32_t DADDR : 32;
  };
  uint32_t raw;
} RegisterDFDST1;

typedef union {
  struct {
    uint32_t SBIDX : 16;
    uint32_t DBIDX : 16;
  };
  uint32_t raw;
} RegisterDFBIDX1;

typedef union {
  struct {
    uint32_t PRIVID : 4;
    uint32_t RESERVED2 : 4;
    uint32_t PRIV : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterDFMPPRXY1;

typedef union {
  struct {
    uint32_t SAM : 1;
    uint32_t DAM : 1;
    uint32_t RESERVED6 : 2;
    uint32_t PRI : 3;
    uint32_t RESERVED5 : 1;
    uint32_t FWID : 3;
    uint32_t RESERVED4 : 1;
    uint32_t TCC : 6;
    uint32_t RESERVED3 : 2;
    uint32_t TCINTEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterDFOPT2;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterDFSRC2;

typedef union {
  struct {
    uint32_t ACNT : 16;
    uint32_t BCNT : 16;
  };
  uint32_t raw;
} RegisterDFCNT2;

typedef union {
  struct {
    uint32_t DADDR : 32;
  };
  uint32_t raw;
} RegisterDFDST2;

typedef union {
  struct {
    uint32_t SBIDX : 16;
    uint32_t DBIDX : 16;
  };
  uint32_t raw;
} RegisterDFBIDX2;

typedef union {
  struct {
    uint32_t PRIVID : 4;
    uint32_t RESERVED2 : 4;
    uint32_t PRIV : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterDFMPPRXY2;

typedef union {
  struct {
    uint32_t SAM : 1;
    uint32_t DAM : 1;
    uint32_t RESERVED6 : 2;
    uint32_t PRI : 3;
    uint32_t RESERVED5 : 1;
    uint32_t FWID : 3;
    uint32_t RESERVED4 : 1;
    uint32_t TCC : 6;
    uint32_t RESERVED3 : 2;
    uint32_t TCINTEN : 1;
    uint32_t RESERVED2 : 1;
    uint32_t TCCHEN : 1;
    uint32_t RESERVED1 : 9;
  };
  uint32_t raw;
} RegisterDFOPT3;

typedef union {
  struct {
    uint32_t RESERVED1 : 32;
  };
  uint32_t raw;
} RegisterDFSRC3;

typedef union {
  struct {
    uint32_t ACNT : 16;
    uint32_t BCNT : 16;
  };
  uint32_t raw;
} RegisterDFCNT3;

typedef union {
  struct {
    uint32_t DADDR : 32;
  };
  uint32_t raw;
} RegisterDFDST3;

typedef union {
  struct {
    uint32_t SBIDX : 16;
    uint32_t DBIDX : 16;
  };
  uint32_t raw;
} RegisterDFBIDX3;

typedef union {
  struct {
    uint32_t PRIVID : 4;
    uint32_t RESERVED2 : 4;
    uint32_t PRIV : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterDFMPPRXY3;

typedef struct {
  RegisterPID PID;
  RegisterTCCFG TCCFG;
  uint8_t RESERVED_OFFSETS_0[248];
  RegisterTCSTAT TCSTAT;
  uint8_t RESERVED_OFFSETS_1[28];
  RegisterERRSTAT ERRSTAT;
  RegisterERREN ERREN;
  RegisterERRCLR ERRCLR;
  RegisterERRDET ERRDET;
  RegisterERRCMD ERRCMD;
  uint8_t RESERVED_OFFSETS_2[12];
  RegisterRDRATE RDRATE;
  uint8_t RESERVED_OFFSETS_3[252];
  RegisterSAOPT SAOPT;
  RegisterSASRC SASRC;
  RegisterSACNT SACNT;
  RegisterSADST SADST;
  RegisterSABIDX SABIDX;
  RegisterSAMPPRXY SAMPPRXY;
  RegisterSACNTRLD SACNTRLD;
  RegisterSASRCBREF SASRCBREF;
  RegisterSADSTBREF SADSTBREF;
  uint8_t RESERVED_OFFSETS_4[28];
  RegisterDFCNTRLD DFCNTRLD;
  RegisterDFSRCBREF DFSRCBREF;
  RegisterDFDSTBREF DFDSTBREF;
  uint8_t RESERVED_OFFSETS_5[116];
  RegisterDFOPT0 DFOPT0;
  RegisterDFSRC0 DFSRC0;
  RegisterDFCNT0 DFCNT0;
  RegisterDFDST0 DFDST0;
  RegisterDFBIDX0 DFBIDX0;
  RegisterDFMPPRXY0 DFMPPRXY0;
  uint8_t RESERVED_OFFSETS_6[40];
  RegisterDFOPT1 DFOPT1;
  RegisterDFSRC1 DFSRC1;
  RegisterDFCNT1 DFCNT1;
  RegisterDFDST1 DFDST1;
  RegisterDFBIDX1 DFBIDX1;
  RegisterDFMPPRXY1 DFMPPRXY1;
  uint8_t RESERVED_OFFSETS_7[40];
  RegisterDFOPT2 DFOPT2;
  RegisterDFSRC2 DFSRC2;
  RegisterDFCNT2 DFCNT2;
  RegisterDFDST2 DFDST2;
  RegisterDFBIDX2 DFBIDX2;
  RegisterDFMPPRXY2 DFMPPRXY2;
  uint8_t RESERVED_OFFSETS_8[40];
  RegisterDFOPT3 DFOPT3;
  RegisterDFSRC3 DFSRC3;
  RegisterDFCNT3 DFCNT3;
  RegisterDFDST3 DFDST3;
  RegisterDFBIDX3 DFBIDX3;
  RegisterDFMPPRXY3 DFMPPRXY3;
} PeripheralEDMA3TC0;

typedef union {
  struct {
    uint32_t CPSW_3G_MINOR_VER : 8;
    uint32_t CPSW_3G_MAJ_VER : 3;
    uint32_t CPSW_3G_RTL_VER : 5;
    uint32_t CPSW_3G_IDENT : 16;
  };
  uint32_t raw;
} RegisterID_VER;

typedef union {
  struct {
    uint32_t FIFO_LOOPBACK : 1;
    uint32_t VLAN_AWARE : 1;
    uint32_t RX_VLAN_ENCAP : 1;
    uint32_t DLR_EN : 1;
    uint32_t RESERVED_BITS_0 : 28;
  };
  uint32_t raw;
} RegisterCONTROL;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t RESERVED_BITS_0 : 31;
  };
  uint32_t raw;
} RegisterSOFT_RESET;

typedef union {
  struct {
    uint32_t P0_STAT_EN : 1;
    uint32_t P1_STAT_EN : 1;
    uint32_t P2_STAT_EN : 1;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterSTAT_PORT_EN;

typedef union {
  struct {
    uint32_t ESC_PRI_LD_VAL : 5;
    uint32_t RESERVED_BITS_0 : 3;
    uint32_t P0_PTYPE_ESC : 1;
    uint32_t P1_PTYPE_ESC : 1;
    uint32_t P2_PTYPE_ESC : 1;
    uint32_t RESERVED_BITS_1 : 5;
    uint32_t P1_PRI1_SHAPE_EN : 1;
    uint32_t P1_PRI2_SHAPE_EN : 1;
    uint32_t P1_PRI3_SHAPE_EN : 1;
    uint32_t P2_PRI1_SHAPE_EN : 1;
    uint32_t P2_PRI2_SHAPE_EN : 1;
    uint32_t P2_PRI3_SHAPE_EN : 1;
    uint32_t RESERVED_BITS_2 : 10;
  };
  uint32_t raw;
} RegisterPTYPE;

typedef union {
  struct {
    uint32_t SOFT_IDLE : 1;
    uint32_t RESERVED_BITS_0 : 31;
  };
  uint32_t raw;
} RegisterSOFT_IDLE;

typedef union {
  struct {
    uint32_t CPDMA_THRU_RATE : 4;
    uint32_t RESERVED_BITS_0 : 8;
    uint32_t SL_RX_THRU_RATE : 4;
    uint32_t RESERVED_BITS_1 : 16;
  };
  uint32_t raw;
} RegisterTHRU_RATE;

typedef union {
  struct {
    uint32_t GAP_THRESH : 5;
    uint32_t RESERVED_BITS_0 : 27;
  };
  uint32_t raw;
} RegisterGAP_THRESH;

typedef union {
  struct {
    uint32_t TX_START_WDS : 11;
    uint32_t RESERVED_BITS_0 : 21;
  };
  uint32_t raw;
} RegisterTX_START_WDS;

typedef union {
  struct {
    uint32_t P0_FLOW_EN : 1;
    uint32_t P1_FLOW_EN : 1;
    uint32_t P2_FLOW_EN : 1;
    uint32_t RESERVED_BITS_0 : 29;
  };
  uint32_t raw;
} RegisterFLOW_CONTROL;

typedef union {
  struct {
    uint32_t VLAN_LTYPE1 : 16;
    uint32_t VLAN_LTYPE2 : 16;
  };
  uint32_t raw;
} RegisterVLAN_LTYPE;

typedef union {
  struct {
    uint32_t TS_LTYPE1 : 16;
    uint32_t TS_LTYPE2 : 6;
    uint32_t RESERVED_BITS_0 : 10;
  };
  uint32_t raw;
} RegisterTS_LTYPE;

typedef union {
  struct {
    uint32_t DLR_LTYPE : 16;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterDLR_LTYPE;

typedef struct {
  RegisterID_VER ID_VER;
  RegisterCONTROL CONTROL;
  RegisterSOFT_RESET SOFT_RESET;
  RegisterSTAT_PORT_EN STAT_PORT_EN;
  RegisterPTYPE PTYPE;
  RegisterSOFT_IDLE SOFT_IDLE;
  RegisterTHRU_RATE THRU_RATE;
  RegisterGAP_THRESH GAP_THRESH;
  RegisterTX_START_WDS TX_START_WDS;
  RegisterFLOW_CONTROL FLOW_CONTROL;
  RegisterVLAN_LTYPE VLAN_LTYPE;
  RegisterTS_LTYPE TS_LTYPE;
  RegisterDLR_LTYPE DLR_LTYPE;
} PeripheralCPSW_SS;

typedef union {
  struct {
    uint32_t RESERVED_BITS_0 : 16;
    uint32_t P0_DSCP_PRI_EN : 1;
    uint32_t RESERVED_BITS_1 : 3;
    uint32_t P0_VLAN_LTYPE1_EN : 1;
    uint32_t P0_VLAN_LTYPE2_EN : 1;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t P0_PASS_PRI_TAGGED : 1;
    uint32_t RESERVED_BITS_3 : 3;
    uint32_t P0_DLR_CPDMA_CH : 3;
    uint32_t RESERVED_BITS_4 : 1;
  };
  uint32_t raw;
} RegisterP0_CONTROL;

typedef union {
  struct {
    uint32_t P0_RX_MAX_BLKS : 4;
    uint32_t P0_TX_MAX_BLKS : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP0_MAX_BLKS;

typedef union {
  struct {
    uint32_t P0_RX_BLK_CNT : 4;
    uint32_t P0_TX_BLK_CNT : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP0_BLK_CNT;

typedef union {
  struct {
    uint32_t TX_PRI_WDS : 10;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t TX_BLKS_REM : 4;
    uint32_t TX_IN_SEL : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t TX_RATE_EN : 4;
    uint32_t RESERVED_BITS_2 : 8;
  };
  uint32_t raw;
} RegisterP0_TX_IN_CTL;

typedef union {
  struct {
    uint32_t PORT_VID : 12;
    uint32_t PORT_CFI : 1;
    uint32_t PORT_PRI : 3;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterP0_PORT_VLAN;

typedef union {
  struct {
    uint32_t PRI0 : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t PRI1 : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t PRI2 : 2;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t PRI3 : 2;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t PRI4 : 2;
    uint32_t RESERVED_BITS_4 : 2;
    uint32_t PRI5 : 2;
    uint32_t RESERVED_BITS_5 : 2;
    uint32_t PRI6 : 2;
    uint32_t RESERVED_BITS_6 : 2;
    uint32_t PRI7 : 2;
    uint32_t RESERVED_BITS_7 : 2;
  };
  uint32_t raw;
} RegisterP0_TX_PRI_MAP;

typedef union {
  struct {
    uint32_t PRI0 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI1 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI2 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI3 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI4 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI5 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI6 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI7 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_CPDMA_TX_PRI_MAP;

typedef union {
  struct {
    uint32_t P1_PRI0 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t P1_PRI1 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t P1_PRI2 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t P1_PRI3 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t P2_PRI0 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t P2_PRI1 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t P2_PRI2 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t P2_PRI3 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_CPDMA_RX_CH_MAP;

typedef union {
  struct {
    uint32_t PRI0 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI1 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI2 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI3 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI4 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI5 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI6 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI7 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP0;

typedef union {
  struct {
    uint32_t PRI8 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI9 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI10 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI11 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI12 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI13 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI14 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI15 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP1;

typedef union {
  struct {
    uint32_t PRI16 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI17 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI18 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI19 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI20 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI21 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI22 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI23 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP2;

typedef union {
  struct {
    uint32_t PRI24 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI25 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI26 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI27 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI28 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI29 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI30 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI31 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP3;

typedef union {
  struct {
    uint32_t PRI32 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI33 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI34 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI35 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI36 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI37 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI38 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI39 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP4;

typedef union {
  struct {
    uint32_t PRI40 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI41 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI42 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI43 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI44 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI45 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI46 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI47 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP5;

typedef union {
  struct {
    uint32_t PRI48 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI49 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI50 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI51 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI52 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI53 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI54 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI55 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP6;

typedef union {
  struct {
    uint32_t PRI56 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI57 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI58 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI59 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI60 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI61 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI62 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI63 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP0_RX_DSCP_PRI_MAP7;

typedef union {
  struct {
    uint32_t P1_TS_RX_EN : 1;
    uint32_t P1_TS_TX_EN : 1;
    uint32_t P1_TS_LTYPE1_EN : 1;
    uint32_t P1_TS_LTYPE2_EN : 1;
    uint32_t P1_TS_ANNEX_D_EN : 1;
    uint32_t RESERVED_BITS_0 : 3;
    uint32_t P1_TS_TTL_NONZERO : 1;
    uint32_t P1_TS_129 : 1;
    uint32_t P1_TS_130 : 1;
    uint32_t P1_TS_131 : 1;
    uint32_t P1_TS_132 : 1;
    uint32_t P1_TS_319 : 1;
    uint32_t P1_TS_320 : 1;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t P1_DSCP_PRI_EN : 1;
    uint32_t RESERVED_BITS_2 : 3;
    uint32_t P1_VLAN_LTYPE1_EN : 1;
    uint32_t P1_VLAN_LTYPE2_EN : 1;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t P1_PASS_PRI_TAGGED : 1;
    uint32_t RESERVED_BITS_4 : 7;
  };
  uint32_t raw;
} RegisterP1_CONTROL;

typedef union {
  struct {
    uint32_t P1_RX_MAX_BLKS : 4;
    uint32_t P1_TX_MAX_BLKS : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP1_MAX_BLKS;

typedef union {
  struct {
    uint32_t P1_RX_BLK_CNT : 4;
    uint32_t P1_TX_BLK_CNT : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP1_BLK_CNT;

typedef union {
  struct {
    uint32_t TX_PRI_WDS : 10;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t TX_BLKS_REM : 4;
    uint32_t TX_IN_SEL : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t TX_RATE_EN : 4;
    uint32_t HOST_BLKS_REM : 4;
    uint32_t RESERVED_BITS_2 : 4;
  };
  uint32_t raw;
} RegisterP1_TX_IN_CTL;

typedef union {
  struct {
    uint32_t PORT_VID : 12;
    uint32_t PORT_CFI : 1;
    uint32_t PORT_PRI : 3;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterP1_PORT_VLAN;

typedef union {
  struct {
    uint32_t PRI0 : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t PRI1 : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t PRI2 : 2;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t PRI3 : 2;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t PRI4 : 2;
    uint32_t RESERVED_BITS_4 : 2;
    uint32_t PRI5 : 2;
    uint32_t RESERVED_BITS_5 : 2;
    uint32_t PRI6 : 2;
    uint32_t RESERVED_BITS_6 : 2;
    uint32_t PRI7 : 2;
    uint32_t RESERVED_BITS_7 : 2;
  };
  uint32_t raw;
} RegisterP1_TX_PRI_MAP;

typedef union {
  struct {
    uint32_t P1_TS_MSG_TYPE_EN : 16;
    uint32_t P1_TS_SEQ_ID_OFFSET : 6;
    uint32_t RESERVED_BITS_0 : 10;
  };
  uint32_t raw;
} RegisterP1_TS_SEQ_MTYPE;

typedef union {
  struct {
    uint32_t MACSRCADDR_15_8 : 8;
    uint32_t MACSRCADDR_7_0 : 8;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterP1_SA_LO;

typedef union {
  struct {
    uint32_t MACSRCADDR_47_40 : 8;
    uint32_t MACSRCADDR_39_32 : 8;
    uint32_t MACSRCADDR_31_24 : 8;
    uint32_t MACSRCADDR_23_16 : 8;
  };
  uint32_t raw;
} RegisterP1_SA_HI;

typedef union {
  struct {
    uint32_t PRI1_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI2_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI3_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_2 : 9;
  };
  uint32_t raw;
} RegisterP1_SEND_PERCENT;

typedef union {
  struct {
    uint32_t PRI0 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI1 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI2 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI3 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI4 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI5 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI6 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI7 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP0;

typedef union {
  struct {
    uint32_t PRI8 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI9 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI10 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI11 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI12 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI13 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI14 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI15 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP1;

typedef union {
  struct {
    uint32_t PRI16 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI17 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI18 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI19 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI20 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI21 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI22 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI23 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP2;

typedef union {
  struct {
    uint32_t PRI24 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI25 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI26 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI27 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI28 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI29 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI30 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI31 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP3;

typedef union {
  struct {
    uint32_t PRI32 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI33 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI34 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI35 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI36 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI37 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI38 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI39 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP4;

typedef union {
  struct {
    uint32_t PRI40 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI41 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI42 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI43 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI44 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI45 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI46 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI47 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP5;

typedef union {
  struct {
    uint32_t PRI48 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI49 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI50 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI51 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI52 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI53 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI54 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI55 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP6;

typedef union {
  struct {
    uint32_t PRI56 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI57 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI58 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI59 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI60 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI61 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI62 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI63 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP1_RX_DSCP_PRI_MAP7;

typedef union {
  struct {
    uint32_t P2_TS_RX_EN : 1;
    uint32_t P2_TS_TX_EN : 1;
    uint32_t P2_TS_LTYPE1_EN : 1;
    uint32_t P2_TS_LTYPE2_EN : 1;
    uint32_t P2_TS_ANNEX_D_EN : 1;
    uint32_t RESERVED_BITS_0 : 3;
    uint32_t P2_TS_TTL_NONZERO : 1;
    uint32_t P2_TS_129 : 1;
    uint32_t P2_TS_130 : 1;
    uint32_t P2_TS_131 : 1;
    uint32_t P2_TS_132 : 1;
    uint32_t P2_TS_319 : 1;
    uint32_t P2_TS_320 : 1;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t P2_DSCP_PRI_EN : 1;
    uint32_t RESERVED_BITS_2 : 3;
    uint32_t P2_VLAN_LTYPE1_EN : 1;
    uint32_t P2_VLAN_LTYPE2_EN : 1;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t P2_PASS_PRI_TAGGED : 1;
    uint32_t RESERVED_BITS_4 : 7;
  };
  uint32_t raw;
} RegisterP2_CONTROL;

typedef union {
  struct {
    uint32_t P2_RX_MAX_BLKS : 4;
    uint32_t P2_TX_MAX_BLKS : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP2_MAX_BLKS;

typedef union {
  struct {
    uint32_t P2_RX_BLK_CNT : 4;
    uint32_t P2_TX_BLK_CNT : 5;
    uint32_t RESERVED_BITS_0 : 23;
  };
  uint32_t raw;
} RegisterP2_BLK_CNT;

typedef union {
  struct {
    uint32_t TX_PRI_WDS : 10;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t TX_BLKS_REM : 4;
    uint32_t TX_IN_SEL : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t TX_RATE_EN : 4;
    uint32_t HOST_BLKS_REM : 4;
    uint32_t RESERVED_BITS_2 : 4;
  };
  uint32_t raw;
} RegisterP2_TX_IN_CTL;

typedef union {
  struct {
    uint32_t PORT_VID : 12;
    uint32_t PORT_CFI : 1;
    uint32_t PORT_PRI : 3;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterP2_PORT_VLAN;

typedef union {
  struct {
    uint32_t PRI0 : 2;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t PRI1 : 2;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t PRI2 : 2;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t PRI3 : 2;
    uint32_t RESERVED_BITS_3 : 2;
    uint32_t PRI4 : 2;
    uint32_t RESERVED_BITS_4 : 2;
    uint32_t PRI5 : 2;
    uint32_t RESERVED_BITS_5 : 2;
    uint32_t PRI6 : 2;
    uint32_t RESERVED_BITS_6 : 2;
    uint32_t PRI7 : 2;
    uint32_t RESERVED_BITS_7 : 2;
  };
  uint32_t raw;
} RegisterP2_TX_PRI_MAP;

typedef union {
  struct {
    uint32_t P2_TS_MSG_TYPE_EN : 16;
    uint32_t P2_TS_SEQ_ID_OFFSET : 6;
    uint32_t RESERVED_BITS_0 : 10;
  };
  uint32_t raw;
} RegisterP2_TS_SEQ_MTYPE;

typedef union {
  struct {
    uint32_t MACSRCADDR_15_8 : 8;
    uint32_t MACSRCADDR_7_0 : 8;
    uint32_t RESERVED_BITS_0 : 16;
  };
  uint32_t raw;
} RegisterP2_SA_LO;

typedef union {
  struct {
    uint32_t MACSRCADDR_47_40 : 8;
    uint32_t MACSRCADDR_39_32 : 8;
    uint32_t MACSRCADDR_31_23 : 8;
    uint32_t MACSRCADDR_23_16 : 8;
  };
  uint32_t raw;
} RegisterP2_SA_HI;

typedef union {
  struct {
    uint32_t PRI1_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI2_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI3_SEND_PERCENT : 7;
    uint32_t RESERVED_BITS_2 : 9;
  };
  uint32_t raw;
} RegisterP2_SEND_PERCENT;

typedef union {
  struct {
    uint32_t PRI0 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI1 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI2 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI3 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI4 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI5 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI6 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI7 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP0;

typedef union {
  struct {
    uint32_t PRI8 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI9 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI10 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI11 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI12 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI13 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI14 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI15 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP1;

typedef union {
  struct {
    uint32_t PRI16 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI17 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI18 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI19 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI20 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI21 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI22 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI23 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP2;

typedef union {
  struct {
    uint32_t PRI24 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI25 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI26 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI27 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI28 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI29 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI30 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI31 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP3;

typedef union {
  struct {
    uint32_t PRI32 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI33 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI34 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI35 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI36 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI37 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI38 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI39 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP4;

typedef union {
  struct {
    uint32_t PRI40 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI41 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI42 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI43 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI44 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI45 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI46 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI47 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP5;

typedef union {
  struct {
    uint32_t PRI48 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI49 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI50 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI51 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI52 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI53 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI54 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI55 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP6;

typedef union {
  struct {
    uint32_t PRI56 : 3;
    uint32_t RESERVED_BITS_0 : 1;
    uint32_t PRI57 : 3;
    uint32_t RESERVED_BITS_1 : 1;
    uint32_t PRI58 : 3;
    uint32_t RESERVED_BITS_2 : 1;
    uint32_t PRI59 : 3;
    uint32_t RESERVED_BITS_3 : 1;
    uint32_t PRI60 : 3;
    uint32_t RESERVED_BITS_4 : 1;
    uint32_t PRI61 : 3;
    uint32_t RESERVED_BITS_5 : 1;
    uint32_t PRI62 : 3;
    uint32_t RESERVED_BITS_6 : 1;
    uint32_t PRI63 : 3;
    uint32_t RESERVED_BITS_7 : 1;
  };
  uint32_t raw;
} RegisterP2_RX_DSCP_PRI_MAP7;

typedef struct {
  RegisterP0_CONTROL P0_CONTROL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterP0_MAX_BLKS P0_MAX_BLKS;
  RegisterP0_BLK_CNT P0_BLK_CNT;
  RegisterP0_TX_IN_CTL P0_TX_IN_CTL;
  RegisterP0_PORT_VLAN P0_PORT_VLAN;
  RegisterP0_TX_PRI_MAP P0_TX_PRI_MAP;
  RegisterP0_CPDMA_TX_PRI_MAP P0_CPDMA_TX_PRI_MAP;
  RegisterP0_CPDMA_RX_CH_MAP P0_CPDMA_RX_CH_MAP;
  uint8_t RESERVED_OFFSETS_1[12];
  RegisterP0_RX_DSCP_PRI_MAP0 P0_RX_DSCP_PRI_MAP0;
  RegisterP0_RX_DSCP_PRI_MAP1 P0_RX_DSCP_PRI_MAP1;
  RegisterP0_RX_DSCP_PRI_MAP2 P0_RX_DSCP_PRI_MAP2;
  RegisterP0_RX_DSCP_PRI_MAP3 P0_RX_DSCP_PRI_MAP3;
  RegisterP0_RX_DSCP_PRI_MAP4 P0_RX_DSCP_PRI_MAP4;
  RegisterP0_RX_DSCP_PRI_MAP5 P0_RX_DSCP_PRI_MAP5;
  RegisterP0_RX_DSCP_PRI_MAP6 P0_RX_DSCP_PRI_MAP6;
  RegisterP0_RX_DSCP_PRI_MAP7 P0_RX_DSCP_PRI_MAP7;
  uint8_t RESERVED_OFFSETS_2[176];
  RegisterP1_CONTROL P1_CONTROL;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterP1_MAX_BLKS P1_MAX_BLKS;
  RegisterP1_BLK_CNT P1_BLK_CNT;
  RegisterP1_TX_IN_CTL P1_TX_IN_CTL;
  RegisterP1_PORT_VLAN P1_PORT_VLAN;
  RegisterP1_TX_PRI_MAP P1_TX_PRI_MAP;
  RegisterP1_TS_SEQ_MTYPE P1_TS_SEQ_MTYPE;
  RegisterP1_SA_LO P1_SA_LO;
  RegisterP1_SA_HI P1_SA_HI;
  RegisterP1_SEND_PERCENT P1_SEND_PERCENT;
  uint8_t RESERVED_OFFSETS_4[4];
  RegisterP1_RX_DSCP_PRI_MAP0 P1_RX_DSCP_PRI_MAP0;
  RegisterP1_RX_DSCP_PRI_MAP1 P1_RX_DSCP_PRI_MAP1;
  RegisterP1_RX_DSCP_PRI_MAP2 P1_RX_DSCP_PRI_MAP2;
  RegisterP1_RX_DSCP_PRI_MAP3 P1_RX_DSCP_PRI_MAP3;
  RegisterP1_RX_DSCP_PRI_MAP4 P1_RX_DSCP_PRI_MAP4;
  RegisterP1_RX_DSCP_PRI_MAP5 P1_RX_DSCP_PRI_MAP5;
  RegisterP1_RX_DSCP_PRI_MAP6 P1_RX_DSCP_PRI_MAP6;
  RegisterP1_RX_DSCP_PRI_MAP7 P1_RX_DSCP_PRI_MAP7;
  uint8_t RESERVED_OFFSETS_5[176];
  RegisterP2_CONTROL P2_CONTROL;
  uint8_t RESERVED_OFFSETS_6[4];
  RegisterP2_MAX_BLKS P2_MAX_BLKS;
  RegisterP2_BLK_CNT P2_BLK_CNT;
  RegisterP2_TX_IN_CTL P2_TX_IN_CTL;
  RegisterP2_PORT_VLAN P2_PORT_VLAN;
  RegisterP2_TX_PRI_MAP P2_TX_PRI_MAP;
  RegisterP2_TS_SEQ_MTYPE P2_TS_SEQ_MTYPE;
  RegisterP2_SA_LO P2_SA_LO;
  RegisterP2_SA_HI P2_SA_HI;
  RegisterP2_SEND_PERCENT P2_SEND_PERCENT;
  uint8_t RESERVED_OFFSETS_7[4];
  RegisterP2_RX_DSCP_PRI_MAP0 P2_RX_DSCP_PRI_MAP0;
  RegisterP2_RX_DSCP_PRI_MAP1 P2_RX_DSCP_PRI_MAP1;
  RegisterP2_RX_DSCP_PRI_MAP2 P2_RX_DSCP_PRI_MAP2;
  RegisterP2_RX_DSCP_PRI_MAP3 P2_RX_DSCP_PRI_MAP3;
  RegisterP2_RX_DSCP_PRI_MAP4 P2_RX_DSCP_PRI_MAP4;
  RegisterP2_RX_DSCP_PRI_MAP5 P2_RX_DSCP_PRI_MAP5;
  RegisterP2_RX_DSCP_PRI_MAP6 P2_RX_DSCP_PRI_MAP6;
  RegisterP2_RX_DSCP_PRI_MAP7 P2_RX_DSCP_PRI_MAP7;
} PeripheralCPSW_PORT;

typedef union {
  struct {
    uint32_t TX_MINOR_VER : 8;
    uint32_t TX_MAJOR_VER : 8;
    uint32_t TX_IDENT : 16;
  };
  uint32_t raw;
} RegisterTX_IDVER;

typedef union {
  struct {
    uint32_t TX_EN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterTX_CONTROL;

typedef union {
  struct {
    uint32_t TX_TDN_CH : 3;
    uint32_t RESERVED : 28;
    uint32_t TX_TDN_RDY : 1;
  };
  uint32_t raw;
} RegisterTX_TEARDOWN;

typedef union {
  struct {
    uint32_t RX_MINOR_VER : 8;
    uint32_t RX_MAJOR_VER : 8;
    uint32_t RX_IDENT : 16;
  };
  uint32_t raw;
} RegisterRX_IDVER;

typedef union {
  struct {
    uint32_t RX_EN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterRX_CONTROL;

typedef union {
  struct {
    uint32_t RX_TDN_CH : 3;
    uint32_t RESERVED : 28;
    uint32_t RX_TDN_RDY : 1;
  };
  uint32_t raw;
} RegisterRX_TEARDOWN;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPDMA_SOFT_RESET;

typedef union {
  struct {
    uint32_t TX_PTYPE : 1;
    uint32_t RX_OWNERSHIP : 1;
    uint32_t RX_OFFLEN_BLOCK : 1;
    uint32_t CMD_IDLE : 1;
    uint32_t RX_CEF : 1;
    uint32_t RESERVED : 3;
    uint32_t TX_RLIM : 8;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterDMACONTROL;

typedef union {
  struct {
    uint32_t RESERVED : 8;
    uint32_t RX_ERR_CH : 3;
    uint32_t RESERVED1 : 1;
    uint32_t RX_HOST_ERR_CODE : 4;
    uint32_t TX_ERR_CH : 3;
    uint32_t RESERVED2 : 1;
    uint32_t TX_HOST_ERR_CODE : 4;
    uint32_t RESERVED3 : 7;
    uint32_t IDLE : 1;
  };
  uint32_t raw;
} RegisterDMASTATUS;

typedef union {
  struct {
    uint32_t RX_BUFFER_OFFSET : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX_BUFFER_OFFSET;

typedef union {
  struct {
    uint32_t FREE : 1;
    uint32_t SOFT : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterEMCONTROL;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI0_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI1_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI2_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI3_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI4_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI5_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI6_RATE;

typedef union {
  struct {
    uint32_t PRIN_SEND_CNT : 14;
    uint32_t RESERVED : 2;
    uint32_t PRIN_IDLE_CNT : 14;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterTX_PRI7_RATE;

typedef union {
  struct {
    uint32_t TX0_PEND : 1;
    uint32_t TX1_PEND : 1;
    uint32_t TX2_PEND : 1;
    uint32_t TX3_PEND : 1;
    uint32_t TX4_PEND : 1;
    uint32_t TX5_PEND : 1;
    uint32_t TX6_PEND : 1;
    uint32_t TX7_PEND : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterTX_INTSTAT_RAW;

typedef union {
  struct {
    uint32_t TX0_PEND : 1;
    uint32_t TX1_PEND : 1;
    uint32_t TX2_PEND : 1;
    uint32_t TX3_PEND : 1;
    uint32_t TX4_PEND : 1;
    uint32_t TX5_PEND : 1;
    uint32_t TX6_PEND : 1;
    uint32_t TX7_PEND : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterTX_INTSTAT_MASKED;

typedef union {
  struct {
    uint32_t TX0_MASK : 1;
    uint32_t TX1_MASK : 1;
    uint32_t TX2_MASK : 1;
    uint32_t TX3_MASK : 1;
    uint32_t TX4_MASK : 1;
    uint32_t TX5_MASK : 1;
    uint32_t TX6_MASK : 1;
    uint32_t TX7_MASK : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterTX_INTMASK_SET;

typedef union {
  struct {
    uint32_t TX0_MASK : 1;
    uint32_t TX1_MASK : 1;
    uint32_t TX2_MASK : 1;
    uint32_t TX3_MASK : 1;
    uint32_t TX4_MASK : 1;
    uint32_t TX5_MASK : 1;
    uint32_t TX6_MASK : 1;
    uint32_t TX7_MASK : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterTX_INTMASK_CLEAR;

typedef union {
  struct {
    uint32_t DMA_IN_VECTOR : 32;
  };
  uint32_t raw;
} RegisterCPDMA_IN_VECTOR;

typedef union {
  struct {
    uint32_t DMA_EOI_VECTOR : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterCPDMA_EOI_VECTOR;

typedef union {
  struct {
    uint32_t RX0_PEND : 1;
    uint32_t RX1_PEND : 1;
    uint32_t RX2_PEND : 1;
    uint32_t RX3_PEND : 1;
    uint32_t RX4_PEND : 1;
    uint32_t RX5_PEND : 1;
    uint32_t RX6_PEND : 1;
    uint32_t RX7_PEND : 1;
    uint32_t RX0_THRESH_PEND : 1;
    uint32_t RX1_THRESH_PEND : 1;
    uint32_t RX2_THRESH_PEND : 1;
    uint32_t RX3_THRESH_PEND : 1;
    uint32_t RX4_THRESH_PEND : 1;
    uint32_t RX5_THRESH_PEND : 1;
    uint32_t RX6_THRESH_PEND : 1;
    uint32_t RX7_THRESH_PEND : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX_INTSTAT_RAW;

typedef union {
  struct {
    uint32_t RX0_PEND : 1;
    uint32_t RX1_PEND : 1;
    uint32_t RX2_PEND : 1;
    uint32_t RX3_PEND : 1;
    uint32_t RX4_PEND : 1;
    uint32_t RX5_PEND : 1;
    uint32_t RX6_PEND : 1;
    uint32_t RX7_PEND : 1;
    uint32_t RX0_THRESH_PEND : 1;
    uint32_t RX1_THRESH_PEND : 1;
    uint32_t RX2_THRESH_PEND : 1;
    uint32_t RX3_THRESH_PEND : 1;
    uint32_t RX4_THRESH_PEND : 1;
    uint32_t RX5_THRESH_PEND : 1;
    uint32_t RX6_THRESH_PEND : 1;
    uint32_t RX7_THRESH_PEND : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX_INTSTAT_MASKED;

typedef union {
  struct {
    uint32_t RX0_PEND_MASK : 1;
    uint32_t RX1_PEND_MASK : 1;
    uint32_t RX2_PEND_MASK : 1;
    uint32_t RX3_PEND_MASK : 1;
    uint32_t RX4_PEND_MASK : 1;
    uint32_t RX5_PEND_MASK : 1;
    uint32_t RX6_PEND_MASK : 1;
    uint32_t RX7_PEND_MASK : 1;
    uint32_t RX0_THRESH_PEND_MASK : 1;
    uint32_t RX1_THRESH_PEND_MASK : 1;
    uint32_t RX2_THRESH_PEND_MASK : 1;
    uint32_t RX3_THRESH_PEND_MASK : 1;
    uint32_t RX4_THRESH_PEND_MASK : 1;
    uint32_t RX5_THRESH_PEND_MASK : 1;
    uint32_t RX6_THRESH_PEND_MASK : 1;
    uint32_t RX7_THRESH_PEND_MASK : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX_INTMASK_SET;

typedef union {
  struct {
    uint32_t RX0_PEND_MASK : 1;
    uint32_t RX1_PEND_MASK : 1;
    uint32_t RX2_PEND_MASK : 1;
    uint32_t RX3_PEND_MASK : 1;
    uint32_t RX4_PEND_MASK : 1;
    uint32_t RX5_PEND_MASK : 1;
    uint32_t RX6_PEND_MASK : 1;
    uint32_t RX7_PEND_MASK : 1;
    uint32_t RX0_THRESH_PEND_MASK : 1;
    uint32_t RX1_THRESH_PEND_MASK : 1;
    uint32_t RX2_THRESH_PEND_MASK : 1;
    uint32_t RX3_THRESH_PEND_MASK : 1;
    uint32_t RX4_THRESH_PEND_MASK : 1;
    uint32_t RX5_THRESH_PEND_MASK : 1;
    uint32_t RX6_THRESH_PEND_MASK : 1;
    uint32_t RX7_THRESH_PEND_MASK : 1;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX_INTMASK_CLEAR;

typedef union {
  struct {
    uint32_t STAT_PEND : 1;
    uint32_t HOST_PEND : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMA_INTSTAT_RAW;

typedef union {
  struct {
    uint32_t STAT_PEND : 1;
    uint32_t HOST_PEND : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMA_INTSTAT_MASKED;

typedef union {
  struct {
    uint32_t STAT_INT_MASK : 1;
    uint32_t HOST_ERR_INT_MASK : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMA_INTMASK_SET;

typedef union {
  struct {
    uint32_t STAT_INT_MASK : 1;
    uint32_t HOST_ERR_INT_MASK : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterDMA_INTMASK_CLEAR;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX0_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX1_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX2_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX3_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX4_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX5_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX6_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_PENDTHRESH : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRX7_PENDTHRESH;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX0_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX1_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX2_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX3_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX4_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX5_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX6_FREEBUFFER;

typedef union {
  struct {
    uint32_t RX_FREEBUFFER : 16;
    uint32_t RESERVED : 16;
  };
  uint32_t raw;
} RegisterRX7_FREEBUFFER;

typedef struct {
  RegisterTX_IDVER TX_IDVER;
  RegisterTX_CONTROL TX_CONTROL;
  RegisterTX_TEARDOWN TX_TEARDOWN;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterRX_IDVER RX_IDVER;
  RegisterRX_CONTROL RX_CONTROL;
  RegisterRX_TEARDOWN RX_TEARDOWN;
  RegisterCPDMA_SOFT_RESET CPDMA_SOFT_RESET;
  RegisterDMACONTROL DMACONTROL;
  RegisterDMASTATUS DMASTATUS;
  RegisterRX_BUFFER_OFFSET RX_BUFFER_OFFSET;
  RegisterEMCONTROL EMCONTROL;
  RegisterTX_PRI0_RATE TX_PRI0_RATE;
  RegisterTX_PRI1_RATE TX_PRI1_RATE;
  RegisterTX_PRI2_RATE TX_PRI2_RATE;
  RegisterTX_PRI3_RATE TX_PRI3_RATE;
  RegisterTX_PRI4_RATE TX_PRI4_RATE;
  RegisterTX_PRI5_RATE TX_PRI5_RATE;
  RegisterTX_PRI6_RATE TX_PRI6_RATE;
  RegisterTX_PRI7_RATE TX_PRI7_RATE;
  uint8_t RESERVED_OFFSETS_1[48];
  RegisterTX_INTSTAT_RAW TX_INTSTAT_RAW;
  RegisterTX_INTSTAT_MASKED TX_INTSTAT_MASKED;
  RegisterTX_INTMASK_SET TX_INTMASK_SET;
  RegisterTX_INTMASK_CLEAR TX_INTMASK_CLEAR;
  RegisterCPDMA_IN_VECTOR CPDMA_IN_VECTOR;
  RegisterCPDMA_EOI_VECTOR CPDMA_EOI_VECTOR;
  uint8_t RESERVED_OFFSETS_2[8];
  RegisterRX_INTSTAT_RAW RX_INTSTAT_RAW;
  RegisterRX_INTSTAT_MASKED RX_INTSTAT_MASKED;
  RegisterRX_INTMASK_SET RX_INTMASK_SET;
  RegisterRX_INTMASK_CLEAR RX_INTMASK_CLEAR;
  RegisterDMA_INTSTAT_RAW DMA_INTSTAT_RAW;
  RegisterDMA_INTSTAT_MASKED DMA_INTSTAT_MASKED;
  RegisterDMA_INTMASK_SET DMA_INTMASK_SET;
  RegisterDMA_INTMASK_CLEAR DMA_INTMASK_CLEAR;
  RegisterRX0_PENDTHRESH RX0_PENDTHRESH;
  RegisterRX1_PENDTHRESH RX1_PENDTHRESH;
  RegisterRX2_PENDTHRESH RX2_PENDTHRESH;
  RegisterRX3_PENDTHRESH RX3_PENDTHRESH;
  RegisterRX4_PENDTHRESH RX4_PENDTHRESH;
  RegisterRX5_PENDTHRESH RX5_PENDTHRESH;
  RegisterRX6_PENDTHRESH RX6_PENDTHRESH;
  RegisterRX7_PENDTHRESH RX7_PENDTHRESH;
  RegisterRX0_FREEBUFFER RX0_FREEBUFFER;
  RegisterRX1_FREEBUFFER RX1_FREEBUFFER;
  RegisterRX2_FREEBUFFER RX2_FREEBUFFER;
  RegisterRX3_FREEBUFFER RX3_FREEBUFFER;
  RegisterRX4_FREEBUFFER RX4_FREEBUFFER;
  RegisterRX5_FREEBUFFER RX5_FREEBUFFER;
  RegisterRX6_FREEBUFFER RX6_FREEBUFFER;
  RegisterRX7_FREEBUFFER RX7_FREEBUFFER;
} PeripheralCPSW_CPDMA;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterGOODRX;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterBROADCAST_RX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterMULTICAST_RX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterPAUSE_RX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_CRC_ERRORS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_ALIGN_ERRORS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterOVERSIZE_RX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_JABBERS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterUNDERSIZE_RX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_FRAGMENTS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_OCTETS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterGOOD_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterBROADCAST_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterMULTICAST_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterPAUSE_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterDEFERRED_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterCOLLISIONS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterSINGLE_COLLISION_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterMULTIPLE_COLLISION_TX_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterEXCESSIVE_COLLISIONS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterLATE_COLLISIONS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterTX_UNDERRUN;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterCARRIER_SENSE_ERRORS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterTX_OCTETS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_64_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_65_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_128_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_256_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_512_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_TX_1024_OCTET_FRAMES;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterNET_OCTETS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_START_OF_FRAME_OVERRUNS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_MIDDLE_OF_FRAME_OVERRUNS;

typedef union {
  struct {
  };
  uint32_t raw;
} RegisterRX_DMA_OVERRUNS;

typedef struct {
  RegisterGOODRX GOODRX;
  RegisterBROADCAST_RX_FRAMES BROADCAST_RX_FRAMES;
  RegisterMULTICAST_RX_FRAMES MULTICAST_RX_FRAMES;
  RegisterPAUSE_RX_FRAMES PAUSE_RX_FRAMES;
  RegisterRX_CRC_ERRORS RX_CRC_ERRORS;
  RegisterRX_ALIGN_ERRORS RX_ALIGN_ERRORS;
  RegisterOVERSIZE_RX_FRAMES OVERSIZE_RX_FRAMES;
  RegisterRX_JABBERS RX_JABBERS;
  RegisterUNDERSIZE_RX_FRAMES UNDERSIZE_RX_FRAMES;
  RegisterRX_FRAGMENTS RX_FRAGMENTS;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterRX_OCTETS RX_OCTETS;
  RegisterGOOD_TX_FRAMES GOOD_TX_FRAMES;
  RegisterBROADCAST_TX_FRAMES BROADCAST_TX_FRAMES;
  RegisterMULTICAST_TX_FRAMES MULTICAST_TX_FRAMES;
  RegisterPAUSE_TX_FRAMES PAUSE_TX_FRAMES;
  RegisterDEFERRED_TX_FRAMES DEFERRED_TX_FRAMES;
  RegisterCOLLISIONS COLLISIONS;
  RegisterSINGLE_COLLISION_TX_FRAMES SINGLE_COLLISION_TX_FRAMES;
  RegisterMULTIPLE_COLLISION_TX_FRAMES MULTIPLE_COLLISION_TX_FRAMES;
  RegisterEXCESSIVE_COLLISIONS EXCESSIVE_COLLISIONS;
  RegisterLATE_COLLISIONS LATE_COLLISIONS;
  RegisterTX_UNDERRUN TX_UNDERRUN;
  RegisterCARRIER_SENSE_ERRORS CARRIER_SENSE_ERRORS;
  RegisterTX_OCTETS TX_OCTETS;
  RegisterRX_TX_64_OCTET_FRAMES RX_TX_64_OCTET_FRAMES;
  RegisterRX_TX_65_OCTET_FRAMES RX_TX_65_OCTET_FRAMES;
  RegisterRX_TX_128_OCTET_FRAMES RX_TX_128_OCTET_FRAMES;
  RegisterRX_TX_256_OCTET_FRAMES RX_TX_256_OCTET_FRAMES;
  RegisterRX_TX_512_OCTET_FRAMES RX_TX_512_OCTET_FRAMES;
  RegisterRX_TX_1024_OCTET_FRAMES RX_TX_1024_OCTET_FRAMES;
  RegisterNET_OCTETS NET_OCTETS;
  RegisterRX_START_OF_FRAME_OVERRUNS RX_START_OF_FRAME_OVERRUNS;
  RegisterRX_MIDDLE_OF_FRAME_OVERRUNS RX_MIDDLE_OF_FRAME_OVERRUNS;
  RegisterRX_DMA_OVERRUNS RX_DMA_OVERRUNS;
} PeripheralCPSW_STATS;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX0_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX1_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX2_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX3_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX4_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX5_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX6_HDP;

typedef union {
  struct {
    uint32_t TX_HDP : 32;
  };
  uint32_t raw;
} RegisterTX7_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX0_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX1_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX2_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX3_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX4_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX5_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX6_HDP;

typedef union {
  struct {
    uint32_t RX_HDP : 32;
  };
  uint32_t raw;
} RegisterRX7_HDP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX0_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX1_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX2_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX3_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX4_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX5_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX6_CP;

typedef union {
  struct {
    uint32_t TX_CP : 32;
  };
  uint32_t raw;
} RegisterTX7_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX0_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX1_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX2_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX3_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX4_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX5_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX6_CP;

typedef union {
  struct {
    uint32_t RX_CP : 32;
  };
  uint32_t raw;
} RegisterRX7_CP;

typedef struct {
  RegisterTX0_HDP TX0_HDP;
  RegisterTX1_HDP TX1_HDP;
  RegisterTX2_HDP TX2_HDP;
  RegisterTX3_HDP TX3_HDP;
  RegisterTX4_HDP TX4_HDP;
  RegisterTX5_HDP TX5_HDP;
  RegisterTX6_HDP TX6_HDP;
  RegisterTX7_HDP TX7_HDP;
  RegisterRX0_HDP RX0_HDP;
  RegisterRX1_HDP RX1_HDP;
  RegisterRX2_HDP RX2_HDP;
  RegisterRX3_HDP RX3_HDP;
  RegisterRX4_HDP RX4_HDP;
  RegisterRX5_HDP RX5_HDP;
  RegisterRX6_HDP RX6_HDP;
  RegisterRX7_HDP RX7_HDP;
  RegisterTX0_CP TX0_CP;
  RegisterTX1_CP TX1_CP;
  RegisterTX2_CP TX2_CP;
  RegisterTX3_CP TX3_CP;
  RegisterTX4_CP TX4_CP;
  RegisterTX5_CP TX5_CP;
  RegisterTX6_CP TX6_CP;
  RegisterTX7_CP TX7_CP;
  RegisterRX0_CP RX0_CP;
  RegisterRX1_CP RX1_CP;
  RegisterRX2_CP RX2_CP;
  RegisterRX3_CP RX3_CP;
  RegisterRX4_CP RX4_CP;
  RegisterRX5_CP RX5_CP;
  RegisterRX6_CP RX6_CP;
  RegisterRX7_CP RX7_CP;
} PeripheralCPSW_STATERAM;

typedef union {
  struct {
    uint32_t MINOR_VER : 8;
    uint32_t MAJOR_VER : 3;
    uint32_t RTL_VER : 5;
    uint32_t TX_IDENT : 16;
  };
  uint32_t raw;
} RegisterCPTS_IDVER;

typedef union {
  struct {
    uint32_t CPTS_EN : 1;
    uint32_t INT_TEST : 1;
    uint32_t RESERVED : 6;
    uint32_t HW1_TS_PUSH_EN : 1;
    uint32_t HW2_TS_PUSH_EN : 1;
    uint32_t HW3_TS_PUSH_EN : 1;
    uint32_t HW4_TS_PUSH_EN : 1;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCPTS_CONTROL;

typedef union {
  struct {
    uint32_t TS_PUSH : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_TS_PUSH;

typedef union {
  struct {
    uint32_t TS_LOAD_VAL : 32;
  };
  uint32_t raw;
} RegisterCPTS_TS_LOAD_VAL;

typedef union {
  struct {
    uint32_t TS_LOAD_EN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_TS_LOAD_EN;

typedef union {
  struct {
    uint32_t TS_PEND_RAW : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_INTSTAT_RAW;

typedef union {
  struct {
    uint32_t TS_PEND : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_INTSTAT_MASKED;

typedef union {
  struct {
    uint32_t TS_PEND_EN : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_INT_ENABLE;

typedef union {
  struct {
    uint32_t EVENT_POP : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterCPTS_EVENT_POP;

typedef union {
  struct {
    uint32_t TIME_STAMP : 32;
  };
  uint32_t raw;
} RegisterCPTS_EVENT_LOW;

typedef union {
  struct {
    uint32_t SEQUENCE_ID : 16;
    uint32_t MESSAGE_TYPE : 4;
    uint32_t EVENT_TYPE : 4;
    uint32_t PORT_NUMBER : 5;
    uint32_t RESERVED : 3;
  };
  uint32_t raw;
} RegisterCPTS_EVENT_HIGH;

typedef struct {
  RegisterCPTS_IDVER CPTS_IDVER;
  RegisterCPTS_CONTROL CPTS_CONTROL;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterCPTS_TS_PUSH CPTS_TS_PUSH;
  RegisterCPTS_TS_LOAD_VAL CPTS_TS_LOAD_VAL;
  RegisterCPTS_TS_LOAD_EN CPTS_TS_LOAD_EN;
  uint8_t RESERVED_OFFSETS_1[8];
  RegisterCPTS_INTSTAT_RAW CPTS_INTSTAT_RAW;
  RegisterCPTS_INTSTAT_MASKED CPTS_INTSTAT_MASKED;
  RegisterCPTS_INT_ENABLE CPTS_INT_ENABLE;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterCPTS_EVENT_POP CPTS_EVENT_POP;
  RegisterCPTS_EVENT_LOW CPTS_EVENT_LOW;
  RegisterCPTS_EVENT_HIGH CPTS_EVENT_HIGH;
} PeripheralCPSW_CPTS;

typedef union {
  struct {
    uint32_t MINOR_VER : 8;
    uint32_t MAJ_VER : 8;
    uint32_t IDENT : 16;
  };
  uint32_t raw;
} RegisterIDVER;

typedef union {
  struct {
    uint32_t ENABLE_RATE_LIMIT : 1;
    uint32_t ENABLE_AUTH_MODE : 1;
    uint32_t VLAN_AWARE : 1;
    uint32_t RATE_LIMIT_TX : 1;
    uint32_t BYPASS : 1;
    uint32_t ENABLE_OUI_DENY : 1;
    uint32_t EN_VID0_MODE : 1;
    uint32_t LEARN_NO_VID : 1;
    uint32_t EN_P0_UNI_FLOOD : 1;
    uint32_t RESERVED_BITS_0 : 20;
    uint32_t AGE_OUT_NOW : 1;
    uint32_t CLEAR_TABLE : 1;
    uint32_t ENABLE_ALE : 1;
  };
  uint32_t raw;
} RegisterCONTROL;

typedef union {
  struct {
    uint32_t PRESCALE : 20;
    uint32_t RESERVED_BITS_0 : 12;
  };
  uint32_t raw;
} RegisterPRESCALE;

typedef union {
  struct {
    uint32_t MEMBER_LIST : 6;
    uint32_t RESERVED_BITS_0 : 2;
    uint32_t UNKNOWN_MCAST_FLOOD_MASK : 6;
    uint32_t RESERVED_BITS_1 : 2;
    uint32_t UNKNOWN_REG_MCAST_FLOOD_MASK : 6;
    uint32_t RESERVED_BITS_2 : 2;
    uint32_t UNKNOWN_FORCE_UNTAGGED_EGRESS : 6;
    uint32_t RESERVED_BITS_3 : 2;
  };
  uint32_t raw;
} RegisterUNKNOWN_VLAN;

typedef union {
  struct {
    uint32_t ENTRY_POINTER : 10;
    uint32_t RESERVED_BITS_0 : 21;
    uint32_t WRITE_RDZ : 1;
  };
  uint32_t raw;
} RegisterTBLCTL;

typedef union {
  struct {
    uint32_t ENTRY71_64 : 8;
    uint32_t RESERVED_BITS_0 : 24;
  };
  uint32_t raw;
} RegisterTBLW2;

typedef union {
  struct {
    uint32_t ENTRY63_32 : 32;
  };
  uint32_t raw;
} RegisterTBLW1;

typedef union {
  struct {
    uint32_t ENTRY31_0 : 32;
  };
  uint32_t raw;
} RegisterTBLW0;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL0;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL1;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL2;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL3;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL4;

typedef union {
  struct {
    uint32_t PORT_STATE : 2;
    uint32_t DROP_UNTAGGED : 1;
    uint32_t VID_INGRESS_CHECK : 1;
    uint32_t NO_LEARN : 1;
    uint32_t NO_SA_UPDATE : 1;
    uint32_t RESERVED_BITS_0 : 10;
    uint32_t MCAST_LIMIT : 8;
    uint32_t BCAST_LIMIT : 8;
  };
  uint32_t raw;
} RegisterPORTCTL5;

typedef struct {
  RegisterIDVER IDVER;
  uint8_t RESERVED_OFFSETS_0[4];
  RegisterCONTROL CONTROL;
  uint8_t RESERVED_OFFSETS_1[4];
  RegisterPRESCALE PRESCALE;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterUNKNOWN_VLAN UNKNOWN_VLAN;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterTBLCTL TBLCTL;
  uint8_t RESERVED_OFFSETS_4[16];
  RegisterTBLW2 TBLW2;
  RegisterTBLW1 TBLW1;
  RegisterTBLW0 TBLW0;
  RegisterPORTCTL0 PORTCTL0;
  RegisterPORTCTL1 PORTCTL1;
  RegisterPORTCTL2 PORTCTL2;
  RegisterPORTCTL3 PORTCTL3;
  RegisterPORTCTL4 PORTCTL4;
  RegisterPORTCTL5 PORTCTL5;
} PeripheralCPSW_ALE;

typedef union {
  struct {
    uint32_t Y : 8;
    uint32_t X : 3;
    uint32_t Z : 5;
    uint32_t IDENT : 16;
  };
  uint32_t raw;
} RegisterIDVER;

typedef union {
  struct {
    uint32_t FULLDUPLEX : 1;
    uint32_t LOOPBACK : 1;
    uint32_t MTEST : 1;
    uint32_t RX_FLOW_EN : 1;
    uint32_t TX_FLOW_EN : 1;
    uint32_t GMII_EN : 1;
    uint32_t TX_PACE : 1;
    uint32_t GIG : 1;
    uint32_t RESERVED : 2;
    uint32_t TX_SHORT_GAP_EN : 1;
    uint32_t CMD_IDLE : 1;
    uint32_t RESERVED1 : 3;
    uint32_t IFCTL_A : 1;
    uint32_t IFCTL_B : 1;
    uint32_t GIG_FORCE : 1;
    uint32_t EXT_EN : 1;
    uint32_t RESERVED2 : 2;
    uint32_t TX_SHORT_GAP_LIM_EN : 1;
    uint32_t RX_CEF_EN : 1;
    uint32_t RX_CSF_EN : 1;
    uint32_t RX_CMF_EN : 1;
    uint32_t RESERVED3 : 7;
  };
  uint32_t raw;
} RegisterMACCONTROL;

typedef union {
  struct {
    uint32_t TX_FLOW_ACT : 1;
    uint32_t RX_FLOW_ACT : 1;
    uint32_t RESERVED : 1;
    uint32_t EXT_FULLDUPLEX : 1;
    uint32_t EXT_GIG : 1;
    uint32_t RESERVED1 : 26;
    uint32_t IDLE : 1;
  };
  uint32_t raw;
} RegisterMACSTATUS;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterSOFT_RESET;

typedef union {
  struct {
    uint32_t RX_MAXLEN : 14;
    uint32_t RESERVED : 18;
  };
  uint32_t raw;
} RegisterRX_MAXLEN;

typedef union {
  struct {
    uint32_t TX_BACKOFF : 10;
    uint32_t RESERVED : 2;
    uint32_t COLL_COUNT : 4;
    uint32_t RNDNUM : 10;
    uint32_t PACEVAL : 5;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterBOFFTEST;

typedef union {
  struct {
    uint32_t RESERVED : 16;
    uint32_t RX_PAUSETIMER : 16;
  };
  uint32_t raw;
} RegisterRX_PAUSE;

typedef union {
  struct {
    uint32_t RESERVED : 16;
    uint32_t TX_PAUSETIMER : 16;
  };
  uint32_t raw;
} RegisterTX_PAUSE;

typedef union {
  struct {
    uint32_t FREE : 1;
    uint32_t SOFT : 1;
    uint32_t RESERVED : 30;
  };
  uint32_t raw;
} RegisterEMCONTROL;

typedef union {
  struct {
    uint32_t PRI0 : 3;
    uint32_t RESERVED : 1;
    uint32_t PRI1 : 3;
    uint32_t RESERVED1 : 1;
    uint32_t PRI2 : 3;
    uint32_t RESERVED2 : 1;
    uint32_t PRI3 : 3;
    uint32_t RESERVED3 : 1;
    uint32_t PRI4 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t PRI5 : 3;
    uint32_t RESERVED5 : 1;
    uint32_t PRI6 : 3;
    uint32_t RESERVED6 : 1;
    uint32_t PRI7 : 3;
    uint32_t RESERVED7 : 1;
  };
  uint32_t raw;
} RegisterRX_PRI_MAP;

typedef union {
  struct {
    uint32_t TX_GAP : 9;
    uint32_t RESERVED : 23;
  };
  uint32_t raw;
} RegisterTX_GAP;

typedef struct {
  RegisterIDVER IDVER;
  RegisterMACCONTROL MACCONTROL;
  RegisterMACSTATUS MACSTATUS;
  RegisterSOFT_RESET SOFT_RESET;
  RegisterRX_MAXLEN RX_MAXLEN;
  RegisterBOFFTEST BOFFTEST;
  RegisterRX_PAUSE RX_PAUSE;
  RegisterTX_PAUSE TX_PAUSE;
  RegisterEMCONTROL EMCONTROL;
  RegisterRX_PRI_MAP RX_PRI_MAP;
  RegisterTX_GAP TX_GAP;
} PeripheralCPSW_SL1;

typedef union {
  struct {
    uint32_t REVMIN : 8;
    uint32_t REVMAJ : 8;
    uint32_t MODID : 16;
  };
  uint32_t raw;
} RegisterMDIOVER;

typedef union {
  struct {
    uint32_t CLKDIV : 16;
    uint32_t RESERVED3 : 1;
    uint32_t INTTESTENB : 1;
    uint32_t FAULTENB : 1;
    uint32_t FAULT : 1;
    uint32_t PREAMBLE : 1;
    uint32_t RESERVED2 : 3;
    uint32_t HIGHEST_USER_CHANNEL : 5;
    uint32_t RESERVED1 : 1;
    uint32_t ENABLE : 1;
    uint32_t IDLE : 1;
  };
  uint32_t raw;
} RegisterMDIOCONTROL;

typedef union {
  struct {
    uint32_t ALIVE : 32;
  };
  uint32_t raw;
} RegisterMDIOALIVE;

typedef union {
  struct {
    uint32_t LINK : 32;
  };
  uint32_t raw;
} RegisterMDIOLINK;

typedef union {
  struct {
    uint32_t LINKINTRAW : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOLINKINTRAW;

typedef union {
  struct {
    uint32_t LINKINTMASKED : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOLINKINTMASKED;

typedef union {
  struct {
    uint32_t USERINTRAW : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOUSERINTRAW;

typedef union {
  struct {
    uint32_t USERINTMASKED : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOUSERINTMASKED;

typedef union {
  struct {
    uint32_t USERINTMASKSET : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOUSERINTMASKSET;

typedef union {
  struct {
    uint32_t USERINTMASKCLEAR : 2;
    uint32_t RESERVED1 : 30;
  };
  uint32_t raw;
} RegisterMDIOUSERINTMASKCLR;

typedef union {
  struct {
    uint32_t DATA : 16;
    uint32_t PHYADR : 5;
    uint32_t REGADR : 5;
    uint32_t RESERVED1 : 3;
    uint32_t ACK : 1;
    uint32_t WRITE : 1;
    uint32_t GO : 1;
  };
  uint32_t raw;
} RegisterMDIOUSERACCESS0;

typedef union {
  struct {
    uint32_t PHYADDRMON : 5;
    uint32_t RESERVED2 : 1;
    uint32_t LINKINTENB : 1;
    uint32_t LINKSEL : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterMDIOUSERPHYSEL0;

typedef union {
  struct {
    uint32_t DATA : 16;
    uint32_t PHYADR : 5;
    uint32_t REGADR : 5;
    uint32_t RESERVED1 : 3;
    uint32_t ACK : 1;
    uint32_t WRITE : 1;
    uint32_t GO : 1;
  };
  uint32_t raw;
} RegisterMDIOUSERACCESS1;

typedef union {
  struct {
    uint32_t PHYADDRMON : 5;
    uint32_t RESERVED2 : 1;
    uint32_t LINKINTENB : 1;
    uint32_t LINKSEL : 1;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterMDIOUSERPHYSEL1;

typedef struct {
  RegisterMDIOVER MDIOVER;
  RegisterMDIOCONTROL MDIOCONTROL;
  RegisterMDIOALIVE MDIOALIVE;
  RegisterMDIOLINK MDIOLINK;
  RegisterMDIOLINKINTRAW MDIOLINKINTRAW;
  RegisterMDIOLINKINTMASKED MDIOLINKINTMASKED;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterMDIOUSERINTRAW MDIOUSERINTRAW;
  RegisterMDIOUSERINTMASKED MDIOUSERINTMASKED;
  RegisterMDIOUSERINTMASKSET MDIOUSERINTMASKSET;
  RegisterMDIOUSERINTMASKCLR MDIOUSERINTMASKCLR;
  uint8_t RESERVED_OFFSETS_1[80];
  RegisterMDIOUSERACCESS0 MDIOUSERACCESS0;
  RegisterMDIOUSERPHYSEL0 MDIOUSERPHYSEL0;
  RegisterMDIOUSERACCESS1 MDIOUSERACCESS1;
  RegisterMDIOUSERPHYSEL1 MDIOUSERPHYSEL1;
} PeripheralMDIO;

typedef union {
  struct {
    uint32_t MINOR : 6;
    uint32_t CUSTOM : 2;
    uint32_t MAJOR : 3;
    uint32_t RTL : 5;
    uint32_t FUNCTION : 12;
    uint32_t RESERVED : 2;
    uint32_t SCHEME : 2;
  };
  uint32_t raw;
} RegisterIDVER;

typedef union {
  struct {
    uint32_t SOFT_RESET : 1;
    uint32_t RESERVED : 31;
  };
  uint32_t raw;
} RegisterSOFT_RESET;

typedef union {
  struct {
    uint32_t MMR_IDLEMODE : 2;
    uint32_t MMR_STDBYMODE : 2;
    uint32_t RESERVED : 28;
  };
  uint32_t raw;
} RegisterCONTROL;

typedef union {
  struct {
    uint32_t INT_PRESCALE : 12;
    uint32_t RESERVED : 4;
    uint32_t INT_PACE_EN : 6;
    uint32_t RESERVED1 : 9;
    uint32_t INT_TEST : 1;
  };
  uint32_t raw;
} RegisterINT_CONTROL;

typedef union {
  struct {
    uint32_t C0_RX_THRESH_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_RX_THRESH_EN;

typedef union {
  struct {
    uint32_t C0_RX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_RX_EN;

typedef union {
  struct {
    uint32_t C0_TX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_TX_EN;

typedef union {
  struct {
    uint32_t C0_MISC_EN : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC0_MISC_EN;

typedef union {
  struct {
    uint32_t C1_RX_THRESH_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_RX_THRESH_EN;

typedef union {
  struct {
    uint32_t C1_RX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_RX_EN;

typedef union {
  struct {
    uint32_t C1_TX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_TX_EN;

typedef union {
  struct {
    uint32_t C1_MISC_EN : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC1_MISC_EN;

typedef union {
  struct {
    uint32_t C2_RX_THRESH_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_RX_THRESH_EN;

typedef union {
  struct {
    uint32_t C2_RX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_RX_EN;

typedef union {
  struct {
    uint32_t C2_TX_EN : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_TX_EN;

typedef union {
  struct {
    uint32_t C2_MISC_EN : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC2_MISC_EN;

typedef union {
  struct {
    uint32_t C0_RX_THRESH_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_RX_THRESH_STAT;

typedef union {
  struct {
    uint32_t C0_RX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_RX_STAT;

typedef union {
  struct {
    uint32_t C0_TX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC0_TX_STAT;

typedef union {
  struct {
    uint32_t C0_MISC_STAT : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC0_MISC_STAT;

typedef union {
  struct {
    uint32_t C1_RX_THRESH_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_RX_THRESH_STAT;

typedef union {
  struct {
    uint32_t C1_RX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_RX_STAT;

typedef union {
  struct {
    uint32_t C1_TX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC1_TX_STAT;

typedef union {
  struct {
    uint32_t C1_MISC_STAT : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC1_MISC_STAT;

typedef union {
  struct {
    uint32_t C2_RX_THRESH_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_RX_THRESH_STAT;

typedef union {
  struct {
    uint32_t C2_RX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_RX_STAT;

typedef union {
  struct {
    uint32_t C2_TX_STAT : 8;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterC2_TX_STAT;

typedef union {
  struct {
    uint32_t C2_MISC_STAT : 5;
    uint32_t RESERVED : 27;
  };
  uint32_t raw;
} RegisterC2_MISC_STAT;

typedef union {
  struct {
    uint32_t C0_RX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC0_RX_IMAX;

typedef union {
  struct {
    uint32_t C0_TX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC0_TX_IMAX;

typedef union {
  struct {
    uint32_t C1_RX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC1_RX_IMAX;

typedef union {
  struct {
    uint32_t C1_TX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC1_TX_IMAX;

typedef union {
  struct {
    uint32_t C2_RX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC2_RX_IMAX;

typedef union {
  struct {
    uint32_t C2_TX_IMAX : 6;
    uint32_t RESERVED : 26;
  };
  uint32_t raw;
} RegisterC2_TX_IMAX;

typedef union {
  struct {
    uint32_t RGMII1_LINK : 1;
    uint32_t RGMII1_SPEED : 2;
    uint32_t RGMII1_FULLDUPLEX : 1;
    uint32_t RGMII2_LINK : 1;
    uint32_t RGMII2_SPEED : 2;
    uint32_t RGMII2_FULLDUPLEX : 1;
    uint32_t RESERVED : 24;
  };
  uint32_t raw;
} RegisterRGMII_CTL;

typedef struct {
  RegisterIDVER IDVER;
  RegisterSOFT_RESET SOFT_RESET;
  RegisterCONTROL CONTROL;
  RegisterINT_CONTROL INT_CONTROL;
  RegisterC0_RX_THRESH_EN C0_RX_THRESH_EN;
  RegisterC0_RX_EN C0_RX_EN;
  RegisterC0_TX_EN C0_TX_EN;
  RegisterC0_MISC_EN C0_MISC_EN;
  RegisterC1_RX_THRESH_EN C1_RX_THRESH_EN;
  RegisterC1_RX_EN C1_RX_EN;
  RegisterC1_TX_EN C1_TX_EN;
  RegisterC1_MISC_EN C1_MISC_EN;
  RegisterC2_RX_THRESH_EN C2_RX_THRESH_EN;
  RegisterC2_RX_EN C2_RX_EN;
  RegisterC2_TX_EN C2_TX_EN;
  RegisterC2_MISC_EN C2_MISC_EN;
  RegisterC0_RX_THRESH_STAT C0_RX_THRESH_STAT;
  RegisterC0_RX_STAT C0_RX_STAT;
  RegisterC0_TX_STAT C0_TX_STAT;
  RegisterC0_MISC_STAT C0_MISC_STAT;
  RegisterC1_RX_THRESH_STAT C1_RX_THRESH_STAT;
  RegisterC1_RX_STAT C1_RX_STAT;
  RegisterC1_TX_STAT C1_TX_STAT;
  RegisterC1_MISC_STAT C1_MISC_STAT;
  RegisterC2_RX_THRESH_STAT C2_RX_THRESH_STAT;
  RegisterC2_RX_STAT C2_RX_STAT;
  RegisterC2_TX_STAT C2_TX_STAT;
  RegisterC2_MISC_STAT C2_MISC_STAT;
  RegisterC0_RX_IMAX C0_RX_IMAX;
  RegisterC0_TX_IMAX C0_TX_IMAX;
  RegisterC1_RX_IMAX C1_RX_IMAX;
  RegisterC1_TX_IMAX C1_TX_IMAX;
  RegisterC2_RX_IMAX C2_RX_IMAX;
  RegisterC2_TX_IMAX C2_TX_IMAX;
  RegisterRGMII_CTL RGMII_CTL;
} PeripheralCPSW_WR;

typedef union {
  struct {
    uint32_t REG_MINOR_REVISION : 6;
    uint32_t RESERVED2 : 2;
    uint32_t REG_MAJOR_REVISION : 3;
    uint32_t REG_RTL_VERSION : 5;
    uint32_t REG_MODULE_ID : 12;
    uint32_t RESERVED1 : 2;
    uint32_t REG_SCHEME : 2;
  };
  uint32_t raw;
} RegisterEMIF_MOD_ID_REV;

typedef union {
  struct {
    uint32_t RESERVED2 : 2;
    uint32_t REG_PHY_DLL_READY : 1;
    uint32_t RESERVED1 : 26;
    uint32_t REG_FAST_INIT : 1;
    uint32_t REG_DUAL_CLK_MODE : 1;
    uint32_t REG_BE : 1;
  };
  uint32_t raw;
} RegisterSTATUS;

typedef union {
  struct {
    uint32_t REG_PAGESIZE : 3;
    uint32_t REG_EBANK : 1;
    uint32_t REG_IBANK : 3;
    uint32_t REG_ROWSIZE : 3;
    uint32_t REG_CL : 4;
    uint32_t REG_NARROW_MODE : 2;
    uint32_t REG_CWL : 2;
    uint32_t REG_SDRAM_DRIVE : 2;
    uint32_t REG_DDR_DISABLE_DLL : 1;
    uint32_t REG_DYN_ODT : 2;
    uint32_t REG_DDR2_DDQS : 1;
    uint32_t REG_DDR_TERM : 3;
    uint32_t REG_IBANK_POS : 2;
    uint32_t REG_SDRAM_TYPE : 3;
  };
  uint32_t raw;
} RegisterSDRAM_CONFIG;

typedef union {
  struct {
    uint32_t RESERVED6 : 3;
    uint32_t RESERVED4 : 1;
    uint32_t RESERVED7 : 2;
    uint32_t RESERVED3 : 21;
    uint32_t REG_EBANK_POS : 1;
    uint32_t RESERVED2 : 2;
    uint32_t RESERVED5 : 1;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterSDRAM_CONFIG_2;

typedef union {
  struct {
    uint32_t REG_REFRESH_RATE : 16;
    uint32_t RESERVED3 : 8;
    uint32_t REG_PASR : 3;
    uint32_t RESERVED2 : 1;
    uint32_t REG_ASR : 1;
    uint32_t REG_SRT : 1;
    uint32_t RESERVED1 : 1;
    uint32_t REG_INITREF_DIS : 1;
  };
  uint32_t raw;
} RegisterSDRAM_REF_CTRL;

typedef union {
  struct {
    uint32_t REG_REFRESH_RATE_SHDW : 16;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterSDRAM_REF_CTRL_SHDW;

typedef union {
  struct {
    uint32_t REG_T_WTR : 3;
    uint32_t REG_T_RRD : 3;
    uint32_t REG_T_RC : 6;
    uint32_t REG_T_RAS : 5;
    uint32_t REG_T_WR : 4;
    uint32_t REG_T_RCD : 4;
    uint32_t REG_T_RP : 4;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_1;

typedef union {
  struct {
    uint32_t REG_T_WTR_SHDW : 3;
    uint32_t REG_T_RRD_SHDW : 3;
    uint32_t REG_T_RC_SHDW : 6;
    uint32_t REG_T_RAS_SHDW : 5;
    uint32_t REG_T_WR_SHDW : 4;
    uint32_t REG_T_RCD_SHDW : 4;
    uint32_t REG_T_RP_SHDW : 4;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_1_SHDW;

typedef union {
  struct {
    uint32_t REG_T_CKE : 3;
    uint32_t REG_T_RTP : 3;
    uint32_t REG_T_XSRD : 10;
    uint32_t REG_T_XSNR : 9;
    uint32_t REG_T_ODT : 3;
    uint32_t REG_T_XP : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_2;

typedef union {
  struct {
    uint32_t REG_T_CKE_SHDW : 3;
    uint32_t REG_T_RTP_SHDW : 3;
    uint32_t REG_T_XSRD_SHDW : 10;
    uint32_t REG_T_XSNR_SHDW : 9;
    uint32_t REG_T_ODT_SHDW : 3;
    uint32_t REG_T_XP_SHDW : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_2_SHDW;

typedef union {
  struct {
    uint32_t REG_T_RAS_MAX : 4;
    uint32_t REG_T_RFC : 9;
    uint32_t RESERVED2 : 2;
    uint32_t REG_ZQ_ZQCS : 6;
    uint32_t RESERVED3 : 3;
    uint32_t RESERVED1 : 4;
    uint32_t REG_T_PDLL_UL : 4;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_3;

typedef union {
  struct {
    uint32_t REG_T_RAS_MAX : 4;
    uint32_t REG_T_RFC : 9;
    uint32_t RESERVED2 : 2;
    uint32_t REG_ZQ_ZQCS : 6;
    uint32_t RESERVED3 : 3;
    uint32_t RESERVED1 : 4;
    uint32_t REG_T_PDLL_UL : 4;
  };
  uint32_t raw;
} RegisterSDRAM_TIM_3_SHDW;

typedef union {
  struct {
    uint32_t REG_CS_TIM : 4;
    uint32_t REG_SR_TIM : 4;
    uint32_t REG_LP_MODE : 3;
    uint32_t REG_DPD_EN : 1;
    uint32_t REG_PD_TIM : 4;
    uint32_t RESERVED1 : 16;
  };
  uint32_t raw;
} RegisterPWR_MGMT_CTRL;

typedef union {
  struct {
    uint32_t REG_CS_TIM_SHDW : 4;
    uint32_t REG_SR_TIM_SHDW : 4;
    uint32_t REG_PD_TIM_SHDW : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterPWR_MGMT_CTRL_SHDW;

typedef union {
  struct {
    uint32_t REG_PR_OLD_COUNT : 8;
    uint32_t REG_COS_COUNT_2 : 8;
    uint32_t REG_COS_COUNT_1 : 8;
    uint32_t RESERVED : 8;
  };
  uint32_t raw;
} RegisterINT_CONFIG;

typedef union {
  struct {
    uint32_t REG_CMD_FIFO_DEPTH : 8;
    uint32_t REG_WR_FIFO_DEPTH : 8;
    uint32_t RESERVED : 14;
    uint32_t REG_SYS_BUS_WIDTH : 2;
  };
  uint32_t raw;
} RegisterINT_CFG_VAL_1;

typedef union {
  struct {
    uint32_t REG_RCMD_FIFO_DEPTH : 8;
    uint32_t REG_RSD_FIFO_DEPTH : 8;
    uint32_t REG_RREG_FIFO_DEPTH : 8;
    uint32_t RESERVED : 8;
  };
  uint32_t raw;
} RegisterINT_CFG_VAL_2;

typedef union {
  struct {
    uint32_t REG_COUNTER1 : 32;
  };
  uint32_t raw;
} RegisterPERF_CNT_1;

typedef union {
  struct {
    uint32_t REG_COUNTER2 : 32;
  };
  uint32_t raw;
} RegisterPERF_CNT_2;

typedef union {
  struct {
    uint32_t REG_CNTR1_CFG : 4;
    uint32_t RESERVED2 : 10;
    uint32_t REG_CNTR1_REGION_EN : 1;
    uint32_t REG_CNTR1_MCONNID_EN : 1;
    uint32_t REG_CNTR2_CFG : 4;
    uint32_t RESERVED1 : 10;
    uint32_t REG_CNTR2_REGION_EN : 1;
    uint32_t REG_CNTR2_MCONNID_EN : 1;
  };
  uint32_t raw;
} RegisterPERF_CNT_CFG;

typedef union {
  struct {
    uint32_t REG_REGION_SEL1 : 2;
    uint32_t RESERVED2 : 6;
    uint32_t REG_MCONNID1 : 8;
    uint32_t REG_REGION_SEL2 : 2;
    uint32_t RESERVED1 : 6;
    uint32_t REG_MCONNID2 : 8;
  };
  uint32_t raw;
} RegisterPERF_CNT_SEL;

typedef union {
  struct {
    uint32_t REG_TOTAL_TIME : 32;
  };
  uint32_t raw;
} RegisterPERF_CNT_TIM;

typedef union {
  struct {
    uint32_t REG_READ_IDLE_INTERVAL : 9;
    uint32_t RESERVED2 : 7;
    uint32_t REG_READ_IDLE_LEN : 4;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterREAD_IDLE_CTRL;

typedef union {
  struct {
    uint32_t REG_READ_IDLE_INTERVAL_SHDW : 9;
    uint32_t RESERVED2 : 7;
    uint32_t REG_READ_IDLE_LEN_SHDW : 4;
    uint32_t RESERVED1 : 12;
  };
  uint32_t raw;
} RegisterREAD_IDLE_CTRL_SHDW;

typedef union {
  struct {
    uint32_t REG_ERR_SYS : 1;
    uint32_t REG_TA_SYS : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQSTATUS_RAW_SYS;

typedef union {
  struct {
    uint32_t REG_ERR_SYS : 1;
    uint32_t REG_TA_SYS : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQSTATUS_SYS;

typedef union {
  struct {
    uint32_t REG_EN_ERR_SYS : 1;
    uint32_t REG_EN_TA_SYS : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQENABLE_SET_SYS;

typedef union {
  struct {
    uint32_t REG_EN_ERR_SYS : 1;
    uint32_t REG_EN_TA_SYS : 1;
    uint32_t RESERVED2 : 1;
    uint32_t RESERVED1 : 29;
  };
  uint32_t raw;
} RegisterIRQENABLE_CLR_SYS;

typedef union {
  struct {
    uint32_t REG_ZQ_REFINTERVAL : 16;
    uint32_t REG_ZQ_ZQCL_MULT : 2;
    uint32_t REG_ZQ_ZQINIT_MULT : 2;
    uint32_t RESERVED1 : 8;
    uint32_t REG_ZQ_SFEXITEN : 1;
    uint32_t REG_ZQ_DUALCALEN : 1;
    uint32_t REG_ZQ_CS0EN : 1;
    uint32_t REG_ZQ_CS1EN : 1;
  };
  uint32_t raw;
} RegisterZQ_CONFIG;

typedef union {
  struct {
    uint32_t REG_RDWRLVLINC_RMP_WIN : 13;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterRDWR_LVL_RMP_WIN;

typedef union {
  struct {
    uint32_t REG_WRLVLINC_RMP_INT : 8;
    uint32_t REG_RDLVLGATEINC_RMP_INT : 8;
    uint32_t REG_RDLVLINC_RMP_INT : 8;
    uint32_t REG_RDWRLVLINC_RMP_PRE : 7;
    uint32_t REG_RDWRLVL_EN : 1;
  };
  uint32_t raw;
} RegisterRDWR_LVL_RMP_CTRL;

typedef union {
  struct {
    uint32_t REG_WRLVLINC_INT : 8;
    uint32_t REG_RDLVLGATEINC_INT : 8;
    uint32_t REG_RDLVLINC_INT : 8;
    uint32_t REG_RDWRLVLINC_PRE : 7;
    uint32_t REG_RDWRLVLFULL_START : 1;
  };
  uint32_t raw;
} RegisterRDWR_LVL_CTRL;

typedef union {
  struct {
    uint32_t REG_READ_LATENCY : 5;
    uint32_t RESERVED4 : 3;
    uint32_t REG_PHY_RD_LOCAL_ODT : 2;
    uint32_t REG_PHY_WR_LOCAL_ODT : 2;
    uint32_t REG_PHY_IDLE_LOCAL_ODT : 2;
    uint32_t RESERVED3 : 1;
    uint32_t REG_PHY_RST_N : 1;
    uint32_t RESERVED2 : 4;
    uint32_t REG_PHY_ENABLE_DYNAMIC_PWRDN : 1;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterDDR_PHY_CTRL_1;

typedef union {
  struct {
    uint32_t REG_READ_LATENCY : 5;
    uint32_t RESERVED4 : 3;
    uint32_t REG_PHY_RD_LOCAL_ODT : 2;
    uint32_t REG_PHY_WR_LOCAL_ODT : 2;
    uint32_t REG_PHY_IDLE_LOCAL_ODT : 2;
    uint32_t RESERVED3 : 1;
    uint32_t REG_PHY_RST_N : 1;
    uint32_t RESERVED2 : 4;
    uint32_t REG_PHY_ENABLE_DYNAMIC_PWRDN : 1;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterDDR_PHY_CTRL_1_SHDW;

typedef union {
  struct {
    uint32_t REG_PRI_0_COS : 2;
    uint32_t REG_PRI_1_COS : 2;
    uint32_t REG_PRI_2_COS : 2;
    uint32_t REG_PRI_3_COS : 2;
    uint32_t REG_PRI_4_COS : 2;
    uint32_t REG_PRI_5_COS : 2;
    uint32_t REG_PRI_6_COS : 2;
    uint32_t REG_PRI_7_COS : 2;
    uint32_t RESERVED : 15;
    uint32_t REG_PRI_COS_MAP_EN : 1;
  };
  uint32_t raw;
} RegisterPRI_COS_MAP;

typedef union {
  struct {
    uint32_t REG_MSK_3_COS_1 : 2;
    uint32_t REG_CONNID_3_COS_1 : 8;
    uint32_t REG_MSK_2_COS_1 : 2;
    uint32_t REG_CONNID_2_COS_1 : 8;
    uint32_t REG_MSK_1_COS_1 : 3;
    uint32_t REG_CONNID_1_COS_1 : 8;
    uint32_t REG_CONNID_COS_1_MAP_EN : 1;
  };
  uint32_t raw;
} RegisterCONNID_COS_1_MAP;

typedef union {
  struct {
    uint32_t REG_MSK_3_COS_2 : 2;
    uint32_t REG_CONNID_3_COS_2 : 8;
    uint32_t REG_MSK_2_COS_2 : 2;
    uint32_t REG_CONNID_2_COS_2 : 8;
    uint32_t REG_MSK_1_COS_2 : 3;
    uint32_t REG_CONNID_1_COS_2 : 8;
    uint32_t REG_CONNID_COS_2_MAP_EN : 1;
  };
  uint32_t raw;
} RegisterCONNID_COS_2_MAP;

typedef union {
  struct {
    uint32_t REG_RD_THRSH : 5;
    uint32_t RESERVED2 : 3;
    uint32_t REG_WR_THRSH : 5;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterRD_WR_EXEC_THRSH;

typedef struct {
  RegisterEMIF_MOD_ID_REV EMIF_MOD_ID_REV;
  RegisterSTATUS STATUS;
  RegisterSDRAM_CONFIG SDRAM_CONFIG;
  RegisterSDRAM_CONFIG_2 SDRAM_CONFIG_2;
  RegisterSDRAM_REF_CTRL SDRAM_REF_CTRL;
  RegisterSDRAM_REF_CTRL_SHDW SDRAM_REF_CTRL_SHDW;
  RegisterSDRAM_TIM_1 SDRAM_TIM_1;
  RegisterSDRAM_TIM_1_SHDW SDRAM_TIM_1_SHDW;
  RegisterSDRAM_TIM_2 SDRAM_TIM_2;
  RegisterSDRAM_TIM_2_SHDW SDRAM_TIM_2_SHDW;
  RegisterSDRAM_TIM_3 SDRAM_TIM_3;
  RegisterSDRAM_TIM_3_SHDW SDRAM_TIM_3_SHDW;
  uint8_t RESERVED_OFFSETS_0[8];
  RegisterPWR_MGMT_CTRL PWR_MGMT_CTRL;
  RegisterPWR_MGMT_CTRL_SHDW PWR_MGMT_CTRL_SHDW;
  uint8_t RESERVED_OFFSETS_1[20];
  RegisterINT_CONFIG INT_CONFIG;
  RegisterINT_CFG_VAL_1 INT_CFG_VAL_1;
  RegisterINT_CFG_VAL_2 INT_CFG_VAL_2;
  uint8_t RESERVED_OFFSETS_2[32];
  RegisterPERF_CNT_1 PERF_CNT_1;
  RegisterPERF_CNT_2 PERF_CNT_2;
  RegisterPERF_CNT_CFG PERF_CNT_CFG;
  RegisterPERF_CNT_SEL PERF_CNT_SEL;
  RegisterPERF_CNT_TIM PERF_CNT_TIM;
  uint8_t RESERVED_OFFSETS_3[4];
  RegisterREAD_IDLE_CTRL READ_IDLE_CTRL;
  RegisterREAD_IDLE_CTRL_SHDW READ_IDLE_CTRL_SHDW;
  uint8_t RESERVED_OFFSETS_4[4];
  RegisterIRQSTATUS_RAW_SYS IRQSTATUS_RAW_SYS;
  uint8_t RESERVED_OFFSETS_5[4];
  RegisterIRQSTATUS_SYS IRQSTATUS_SYS;
  uint8_t RESERVED_OFFSETS_6[4];
  RegisterIRQENABLE_SET_SYS IRQENABLE_SET_SYS;
  uint8_t RESERVED_OFFSETS_7[4];
  RegisterIRQENABLE_CLR_SYS IRQENABLE_CLR_SYS;
  uint8_t RESERVED_OFFSETS_8[8];
  RegisterZQ_CONFIG ZQ_CONFIG;
  uint8_t RESERVED_OFFSETS_9[8];
  RegisterRDWR_LVL_RMP_WIN RDWR_LVL_RMP_WIN;
  RegisterRDWR_LVL_RMP_CTRL RDWR_LVL_RMP_CTRL;
  RegisterRDWR_LVL_CTRL RDWR_LVL_CTRL;
  uint8_t RESERVED_OFFSETS_10[4];
  RegisterDDR_PHY_CTRL_1 DDR_PHY_CTRL_1;
  RegisterDDR_PHY_CTRL_1_SHDW DDR_PHY_CTRL_1_SHDW;
  uint8_t RESERVED_OFFSETS_11[20];
  RegisterPRI_COS_MAP PRI_COS_MAP;
  RegisterCONNID_COS_1_MAP CONNID_COS_1_MAP;
  RegisterCONNID_COS_2_MAP CONNID_COS_2_MAP;
  uint8_t RESERVED_OFFSETS_12[20];
  RegisterRD_WR_EXEC_THRSH RD_WR_EXEC_THRSH;
} PeripheralEMIF0;

typedef union {
  struct {
    uint32_t REV : 8;
    uint32_t RESERVED1 : 24;
  };
  uint32_t raw;
} RegisterREVISION;

typedef union {
  struct {
    uint32_t AUTOIDLE : 1;
    uint32_t SOFTRESET : 1;
    uint32_t RESERVED2 : 1;
    uint32_t SIDLEMODE : 2;
    uint32_t RESERVED1 : 27;
  };
  uint32_t raw;
} RegisterSYSCONFIG;

typedef union {
  struct {
    uint32_t RESETDONE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterSYSSTATUS;

typedef union {
  struct {
    uint32_t FIFOEVENTSTATUS : 1;
    uint32_t TERMINALCOUNTSTATUS : 1;
    uint32_t RESERVED2 : 6;
    uint32_t WAIT0EDGEDETECTIONSTATUS : 1;
    uint32_t WAIT1EDGEDETECTIONSTATUS : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQSTATUS;

typedef union {
  struct {
    uint32_t FIFOEVENTENABLE : 1;
    uint32_t TERMINALCOUNTEVENTENABLE : 1;
    uint32_t RESERVED2 : 6;
    uint32_t WAIT0EDGEDETECTIONENABLE : 1;
    uint32_t WAIT1EDGEDETECTIONENABLE : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterIRQENABLE;

typedef union {
  struct {
    uint32_t TIMEOUTENABLE : 1;
    uint32_t RESERVED2 : 3;
    uint32_t TIMEOUTSTARTVALUE : 9;
    uint32_t RESERVED1 : 19;
  };
  uint32_t raw;
} RegisterTIMEOUT_CONTROL;

typedef union {
  struct {
    uint32_t ILLEGALADD : 31;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterERR_ADDRESS;

typedef union {
  struct {
    uint32_t ERRORVALID : 1;
    uint32_t RESERVED3 : 1;
    uint32_t ERRORTIMEOUT : 1;
    uint32_t ERRORNOTSUPPMCMD : 1;
    uint32_t ERRORNOTSUPPADD : 1;
    uint32_t RESERVED2 : 3;
    uint32_t ILLEGALMCMD : 3;
    uint32_t RESERVED1 : 21;
  };
  uint32_t raw;
} RegisterERR_TYPE;

typedef union {
  struct {
    uint32_t NANDFORCEPOSTEDWRITE : 1;
    uint32_t LIMITEDADDRESS : 1;
    uint32_t RESERVED3 : 2;
    uint32_t WRITEPROTECT : 1;
    uint32_t RESERVED2 : 3;
    uint32_t WAIT0PINPOLARITY : 1;
    uint32_t WAIT1PINPOLARITY : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterCONFIG;

typedef union {
  struct {
    uint32_t EMPTYWRITEBUFFERSTATUS : 1;
    uint32_t RESERVED2 : 7;
    uint32_t WAIT0STATUS : 1;
    uint32_t WAIT1STATUS : 1;
    uint32_t RESERVED1 : 22;
  };
  uint32_t raw;
} RegisterSTATUS;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_0;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_0;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_0;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_0;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_0;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_0;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_0;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_0 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_0;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_0 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_0;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_0 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_0;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_1;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_1;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_1;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_1;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_1;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_1;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_1;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_1 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_1;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_1 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_1;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_1 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_1;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_2;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_2;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_2;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_2;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_2;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_2;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_2;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_2 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_2;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_2 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_2;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_2 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_2;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_3;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_3;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_3;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_3;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_3;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_3;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_3;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_3 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_3;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_3 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_3;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_3 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_3;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_4;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_4;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_4;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_4;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_4;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_4;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_4;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_4 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_4;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_4 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_4;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_4 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_4;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_5;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_5;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_5;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_5;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_5;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_5;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_5;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_5 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_5;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_5 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_5;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_5 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_5;

typedef union {
  struct {
    uint32_t GPMCFCLKDIVIDER : 2;
    uint32_t RESERVED4 : 2;
    uint32_t TIMEPARAGRANULARITY : 1;
    uint32_t RESERVED3 : 3;
    uint32_t MUXADDDATA : 2;
    uint32_t DEVICETYPE : 2;
    uint32_t DEVICESIZE : 2;
    uint32_t RESERVED2 : 2;
    uint32_t WAITPINSELECT : 2;
    uint32_t WAITMONITORINGTIME : 2;
    uint32_t RESERVED1 : 1;
    uint32_t WAITWRITEMONITORING : 1;
    uint32_t WAITREADMONITORING : 1;
    uint32_t ATTACHEDDEVICEPAGELENGTH : 2;
    uint32_t CLKACTIVATIONTIME : 2;
    uint32_t WRITETYPE : 1;
    uint32_t WRITEMULTIPLE : 1;
    uint32_t READTYPE : 1;
    uint32_t READMULTIPLE : 1;
    uint32_t WRAPBURST : 1;
  };
  uint32_t raw;
} RegisterCONFIG1_6;

typedef union {
  struct {
    uint32_t CSONTIME : 4;
    uint32_t RESERVED3 : 3;
    uint32_t CSEXTRADELAY : 1;
    uint32_t CSRDOFFTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t CSWROFFTIME : 5;
    uint32_t RESERVED1 : 11;
  };
  uint32_t raw;
} RegisterCONFIG2_6;

typedef union {
  struct {
    uint32_t ADVONTIME : 4;
    uint32_t ADVAADMUXONTIME : 3;
    uint32_t ADVEXTRADELAY : 1;
    uint32_t ADVRDOFFTIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t ADVWROFFTIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t ADVAADMUXRDOFFTIME : 3;
    uint32_t RESERVED2 : 1;
    uint32_t ADVAADMUXWROFFTIME : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterCONFIG3_6;

typedef union {
  struct {
    uint32_t OEONTIME : 4;
    uint32_t OEAADMUXONTIME : 3;
    uint32_t OEEXTRADELAY : 1;
    uint32_t OEOFFTIME : 5;
    uint32_t OEAADMUXOFFTIME : 3;
    uint32_t WEONTIME : 4;
    uint32_t RESERVED2 : 3;
    uint32_t WEEXTRADELAY : 1;
    uint32_t WEOFFTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG4_6;

typedef union {
  struct {
    uint32_t RDCYCLETIME : 5;
    uint32_t RESERVED4 : 3;
    uint32_t WRCYCLETIME : 5;
    uint32_t RESERVED3 : 3;
    uint32_t RDACCESSTIME : 5;
    uint32_t RESERVED2 : 3;
    uint32_t PAGEBURSTACCESSTIME : 4;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterCONFIG5_6;

typedef union {
  struct {
    uint32_t BUSTURNAROUND : 4;
    uint32_t RESERVED4 : 2;
    uint32_t CYCLE2CYCLEDIFFCSEN : 1;
    uint32_t CYCLE2CYCLESAMECSEN : 1;
    uint32_t CYCLE2CYCLEDELAY : 4;
    uint32_t RESERVED3 : 4;
    uint32_t WRDATAONADMUXBUS : 4;
    uint32_t RESERVED2 : 4;
    uint32_t WRACCESSTIME : 5;
    uint32_t RESERVED1 : 3;
  };
  uint32_t raw;
} RegisterCONFIG6_6;

typedef union {
  struct {
    uint32_t BASEADDRESS : 6;
    uint32_t CSVALID : 1;
    uint32_t RESERVED2 : 1;
    uint32_t MASKADDRESS : 4;
    uint32_t RESERVED1 : 20;
  };
  uint32_t raw;
} RegisterCONFIG7_6;

typedef union {
  struct {
    uint32_t GPMC_NAND_COMMAND_6 : 32;
  };
  uint32_t raw;
} RegisterNAND_COMMAND_6;

typedef union {
  struct {
    uint32_t GPMC_NAND_ADDRESS_6 : 32;
  };
  uint32_t raw;
} RegisterNAND_ADDRESS_6;

typedef union {
  struct {
    uint32_t GPMC_NAND_DATA_6 : 32;
  };
  uint32_t raw;
} RegisterNAND_DATA_6;

typedef union {
  struct {
    uint32_t ACCESSMODE : 1;
    uint32_t RESERVED5 : 1;
    uint32_t DMAMODE : 1;
    uint32_t SYNCHROMODE : 1;
    uint32_t WAITPINSELECTOR : 2;
    uint32_t RESERVED4 : 1;
    uint32_t ENABLEENGINE : 1;
    uint32_t FIFOTHRESHOLD : 7;
    uint32_t RESERVED3 : 1;
    uint32_t PFPWWEIGHTEDPRIO : 4;
    uint32_t RESERVED2 : 3;
    uint32_t PFPWENROUNDROBIN : 1;
    uint32_t ENGINECSSELECTOR : 3;
    uint32_t ENABLEOPTIMIZEDACCESS : 1;
    uint32_t CYCLEOPTIMIZATION : 3;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterPREFETCH_CONFIG1;

typedef union {
  struct {
    uint32_t TRANSFERCOUNT : 14;
    uint32_t RESERVED1 : 18;
  };
  uint32_t raw;
} RegisterPREFETCH_CONFIG2;

typedef union {
  struct {
    uint32_t STARTENGINE : 1;
    uint32_t RESERVED1 : 31;
  };
  uint32_t raw;
} RegisterPREFETCH_CONTROL;

typedef union {
  struct {
    uint32_t COUNTVALUE : 14;
    uint32_t RESERVED3 : 2;
    uint32_t FIFOTHRESHOLDSTATUS : 1;
    uint32_t RESERVED2 : 7;
    uint32_t FIFOPOINTER : 7;
    uint32_t RESERVED1 : 1;
  };
  uint32_t raw;
} RegisterPREFETCH_STATUS;

typedef union {
  struct {
    uint32_t ECCENABLE : 1;
    uint32_t ECCCS : 3;
    uint32_t ECCTOPSECTOR : 3;
    uint32_t ECC16B : 1;
    uint32_t ECCWRAPMODE : 4;
    uint32_t ECCBCHTSEL : 2;
    uint32_t RESERVED2 : 2;
    uint32_t ECCALGORITHM : 1;
    uint32_t RESERVED1 : 15;
  };
  uint32_t raw;
} RegisterECC_CONFIG;

typedef union {
  struct {
    uint32_t ECCPOINTER : 4;
    uint32_t RESERVED2 : 4;
    uint32_t ECCCLEAR : 1;
    uint32_t RESERVED1 : 23;
  };
  uint32_t raw;
} RegisterECC_CONTROL;

typedef union {
  struct {
    uint32_t ECC1RESULTSIZE : 1;
    uint32_t ECC2RESULTSIZE : 1;
    uint32_t ECC3RESULTSIZE : 1;
    uint32_t ECC4RESULTSIZE : 1;
    uint32_t ECC5RESULTSIZE : 1;
    uint32_t ECC6RESULTSIZE : 1;
    uint32_t ECC7RESULTSIZE : 1;
    uint32_t ECC8RESULTSIZE : 1;
    uint32_t ECC9RESULTSIZE : 1;
    uint32_t RESERVED3 : 3;
    uint32_t ECCSIZE0 : 8;
    uint32_t RESERVED2 : 2;
    uint32_t ECCSIZE1 : 8;
    uint32_t RESERVED1 : 2;
  };
  uint32_t raw;
} RegisterECC_SIZE_CONFIG;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC1_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC2_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC3_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC4_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC5_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC6_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC7_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC8_RESULT;

typedef union {
  struct {
    uint32_t P1E : 1;
    uint32_t P2E : 1;
    uint32_t P4E : 1;
    uint32_t P8E : 1;
    uint32_t P16E : 1;
    uint32_t P32E : 1;
    uint32_t P64E : 1;
    uint32_t P128E : 1;
    uint32_t P256E : 1;
    uint32_t P512E : 1;
    uint32_t P1024E : 1;
    uint32_t P2048E : 1;
    uint32_t RESERVED2 : 4;
    uint32_t P1O : 1;
    uint32_t P2O : 1;
    uint32_t P4O : 1;
    uint32_t P8O : 1;
    uint32_t P16O : 1;
    uint32_t P32O : 1;
    uint32_t P64O : 1;
    uint32_t P128O : 1;
    uint32_t P256O : 1;
    uint32_t P512O : 1;
    uint32_t P1024O : 1;
    uint32_t P2048O : 1;
    uint32_t RESERVED1 : 4;
  };
  uint32_t raw;
} RegisterECC9_RESULT;

typedef union {
  struct {
    uint32_t BCH_RESULT0_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_0;

typedef union {
  struct {
    uint32_t BCH_RESULT1_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_0;

typedef union {
  struct {
    uint32_t BCH_RESULT2_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_0;

typedef union {
  struct {
    uint32_t BCH_RESULT3_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_0;

typedef union {
  struct {
    uint32_t BCH_RESULT0_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_1;

typedef union {
  struct {
    uint32_t BCH_RESULT1_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_1;

typedef union {
  struct {
    uint32_t BCH_RESULT2_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_1;

typedef union {
  struct {
    uint32_t BCH_RESULT3_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_1;

typedef union {
  struct {
    uint32_t BCH_RESULT0_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_2;

typedef union {
  struct {
    uint32_t BCH_RESULT1_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_2;

typedef union {
  struct {
    uint32_t BCH_RESULT2_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_2;

typedef union {
  struct {
    uint32_t BCH_RESULT3_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_2;

typedef union {
  struct {
    uint32_t BCH_RESULT0_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_3;

typedef union {
  struct {
    uint32_t BCH_RESULT1_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_3;

typedef union {
  struct {
    uint32_t BCH_RESULT2_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_3;

typedef union {
  struct {
    uint32_t BCH_RESULT3_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_3;

typedef union {
  struct {
    uint32_t BCH_RESULT0_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_4;

typedef union {
  struct {
    uint32_t BCH_RESULT1_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_4;

typedef union {
  struct {
    uint32_t BCH_RESULT2_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_4;

typedef union {
  struct {
    uint32_t BCH_RESULT3_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_4;

typedef union {
  struct {
    uint32_t BCH_RESULT0_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_5;

typedef union {
  struct {
    uint32_t BCH_RESULT1_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_5;

typedef union {
  struct {
    uint32_t BCH_RESULT2_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_5;

typedef union {
  struct {
    uint32_t BCH_RESULT3_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_5;

typedef union {
  struct {
    uint32_t BCH_RESULT0_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT0_6;

typedef union {
  struct {
    uint32_t BCH_RESULT1_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT1_6;

typedef union {
  struct {
    uint32_t BCH_RESULT2_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT2_6;

typedef union {
  struct {
    uint32_t BCH_RESULT3_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT3_6;

typedef union {
  struct {
    uint32_t BCH_DATA : 16;
    uint32_t RESERVED_1 : 16;
  };
  uint32_t raw;
} RegisterBCH_SWDATA;

typedef union {
  struct {
    uint32_t BCH_RESULT4_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_0;

typedef union {
  struct {
    uint32_t BCH_RESULT5_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_0;

typedef union {
  struct {
    uint32_t BCH_RESULT6_0 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_0;

typedef union {
  struct {
    uint32_t BCH_RESULT4_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_1;

typedef union {
  struct {
    uint32_t BCH_RESULT5_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_1;

typedef union {
  struct {
    uint32_t BCH_RESULT6_1 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_1;

typedef union {
  struct {
    uint32_t BCH_RESULT4_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_2;

typedef union {
  struct {
    uint32_t BCH_RESULT5_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_2;

typedef union {
  struct {
    uint32_t BCH_RESULT6_2 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_2;

typedef union {
  struct {
    uint32_t BCH_RESULT4_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_3;

typedef union {
  struct {
    uint32_t BCH_RESULT5_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_3;

typedef union {
  struct {
    uint32_t BCH_RESULT6_3 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_3;

typedef union {
  struct {
    uint32_t BCH_RESULT4_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_4;

typedef union {
  struct {
    uint32_t BCH_RESULT5_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_4;

typedef union {
  struct {
    uint32_t BCH_RESULT6_4 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_4;

typedef union {
  struct {
    uint32_t BCH_RESULT4_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_5;

typedef union {
  struct {
    uint32_t BCH_RESULT5_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_5;

typedef union {
  struct {
    uint32_t BCH_RESULT6_5 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_5;

typedef union {
  struct {
    uint32_t BCH_RESULT4_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT4_6;

typedef union {
  struct {
    uint32_t BCH_RESULT5_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT5_6;

typedef union {
  struct {
    uint32_t BCH_RESULT6_6 : 32;
  };
  uint32_t raw;
} RegisterBCH_RESULT6_6;

typedef struct {
  RegisterREVISION REVISION;
  uint8_t RESERVED_OFFSETS_0[12];
  RegisterSYSCONFIG SYSCONFIG;
  RegisterSYSSTATUS SYSSTATUS;
  RegisterIRQSTATUS IRQSTATUS;
  RegisterIRQENABLE IRQENABLE;
  uint8_t RESERVED_OFFSETS_1[32];
  RegisterTIMEOUT_CONTROL TIMEOUT_CONTROL;
  RegisterERR_ADDRESS ERR_ADDRESS;
  RegisterERR_TYPE ERR_TYPE;
  uint8_t RESERVED_OFFSETS_2[4];
  RegisterCONFIG CONFIG;
  RegisterSTATUS STATUS;
  uint8_t RESERVED_OFFSETS_3[8];
  RegisterCONFIG1_0 CONFIG1_0;
  RegisterCONFIG2_0 CONFIG2_0;
  RegisterCONFIG3_0 CONFIG3_0;
  RegisterCONFIG4_0 CONFIG4_0;
  RegisterCONFIG5_0 CONFIG5_0;
  RegisterCONFIG6_0 CONFIG6_0;
  RegisterCONFIG7_0 CONFIG7_0;
  RegisterNAND_COMMAND_0 NAND_COMMAND_0;
  RegisterNAND_ADDRESS_0 NAND_ADDRESS_0;
  RegisterNAND_DATA_0 NAND_DATA_0;
  uint8_t RESERVED_OFFSETS_4[8];
  RegisterCONFIG1_1 CONFIG1_1;
  RegisterCONFIG2_1 CONFIG2_1;
  RegisterCONFIG3_1 CONFIG3_1;
  RegisterCONFIG4_1 CONFIG4_1;
  RegisterCONFIG5_1 CONFIG5_1;
  RegisterCONFIG6_1 CONFIG6_1;
  RegisterCONFIG7_1 CONFIG7_1;
  RegisterNAND_COMMAND_1 NAND_COMMAND_1;
  RegisterNAND_ADDRESS_1 NAND_ADDRESS_1;
  RegisterNAND_DATA_1 NAND_DATA_1;
  uint8_t RESERVED_OFFSETS_5[8];
  RegisterCONFIG1_2 CONFIG1_2;
  RegisterCONFIG2_2 CONFIG2_2;
  RegisterCONFIG3_2 CONFIG3_2;
  RegisterCONFIG4_2 CONFIG4_2;
  RegisterCONFIG5_2 CONFIG5_2;
  RegisterCONFIG6_2 CONFIG6_2;
  RegisterCONFIG7_2 CONFIG7_2;
  RegisterNAND_COMMAND_2 NAND_COMMAND_2;
  RegisterNAND_ADDRESS_2 NAND_ADDRESS_2;
  RegisterNAND_DATA_2 NAND_DATA_2;
  uint8_t RESERVED_OFFSETS_6[8];
  RegisterCONFIG1_3 CONFIG1_3;
  RegisterCONFIG2_3 CONFIG2_3;
  RegisterCONFIG3_3 CONFIG3_3;
  RegisterCONFIG4_3 CONFIG4_3;
  RegisterCONFIG5_3 CONFIG5_3;
  RegisterCONFIG6_3 CONFIG6_3;
  RegisterCONFIG7_3 CONFIG7_3;
  RegisterNAND_COMMAND_3 NAND_COMMAND_3;
  RegisterNAND_ADDRESS_3 NAND_ADDRESS_3;
  RegisterNAND_DATA_3 NAND_DATA_3;
  uint8_t RESERVED_OFFSETS_7[8];
  RegisterCONFIG1_4 CONFIG1_4;
  RegisterCONFIG2_4 CONFIG2_4;
  RegisterCONFIG3_4 CONFIG3_4;
  RegisterCONFIG4_4 CONFIG4_4;
  RegisterCONFIG5_4 CONFIG5_4;
  RegisterCONFIG6_4 CONFIG6_4;
  RegisterCONFIG7_4 CONFIG7_4;
  RegisterNAND_COMMAND_4 NAND_COMMAND_4;
  RegisterNAND_ADDRESS_4 NAND_ADDRESS_4;
  RegisterNAND_DATA_4 NAND_DATA_4;
  uint8_t RESERVED_OFFSETS_8[8];
  RegisterCONFIG1_5 CONFIG1_5;
  RegisterCONFIG2_5 CONFIG2_5;
  RegisterCONFIG3_5 CONFIG3_5;
  RegisterCONFIG4_5 CONFIG4_5;
  RegisterCONFIG5_5 CONFIG5_5;
  RegisterCONFIG6_5 CONFIG6_5;
  RegisterCONFIG7_5 CONFIG7_5;
  RegisterNAND_COMMAND_5 NAND_COMMAND_5;
  RegisterNAND_ADDRESS_5 NAND_ADDRESS_5;
  RegisterNAND_DATA_5 NAND_DATA_5;
  uint8_t RESERVED_OFFSETS_9[8];
  RegisterCONFIG1_6 CONFIG1_6;
  RegisterCONFIG2_6 CONFIG2_6;
  RegisterCONFIG3_6 CONFIG3_6;
  RegisterCONFIG4_6 CONFIG4_6;
  RegisterCONFIG5_6 CONFIG5_6;
  RegisterCONFIG6_6 CONFIG6_6;
  RegisterCONFIG7_6 CONFIG7_6;
  RegisterNAND_COMMAND_6 NAND_COMMAND_6;
  RegisterNAND_ADDRESS_6 NAND_ADDRESS_6;
  RegisterNAND_DATA_6 NAND_DATA_6;
  uint8_t RESERVED_OFFSETS_10[56];
  RegisterPREFETCH_CONFIG1 PREFETCH_CONFIG1;
  RegisterPREFETCH_CONFIG2 PREFETCH_CONFIG2;
  uint8_t RESERVED_OFFSETS_11[4];
  RegisterPREFETCH_CONTROL PREFETCH_CONTROL;
  RegisterPREFETCH_STATUS PREFETCH_STATUS;
  RegisterECC_CONFIG ECC_CONFIG;
  RegisterECC_CONTROL ECC_CONTROL;
  RegisterECC_SIZE_CONFIG ECC_SIZE_CONFIG;
  RegisterECC1_RESULT ECC1_RESULT;
  RegisterECC2_RESULT ECC2_RESULT;
  RegisterECC3_RESULT ECC3_RESULT;
  RegisterECC4_RESULT ECC4_RESULT;
  RegisterECC5_RESULT ECC5_RESULT;
  RegisterECC6_RESULT ECC6_RESULT;
  RegisterECC7_RESULT ECC7_RESULT;
  RegisterECC8_RESULT ECC8_RESULT;
  RegisterECC9_RESULT ECC9_RESULT;
  uint8_t RESERVED_OFFSETS_12[28];
  RegisterBCH_RESULT0_0 BCH_RESULT0_0;
  RegisterBCH_RESULT1_0 BCH_RESULT1_0;
  RegisterBCH_RESULT2_0 BCH_RESULT2_0;
  RegisterBCH_RESULT3_0 BCH_RESULT3_0;
  RegisterBCH_RESULT0_1 BCH_RESULT0_1;
  RegisterBCH_RESULT1_1 BCH_RESULT1_1;
  RegisterBCH_RESULT2_1 BCH_RESULT2_1;
  RegisterBCH_RESULT3_1 BCH_RESULT3_1;
  RegisterBCH_RESULT0_2 BCH_RESULT0_2;
  RegisterBCH_RESULT1_2 BCH_RESULT1_2;
  RegisterBCH_RESULT2_2 BCH_RESULT2_2;
  RegisterBCH_RESULT3_2 BCH_RESULT3_2;
  RegisterBCH_RESULT0_3 BCH_RESULT0_3;
  RegisterBCH_RESULT1_3 BCH_RESULT1_3;
  RegisterBCH_RESULT2_3 BCH_RESULT2_3;
  RegisterBCH_RESULT3_3 BCH_RESULT3_3;
  RegisterBCH_RESULT0_4 BCH_RESULT0_4;
  RegisterBCH_RESULT1_4 BCH_RESULT1_4;
  RegisterBCH_RESULT2_4 BCH_RESULT2_4;
  RegisterBCH_RESULT3_4 BCH_RESULT3_4;
  RegisterBCH_RESULT0_5 BCH_RESULT0_5;
  RegisterBCH_RESULT1_5 BCH_RESULT1_5;
  RegisterBCH_RESULT2_5 BCH_RESULT2_5;
  RegisterBCH_RESULT3_5 BCH_RESULT3_5;
  RegisterBCH_RESULT0_6 BCH_RESULT0_6;
  RegisterBCH_RESULT1_6 BCH_RESULT1_6;
  RegisterBCH_RESULT2_6 BCH_RESULT2_6;
  RegisterBCH_RESULT3_6 BCH_RESULT3_6;
  uint8_t RESERVED_OFFSETS_13[32];
  RegisterBCH_SWDATA BCH_SWDATA;
  uint8_t RESERVED_OFFSETS_14[44];
  RegisterBCH_RESULT4_0 BCH_RESULT4_0;
  RegisterBCH_RESULT5_0 BCH_RESULT5_0;
  RegisterBCH_RESULT6_0 BCH_RESULT6_0;
  uint8_t RESERVED_OFFSETS_15[4];
  RegisterBCH_RESULT4_1 BCH_RESULT4_1;
  RegisterBCH_RESULT5_1 BCH_RESULT5_1;
  RegisterBCH_RESULT6_1 BCH_RESULT6_1;
  uint8_t RESERVED_OFFSETS_16[4];
  RegisterBCH_RESULT4_2 BCH_RESULT4_2;
  RegisterBCH_RESULT5_2 BCH_RESULT5_2;
  RegisterBCH_RESULT6_2 BCH_RESULT6_2;
  uint8_t RESERVED_OFFSETS_17[4];
  RegisterBCH_RESULT4_3 BCH_RESULT4_3;
  RegisterBCH_RESULT5_3 BCH_RESULT5_3;
  RegisterBCH_RESULT6_3 BCH_RESULT6_3;
  uint8_t RESERVED_OFFSETS_18[4];
  RegisterBCH_RESULT4_4 BCH_RESULT4_4;
  RegisterBCH_RESULT5_4 BCH_RESULT5_4;
  RegisterBCH_RESULT6_4 BCH_RESULT6_4;
  uint8_t RESERVED_OFFSETS_19[4];
  RegisterBCH_RESULT4_5 BCH_RESULT4_5;
  RegisterBCH_RESULT5_5 BCH_RESULT5_5;
  RegisterBCH_RESULT6_5 BCH_RESULT6_5;
  uint8_t RESERVED_OFFSETS_20[4];
  RegisterBCH_RESULT4_6 BCH_RESULT4_6;
  RegisterBCH_RESULT5_6 BCH_RESULT5_6;
  RegisterBCH_RESULT6_6 BCH_RESULT6_6;
} PeripheralGPMC;

#define CM_PER (*((PeripheralCM_PER *)0x44e00000))
#define CM_WKUP (*((PeripheralCM_WKUP *)0x44e00400))
#define CM_DPLL (*((PeripheralCM_DPLL *)0x44e00500))
#define CM_MPU (*((PeripheralCM_MPU *)0x44e00600))
#define CM_DEVICE (*((PeripheralCM_DEVICE *)0x44e00700))
#define CM_RTC (*((PeripheralCM_RTC *)0x44e00800))
#define CM_GFX (*((PeripheralCM_GFX *)0x44e00900))
#define CM_CEFUSE (*((PeripheralCM_CEFUSE *)0x44e00a00))
#define PRM_IRQ (*((PeripheralPRM_IRQ *)0x44e00b00))
#define PRM_PER (*((PeripheralPRM_PER *)0x44e00c00))
#define PRM_WKUP (*((PeripheralPRM_WKUP *)0x44e00d00))
#define PRM_MPU (*((PeripheralPRM_MPU *)0x44e00e00))
#define PRM_DEVICE (*((PeripheralPRM_DEVICE *)0x44e00f00))
#define PRM_RTC (*((PeripheralPRM_RTC *)0x44e01000))
#define PRM_GFX (*((PeripheralPRM_GFX *)0x44e01100))
#define PRM_CEFUSE (*((PeripheralPRM_CEFUSE *)0x44e01200))
#define DMTIMER0 (*((PeripheralDMTIMER0 *)0x44e05000))
#define GPIO0 (*((PeripheralGPIO0 *)0x44e07000))
#define UART0 (*((PeripheralUART0 *)0x44e09000))
#define I2C0 (*((PeripheralI2C0 *)0x44e0b000))
#define ADC_TSC (*((PeripheralADC_TSC *)0x44e0d000))
#define CONTROL_MODULE (*((PeripheralCONTROL_MODULE *)0x44e10000))
#define DDR2_3_PHY (*((PeripheralDDR2_3_PHY *)0x44e12000))
#define DMTIMER1_1MS (*((PeripheralDMTIMER1_1MS *)0x44e31000))
#define WDT1 (*((PeripheralWDT1 *)0x44e35000))
#define RTCSS (*((PeripheralRTCSS *)0x44e3e000))
#define USBSS (*((PeripheralUSBSS *)0x47400000))
#define USB0 (*((PeripheralUSB0 *)0x47401000))
#define USB0_PHY (*((PeripheralUSB0_PHY *)0x47401300))
#define USB1 (*((PeripheralUSB1 *)0x47401800))
#define USB1_PHY (*((PeripheralUSB0_PHY *)0x47401b00))
#define USB_CPPI_DMA_CTRL (*((PeripheralUSB_CPPI_DMA_CTRL *)0x47402000))
#define USB_CPPI_DMA_SCH (*((PeripheralUSB_CPPI_DMA_SCH *)0x47403000))
#define USB_QUEUE_MGR (*((PeripheralUSB_QUEUE_MGR *)0x47404000))
#define MMCHS2 (*((PeripheralMMCHS2 *)0x47810000))
#define UART1 (*((PeripheralUART0 *)0x48022000))
#define UART2 (*((PeripheralUART0 *)0x48024000))
#define I2C1 (*((PeripheralI2C0 *)0x4802a000))
#define MCSPI0 (*((PeripheralMCSPI0 *)0x48030000))
#define MCASP0_CFG (*((PeripheralMCASP0_CFG *)0x48038000))
#define MCASP1_CFG (*((PeripheralMCASP0_CFG *)0x4803c000))
#define DMTIMER2 (*((PeripheralDMTIMER0 *)0x48040000))
#define DMTIMER3 (*((PeripheralDMTIMER0 *)0x48042000))
#define DMTIMER4 (*((PeripheralDMTIMER0 *)0x48044000))
#define DMTIMER5 (*((PeripheralDMTIMER0 *)0x48046000))
#define DMTIMER6 (*((PeripheralDMTIMER0 *)0x48048000))
#define DMTIMER7 (*((PeripheralDMTIMER0 *)0x4804a000))
#define GPIO1 (*((PeripheralGPIO0 *)0x4804c000))
#define MMCHS0 (*((PeripheralMMCHS2 *)0x48060000))
#define ELM (*((PeripheralELM *)0x48080000))
#define MAILBOX0 (*((PeripheralMAILBOX0 *)0x480c8000))
#define SPINLOCK (*((PeripheralSPINLOCK *)0x480ca000))
#define I2C2 (*((PeripheralI2C0 *)0x4819c000))
#define MCSPI1 (*((PeripheralMCSPI0 *)0x481a0000))
#define UART3 (*((PeripheralUART0 *)0x481a6000))
#define UART4 (*((PeripheralUART0 *)0x481a8000))
#define UART5 (*((PeripheralUART0 *)0x481aa000))
#define GPIO2 (*((PeripheralGPIO0 *)0x481ac000))
#define GPIO3 (*((PeripheralGPIO0 *)0x481ae000))
#define DCAN0 (*((PeripheralDCAN0 *)0x481cc000))
#define DCAN1 (*((PeripheralDCAN0 *)0x481d0000))
#define MMC1 (*((PeripheralMMCHS2 *)0x481d8000))
#define INTCPS (*((PeripheralINTCPS *)0x48200000))
#define PWMSS0 (*((PeripheralPWMSS0 *)0x48300000))
#define ECAP0 (*((PeripheralECAP0 *)0x48300100))
#define EQEP0 (*((PeripheralEQEP0 *)0x48300180))
#define EPWM0 (*((PeripheralEPWM0 *)0x48300200))
#define PWMSS1 (*((PeripheralPWMSS0 *)0x48302000))
#define ECAP1 (*((PeripheralECAP0 *)0x48302100))
#define EQEP1 (*((PeripheralEQEP0 *)0x48302180))
#define EPWM1 (*((PeripheralEPWM0 *)0x48302200))
#define PWMSS2 (*((PeripheralPWMSS0 *)0x48304000))
#define ECAP2 (*((PeripheralECAP0 *)0x48304100))
#define EQEP2 (*((PeripheralEQEP0 *)0x48304180))
#define EPWM2 (*((PeripheralEPWM0 *)0x48304200))
#define LCD_CONTROLLER (*((PeripheralLCD_CONTROLLER *)0x4830e000))
#define EDMA3CC (*((PeripheralEDMA3CC *)0x49000000))
#define EDMA3TC0 (*((PeripheralEDMA3TC0 *)0x49800000))
#define EDMA3TC1 (*((PeripheralEDMA3TC0 *)0x49900000))
#define EDMA3TC2 (*((PeripheralEDMA3TC0 *)0x49a00000))
#define CPSW_SS (*((PeripheralCPSW_SS *)0x4a100000))
#define CPSW_PORT (*((PeripheralCPSW_PORT *)0x4a100100))
#define CPSW_CPDMA (*((PeripheralCPSW_CPDMA *)0x4a100800))
#define CPSW_STATS (*((PeripheralCPSW_STATS *)0x4a100900))
#define CPSW_STATERAM (*((PeripheralCPSW_STATERAM *)0x4a100a00))
#define CPSW_CPTS (*((PeripheralCPSW_CPTS *)0x4a100c00))
#define CPSW_ALE (*((PeripheralCPSW_ALE *)0x4a100d00))
#define CPSW_SL1 (*((PeripheralCPSW_SL1 *)0x4a100d80))
#define CPSW_SL2 (*((PeripheralCPSW_SL1 *)0x4a100dc0))
#define MDIO (*((PeripheralMDIO *)0x4a101000))
#define CPSW_WR (*((PeripheralCPSW_WR *)0x4a101200))
#define EMIF0 (*((PeripheralEMIF0 *)0x4c000000))
#define GPMC (*((PeripheralGPMC *)0x50000000))
