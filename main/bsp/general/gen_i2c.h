#ifndef GENI2C_H
#define GENI2C_H

#include "esp_err.h"
#include "driver/i2c.h"


#define BSP_I2C_SDA           (GPIO_NUM_1)   // SDA引脚
#define BSP_I2C_SCL           (GPIO_NUM_2)   // SCL引脚

#define BSP_I2C_NUM           (1)            // I2C外设
#define BSP_I2C_FREQ_HZ       50000         // 100kHz

esp_err_t bsp_i2c_init(void);   // 初始化I2C接口

#endif /*GENI2C_H*/