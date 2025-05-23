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



void setup_scr_screen_setting_sound(lv_ui *ui)
{
    //Write codes screen_setting_sound
    ui->screen_setting_sound = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_setting_sound, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting_sound, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_setting_sound, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_sw_key
    ui->screen_setting_sound_sw_key = lv_switch_create(ui->screen_setting_sound);
    lv_obj_set_pos(ui->screen_setting_sound_sw_key, 240, 22);
    lv_obj_set_size(ui->screen_setting_sound_sw_key, 45, 20);

    //Write style for screen_setting_sound_sw_key, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_key, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_key, lv_color_hex(0x6e6e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_key, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_key, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_key, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_key, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_sw_key, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_key, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_key, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_key, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_key, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_key, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_key, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_key, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_key, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_key, lv_color_hex(0xff5b74), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_key, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_key, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_setting_sound_sw_key, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_key, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_key, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_key, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_key, 0, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_key, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_key, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_key, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_key, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_key, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_key, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_sw_batlow
    ui->screen_setting_sound_sw_batlow = lv_switch_create(ui->screen_setting_sound);
    lv_obj_set_pos(ui->screen_setting_sound_sw_batlow, 240, 60);
    lv_obj_set_size(ui->screen_setting_sound_sw_batlow, 45, 20);

    //Write style for screen_setting_sound_sw_batlow, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batlow, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batlow, lv_color_hex(0x6e6e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batlow, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batlow, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_sw_batlow, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batlow, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batlow, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batlow, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batlow, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_batlow, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batlow, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batlow, lv_color_hex(0xff5b74), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batlow, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_setting_sound_sw_batlow, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batlow, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batlow, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batlow, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_batlow, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batlow, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batlow, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batlow, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batlow, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batlow, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_sw_batfull
    ui->screen_setting_sound_sw_batfull = lv_switch_create(ui->screen_setting_sound);
    lv_obj_set_pos(ui->screen_setting_sound_sw_batfull, 240, 98);
    lv_obj_set_size(ui->screen_setting_sound_sw_batfull, 45, 20);

    //Write style for screen_setting_sound_sw_batfull, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batfull, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batfull, lv_color_hex(0x6e6e6e), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batfull, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batfull, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_sw_batfull, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batfull, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batfull, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batfull, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batfull, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_batfull, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batfull, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batfull, lv_color_hex(0xff5b74), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batfull, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_setting_sound_sw_batfull, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batfull, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batfull, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batfull, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_sw_batfull, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_sw_batfull, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_sw_batfull, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_sw_batfull, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_sw_batfull, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_sw_batfull, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_slider_volume
    ui->screen_setting_sound_slider_volume = lv_slider_create(ui->screen_setting_sound);
    lv_slider_set_range(ui->screen_setting_sound_slider_volume, 0, 100);
    lv_slider_set_mode(ui->screen_setting_sound_slider_volume, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_setting_sound_slider_volume, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_setting_sound_slider_volume, 135, 144);
    lv_obj_set_size(ui->screen_setting_sound_slider_volume, 150, 8);

    //Write style for screen_setting_sound_slider_volume, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_slider_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_slider_volume, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_slider_volume, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_slider_volume, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_setting_sound_slider_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_slider_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_slider_volume, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_slider_volume, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_slider_volume, lv_color_hex(0x6e6e6e), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_slider_volume, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_slider_volume, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_slider_volume, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_slider_volume, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_slider_volume, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_slider_volume, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_slider_volume, 50, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_slider_volume, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_slider_volume, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_slider_volume, lv_color_hex(0x6e6e6e), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_slider_volume, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_slider_volume, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_slider_volume, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_slider_volume, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_slider_volume, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_slider_volume, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_slider_volume, 50, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_setting_sound_btn_back
    ui->screen_setting_sound_btn_back = lv_btn_create(ui->screen_setting_sound);
    ui->screen_setting_sound_btn_back_label = lv_label_create(ui->screen_setting_sound_btn_back);
    lv_label_set_text(ui->screen_setting_sound_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_setting_sound_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_setting_sound_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_setting_sound_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_setting_sound_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_setting_sound_btn_back, 124, 198);
    lv_obj_set_size(ui->screen_setting_sound_btn_back, 72, 32);

    //Write style for screen_setting_sound_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sound_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sound_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sound_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_sound_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_sound_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_sound_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_setting_sound_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_setting_sound_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_setting_sound_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_setting_sound_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_sound_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_setting_sound_btn_back, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_setting_sound_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_setting_sound_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write codes screen_setting_sound_label_1
    ui->screen_setting_sound_label_1 = lv_label_create(ui->screen_setting_sound);
    lv_label_set_text(ui->screen_setting_sound_label_1, "按键音");
    lv_label_set_long_mode(ui->screen_setting_sound_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_sound_label_1, 18, 26);
    lv_obj_set_size(ui->screen_setting_sound_label_1, 120, 32);

    //Write style for screen_setting_sound_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sound_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sound_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_sound_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sound_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_label_2
    ui->screen_setting_sound_label_2 = lv_label_create(ui->screen_setting_sound);
    lv_label_set_text(ui->screen_setting_sound_label_2, "低电量提示音");
    lv_label_set_long_mode(ui->screen_setting_sound_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_sound_label_2, 18, 64);
    lv_obj_set_size(ui->screen_setting_sound_label_2, 120, 32);

    //Write style for screen_setting_sound_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sound_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sound_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_sound_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sound_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_label_3
    ui->screen_setting_sound_label_3 = lv_label_create(ui->screen_setting_sound);
    lv_label_set_text(ui->screen_setting_sound_label_3, "充电完成提示音");
    lv_label_set_long_mode(ui->screen_setting_sound_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_sound_label_3, 18, 102);
    lv_obj_set_size(ui->screen_setting_sound_label_3, 120, 32);

    //Write style for screen_setting_sound_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sound_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sound_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_sound_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sound_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_sound_label_4
    ui->screen_setting_sound_label_4 = lv_label_create(ui->screen_setting_sound);
    lv_label_set_text(ui->screen_setting_sound_label_4, "播放器音量");
    lv_label_set_long_mode(ui->screen_setting_sound_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_sound_label_4, 18, 140);
    lv_obj_set_size(ui->screen_setting_sound_label_4, 120, 32);

    //Write style for screen_setting_sound_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_sound_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_sound_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_sound_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_sound_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_sound_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_sound_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_setting_sound.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_setting_sound);

}
