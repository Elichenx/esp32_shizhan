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



void setup_scr_screen_menu(lv_ui *ui)
{
    //Write codes screen_menu
    ui->screen_menu = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_menu, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_menu, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_menu, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_flag(ui->screen_menu, LV_OBJ_FLAG_SCROLLABLE);

    //Write style for screen_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_menu, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_cont_wrap
    ui->screen_menu_cont_wrap = lv_obj_create(ui->screen_menu);
    lv_obj_set_pos(ui->screen_menu_cont_wrap, 21, 16);
    lv_obj_set_size(ui->screen_menu_cont_wrap, 56, 56);
    lv_obj_set_scrollbar_mode(ui->screen_menu_cont_wrap, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_menu_cont_wrap, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_cont_wrap, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_cont_wrap, 104, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_menu_cont_wrap, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_menu_cont_wrap, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_cont_wrap, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_setting
    ui->screen_menu_label_setting = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_setting, "主页");
    lv_label_set_long_mode(ui->screen_menu_label_setting, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_setting, 25, 78);
    lv_obj_set_size(ui->screen_menu_label_setting, 48, 24);

    //Write style for screen_menu_label_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_setting, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_setting, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_setting, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_file
    ui->screen_menu_label_file = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_file, "文件");
    lv_label_set_long_mode(ui->screen_menu_label_file, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_file, 99, 78);
    lv_obj_set_size(ui->screen_menu_label_file, 48, 24);

    //Write style for screen_menu_label_file, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_file, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_file, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_file, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_file, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_file, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_music
    ui->screen_menu_label_music = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_music, "音乐");
    lv_label_set_long_mode(ui->screen_menu_label_music, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_music, 173, 78);
    lv_obj_set_size(ui->screen_menu_label_music, 48, 24);

    //Write style for screen_menu_label_music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_music, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_music, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_music, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_music, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_alarm
    ui->screen_menu_label_alarm = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_alarm, "闹钟");
    lv_label_set_long_mode(ui->screen_menu_label_alarm, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_alarm, 247, 78);
    lv_obj_set_size(ui->screen_menu_label_alarm, 48, 24);

    //Write style for screen_menu_label_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_alarm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_alarm, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_alarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_weather
    ui->screen_menu_label_weather = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_weather, "天气");
    lv_label_set_long_mode(ui->screen_menu_label_weather, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_weather, 25, 166);
    lv_obj_set_size(ui->screen_menu_label_weather, 48, 24);

    //Write style for screen_menu_label_weather, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_weather, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_weather, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_weather, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_weather, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_weather, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_about
    ui->screen_menu_label_about = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_about, "日历");
    lv_label_set_long_mode(ui->screen_menu_label_about, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_about, 173, 166);
    lv_obj_set_size(ui->screen_menu_label_about, 48, 24);

    //Write style for screen_menu_label_about, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_about, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_about, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_about, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_about, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_about, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_about, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_update
    ui->screen_menu_label_update = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_update, "升级");
    lv_label_set_long_mode(ui->screen_menu_label_update, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_update, 99, 166);
    lv_obj_set_size(ui->screen_menu_label_update, 48, 24);

    //Write style for screen_menu_label_update, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_update, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_update, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_update, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_update, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_update, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_home
    ui->screen_menu_label_home = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_home, "设置");
    lv_label_set_long_mode(ui->screen_menu_label_home, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_home, 247, 166);
    lv_obj_set_size(ui->screen_menu_label_home, 48, 24);

    //Write style for screen_menu_label_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_home, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_home, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_home, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_label_timer
    ui->screen_menu_label_timer = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_timer, "计时器");
    lv_label_set_long_mode(ui->screen_menu_label_timer, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_timer, 25, 254);
    lv_obj_set_size(ui->screen_menu_label_timer, 48, 24);

    //Write style for screen_menu_label_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_timer, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_timer, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_timer, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_timer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_imgbtn_home
    ui->screen_menu_imgbtn_home = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_home, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_home, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_home_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_home, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_home_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_home_label = lv_label_create(ui->screen_menu_imgbtn_home);
    lv_label_set_text(ui->screen_menu_imgbtn_home_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_home_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_home_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_home, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_home, 25, 20);
    lv_obj_set_size(ui->screen_menu_imgbtn_home, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_home, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_home, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_home, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_home, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_home, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_home, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_home, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_home, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_home, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_home, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_home, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_home, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_home, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_home, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_file
    ui->screen_menu_imgbtn_file = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_file, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_file, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_file_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_file, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_file_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_file_label = lv_label_create(ui->screen_menu_imgbtn_file);
    lv_label_set_text(ui->screen_menu_imgbtn_file_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_file_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_file_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_file, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_file, 99, 20);
    lv_obj_set_size(ui->screen_menu_imgbtn_file, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_file, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_file, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_file, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_file, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_file, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_file, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_file, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_file, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_file, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_file, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_file, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_file, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_file, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_file, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_file, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_music
    ui->screen_menu_imgbtn_music = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_music, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_music, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_music_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_music, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_music_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_music_label = lv_label_create(ui->screen_menu_imgbtn_music);
    lv_label_set_text(ui->screen_menu_imgbtn_music_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_music_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_music_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_music, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_music, 173, 20);
    lv_obj_set_size(ui->screen_menu_imgbtn_music, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_music, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_music, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_music, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_music, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_music, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_music, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_music, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_music, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_music, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_music, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_music, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_music, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_music, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_music, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_alarmclock
    ui->screen_menu_imgbtn_alarmclock = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_alarmclock, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_alarmclock, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_alarmclock_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_alarmclock, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_alarmclock_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_alarmclock_label = lv_label_create(ui->screen_menu_imgbtn_alarmclock);
    lv_label_set_text(ui->screen_menu_imgbtn_alarmclock_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_alarmclock_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_alarmclock_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_alarmclock, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_alarmclock, 247, 20);
    lv_obj_set_size(ui->screen_menu_imgbtn_alarmclock, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_alarmclock, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_alarmclock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_alarmclock, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_alarmclock, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_alarmclock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_alarmclock, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_alarmclock, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_alarmclock, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_alarmclock, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_alarmclock, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_alarmclock, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_alarmclock, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_alarmclock, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_alarmclock, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_alarmclock, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_weather
    ui->screen_menu_imgbtn_weather = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_weather, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_weather, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_weather_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_weather, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_weather_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_weather_label = lv_label_create(ui->screen_menu_imgbtn_weather);
    lv_label_set_text(ui->screen_menu_imgbtn_weather_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_weather_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_weather_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_weather, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_weather, 25, 108);
    lv_obj_set_size(ui->screen_menu_imgbtn_weather, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_weather, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_weather, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_weather, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_weather, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_weather, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_weather, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_weather, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_weather, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_weather, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_weather, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_weather, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_weather, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_weather, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_weather, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_weather, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_update
    ui->screen_menu_imgbtn_update = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_update, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_update, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_update_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_update, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_update_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_update_label = lv_label_create(ui->screen_menu_imgbtn_update);
    lv_label_set_text(ui->screen_menu_imgbtn_update_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_update_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_update_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_update, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_update, 99, 108);
    lv_obj_set_size(ui->screen_menu_imgbtn_update, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_update, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_update, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_update, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_update, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_update, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_update, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_update, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_update, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_update, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_update, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_update, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_update, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_update, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_update, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_update, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_calendar
    ui->screen_menu_imgbtn_calendar = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_calendar, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_calendar, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_calendar_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_calendar, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_calendar_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_calendar_label = lv_label_create(ui->screen_menu_imgbtn_calendar);
    lv_label_set_text(ui->screen_menu_imgbtn_calendar_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_calendar_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_calendar_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_calendar, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_calendar, 173, 108);
    lv_obj_set_size(ui->screen_menu_imgbtn_calendar, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_calendar, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_calendar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_calendar, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_calendar, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_calendar, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_calendar, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_calendar, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_calendar, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_calendar, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_calendar, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_calendar, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_calendar, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_calendar, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_calendar, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_calendar, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_setting
    ui->screen_menu_imgbtn_setting = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_setting, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_setting, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_setting_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_setting, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_setting_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_setting_label = lv_label_create(ui->screen_menu_imgbtn_setting);
    lv_label_set_text(ui->screen_menu_imgbtn_setting_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_setting_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_setting_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_setting, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_setting, 247, 108);
    lv_obj_set_size(ui->screen_menu_imgbtn_setting, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_setting, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_setting, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_setting, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_setting, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_setting, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_setting, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_setting, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_setting, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_setting, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_setting, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_timer
    ui->screen_menu_imgbtn_timer = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_timer, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_timer, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_timer_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_timer, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_weather_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_timer_label = lv_label_create(ui->screen_menu_imgbtn_timer);
    lv_label_set_text(ui->screen_menu_imgbtn_timer_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_timer_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_timer_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_timer, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_timer, 25, 196);
    lv_obj_set_size(ui->screen_menu_imgbtn_timer, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_timer, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_timer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_timer, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_timer, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_timer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_timer, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_timer, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_timer, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_timer, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_timer, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_timer, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_timer, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_timer, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_timer, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_timer, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_imgbtn_i2c
    ui->screen_menu_imgbtn_i2c = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_i2c, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_i2c, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_i2c_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_i2c, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_weather_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_i2c_label = lv_label_create(ui->screen_menu_imgbtn_i2c);
    lv_label_set_text(ui->screen_menu_imgbtn_i2c_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_i2c_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_i2c_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_i2c, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_i2c, 99, 196);
    lv_obj_set_size(ui->screen_menu_imgbtn_i2c, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_i2c, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_i2c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_i2c, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_i2c, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_i2c, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_i2c, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_i2c, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_i2c, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_i2c, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_i2c, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_i2c, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_i2c, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_i2c, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_i2c, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_i2c, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_label_i2c
    ui->screen_menu_label_i2c = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_i2c, "I2C工具");
    lv_label_set_long_mode(ui->screen_menu_label_i2c, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_i2c, 91, 254);
    lv_obj_set_size(ui->screen_menu_label_i2c, 64, 24);

    //Write style for screen_menu_label_i2c, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_i2c, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_i2c, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_i2c, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_i2c, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_i2c, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_i2c, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_imgbtn_recorder
    ui->screen_menu_imgbtn_recorder = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_recorder, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_recorder, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_recorder_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_recorder, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_weather_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_recorder_label = lv_label_create(ui->screen_menu_imgbtn_recorder);
    lv_label_set_text(ui->screen_menu_imgbtn_recorder_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_recorder_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_recorder_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_recorder, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_recorder, 173, 196);
    lv_obj_set_size(ui->screen_menu_imgbtn_recorder, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_recorder, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_recorder, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_recorder, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_recorder, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_recorder, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_recorder, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_recorder, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_recorder, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_recorder, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_recorder, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_recorder, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_recorder, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_recorder, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_recorder, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_recorder, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_label_recorder
    ui->screen_menu_label_recorder = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_recorder, "录音机");
    lv_label_set_long_mode(ui->screen_menu_label_recorder, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_recorder, 173, 254);
    lv_obj_set_size(ui->screen_menu_label_recorder, 48, 24);

    //Write style for screen_menu_label_recorder, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_recorder, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_recorder, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_recorder, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_recorder, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_recorder, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_recorder, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu_imgbtn_chat
    ui->screen_menu_imgbtn_chat = lv_imgbtn_create(ui->screen_menu);
    lv_obj_add_flag(ui->screen_menu_imgbtn_chat, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_chat, LV_IMGBTN_STATE_RELEASED, NULL, &_icon_chat_alpha_48x48, NULL);
    lv_imgbtn_set_src(ui->screen_menu_imgbtn_chat, LV_IMGBTN_STATE_PRESSED, NULL, &_icon_weather_alpha_48x48, NULL);
    ui->screen_menu_imgbtn_chat_label = lv_label_create(ui->screen_menu_imgbtn_chat);
    lv_label_set_text(ui->screen_menu_imgbtn_chat_label, "");
    lv_label_set_long_mode(ui->screen_menu_imgbtn_chat_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_imgbtn_chat_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu_imgbtn_chat, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_menu_imgbtn_chat, 247, 196);
    lv_obj_set_size(ui->screen_menu_imgbtn_chat, 48, 48);
    lv_obj_add_flag(ui->screen_menu_imgbtn_chat, LV_OBJ_FLAG_CLICKABLE);

    //Write style for screen_menu_imgbtn_chat, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_chat, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_chat, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_imgbtn_chat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_menu_imgbtn_chat, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_menu_imgbtn_chat, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_chat, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_chat, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_menu_imgbtn_chat, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_menu_imgbtn_chat, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_menu_imgbtn_chat, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_menu_imgbtn_chat, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_menu_imgbtn_chat, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_menu_imgbtn_chat, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_menu_label_chat
    ui->screen_menu_label_chat = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label_chat, "聊天");
    lv_label_set_long_mode(ui->screen_menu_label_chat, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_menu_label_chat, 247, 254);
    lv_obj_set_size(ui->screen_menu_label_chat, 48, 24);

    //Write style for screen_menu_label_chat, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu_label_chat, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu_label_chat, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu_label_chat, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_menu_label_chat, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu_label_chat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu_label_chat, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_menu.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_menu);

    //Init events for screen.
    events_init_screen_menu(ui);
}
