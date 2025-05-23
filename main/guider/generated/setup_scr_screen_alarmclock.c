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



void setup_scr_screen_alarmclock(lv_ui *ui)
{
    //Write codes screen_alarmclock
    ui->screen_alarmclock = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_alarmclock, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock, LV_SCROLLBAR_MODE_AUTO);

    //Write style for screen_alarmclock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_0
    ui->screen_alarmclock_cont_0 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_0, 6, 6);
    lv_obj_set_size(ui->screen_alarmclock_cont_0, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_0, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_0, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_0, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state0
    ui->screen_alarmclock_sw_state0 = lv_switch_create(ui->screen_alarmclock_cont_0);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state0, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state0, 48, 24);

    //Write style for screen_alarmclock_sw_state0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state0, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state0, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state0, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state0, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state0, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state0, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state0, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state0, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state0, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state0, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state0, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state0, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state0, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state0, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time0
    ui->screen_alarmclock_label_time0 = lv_label_create(ui->screen_alarmclock_cont_0);
    lv_label_set_text(ui->screen_alarmclock_label_time0, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time0, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time0, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time0, 64, 32);

    //Write style for screen_alarmclock_label_time0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time0, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week0
    ui->screen_alarmclock_label_week0 = lv_label_create(ui->screen_alarmclock_cont_0);
    lv_label_set_text(ui->screen_alarmclock_label_week0, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week0, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week0, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week0, 240, 32);

    //Write style for screen_alarmclock_label_week0, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week0, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week0, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week0, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week0, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week0, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_1
    ui->screen_alarmclock_label_1 = lv_label_create(ui->screen_alarmclock_cont_0);
    lv_label_set_text(ui->screen_alarmclock_label_1, "闹钟一");
    lv_label_set_long_mode(ui->screen_alarmclock_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_1, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_1, 64, 32);

    //Write style for screen_alarmclock_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_1, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_1
    ui->screen_alarmclock_cont_1 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_1, 6, 76);
    lv_obj_set_size(ui->screen_alarmclock_cont_1, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state1
    ui->screen_alarmclock_sw_state1 = lv_switch_create(ui->screen_alarmclock_cont_1);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state1, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state1, 48, 24);

    //Write style for screen_alarmclock_sw_state1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state1, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time1
    ui->screen_alarmclock_label_time1 = lv_label_create(ui->screen_alarmclock_cont_1);
    lv_label_set_text(ui->screen_alarmclock_label_time1, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time1, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time1, 64, 32);

    //Write style for screen_alarmclock_label_time1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time1, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week1
    ui->screen_alarmclock_label_week1 = lv_label_create(ui->screen_alarmclock_cont_1);
    lv_label_set_text(ui->screen_alarmclock_label_week1, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week1, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week1, 240, 32);

    //Write style for screen_alarmclock_label_week1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week1, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_2
    ui->screen_alarmclock_label_2 = lv_label_create(ui->screen_alarmclock_cont_1);
    lv_label_set_text(ui->screen_alarmclock_label_2, "闹钟二");
    lv_label_set_long_mode(ui->screen_alarmclock_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_2, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_2, 64, 32);

    //Write style for screen_alarmclock_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_2, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_2
    ui->screen_alarmclock_cont_2 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_2, 6, 146);
    lv_obj_set_size(ui->screen_alarmclock_cont_2, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state2
    ui->screen_alarmclock_sw_state2 = lv_switch_create(ui->screen_alarmclock_cont_2);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state2, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state2, 48, 24);

    //Write style for screen_alarmclock_sw_state2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state2, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state2, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state2, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time2
    ui->screen_alarmclock_label_time2 = lv_label_create(ui->screen_alarmclock_cont_2);
    lv_label_set_text(ui->screen_alarmclock_label_time2, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time2, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time2, 64, 32);

    //Write style for screen_alarmclock_label_time2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time2, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week2
    ui->screen_alarmclock_label_week2 = lv_label_create(ui->screen_alarmclock_cont_2);
    lv_label_set_text(ui->screen_alarmclock_label_week2, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week2, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week2, 240, 32);

    //Write style for screen_alarmclock_label_week2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week2, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_3
    ui->screen_alarmclock_label_3 = lv_label_create(ui->screen_alarmclock_cont_2);
    lv_label_set_text(ui->screen_alarmclock_label_3, "闹钟三");
    lv_label_set_long_mode(ui->screen_alarmclock_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_3, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_3, 64, 32);

    //Write style for screen_alarmclock_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_3, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_3
    ui->screen_alarmclock_cont_3 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_3, 6, 216);
    lv_obj_set_size(ui->screen_alarmclock_cont_3, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_3, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state3
    ui->screen_alarmclock_sw_state3 = lv_switch_create(ui->screen_alarmclock_cont_3);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state3, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state3, 48, 24);

    //Write style for screen_alarmclock_sw_state3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state3, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state3, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state3, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state3, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state3, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state3, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time3
    ui->screen_alarmclock_label_time3 = lv_label_create(ui->screen_alarmclock_cont_3);
    lv_label_set_text(ui->screen_alarmclock_label_time3, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time3, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time3, 64, 32);

    //Write style for screen_alarmclock_label_time3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time3, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week3
    ui->screen_alarmclock_label_week3 = lv_label_create(ui->screen_alarmclock_cont_3);
    lv_label_set_text(ui->screen_alarmclock_label_week3, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week3, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week3, 240, 32);

    //Write style for screen_alarmclock_label_week3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week3, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_4
    ui->screen_alarmclock_label_4 = lv_label_create(ui->screen_alarmclock_cont_3);
    lv_label_set_text(ui->screen_alarmclock_label_4, "闹钟四");
    lv_label_set_long_mode(ui->screen_alarmclock_label_4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_4, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_4, 64, 32);

    //Write style for screen_alarmclock_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_4, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_4
    ui->screen_alarmclock_cont_4 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_4, 6, 286);
    lv_obj_set_size(ui->screen_alarmclock_cont_4, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state4
    ui->screen_alarmclock_sw_state4 = lv_switch_create(ui->screen_alarmclock_cont_4);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state4, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state4, 48, 24);

    //Write style for screen_alarmclock_sw_state4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state4, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state4, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state4, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state4, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state4, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state4, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time4
    ui->screen_alarmclock_label_time4 = lv_label_create(ui->screen_alarmclock_cont_4);
    lv_label_set_text(ui->screen_alarmclock_label_time4, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time4, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time4, 64, 32);

    //Write style for screen_alarmclock_label_time4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time4, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week4
    ui->screen_alarmclock_label_week4 = lv_label_create(ui->screen_alarmclock_cont_4);
    lv_label_set_text(ui->screen_alarmclock_label_week4, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week4, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week4, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week4, 240, 32);

    //Write style for screen_alarmclock_label_week4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week4, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_5
    ui->screen_alarmclock_label_5 = lv_label_create(ui->screen_alarmclock_cont_4);
    lv_label_set_text(ui->screen_alarmclock_label_5, "闹钟五");
    lv_label_set_long_mode(ui->screen_alarmclock_label_5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_5, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_5, 64, 32);

    //Write style for screen_alarmclock_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_5, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_cont_5
    ui->screen_alarmclock_cont_5 = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_5, 6, 356);
    lv_obj_set_size(ui->screen_alarmclock_cont_5, 300, 64);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_alarmclock_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_5, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_state5
    ui->screen_alarmclock_sw_state5 = lv_switch_create(ui->screen_alarmclock_cont_5);
    lv_obj_set_pos(ui->screen_alarmclock_sw_state5, 240, 20);
    lv_obj_set_size(ui->screen_alarmclock_sw_state5, 48, 24);

    //Write style for screen_alarmclock_sw_state5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state5, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state5, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_state5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_state5, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state5, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state5, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state5, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_state5, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_state5, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_state5, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_state5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_state5, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_state5, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_time5
    ui->screen_alarmclock_label_time5 = lv_label_create(ui->screen_alarmclock_cont_5);
    lv_label_set_text(ui->screen_alarmclock_label_time5, "00:00");
    lv_label_set_long_mode(ui->screen_alarmclock_label_time5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_time5, 8, 4);
    lv_obj_set_size(ui->screen_alarmclock_label_time5, 64, 32);

    //Write style for screen_alarmclock_label_time5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_time5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_time5, &lv_font_D_DIN_PRO_700_Bold_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_time5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_time5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_time5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_week5
    ui->screen_alarmclock_label_week5 = lv_label_create(ui->screen_alarmclock_cont_5);
    lv_label_set_text(ui->screen_alarmclock_label_week5, "仅一次");
    lv_label_set_long_mode(ui->screen_alarmclock_label_week5, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_week5, 8, 44);
    lv_obj_set_size(ui->screen_alarmclock_label_week5, 240, 32);

    //Write style for screen_alarmclock_label_week5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_week5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_week5, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_week5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_week5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_week5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_6
    ui->screen_alarmclock_label_6 = lv_label_create(ui->screen_alarmclock_cont_5);
    lv_label_set_text(ui->screen_alarmclock_label_6, "闹钟六");
    lv_label_set_long_mode(ui->screen_alarmclock_label_6, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_6, 118, 6);
    lv_obj_set_size(ui->screen_alarmclock_label_6, 64, 32);

    //Write style for screen_alarmclock_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_6, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_6, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_btn_reset
    ui->screen_alarmclock_btn_reset = lv_btn_create(ui->screen_alarmclock);
    ui->screen_alarmclock_btn_reset_label = lv_label_create(ui->screen_alarmclock_btn_reset);
    lv_label_set_text(ui->screen_alarmclock_btn_reset_label, "重置全部");
    lv_label_set_long_mode(ui->screen_alarmclock_btn_reset_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_alarmclock_btn_reset_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_alarmclock_btn_reset, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_alarmclock_btn_reset_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_alarmclock_btn_reset, 6, 426);
    lv_obj_set_size(ui->screen_alarmclock_btn_reset, 145, 64);

    //Write style for screen_alarmclock_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_reset, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_btn_reset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_reset, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btn_reset, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_reset, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes screen_alarmclock_btn_back
    ui->screen_alarmclock_btn_back = lv_btn_create(ui->screen_alarmclock);
    ui->screen_alarmclock_btn_back_label = lv_label_create(ui->screen_alarmclock_btn_back);
    lv_label_set_text(ui->screen_alarmclock_btn_back_label, "返回菜单");
    lv_label_set_long_mode(ui->screen_alarmclock_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_alarmclock_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_alarmclock_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_alarmclock_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_alarmclock_btn_back, 161, 426);
    lv_obj_set_size(ui->screen_alarmclock_btn_back, 145, 64);

    //Write style for screen_alarmclock_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_back, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btn_back, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_back, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_back, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_back, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btn_back, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_back, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_back, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_back, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_back, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes screen_alarmclock_cont_config
    ui->screen_alarmclock_cont_config = lv_obj_create(ui->screen_alarmclock);
    lv_obj_set_pos(ui->screen_alarmclock_cont_config, 39, 20);
    lv_obj_set_size(ui->screen_alarmclock_cont_config, 240, 200);
    lv_obj_set_scrollbar_mode(ui->screen_alarmclock_cont_config, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_alarmclock_cont_config, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_alarmclock_cont_config, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_cont_config, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_cont_config, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_alarmclock_cont_config, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_alarmclock_cont_config, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_cont_config, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_cont_config, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_cont_config, lv_color_hex(0x3f3f3f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_cont_config, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_cont_config, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_alarmclock_cont_config, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_alarmclock_cont_config, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_alarmclock_cont_config, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_alarmclock_cont_config, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_label_7
    ui->screen_alarmclock_label_7 = lv_label_create(ui->screen_alarmclock_cont_config);
    lv_label_set_text(ui->screen_alarmclock_label_7, ":");
    lv_label_set_long_mode(ui->screen_alarmclock_label_7, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_alarmclock_label_7, 103, 38);
    lv_obj_set_size(ui->screen_alarmclock_label_7, 32, 32);

    //Write style for screen_alarmclock_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_label_7, &lv_font_Alatsi_Regular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_roller_hour
    ui->screen_alarmclock_roller_hour = lv_roller_create(ui->screen_alarmclock_cont_config);
    lv_roller_set_options(ui->screen_alarmclock_roller_hour, "1\n2\n3\n4\n5", LV_ROLLER_MODE_INFINITE);
    lv_obj_set_pos(ui->screen_alarmclock_roller_hour, 26, 12);
    lv_obj_set_width(ui->screen_alarmclock_roller_hour, 80);

    //Write style for screen_alarmclock_roller_hour, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_alarmclock_roller_hour, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_hour, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_hour, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_roller_hour, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_alarmclock_roller_hour, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_roller_hour, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_radius(ui->screen_alarmclock_roller_hour, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_hour, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_hour, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->screen_alarmclock_roller_hour, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_roller_hour, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_alarmclock_roller_hour, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_roller_hour, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_roller_hour, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_hour, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_hour, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_hour, &lv_font_montserratMedium_12, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_hour, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_alarmclock_roller_hour, 3);
    //Write codes screen_alarmclock_roller_min
    ui->screen_alarmclock_roller_min = lv_roller_create(ui->screen_alarmclock_cont_config);
    lv_roller_set_options(ui->screen_alarmclock_roller_min, "1\n2\n3\n4\n5", LV_ROLLER_MODE_INFINITE);
    lv_obj_set_pos(ui->screen_alarmclock_roller_min, 132, 12);
    lv_obj_set_width(ui->screen_alarmclock_roller_min, 80);

    //Write style for screen_alarmclock_roller_min, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_alarmclock_roller_min, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_min, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_min, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_roller_min, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_alarmclock_roller_min, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_alarmclock_roller_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_roller_min, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_radius(ui->screen_alarmclock_roller_min, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_min, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_min, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_min, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_min, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_align(ui->screen_alarmclock_roller_min, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_roller_min, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_alarmclock_roller_min, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_alarmclock_roller_min, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_roller_min, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_roller_min, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_roller_min, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_roller_min, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_roller_min, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_roller_min, &lv_font_montserratMedium_12, LV_PART_SELECTED|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_roller_min, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);

    lv_roller_set_visible_row_count(ui->screen_alarmclock_roller_min, 3);
    //Write codes screen_alarmclock_btnm_week
    ui->screen_alarmclock_btnm_week = lv_btnmatrix_create(ui->screen_alarmclock_cont_config);
    static const char *screen_alarmclock_btnm_week_text_map[] = {"日", "一", "二", "三", "四", "五", "六", "",};
    lv_btnmatrix_set_map(ui->screen_alarmclock_btnm_week, screen_alarmclock_btnm_week_text_map);
    lv_obj_set_pos(ui->screen_alarmclock_btnm_week, 4, 116);
    lv_obj_set_size(ui->screen_alarmclock_btnm_week, 184, 32);

    //Write style for screen_alarmclock_btnm_week, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_btnm_week, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_alarmclock_btnm_week, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_btnm_week, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui->screen_alarmclock_btnm_week, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btnm_week, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btnm_week, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btnm_week, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_border_width(ui->screen_alarmclock_btnm_week, 1, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_alarmclock_btnm_week, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_top(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_bottom(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_left(ui->screen_alarmclock_btnm_week, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_right(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_row(ui->screen_alarmclock_btnm_week, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_pad_column(ui->screen_alarmclock_btnm_week, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btnm_week, 4, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btnm_week, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btnm_week, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_alarmclock_btnm_week, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0xffffff), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btnm_week, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btnm_week, 4, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btnm_week, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btnm_week, lv_color_hex(0x2195f6), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btnm_week, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btnm_week, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_sw_enable
    ui->screen_alarmclock_sw_enable = lv_switch_create(ui->screen_alarmclock_cont_config);
    lv_obj_set_pos(ui->screen_alarmclock_sw_enable, 192, 121);
    lv_obj_set_size(ui->screen_alarmclock_sw_enable, 40, 22);

    //Write style for screen_alarmclock_sw_enable, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_enable, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_enable, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_enable, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_sw_enable, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_enable, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_enable, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_enable, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_enable, 10, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_sw_enable, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_enable, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_enable, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_enable, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_sw_enable, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_enable, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_enable, lv_color_hex(0x2FDAAE), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_enable, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_sw_enable, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_sw_enable, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_sw_enable, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_sw_enable, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_sw_enable, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_sw_enable, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_alarmclock_btn_cfg_reset
    ui->screen_alarmclock_btn_cfg_reset = lv_btn_create(ui->screen_alarmclock_cont_config);
    ui->screen_alarmclock_btn_cfg_reset_label = lv_label_create(ui->screen_alarmclock_btn_cfg_reset);
    lv_label_set_text(ui->screen_alarmclock_btn_cfg_reset_label, "重置");
    lv_label_set_long_mode(ui->screen_alarmclock_btn_cfg_reset_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_alarmclock_btn_cfg_reset_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_alarmclock_btn_cfg_reset, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_alarmclock_btn_cfg_reset_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_alarmclock_btn_cfg_reset, 16, 156);
    lv_obj_set_size(ui->screen_alarmclock_btn_cfg_reset, 58, 32);

    //Write style for screen_alarmclock_btn_cfg_reset, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_reset, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_btn_cfg_reset, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btn_cfg_reset, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_reset, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btn_cfg_reset, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_reset, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_alarmclock_btn_cfg_reset, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_reset, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_btn_cfg_reset, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_reset, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_reset, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_reset, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_reset, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_reset, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_reset, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_alarmclock_btn_cfg_save
    ui->screen_alarmclock_btn_cfg_save = lv_btn_create(ui->screen_alarmclock_cont_config);
    ui->screen_alarmclock_btn_cfg_save_label = lv_label_create(ui->screen_alarmclock_btn_cfg_save);
    lv_label_set_text(ui->screen_alarmclock_btn_cfg_save_label, "保存");
    lv_label_set_long_mode(ui->screen_alarmclock_btn_cfg_save_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_alarmclock_btn_cfg_save_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_alarmclock_btn_cfg_save, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_alarmclock_btn_cfg_save_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_alarmclock_btn_cfg_save, 90, 156);
    lv_obj_set_size(ui->screen_alarmclock_btn_cfg_save, 58, 32);

    //Write style for screen_alarmclock_btn_cfg_save, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_save, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_save, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_btn_cfg_save, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btn_cfg_save, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_save, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_save, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btn_cfg_save, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_save, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_save, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_alarmclock_btn_cfg_save, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_save, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_save, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_btn_cfg_save, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_save, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_save, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_save, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_save, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_save, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_save, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_alarmclock_btn_cfg_close
    ui->screen_alarmclock_btn_cfg_close = lv_btn_create(ui->screen_alarmclock_cont_config);
    ui->screen_alarmclock_btn_cfg_close_label = lv_label_create(ui->screen_alarmclock_btn_cfg_close);
    lv_label_set_text(ui->screen_alarmclock_btn_cfg_close_label, "关闭");
    lv_label_set_long_mode(ui->screen_alarmclock_btn_cfg_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_alarmclock_btn_cfg_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_alarmclock_btn_cfg_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_alarmclock_btn_cfg_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_alarmclock_btn_cfg_close, 162, 156);
    lv_obj_set_size(ui->screen_alarmclock_btn_cfg_close, 58, 32);

    //Write style for screen_alarmclock_btn_cfg_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x2F92DA), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_close, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_close, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_alarmclock_btn_cfg_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_alarmclock_btn_cfg_close, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x2FDAAE), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_close, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_close, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_alarmclock_btn_cfg_close, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_close, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_close, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_alarmclock_btn_cfg_close, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_close, 5, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_close, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_alarmclock_btn_cfg_close, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_alarmclock_btn_cfg_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_alarmclock_btn_cfg_close, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_alarmclock_btn_cfg_close, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_alarmclock_btn_cfg_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_alarmclock_btn_cfg_close, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_alarmclock_btn_cfg_close, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //The custom code of screen_alarmclock.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_alarmclock);

}
