#pragma once

#include <hpm_soc.h>

#ifdef __cplusplus
extern "C" {
#endif

void init_py_pins_as_soc_gpio(void);
void init_can_pins(MCAN_Type* ptr);
void init_uart_pins(UART_Type* ptr);
void init_spi_pins(SPI_Type* ptr);
void init_i2c_pins(I2C_Type* ptr);
void init_rgbled_pwm_pins(void);
void init_pinsocket_pwm_pins(void);
void init_buzzer_pwm_pin(void);
void init_imu_heater_pwm_pin(void);
void init_user_key_pin(void);
void init_user_sw_pin(void);
void init_imu_int_pins(void);

void init_gpio_pins(void);
void init_led_pins_as_gpio(void);

#ifdef __cplusplus
}
#endif
