#include "../ui.h"
#include "esp32_s3_szp.h"


void ui_camera_screen_init(void)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, 10);
    lv_style_set_bg_opa(&style, LV_OPA_COVER);
    lv_style_set_bg_color(&style, lv_color_hex(0xcccccc));
    lv_style_set_border_width(&style, 0);
    lv_style_set_pad_all(&style, 0);
    lv_style_set_width(&style, 320);  
    lv_style_set_height(&style, 240); 

    ui_camera = lv_obj_create(lv_scr_act());
    lv_obj_add_style(ui_camera, &style, 0);

    img_camera = lv_img_create(ui_camera);
    lv_obj_set_pos(img_camera, 0, 0);
    lv_obj_set_size(img_camera, 320, 240);

    ui_ImgButton3 = lv_imgbtn_create(ui_camera);
    lv_imgbtn_set_src(ui_ImgButton3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_back_png, NULL);
    lv_obj_set_height(ui_ImgButton3, 32);
    lv_obj_set_width(ui_ImgButton3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_ImgButton3, -140);
    lv_obj_set_y(ui_ImgButton3, -101);
    lv_obj_set_align(ui_ImgButton3, LV_ALIGN_CENTER);
    
    lv_obj_add_event_cb(ui_ImgButton3, ui_event_ImgButton3, LV_EVENT_CLICKED, NULL); // 添加按键处理函数

}