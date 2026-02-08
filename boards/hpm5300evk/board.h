#pragma once

#include <stdint.h>

#include <hpm_soc.h>

#include "pinmux.h" // IWYU pragma: export

#define BOARD_NAME          "rmcs_board"
#define BOARD_UF2_SIGNATURE (0x0A4D5048UL)

/* User LED / Button */
#define BOARD_LED_GPIO_CTRL  HPM_GPIO0
#define BOARD_LED_GPIO_INDEX GPIO_DI_GPIOA
#define BOARD_LED_GPIO_PIN   23
#define BOARD_LED_OFF_LEVEL  1
#define BOARD_LED_ON_LEVEL   0

#define BOARD_APP_GPIO_CTRL  HPM_GPIO0
#define BOARD_APP_GPIO_INDEX GPIO_DI_GPIOA
#define BOARD_APP_GPIO_PIN   9

#ifdef __cplusplus
extern "C" {
#endif

void board_init(void);
void board_init_clock(void);
void board_init_usb_dp_dm_pins(void);
void board_init_usb(USB_Type* ptr);

void board_init_can(MCAN_Type* ptr);
uint32_t board_init_can_clock(MCAN_Type* ptr);

void board_init_uart(UART_Type* ptr);
uint32_t board_init_uart_clock(UART_Type* ptr);

void board_init_spi_pins(SPI_Type* ptr);
uint32_t board_init_spi_clock(SPI_Type* ptr);

void board_init_i2c(I2C_Type* ptr);
uint32_t board_init_i2c_clock(I2C_Type* ptr);
void board_i2c_bus_clear(I2C_Type* ptr);

void board_init_rgbled(void);
void board_set_rgbled_color(float r, float g, float b);

void board_init_buzzer(void);
void board_set_buzzer_freq(bool enable, uint32_t freq_in_hz);

void board_init_imuheater(void);
void board_set_imuheater_power(float power_percent);

void board_init_pinsocket_pwmout(void);
void board_set_pinsocket_pwmout(
    bool enable, uint8_t channel, uint32_t freq_in_hz, float duty_cycle_percent);

void board_init_user_key(void);
bool board_get_user_key_status(void);
void board_init_user_sw(void);
bool board_get_user_sw_status(void);

// void board_init_gpio_pins(void);
// void board_init_led_pins(void);
void board_delay_us(uint32_t us);
void board_delay_ms(uint32_t ms);

#ifdef __cplusplus
}
#endif
