#include <stdio.h>
#include "esp32_s3_szp.h"
#include "logo_en_240x240_lcd.h"

#include "demos/lv_demos.h"
#include "guider/generated/gui_guider.h"
#include "guider/custom/custom.h"

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
    /* 下面5个demos 只打开1个运行 */
    // lv_demo_benchmark(); 
    // lv_demo_keypad_encoder(); 
    // lv_demo_music(); 
    // lv_demo_stress(); 
    // lv_demo_widgets();
}
