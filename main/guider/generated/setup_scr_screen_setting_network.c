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



void setup_scr_screen_setting_network(lv_ui *ui)
{
    //Write codes screen_setting_network
    ui->screen_setting_network = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_setting_network, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting_network, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_setting_network, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_network_btn_search
    ui->screen_setting_network_btn_search = lv_btn_create(ui->screen_setting_network);
    ui->screen_setting_network_btn_search_label = lv_label_create(ui->screen_setting_network_btn_search);
    lv_label_set_text(ui->screen_setting_network_btn_search_label, "搜索");
    lv_label_set_long_mode(ui->screen_setting_network_btn_search_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_setting_network_btn_search_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_setting_network_btn_search, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_setting_network_btn_search_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_setting_network_btn_search, 24, 182);
    lv_obj_set_size(ui->screen_setting_network_btn_search, 72, 32);

    //Write style for screen_setting_network_btn_search, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_search, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_search, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_search, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_btn_search, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_btn_search, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_search, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_search, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_search, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_search, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_network_btn_search, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_search, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_search, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_search, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_search, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_setting_network_btn_search, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_search, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_search, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_search, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_search, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_setting_network_btn_search, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_search, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_search, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_search, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_search, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_search, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_search, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_search, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_setting_network_btn_ctrl
    ui->screen_setting_network_btn_ctrl = lv_btn_create(ui->screen_setting_network);
    ui->screen_setting_network_btn_ctrl_label = lv_label_create(ui->screen_setting_network_btn_ctrl);
    lv_label_set_text(ui->screen_setting_network_btn_ctrl_label, "连接");
    lv_label_set_long_mode(ui->screen_setting_network_btn_ctrl_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_setting_network_btn_ctrl_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_setting_network_btn_ctrl, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_setting_network_btn_ctrl_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_setting_network_btn_ctrl, 124, 182);
    lv_obj_set_size(ui->screen_setting_network_btn_ctrl, 72, 32);

    //Write style for screen_setting_network_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_btn_ctrl, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_network_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_setting_network_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_setting_network_btn_ctrl, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_ctrl, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_ctrl, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_ctrl, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_ctrl, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_ctrl, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_ctrl, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_setting_network_btn_back
    ui->screen_setting_network_btn_back = lv_btn_create(ui->screen_setting_network);
    ui->screen_setting_network_btn_back_label = lv_label_create(ui->screen_setting_network_btn_back);
    lv_label_set_text(ui->screen_setting_network_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_setting_network_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_setting_network_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_setting_network_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_setting_network_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_setting_network_btn_back, 224, 182);
    lv_obj_set_size(ui->screen_setting_network_btn_back, 72, 32);

    //Write style for screen_setting_network_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_back, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_back, lv_color_hex(0x2FCADA), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_network_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_setting_network_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_back, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_setting_network_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_setting_network_btn_back, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_setting_network_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_setting_network_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_setting_network_ta_ssid
    ui->screen_setting_network_ta_ssid = lv_textarea_create(ui->screen_setting_network);
    lv_textarea_set_text(ui->screen_setting_network_ta_ssid, "");
    lv_textarea_set_placeholder_text(ui->screen_setting_network_ta_ssid, "WIFI名称");
    lv_textarea_set_password_bullet(ui->screen_setting_network_ta_ssid, "*");
    lv_textarea_set_password_mode(ui->screen_setting_network_ta_ssid, false);
    lv_textarea_set_one_line(ui->screen_setting_network_ta_ssid, true);
    lv_textarea_set_accepted_chars(ui->screen_setting_network_ta_ssid, "");
    lv_textarea_set_max_length(ui->screen_setting_network_ta_ssid, 64);
#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
    lv_obj_add_event_cb(ui->screen_setting_network_ta_ssid, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif
    lv_obj_set_pos(ui->screen_setting_network_ta_ssid, 60, 18);
    lv_obj_set_size(ui->screen_setting_network_ta_ssid, 200, 38);

    //Write style for screen_setting_network_ta_ssid, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_ta_ssid, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_network_ta_ssid, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_ta_ssid, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_network_ta_ssid, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_setting_network_ta_ssid, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_ta_ssid, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_ssid, 1, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_ta_ssid, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_ta_ssid, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_ssid, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_ta_ssid, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_setting_network_ta_ssid, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_ta_ssid, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_setting_network_ta_ssid, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_ssid, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_network_ta_ssid, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_ta_ssid, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_ssid, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_ta_ssid, Part: LV_PART_SCROLLBAR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_ssid, 255, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_setting_network_ta_ssid, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_ta_ssid, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_ssid, 0, LV_PART_SCROLLBAR|LV_STATE_FOCUSED);

    //Write codes screen_setting_network_ta_passwd
    ui->screen_setting_network_ta_passwd = lv_textarea_create(ui->screen_setting_network);
    lv_textarea_set_text(ui->screen_setting_network_ta_passwd, "");
    lv_textarea_set_placeholder_text(ui->screen_setting_network_ta_passwd, "WIFI密码");
    lv_textarea_set_password_bullet(ui->screen_setting_network_ta_passwd, "*");
    lv_textarea_set_password_mode(ui->screen_setting_network_ta_passwd, true);
    lv_textarea_set_one_line(ui->screen_setting_network_ta_passwd, true);
    lv_textarea_set_accepted_chars(ui->screen_setting_network_ta_passwd, "");
    lv_textarea_set_max_length(ui->screen_setting_network_ta_passwd, 64);
#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
    lv_obj_add_event_cb(ui->screen_setting_network_ta_passwd, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif
    lv_obj_set_pos(ui->screen_setting_network_ta_passwd, 60, 76);
    lv_obj_set_size(ui->screen_setting_network_ta_passwd, 200, 38);

    //Write style for screen_setting_network_ta_passwd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_setting_network_ta_passwd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_ta_passwd, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_ta_passwd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_network_ta_passwd, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_ta_passwd, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_network_ta_passwd, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_setting_network_ta_passwd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_setting_network_ta_passwd, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_setting_network_ta_passwd, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_setting_network_ta_passwd, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_text_color(ui->screen_setting_network_ta_passwd, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_setting_network_ta_passwd, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_setting_network_ta_passwd, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_setting_network_ta_passwd, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_setting_network_ta_passwd, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_setting_network_ta_passwd, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_setting_network_ta_passwd, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_setting_network_ta_passwd, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_passwd, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_setting_network_ta_passwd, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_network_ta_passwd, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_network_ta_passwd, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_network_ta_passwd, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_ta_passwd, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_setting_network_list_wifi
    ui->screen_setting_network_list_wifi = lv_list_create(ui->screen_setting_network);
    ui->screen_setting_network_list_wifi_item0 = lv_list_add_btn(ui->screen_setting_network_list_wifi, LV_SYMBOL_BACKSPACE, "关闭");
    lv_obj_set_pos(ui->screen_setting_network_list_wifi, 24, 12);
    lv_obj_set_size(ui->screen_setting_network_list_wifi, 272, 160);
    lv_obj_set_scrollbar_mode(ui->screen_setting_network_list_wifi, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_setting_network_list_wifi, LV_OBJ_FLAG_HIDDEN);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_network_list_wifi_main_main_default
    static lv_style_t style_screen_setting_network_list_wifi_main_main_default;
    ui_init_style(&style_screen_setting_network_list_wifi_main_main_default);

    lv_style_set_pad_top(&style_screen_setting_network_list_wifi_main_main_default, 5);
    lv_style_set_pad_left(&style_screen_setting_network_list_wifi_main_main_default, 5);
    lv_style_set_pad_right(&style_screen_setting_network_list_wifi_main_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_setting_network_list_wifi_main_main_default, 5);
    lv_style_set_bg_opa(&style_screen_setting_network_list_wifi_main_main_default, 255);
    lv_style_set_bg_color(&style_screen_setting_network_list_wifi_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_network_list_wifi_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_setting_network_list_wifi_main_main_default, 1);
    lv_style_set_border_opa(&style_screen_setting_network_list_wifi_main_main_default, 255);
    lv_style_set_border_color(&style_screen_setting_network_list_wifi_main_main_default, lv_color_hex(0x2F92DA));
    lv_style_set_border_side(&style_screen_setting_network_list_wifi_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_setting_network_list_wifi_main_main_default, 6);
    lv_style_set_shadow_width(&style_screen_setting_network_list_wifi_main_main_default, 0);
    lv_obj_add_style(ui->screen_setting_network_list_wifi, &style_screen_setting_network_list_wifi_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_network_list_wifi_main_scrollbar_default
    static lv_style_t style_screen_setting_network_list_wifi_main_scrollbar_default;
    ui_init_style(&style_screen_setting_network_list_wifi_main_scrollbar_default);

    lv_style_set_radius(&style_screen_setting_network_list_wifi_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_setting_network_list_wifi_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_setting_network_list_wifi_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_network_list_wifi_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_setting_network_list_wifi, &style_screen_setting_network_list_wifi_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_network_list_wifi_extra_btns_main_default
    static lv_style_t style_screen_setting_network_list_wifi_extra_btns_main_default;
    ui_init_style(&style_screen_setting_network_list_wifi_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_setting_network_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_left(&style_screen_setting_network_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_right(&style_screen_setting_network_list_wifi_extra_btns_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_setting_network_list_wifi_extra_btns_main_default, 5);
    lv_style_set_border_width(&style_screen_setting_network_list_wifi_extra_btns_main_default, 0);
    lv_style_set_text_color(&style_screen_setting_network_list_wifi_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_setting_network_list_wifi_extra_btns_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_network_list_wifi_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_setting_network_list_wifi_extra_btns_main_default, 3);
    lv_style_set_bg_opa(&style_screen_setting_network_list_wifi_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_screen_setting_network_list_wifi_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_network_list_wifi_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_setting_network_list_wifi_item0, &style_screen_setting_network_list_wifi_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_network_list_wifi_extra_texts_main_default
    static lv_style_t style_screen_setting_network_list_wifi_extra_texts_main_default;
    ui_init_style(&style_screen_setting_network_list_wifi_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_setting_network_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_left(&style_screen_setting_network_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_screen_setting_network_list_wifi_extra_texts_main_default, 5);
    lv_style_set_pad_bottom(&style_screen_setting_network_list_wifi_extra_texts_main_default, 5);
    lv_style_set_border_width(&style_screen_setting_network_list_wifi_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_setting_network_list_wifi_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_setting_network_list_wifi_extra_texts_main_default, &lv_font_montserratMedium_14);
    lv_style_set_text_opa(&style_screen_setting_network_list_wifi_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_setting_network_list_wifi_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_setting_network_list_wifi_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_setting_network_list_wifi_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_screen_setting_network_list_wifi_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_network_list_wifi_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes screen_setting_network_label_wifi
    ui->screen_setting_network_label_wifi = lv_label_create(ui->screen_setting_network);
    lv_label_set_text(ui->screen_setting_network_label_wifi, "" LV_SYMBOL_WIFI "");
    lv_label_set_long_mode(ui->screen_setting_network_label_wifi, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_setting_network_label_wifi, 294, 10);
    lv_obj_set_size(ui->screen_setting_network_label_wifi, 16, 16);
    lv_obj_add_flag(ui->screen_setting_network_label_wifi, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_setting_network_label_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_setting_network_label_wifi, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_setting_network_label_wifi, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_setting_network_label_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_setting_network_label_wifi, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_setting_network_label_wifi, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_setting_network_label_wifi, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_network_label_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_setting_network.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_setting_network);

}
