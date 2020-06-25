#include <stdbool.h>
#include <stdint.h>

#include "assert.h"
#include "src/autogen/reg_def.h"
#include "clock.h"
#include "ddr3.h"
#include "gpio.h"
#include "i2c.h"
#include "time.h"
#include "tps65217.h"
#include "uart.h"

static void BoardInit(void) {
  // GPIO1 21-24.
  CONTROL_MODULE.CONF_GPMC_A5.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A6.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A7.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A8.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_GPMC_A5.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A6.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A7.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A8.PUDEN = 1;
  CONTROL_MODULE.CONF_GPMC_A5.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A6.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A7.MMODE = 7;
  CONTROL_MODULE.CONF_GPMC_A8.MMODE = 7;

  // UART0.
  CONTROL_MODULE.CONF_UART0_RXD.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_UART0_RXD.PUDEN = 1;
  CONTROL_MODULE.CONF_UART0_RXD.MMODE = 0;
  CONTROL_MODULE.CONF_UART0_TXD.SLEWCTRL = 0;
  CONTROL_MODULE.CONF_UART0_TXD.PUDEN = 1;
  CONTROL_MODULE.CONF_UART0_TXD.MMODE = 0;

  // I2C0.
  CONTROL_MODULE.CONF_I2C0_SDA.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_I2C0_SDA.PUDEN = 0;
  CONTROL_MODULE.CONF_I2C0_SDA.MMODE = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.SLEWCTRL = 1;
  CONTROL_MODULE.CONF_I2C0_SCL.PUDEN = 0;
  CONTROL_MODULE.CONF_I2C0_SCL.MMODE = 0;
}

static void BoardSetLed(int32_t led, bool state) {
  assert(0 <= led && led < 4);
  GpioSetPin(kGpio1, 21 + led, state);
}

void Main(void);

void Main(void) {
  BoardInit();

  GpioInit(kGpio1);
  GpioOutputEnable(kGpio1, 21, true);
  GpioOutputEnable(kGpio1, 22, true);
  GpioOutputEnable(kGpio1, 23, true);
  GpioOutputEnable(kGpio1, 24, true);
  BoardSetLed(0, true);

  TimeInit();

  UartInit(kUart0, 921.6e3f);
  static const uint8_t msg[] = "Faos booting.\n";
  UartWriteBlocking(kUart0, msg, (int32_t)sizeof(msg));

  I2cInit(kI2c0);

  // Scale voltage for nitro mode (1GHz).
  Tps65217Status status = Tps65217ScaleDcdc(kI2c0, kTps65217Dcdc2, kTps65217DcdcVoltageScale1v325);
  assert(status == kTps65217StatusSuccess);
  // Set MPU PLL to 1GHz.
  ClockSetMpuFreq(1e9f);

  // Setup DDR3.
  Ddr3Init();

  bool led_state = false;
  while (true) {
    BoardSetLed(2, led_state);
    TimeDelayUs((int32_t)1e6f);
    led_state = !led_state;
  }
}
