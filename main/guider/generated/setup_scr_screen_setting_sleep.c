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



void setup_scr_screen_setting_sleep(lv_ui *ui)
{
    //Write codes screen_setting_sleep
    ui->screen_setting_sleep = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_setting_sleep, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting_sleep, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_setting_sleep, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_sleep_btn_back
    ui->screen_setting_sleep_btn_back = lv_btn_create(ui->screen_setting_sleep);
    ui->screen_setting_sleep_btn_back_label = lv_label_create(ui->screen_setting_sleep_btn_back);
    lv_label_set_text(ui->screen_setting_sleep_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_setting_sleep_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_setting_sleep_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_setting_sleep_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_setting_sleep_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_setting_sleep_btn_back, 210, 195);
    lv_obj_set_size(ui->screen_setting_sleep_btn_back, 72, 32);

    //Write style for screen_setting_sleep_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sleep_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sleep_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sleep_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sleep_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sleep_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_setting_sleep_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_setting_sleep_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_setting_sleep_btn_back, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_setting_sleep_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_setting_sleep_btn_back, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_setting_sleep_roller_min
    ui->screen_setting_sleep_roller_min = lv_roller_create(ui->screen_setting_sleep);
    lv_roller_set_options(ui->screen_setting_sleep_roller_min, "5\n10\n15\n30\n60", LV_ROLLER_MODE_INFINITE);
    lv_obj_set_pos(ui->screen_setting_sleep_roller_min, 90, 20);
    lv_obj_set_width(ui->screen_setting_sleep_roller_min, 140);

    //Write style for screen_setting_sleep_roller_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_setting_sleep_roller_min, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_roller_min, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sleep_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_roller_min, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_setting_sleep_roller_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sleep_roller_min, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_radius(ui->screen_setting_sleep_roller_min, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_roller_min, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->screen_setting_sleep_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_roller_min, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0xff768b), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_setting_sleep_roller_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sleep_roller_min, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_roller_min, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_roller_min, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_roller_min, &lv_font_montserratMedium_12, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_setting_sleep_roller_min, 5);
    //Write codes screen_setting_sleep_sw_sleep
    ui->screen_setting_sleep_sw_sleep = lv_switch_create(ui->screen_setting_sleep);
    lv_obj_set_pos(ui->screen_setting_sleep_sw_sleep, 110, 202);
    lv_obj_set_size(ui->screen_setting_sleep_sw_sleep, 45, 20);

    //Write style for screen_setting_sleep_sw_sleep, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_sw_sleep, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_sw_sleep, lv_color_hex(0x6e6e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_sw_sleep, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sleep_sw_sleep, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sleep_sw_sleep, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_sw_sleep, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_sw_sleep, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_sw_sleep, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sleep_sw_sleep, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sleep_sw_sleep, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_sw_sleep, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_sw_sleep, lv_color_hex(0xff5b74), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_sw_sleep, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_setting_sleep_sw_sleep, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_sw_sleep, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_sw_sleep, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_sw_sleep, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_setting_sleep_sw_sleep, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_sw_sleep, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sleep_sw_sleep, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sleep_sw_sleep, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sleep_sw_sleep, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sleep_sw_sleep, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_setting_sleep_label_1
    ui->screen_setting_sleep_label_1 = lv_label_create(ui->screen_setting_sleep);
    lv_label_set_text(ui->screen_setting_sleep_label_1, "自动休眠");
    lv_label_set_long_mode(ui->screen_setting_sleep_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_sleep_label_1, 12, 206);
    lv_obj_set_size(ui->screen_setting_sleep_label_1, 100, 24);

    //Write style for screen_setting_sleep_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sleep_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sleep_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sleep_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sleep_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sleep_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_setting_sleep.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_setting_sleep);

}
