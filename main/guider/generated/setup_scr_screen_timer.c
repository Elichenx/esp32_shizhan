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



void setup_scr_screen_timer(lv_ui *ui)
{
    //Write codes screen_timer
    ui->screen_timer = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_timer, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_timer, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_btn_back
    ui->screen_timer_btn_back = lv_btn_create(ui->screen_timer);
    ui->screen_timer_btn_back_label = lv_label_create(ui->screen_timer_btn_back);
    lv_label_set_text(ui->screen_timer_btn_back_label, "退出");
    lv_label_set_long_mode(ui->screen_timer_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_back, 214, 196);
    lv_obj_set_size(ui->screen_timer_btn_back, 72, 32);

    //Write style for screen_timer_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_back, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_back, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_back, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_timer_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_timer_btn_back, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_timer_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_back, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_btn_setting
    ui->screen_timer_btn_setting = lv_btn_create(ui->screen_timer);
    ui->screen_timer_btn_setting_label = lv_label_create(ui->screen_timer_btn_setting);
    lv_label_set_text(ui->screen_timer_btn_setting_label, "" LV_SYMBOL_SETTINGS "");
    lv_label_set_long_mode(ui->screen_timer_btn_setting_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_setting_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_setting, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_setting_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_setting, 144, 145);
    lv_obj_set_size(ui->screen_timer_btn_setting, 32, 32);

    //Write style for screen_timer_btn_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_setting, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_setting, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_setting, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_setting, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_setting, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_setting, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_setting, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_setting, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_setting, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_setting, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_setting, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes screen_timer_btn_reset
    ui->screen_timer_btn_reset = lv_btn_create(ui->screen_timer);
    ui->screen_timer_btn_reset_label = lv_label_create(ui->screen_timer_btn_reset);
    lv_label_set_text(ui->screen_timer_btn_reset_label, "重置");
    lv_label_set_long_mode(ui->screen_timer_btn_reset_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_reset_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_reset, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_reset_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_reset, 34, 196);
    lv_obj_set_size(ui->screen_timer_btn_reset, 72, 32);

    //Write style for screen_timer_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_reset, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_reset, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_reset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_reset, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_reset, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_reset, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_reset, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_timer_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_timer_btn_reset, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_timer_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_reset, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_reset, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_reset, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_btn_ctrl
    ui->screen_timer_btn_ctrl = lv_btn_create(ui->screen_timer);
    ui->screen_timer_btn_ctrl_label = lv_label_create(ui->screen_timer_btn_ctrl);
    lv_label_set_text(ui->screen_timer_btn_ctrl_label, "开始");
    lv_label_set_long_mode(ui->screen_timer_btn_ctrl_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_ctrl_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_ctrl, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_ctrl_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_ctrl, 124, 196);
    lv_obj_set_size(ui->screen_timer_btn_ctrl, 72, 32);

    //Write style for screen_timer_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_ctrl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_ctrl, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_ctrl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_timer_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_timer_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_timer_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_cont_min
    ui->screen_timer_cont_min = lv_obj_create(ui->screen_timer);
    lv_obj_set_pos(ui->screen_timer_cont_min, 2, 16);
    lv_obj_set_size(ui->screen_timer_cont_min, 154, 100);
    lv_obj_set_scrollbar_mode(ui->screen_timer_cont_min, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_timer_cont_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_timer_cont_min, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_timer_cont_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_timer_cont_min, lv_color_hex(0xffa300), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_timer_cont_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_cont_min, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_cont_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_timer_cont_min, lv_color_hex(0xffa300), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_timer_cont_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_timer_cont_min, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_timer_cont_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_timer_cont_min, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_img_min0
    ui->screen_timer_img_min0 = lv_img_create(ui->screen_timer_cont_min);
    lv_obj_add_flag(ui->screen_timer_img_min0, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_timer_img_min0, &_icon_mini_0_alpha_70x92);
    lv_img_set_pivot(ui->screen_timer_img_min0, 50,50);
    lv_img_set_angle(ui->screen_timer_img_min0, 0);
    lv_obj_set_pos(ui->screen_timer_img_min0, 4, 2);
    lv_obj_set_size(ui->screen_timer_img_min0, 70, 92);

    //Write style for screen_timer_img_min0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_min0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_min0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_min0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_min0, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_img_min1
    ui->screen_timer_img_min1 = lv_img_create(ui->screen_timer_cont_min);
    lv_obj_add_flag(ui->screen_timer_img_min1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_timer_img_min1, &_icon_mini_0_alpha_70x92);
    lv_img_set_pivot(ui->screen_timer_img_min1, 50,50);
    lv_img_set_angle(ui->screen_timer_img_min1, 0);
    lv_obj_set_pos(ui->screen_timer_img_min1, 78, 2);
    lv_obj_set_size(ui->screen_timer_img_min1, 70, 92);

    //Write style for screen_timer_img_min1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_min1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_min1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_min1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_min1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_cont_sec
    ui->screen_timer_cont_sec = lv_obj_create(ui->screen_timer);
    lv_obj_set_pos(ui->screen_timer_cont_sec, 164, 16);
    lv_obj_set_size(ui->screen_timer_cont_sec, 154, 100);
    lv_obj_set_scrollbar_mode(ui->screen_timer_cont_sec, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_timer_cont_sec, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_timer_cont_sec, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_timer_cont_sec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_timer_cont_sec, lv_color_hex(0xffa300), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_timer_cont_sec, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_cont_sec, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_cont_sec, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_timer_cont_sec, lv_color_hex(0xffa300), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_timer_cont_sec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_timer_cont_sec, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_timer_cont_sec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_timer_cont_sec, 2, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_img_sec1
    ui->screen_timer_img_sec1 = lv_img_create(ui->screen_timer_cont_sec);
    lv_obj_add_flag(ui->screen_timer_img_sec1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_timer_img_sec1, &_icon_mini_0_alpha_70x92);
    lv_img_set_pivot(ui->screen_timer_img_sec1, 50,50);
    lv_img_set_angle(ui->screen_timer_img_sec1, 0);
    lv_obj_set_pos(ui->screen_timer_img_sec1, 78, 2);
    lv_obj_set_size(ui->screen_timer_img_sec1, 70, 92);

    //Write style for screen_timer_img_sec1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_sec1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_sec1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_sec1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_sec1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_img_sec0
    ui->screen_timer_img_sec0 = lv_img_create(ui->screen_timer_cont_sec);
    lv_obj_add_flag(ui->screen_timer_img_sec0, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_timer_img_sec0, &_icon_mini_0_alpha_70x92);
    lv_img_set_pivot(ui->screen_timer_img_sec0, 50,50);
    lv_img_set_angle(ui->screen_timer_img_sec0, 0);
    lv_obj_set_pos(ui->screen_timer_img_sec0, 4, 2);
    lv_obj_set_size(ui->screen_timer_img_sec0, 70, 92);

    //Write style for screen_timer_img_sec0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_sec0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_sec0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_sec0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_sec0, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_cont_setting
    ui->screen_timer_cont_setting = lv_obj_create(ui->screen_timer);
    lv_obj_set_pos(ui->screen_timer_cont_setting, 60, 60);
    lv_obj_set_size(ui->screen_timer_cont_setting, 200, 120);
    lv_obj_set_scrollbar_mode(ui->screen_timer_cont_setting, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_timer_cont_setting, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_timer_cont_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_timer_cont_setting, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_timer_cont_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_timer_cont_setting, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_timer_cont_setting, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_cont_setting, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_timer_cont_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_cont_setting, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_cont_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_timer_cont_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_timer_cont_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_timer_cont_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_timer_cont_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_cont_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_btn_close
    ui->screen_timer_btn_close = lv_btn_create(ui->screen_timer_cont_setting);
    ui->screen_timer_btn_close_label = lv_label_create(ui->screen_timer_btn_close);
    lv_label_set_text(ui->screen_timer_btn_close_label, "" LV_SYMBOL_CLOSE "");
    lv_label_set_long_mode(ui->screen_timer_btn_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_close, 160, 70);
    lv_obj_set_size(ui->screen_timer_btn_close, 32, 32);

    //Write style for screen_timer_btn_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_close, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_close, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_close, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_timer_btn_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_timer_btn_close, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_close, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_close, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_close, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_close, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_close, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_close, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_close, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_close, lv_color_hex(0x4c4c4c), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_close, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_close, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_btn_set
    ui->screen_timer_btn_set = lv_btn_create(ui->screen_timer_cont_setting);
    ui->screen_timer_btn_set_label = lv_label_create(ui->screen_timer_btn_set);
    lv_label_set_text(ui->screen_timer_btn_set_label, "" LV_SYMBOL_SETTINGS "");
    lv_label_set_long_mode(ui->screen_timer_btn_set_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_set_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_set, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_set_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_set, 120, 42);
    lv_obj_set_size(ui->screen_timer_btn_set, 32, 32);

    //Write style for screen_timer_btn_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_set, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_set, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_set, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_timer_btn_set, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_timer_btn_set, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_set, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_set, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_set, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_set, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_set, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_set, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_set, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_set, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_set, lv_color_hex(0x4c4c4c), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_set, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_set, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_btn_exec
    ui->screen_timer_btn_exec = lv_btn_create(ui->screen_timer_cont_setting);
    ui->screen_timer_btn_exec_label = lv_label_create(ui->screen_timer_btn_exec);
    lv_label_set_text(ui->screen_timer_btn_exec_label, "" LV_SYMBOL_PLAY "");
    lv_label_set_long_mode(ui->screen_timer_btn_exec_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_timer_btn_exec_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_timer_btn_exec, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_timer_btn_exec_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_timer_btn_exec, 160, 18);
    lv_obj_set_size(ui->screen_timer_btn_exec, 32, 32);

    //Write style for screen_timer_btn_exec, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_exec, lv_color_hex(0x303030), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_exec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_btn_exec, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_exec, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_timer_btn_exec, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_timer_btn_exec, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_btn_exec, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_btn_exec, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_btn_exec, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_btn_exec, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_exec, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_exec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_btn_exec, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_exec, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_exec, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_btn_exec, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_timer_btn_exec, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_btn_exec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_timer_btn_exec, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_timer_btn_exec, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_timer_btn_exec, lv_color_hex(0x4c4c4c), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_timer_btn_exec, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_timer_btn_exec, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_timer_label_min
    ui->screen_timer_label_min = lv_label_create(ui->screen_timer_cont_setting);
    lv_label_set_text(ui->screen_timer_label_min, "01");
    lv_label_set_long_mode(ui->screen_timer_label_min, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_timer_label_min, 27, 42);
    lv_obj_set_size(ui->screen_timer_label_min, 64, 32);

    //Write style for screen_timer_label_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_timer_label_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_timer_label_min, &lv_font_Alatsi_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_timer_label_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_timer_label_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_label_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_arc_min
    ui->screen_timer_arc_min = lv_arc_create(ui->screen_timer_cont_setting);
    lv_arc_set_mode(ui->screen_timer_arc_min, LV_ARC_MODE_NORMAL);
    lv_arc_set_range(ui->screen_timer_arc_min, 1, 60);
    lv_arc_set_bg_angles(ui->screen_timer_arc_min, 0, 360);
    lv_arc_set_value(ui->screen_timer_arc_min, 0);
    lv_arc_set_rotation(ui->screen_timer_arc_min, 270);
    lv_obj_set_style_arc_rounded(ui->screen_timer_arc_min, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->screen_timer_arc_min, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_timer_arc_min, 4, 4);
    lv_obj_set_size(ui->screen_timer_arc_min, 110, 110);

    //Write style for screen_timer_arc_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_arc_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_timer_arc_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui->screen_timer_arc_min, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->screen_timer_arc_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->screen_timer_arc_min, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_timer_arc_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_timer_arc_min, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_arc_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_timer_arc_min, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_timer_arc_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_timer_arc_min, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_timer_arc_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_arc_width(ui->screen_timer_arc_min, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_arc_opa(ui->screen_timer_arc_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_arc_color(ui->screen_timer_arc_min, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_timer_arc_min, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_timer_arc_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_timer_arc_min, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->screen_timer_arc_min, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->screen_timer_arc_min, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->screen_timer_arc_min, lv_color_hex(0xff9600), LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_timer_arc_min, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_arc_width(ui->screen_timer_arc_min, 12, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_arc_opa(ui->screen_timer_arc_min, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_arc_color(ui->screen_timer_arc_min, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_timer_arc_min, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_timer_arc_min, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_timer_arc_min, lv_color_hex(0xff8800), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_arc_min, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(ui->screen_timer_arc_min, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_timer_arc_min, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_timer_arc_min, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_timer_arc_min, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_timer_arc_min, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_all(ui->screen_timer_arc_min, 5, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_timer_list_time
    ui->screen_timer_list_time = lv_list_create(ui->screen_timer);
    ui->screen_timer_list_time_item0 = lv_list_add_btn(ui->screen_timer_list_time, LV_SYMBOL_TRASH, "Reset");
    ui->screen_timer_list_time_item1 = lv_list_add_btn(ui->screen_timer_list_time, LV_SYMBOL_SAVE, "10 minutes");
    lv_obj_set_pos(ui->screen_timer_list_time, 80, 50);
    lv_obj_set_size(ui->screen_timer_list_time, 160, 140);
    lv_obj_set_scrollbar_mode(ui->screen_timer_list_time, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_timer_list_time, LV_OBJ_FLAG_HIDDEN);

    //Write style state: LV_STATE_DEFAULT for &style_screen_timer_list_time_main_main_default
    static lv_style_t style_screen_timer_list_time_main_main_default;
    ui_init_style(&style_screen_timer_list_time_main_main_default);

    lv_style_set_pad_top(&style_screen_timer_list_time_main_main_default, 2);
    lv_style_set_pad_left(&style_screen_timer_list_time_main_main_default, 0);
    lv_style_set_pad_right(&style_screen_timer_list_time_main_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_timer_list_time_main_main_default, 0);
    lv_style_set_bg_opa(&style_screen_timer_list_time_main_main_default, 255);
    lv_style_set_bg_color(&style_screen_timer_list_time_main_main_default, lv_color_hex(0xf0f595));
    lv_style_set_bg_grad_dir(&style_screen_timer_list_time_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_timer_list_time_main_main_default, 1);
    lv_style_set_border_opa(&style_screen_timer_list_time_main_main_default, 255);
    lv_style_set_border_color(&style_screen_timer_list_time_main_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_timer_list_time_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_timer_list_time_main_main_default, 6);
    lv_style_set_shadow_width(&style_screen_timer_list_time_main_main_default, 0);
    lv_obj_add_style(ui->screen_timer_list_time, &style_screen_timer_list_time_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_timer_list_time_main_scrollbar_default
    static lv_style_t style_screen_timer_list_time_main_scrollbar_default;
    ui_init_style(&style_screen_timer_list_time_main_scrollbar_default);

    lv_style_set_radius(&style_screen_timer_list_time_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_timer_list_time_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_timer_list_time_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_timer_list_time_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_timer_list_time, &style_screen_timer_list_time_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_timer_list_time_extra_btns_main_default
    static lv_style_t style_screen_timer_list_time_extra_btns_main_default;
    ui_init_style(&style_screen_timer_list_time_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_timer_list_time_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_screen_timer_list_time_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_screen_timer_list_time_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_timer_list_time_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_screen_timer_list_time_extra_btns_main_default, 1);
    lv_style_set_border_opa(&style_screen_timer_list_time_extra_btns_main_default, 255);
    lv_style_set_border_color(&style_screen_timer_list_time_extra_btns_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_timer_list_time_extra_btns_main_default, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_text_color(&style_screen_timer_list_time_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_timer_list_time_extra_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_timer_list_time_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_timer_list_time_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_screen_timer_list_time_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_screen_timer_list_time_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_timer_list_time_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_timer_list_time_item1, &style_screen_timer_list_time_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_timer_list_time_item0, &style_screen_timer_list_time_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_PRESSED for &style_screen_timer_list_time_extra_btns_main_pressed
    static lv_style_t style_screen_timer_list_time_extra_btns_main_pressed;
    ui_init_style(&style_screen_timer_list_time_extra_btns_main_pressed);

    lv_style_set_pad_top(&style_screen_timer_list_time_extra_btns_main_pressed, 5);
    lv_style_set_pad_left(&style_screen_timer_list_time_extra_btns_main_pressed, 5);
    lv_style_set_pad_right(&style_screen_timer_list_time_extra_btns_main_pressed, 5);
    lv_style_set_pad_bottom(&style_screen_timer_list_time_extra_btns_main_pressed, 5);
    lv_style_set_border_width(&style_screen_timer_list_time_extra_btns_main_pressed, 1);
    lv_style_set_border_opa(&style_screen_timer_list_time_extra_btns_main_pressed, 255);
    lv_style_set_border_color(&style_screen_timer_list_time_extra_btns_main_pressed, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_timer_list_time_extra_btns_main_pressed, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_timer_list_time_extra_btns_main_pressed, 3);
    lv_style_set_text_color(&style_screen_timer_list_time_extra_btns_main_pressed, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_timer_list_time_extra_btns_main_pressed, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_timer_list_time_extra_btns_main_pressed, 255);
    lv_style_set_bg_opa(&style_screen_timer_list_time_extra_btns_main_pressed, 255);
    lv_style_set_bg_color(&style_screen_timer_list_time_extra_btns_main_pressed, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_timer_list_time_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_timer_list_time_item1, &style_screen_timer_list_time_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_timer_list_time_item0, &style_screen_timer_list_time_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style state: LV_STATE_FOCUSED for &style_screen_timer_list_time_extra_btns_main_focused
    static lv_style_t style_screen_timer_list_time_extra_btns_main_focused;
    ui_init_style(&style_screen_timer_list_time_extra_btns_main_focused);

    lv_style_set_pad_top(&style_screen_timer_list_time_extra_btns_main_focused, 5);
    lv_style_set_pad_left(&style_screen_timer_list_time_extra_btns_main_focused, 5);
    lv_style_set_pad_right(&style_screen_timer_list_time_extra_btns_main_focused, 5);
    lv_style_set_pad_bottom(&style_screen_timer_list_time_extra_btns_main_focused, 5);
    lv_style_set_border_width(&style_screen_timer_list_time_extra_btns_main_focused, 1);
    lv_style_set_border_opa(&style_screen_timer_list_time_extra_btns_main_focused, 255);
    lv_style_set_border_color(&style_screen_timer_list_time_extra_btns_main_focused, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_timer_list_time_extra_btns_main_focused, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_timer_list_time_extra_btns_main_focused, 3);
    lv_style_set_text_color(&style_screen_timer_list_time_extra_btns_main_focused, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_timer_list_time_extra_btns_main_focused, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_timer_list_time_extra_btns_main_focused, 255);
    lv_style_set_bg_opa(&style_screen_timer_list_time_extra_btns_main_focused, 255);
    lv_style_set_bg_color(&style_screen_timer_list_time_extra_btns_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_timer_list_time_extra_btns_main_focused, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_timer_list_time_item1, &style_screen_timer_list_time_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_timer_list_time_item0, &style_screen_timer_list_time_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_timer_list_time_extra_texts_main_default
    static lv_style_t style_screen_timer_list_time_extra_texts_main_default;
    ui_init_style(&style_screen_timer_list_time_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_timer_list_time_extra_texts_main_default, 6);
    lv_style_set_pad_left(&style_screen_timer_list_time_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_screen_timer_list_time_extra_texts_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_timer_list_time_extra_texts_main_default, 0);
    lv_style_set_border_width(&style_screen_timer_list_time_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_timer_list_time_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_timer_list_time_extra_texts_main_default, &lv_font_Antonio_Regular_18);
    lv_style_set_text_opa(&style_screen_timer_list_time_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_timer_list_time_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_timer_list_time_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_timer_list_time_extra_texts_main_default, 0);

    //Write codes screen_timer_img_5
    ui->screen_timer_img_5 = lv_img_create(ui->screen_timer);
    lv_obj_add_flag(ui->screen_timer_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_pivot(ui->screen_timer_img_5, 50,50);
    lv_img_set_angle(ui->screen_timer_img_5, 0);
    lv_obj_set_pos(ui->screen_timer_img_5, 216, 118);
    lv_obj_set_size(ui->screen_timer_img_5, 80, 80);
    lv_obj_add_flag(ui->screen_timer_img_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_timer_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_timer_img_6
    ui->screen_timer_img_6 = lv_img_create(ui->screen_timer);
    lv_obj_add_flag(ui->screen_timer_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_pivot(ui->screen_timer_img_6, 50,50);
    lv_img_set_angle(ui->screen_timer_img_6, 0);
    lv_obj_set_pos(ui->screen_timer_img_6, 24, 118);
    lv_obj_set_size(ui->screen_timer_img_6, 80, 80);
    lv_obj_add_flag(ui->screen_timer_img_6, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_timer_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_timer_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_timer_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_timer_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_timer_img_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_timer.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_timer);

}
