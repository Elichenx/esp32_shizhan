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



void setup_scr_screen_recorder(lv_ui *ui)
{
    //Write codes screen_recorder
    ui->screen_recorder = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_recorder, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_recorder, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_recorder, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_recorder_btn_clear
    ui->screen_recorder_btn_clear = lv_btn_create(ui->screen_recorder);
    ui->screen_recorder_btn_clear_label = lv_label_create(ui->screen_recorder_btn_clear);
    lv_label_set_text(ui->screen_recorder_btn_clear_label, "清理");
    lv_label_set_long_mode(ui->screen_recorder_btn_clear_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_recorder_btn_clear_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_recorder_btn_clear, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_recorder_btn_clear_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_recorder_btn_clear, 240, 122);
    lv_obj_set_size(ui->screen_recorder_btn_clear, 72, 32);

    //Write style for screen_recorder_btn_clear, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_clear, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_clear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_btn_clear, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_clear, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_clear, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_recorder_btn_clear, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_recorder_btn_clear, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_clear, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_clear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_clear, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_clear, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_clear, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_recorder_btn_clear, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_clear, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_clear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_clear, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_clear, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_clear, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_recorder_btn_clear, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_clear, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_clear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_clear, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_clear, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_clear, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_recorder_btn_clear, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_clear, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_clear, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_clear, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_clear, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_clear, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_clear, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_clear, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_recorder_btn_rec
    ui->screen_recorder_btn_rec = lv_btn_create(ui->screen_recorder);
    ui->screen_recorder_btn_rec_label = lv_label_create(ui->screen_recorder_btn_rec);
    lv_label_set_text(ui->screen_recorder_btn_rec_label, "录制");
    lv_label_set_long_mode(ui->screen_recorder_btn_rec_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_recorder_btn_rec_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_recorder_btn_rec, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_recorder_btn_rec_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_recorder_btn_rec, 240, 164);
    lv_obj_set_size(ui->screen_recorder_btn_rec, 72, 32);

    //Write style for screen_recorder_btn_rec, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_rec, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_btn_rec, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_rec, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_rec, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_recorder_btn_rec, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_recorder_btn_rec, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_rec, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_rec, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_rec, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_rec, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_recorder_btn_rec, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_rec, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_rec, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_rec, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_rec, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_recorder_btn_rec, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_rec, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_rec, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_rec, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_rec, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_recorder_btn_rec, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_rec, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_rec, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_rec, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_rec, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_rec, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_rec, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_recorder_btn_back
    ui->screen_recorder_btn_back = lv_btn_create(ui->screen_recorder);
    ui->screen_recorder_btn_back_label = lv_label_create(ui->screen_recorder_btn_back);
    lv_label_set_text(ui->screen_recorder_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_recorder_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_recorder_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_recorder_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_recorder_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_recorder_btn_back, 240, 206);
    lv_obj_set_size(ui->screen_recorder_btn_back, 72, 32);

    //Write style for screen_recorder_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_back, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_recorder_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_recorder_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_back, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_recorder_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_recorder_btn_back, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_back, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_recorder_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_recorder_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_recorder_btn_back, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_recorder_btn_back, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_recorder_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_recorder_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_recorder_btn_back, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_recorder_list_rec
    ui->screen_recorder_list_rec = lv_list_create(ui->screen_recorder);
    ui->screen_recorder_list_rec_item0 = lv_list_add_btn(ui->screen_recorder_list_rec, LV_SYMBOL_LEFT, "/");
    ui->screen_recorder_list_rec_item1 = lv_list_add_btn(ui->screen_recorder_list_rec, LV_SYMBOL_LEFT, "上一页");
    ui->screen_recorder_list_rec_item2 = lv_list_add_btn(ui->screen_recorder_list_rec, LV_SYMBOL_RIGHT, "下一页");
    lv_obj_set_pos(ui->screen_recorder_list_rec, 6, 88);
    lv_obj_set_size(ui->screen_recorder_list_rec, 225, 150);
    lv_obj_set_scrollbar_mode(ui->screen_recorder_list_rec, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_list_rec_main_main_default
    static lv_style_t style_screen_recorder_list_rec_main_main_default;
    ui_init_style(&style_screen_recorder_list_rec_main_main_default);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_main_main_default, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_main_main_default, 2);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_main_main_default, 2);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_main_main_default, 2);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_main_main_default, 15);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_recorder_list_rec_main_main_default, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_main_main_default, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_main_main_default, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_recorder_list_rec_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_recorder_list_rec_main_main_default, 2);
    lv_style_set_shadow_width(&style_screen_recorder_list_rec_main_main_default, 0);
    lv_obj_add_style(ui->screen_recorder_list_rec, &style_screen_recorder_list_rec_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_FOCUSED for &style_screen_recorder_list_rec_main_main_focused
    static lv_style_t style_screen_recorder_list_rec_main_main_focused;
    ui_init_style(&style_screen_recorder_list_rec_main_main_focused);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_main_main_focused, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_main_main_focused, 2);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_main_main_focused, 2);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_main_main_focused, 2);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_main_main_focused, 15);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_main_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_main_main_focused, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_recorder_list_rec_main_main_focused, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_main_main_focused, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_main_main_focused, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_recorder_list_rec_main_main_focused, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_recorder_list_rec_main_main_focused, 2);
    lv_style_set_shadow_width(&style_screen_recorder_list_rec_main_main_focused, 0);
    lv_obj_add_style(ui->screen_recorder_list_rec, &style_screen_recorder_list_rec_main_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DISABLED for &style_screen_recorder_list_rec_main_main_disabled
    static lv_style_t style_screen_recorder_list_rec_main_main_disabled;
    ui_init_style(&style_screen_recorder_list_rec_main_main_disabled);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_main_main_disabled, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_main_main_disabled, 2);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_main_main_disabled, 2);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_main_main_disabled, 2);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_main_main_disabled, 13);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_main_main_disabled, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_main_main_disabled, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_recorder_list_rec_main_main_disabled, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_main_main_disabled, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_main_main_disabled, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_recorder_list_rec_main_main_disabled, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_recorder_list_rec_main_main_disabled, 2);
    lv_style_set_shadow_width(&style_screen_recorder_list_rec_main_main_disabled, 0);
    lv_obj_add_style(ui->screen_recorder_list_rec, &style_screen_recorder_list_rec_main_main_disabled, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_list_rec_main_scrollbar_default
    static lv_style_t style_screen_recorder_list_rec_main_scrollbar_default;
    ui_init_style(&style_screen_recorder_list_rec_main_scrollbar_default);

    lv_style_set_radius(&style_screen_recorder_list_rec_main_scrollbar_default, 2);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_recorder_list_rec, &style_screen_recorder_list_rec_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_list_rec_extra_btns_main_default
    static lv_style_t style_screen_recorder_list_rec_extra_btns_main_default;
    ui_init_style(&style_screen_recorder_list_rec_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_extra_btns_main_default, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_extra_btns_main_default, 4);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_extra_btns_main_default, 4);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_extra_btns_main_default, 2);
    lv_style_set_border_width(&style_screen_recorder_list_rec_extra_btns_main_default, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_extra_btns_main_default, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_extra_btns_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_recorder_list_rec_extra_btns_main_default, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_text_color(&style_screen_recorder_list_rec_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_recorder_list_rec_extra_btns_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_recorder_list_rec_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_recorder_list_rec_extra_btns_main_default, 2);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_recorder_list_rec_item2, &style_screen_recorder_list_rec_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_recorder_list_rec_item1, &style_screen_recorder_list_rec_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_recorder_list_rec_item0, &style_screen_recorder_list_rec_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_PRESSED for &style_screen_recorder_list_rec_extra_btns_main_pressed
    static lv_style_t style_screen_recorder_list_rec_extra_btns_main_pressed;
    ui_init_style(&style_screen_recorder_list_rec_extra_btns_main_pressed);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_extra_btns_main_pressed, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_extra_btns_main_pressed, 4);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_extra_btns_main_pressed, 4);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_extra_btns_main_pressed, 2);
    lv_style_set_border_width(&style_screen_recorder_list_rec_extra_btns_main_pressed, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_extra_btns_main_pressed, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_extra_btns_main_pressed, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_recorder_list_rec_extra_btns_main_pressed, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_recorder_list_rec_extra_btns_main_pressed, 2);
    lv_style_set_text_color(&style_screen_recorder_list_rec_extra_btns_main_pressed, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_recorder_list_rec_extra_btns_main_pressed, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_recorder_list_rec_extra_btns_main_pressed, 255);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_extra_btns_main_pressed, 255);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_extra_btns_main_pressed, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_recorder_list_rec_item2, &style_screen_recorder_list_rec_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_recorder_list_rec_item1, &style_screen_recorder_list_rec_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_recorder_list_rec_item0, &style_screen_recorder_list_rec_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style state: LV_STATE_FOCUSED for &style_screen_recorder_list_rec_extra_btns_main_focused
    static lv_style_t style_screen_recorder_list_rec_extra_btns_main_focused;
    ui_init_style(&style_screen_recorder_list_rec_extra_btns_main_focused);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_extra_btns_main_focused, 2);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_extra_btns_main_focused, 4);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_extra_btns_main_focused, 4);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_extra_btns_main_focused, 2);
    lv_style_set_border_width(&style_screen_recorder_list_rec_extra_btns_main_focused, 1);
    lv_style_set_border_opa(&style_screen_recorder_list_rec_extra_btns_main_focused, 255);
    lv_style_set_border_color(&style_screen_recorder_list_rec_extra_btns_main_focused, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_recorder_list_rec_extra_btns_main_focused, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_recorder_list_rec_extra_btns_main_focused, 2);
    lv_style_set_text_color(&style_screen_recorder_list_rec_extra_btns_main_focused, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_recorder_list_rec_extra_btns_main_focused, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_recorder_list_rec_extra_btns_main_focused, 255);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_extra_btns_main_focused, 255);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_extra_btns_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_extra_btns_main_focused, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_recorder_list_rec_item2, &style_screen_recorder_list_rec_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_recorder_list_rec_item1, &style_screen_recorder_list_rec_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_recorder_list_rec_item0, &style_screen_recorder_list_rec_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_list_rec_extra_texts_main_default
    static lv_style_t style_screen_recorder_list_rec_extra_texts_main_default;
    ui_init_style(&style_screen_recorder_list_rec_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_recorder_list_rec_extra_texts_main_default, 4);
    lv_style_set_pad_left(&style_screen_recorder_list_rec_extra_texts_main_default, 4);
    lv_style_set_pad_right(&style_screen_recorder_list_rec_extra_texts_main_default, 4);
    lv_style_set_pad_bottom(&style_screen_recorder_list_rec_extra_texts_main_default, 4);
    lv_style_set_border_width(&style_screen_recorder_list_rec_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_recorder_list_rec_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_recorder_list_rec_extra_texts_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_recorder_list_rec_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_recorder_list_rec_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_recorder_list_rec_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_recorder_list_rec_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_screen_recorder_list_rec_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_recorder_list_rec_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes screen_recorder_chart_rec
    ui->screen_recorder_chart_rec = lv_chart_create(ui->screen_recorder);
    lv_chart_set_type(ui->screen_recorder_chart_rec, LV_CHART_TYPE_LINE);
    lv_chart_set_div_line_count(ui->screen_recorder_chart_rec, 8, 32);
    lv_chart_set_point_count(ui->screen_recorder_chart_rec, 1);
    lv_chart_set_range(ui->screen_recorder_chart_rec, LV_CHART_AXIS_PRIMARY_Y, -100, 100);
    lv_chart_set_axis_tick(ui->screen_recorder_chart_rec, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, false, 40);
    lv_chart_set_range(ui->screen_recorder_chart_rec, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_recorder_chart_rec, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 4, false, 40);
    lv_chart_set_zoom_x(ui->screen_recorder_chart_rec, 256);
    lv_chart_set_zoom_y(ui->screen_recorder_chart_rec, 256);
    lv_obj_set_style_size(ui->screen_recorder_chart_rec, 0, LV_PART_INDICATOR);
    ui->screen_recorder_chart_rec_0 = lv_chart_add_series(ui->screen_recorder_chart_rec, lv_color_hex(0xffffff), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_recorder_chart_rec, ui->screen_recorder_chart_rec_0, 0);
#endif
    lv_obj_set_pos(ui->screen_recorder_chart_rec, 10, 2);
    lv_obj_set_size(ui->screen_recorder_chart_rec, 300, 80);
    lv_obj_set_scrollbar_mode(ui->screen_recorder_chart_rec, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_recorder_chart_rec, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder_chart_rec, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder_chart_rec, lv_color_hex(0x60b432), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_chart_rec, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_recorder_chart_rec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_chart_rec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_recorder_chart_rec, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_recorder_chart_rec, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_recorder_chart_rec, 130, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_chart_rec, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_recorder_chart_rec, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_recorder_chart_rec, lv_color_hex(0x77dfff), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_recorder_chart_rec, &lv_font_montserratMedium_16, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_recorder_chart_rec, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_recorder_chart_rec, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_recorder_chart_rec, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_recorder_chart_rec, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_recorder_label_page_info
    ui->screen_recorder_label_page_info = lv_label_create(ui->screen_recorder);
    lv_label_set_text(ui->screen_recorder_label_page_info, "0/0");
    lv_label_set_long_mode(ui->screen_recorder_label_page_info, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_pos(ui->screen_recorder_label_page_info, 240, 91);
    lv_obj_set_size(ui->screen_recorder_label_page_info, 72, 24);

    //Write style for screen_recorder_label_page_info, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_recorder_label_page_info, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_recorder_label_page_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_recorder_label_page_info, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_recorder_label_page_info, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_recorder_label_page_info, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_recorder_label_page_info, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_recorder_label_page_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_recorder_label_page_info, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_recorder_label_page_info, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_recorder_label_page_info, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_recorder_msgbox_file
    static const char * screen_recorder_msgbox_file_btns[] = {"播放","删除","关闭", ""};
    ui->screen_recorder_msgbox_file = lv_msgbox_create(ui->screen_recorder, "录音文件", "请选择要执行的操作", screen_recorder_msgbox_file_btns, false);
    lv_obj_set_size(lv_msgbox_get_btns(ui->screen_recorder_msgbox_file), 240, 30);
    lv_obj_set_pos(ui->screen_recorder_msgbox_file, 40, 60);
    lv_obj_set_size(ui->screen_recorder_msgbox_file, 240, 120);
    lv_obj_add_flag(ui->screen_recorder_msgbox_file, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_recorder_msgbox_file, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_recorder_msgbox_file, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_recorder_msgbox_file, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_recorder_msgbox_file, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_recorder_msgbox_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_recorder_msgbox_file, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_recorder_msgbox_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_msgbox_file_extra_title_main_default
    static lv_style_t style_screen_recorder_msgbox_file_extra_title_main_default;
    ui_init_style(&style_screen_recorder_msgbox_file_extra_title_main_default);

    lv_style_set_text_color(&style_screen_recorder_msgbox_file_extra_title_main_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_recorder_msgbox_file_extra_title_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_recorder_msgbox_file_extra_title_main_default, 255);
    lv_style_set_text_letter_space(&style_screen_recorder_msgbox_file_extra_title_main_default, 0);
    lv_style_set_text_line_space(&style_screen_recorder_msgbox_file_extra_title_main_default, 30);
    lv_obj_add_style(lv_msgbox_get_title(ui->screen_recorder_msgbox_file), &style_screen_recorder_msgbox_file_extra_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_msgbox_file_extra_content_main_default
    static lv_style_t style_screen_recorder_msgbox_file_extra_content_main_default;
    ui_init_style(&style_screen_recorder_msgbox_file_extra_content_main_default);

    lv_style_set_text_color(&style_screen_recorder_msgbox_file_extra_content_main_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_recorder_msgbox_file_extra_content_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_12);
    lv_style_set_text_opa(&style_screen_recorder_msgbox_file_extra_content_main_default, 255);
    lv_style_set_text_letter_space(&style_screen_recorder_msgbox_file_extra_content_main_default, 0);
    lv_style_set_text_line_space(&style_screen_recorder_msgbox_file_extra_content_main_default, 10);
    lv_obj_add_style(lv_msgbox_get_text(ui->screen_recorder_msgbox_file), &style_screen_recorder_msgbox_file_extra_content_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_recorder_msgbox_file_extra_btns_items_default
    static lv_style_t style_screen_recorder_msgbox_file_extra_btns_items_default;
    ui_init_style(&style_screen_recorder_msgbox_file_extra_btns_items_default);

    lv_style_set_bg_opa(&style_screen_recorder_msgbox_file_extra_btns_items_default, 255);
    lv_style_set_bg_color(&style_screen_recorder_msgbox_file_extra_btns_items_default, lv_color_hex(0xe6e6e6));
    lv_style_set_bg_grad_dir(&style_screen_recorder_msgbox_file_extra_btns_items_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_recorder_msgbox_file_extra_btns_items_default, 1);
    lv_style_set_border_opa(&style_screen_recorder_msgbox_file_extra_btns_items_default, 255);
    lv_style_set_border_color(&style_screen_recorder_msgbox_file_extra_btns_items_default, lv_color_hex(0xe6e6e6));
    lv_style_set_border_side(&style_screen_recorder_msgbox_file_extra_btns_items_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_recorder_msgbox_file_extra_btns_items_default, 6);
    lv_style_set_text_color(&style_screen_recorder_msgbox_file_extra_btns_items_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_recorder_msgbox_file_extra_btns_items_default, &lv_font_HarmonyOS_Sans_SC_Regular_12);
    lv_style_set_text_opa(&style_screen_recorder_msgbox_file_extra_btns_items_default, 255);
    lv_obj_add_style(lv_msgbox_get_btns(ui->screen_recorder_msgbox_file), &style_screen_recorder_msgbox_file_extra_btns_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //The custom code of screen_recorder.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_recorder);

}
