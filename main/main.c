#include <stdio.h>
#include "device_bsp.h"

#include "guider/generated/gui_guider.h"
#include "guider/custom/custom.h"
#include "esp_lvgl_port.h"

lv_ui guider_ui;
void app_lvgl_display(void)
{
    lvgl_port_lock(0);

    setup_ui(&guider_ui);

    lvgl_port_unlock();

}
void app_main(void)
{
    bsp_i2c_init();  // I2C初始化
    pca9557_init();  // IO扩展芯片初始化

    bsp_lvgl_start(); // 初始化液晶屏lvgl接口
    // bsp_camera_init(); // 摄像头初始化
    // app_camera_lcd();
    app_lvgl_display();

}
