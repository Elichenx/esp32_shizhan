/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_setting_ai(lv_ui *ui)
{
    //Write codes screen_setting_ai
    ui->screen_setting_ai = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_setting_ai, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting_ai, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_setting_ai, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_ai, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_ai, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_ai, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_ai_label_code
    ui->screen_setting_ai_label_code = lv_label_create(ui->screen_setting_ai);
    lv_label_set_text(ui->screen_setting_ai_label_code, "");
    lv_label_set_long_mode(ui->screen_setting_ai_label_code, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_ai_label_code, 60, 104);
    lv_obj_set_size(ui->screen_setting_ai_label_code, 200, 32);

    //Write style for screen_setting_ai_label_code, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_ai_label_code, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_ai_label_code, &lv_font_Alatsi_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_ai_label_code, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_ai_label_code, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_ai_label_code, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_ai_label_code, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_ai_label_message
    ui->screen_setting_ai_label_message = lv_label_create(ui->screen_setting_ai);
    lv_label_set_text(ui->screen_setting_ai_label_message, "");
    lv_label_set_long_mode(ui->screen_setting_ai_label_message, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_ai_label_message, 0, 35);
    lv_obj_set_size(ui->screen_setting_ai_label_message, 320, 32);

    //Write style for screen_setting_ai_label_message, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_ai_label_message, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_ai_label_message, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_ai_label_message, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_ai_label_message, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_ai_label_message, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_ai_img_ok
    ui->screen_setting_ai_img_ok = lv_img_create(ui->screen_setting_ai);
    lv_obj_add_flag(ui->screen_setting_ai_img_ok, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_setting_ai_img_ok, &_icom_smile_alpha_48x48);
    lv_img_set_pivot(ui->screen_setting_ai_img_ok, 50,50);
    lv_img_set_angle(ui->screen_setting_ai_img_ok, 0);
    lv_obj_set_pos(ui->screen_setting_ai_img_ok, 136, 96);
    lv_obj_set_size(ui->screen_setting_ai_img_ok, 48, 48);
    lv_obj_add_flag(ui->screen_setting_ai_img_ok, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_setting_ai_img_ok, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_setting_ai_img_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_setting_ai_img_ok, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_ai_img_ok, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_setting_ai_img_ok, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_setting_ai.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_setting_ai);

}
