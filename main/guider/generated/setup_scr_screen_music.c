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



void setup_scr_screen_music(lv_ui *ui)
{
    //Write codes screen_music
    ui->screen_music = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_music, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_music, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_music, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_music_img_player
    ui->screen_music_img_player = lv_img_create(ui->screen_music);
    lv_obj_add_flag(ui->screen_music_img_player, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_music_img_player, &_icon_player_alpha_64x64);
    lv_img_set_pivot(ui->screen_music_img_player, 50,50);
    lv_img_set_angle(ui->screen_music_img_player, 0);
    lv_obj_set_pos(ui->screen_music_img_player, 128, 56);
    lv_obj_set_size(ui->screen_music_img_player, 64, 64);

    //Write style for screen_music_img_player, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_music_img_player, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_music_img_player, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_img_player, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_music_img_player, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_music_btn_volume
    ui->screen_music_btn_volume = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_volume_label = lv_label_create(ui->screen_music_btn_volume);
    lv_label_set_text(ui->screen_music_btn_volume_label, "" LV_SYMBOL_VOLUME_MID "");
    lv_label_set_long_mode(ui->screen_music_btn_volume_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_volume_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_volume, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_volume_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_volume, 272, 6);
    lv_obj_set_size(ui->screen_music_btn_volume, 42, 24);

    //Write style for screen_music_btn_volume, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_volume, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_volume, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_volume, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_volume, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_volume, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_volume, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_volume, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_volume, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_volume, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_volume, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_volume, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_volume, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_volume, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_volume, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_volume, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_volume, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_volume, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_volume, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_slider_volume
    ui->screen_music_slider_volume = lv_slider_create(ui->screen_music);
    lv_slider_set_range(ui->screen_music_slider_volume, 0, 100);
    lv_slider_set_mode(ui->screen_music_slider_volume, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_music_slider_volume, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_music_slider_volume, 290, 49);
    lv_obj_set_size(ui->screen_music_slider_volume, 6, 88);
    lv_obj_add_flag(ui->screen_music_slider_volume, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_music_slider_volume, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_volume, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_volume, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_volume, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_volume, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_music_slider_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_slider_volume, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_volume, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_shadow_width(ui->screen_music_slider_volume, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_music_slider_volume, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_volume, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_volume, lv_color_hex(0x6e6e6e), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_volume, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_volume, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_volume, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_volume, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_slider_volume, lv_color_hex(0x6e6e6e), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_volume, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_slider_volume, 50, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_music_slider_volume, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_volume, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_volume, lv_color_hex(0x8F8F8F), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_volume, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_volume, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_volume, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_volume, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_slider_volume, lv_color_hex(0x8F8F8F), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_volume, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_slider_volume, 50, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_music_slider_prog
    ui->screen_music_slider_prog = lv_slider_create(ui->screen_music);
    lv_slider_set_range(ui->screen_music_slider_prog, 0, 100);
    lv_slider_set_mode(ui->screen_music_slider_prog, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_music_slider_prog, 0, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_music_slider_prog, 21, 153);
    lv_obj_set_size(ui->screen_music_slider_prog, 278, 4);

    //Write style for screen_music_slider_prog, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 115, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_music_slider_prog, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_slider_prog, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_prog, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_shadow_width(ui->screen_music_slider_prog, 0, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_music_slider_prog, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0x181818), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_prog, Part: LV_PART_INDICATOR, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 255, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0x181818), LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 50, LV_PART_INDICATOR|LV_STATE_FOCUSED);

    //Write style for screen_music_slider_prog, Part: LV_PART_INDICATOR, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 255, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0x181818), LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 50, LV_PART_INDICATOR|LV_STATE_DISABLED);

    //Write style for screen_music_slider_prog, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 6, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_music_slider_prog, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_slider_prog, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_slider_prog, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_slider_prog, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_slider_prog, 6, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_music_btn_mode
    ui->screen_music_btn_mode = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_mode_label = lv_label_create(ui->screen_music_btn_mode);
    lv_label_set_text(ui->screen_music_btn_mode_label, "" LV_SYMBOL_AUDIO "");
    lv_label_set_long_mode(ui->screen_music_btn_mode_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_mode_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_mode, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_mode_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_mode, 22, 188);
    lv_obj_set_size(ui->screen_music_btn_mode, 32, 32);

    //Write style for screen_music_btn_mode, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_mode, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_mode, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_mode, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_mode, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_mode, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_mode, -1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_mode, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_mode, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_mode, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_mode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_mode, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_mode, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_mode, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_mode, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_mode, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_mode, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_mode, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_mode, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_mode, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_mode, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_btn_prev
    ui->screen_music_btn_prev = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_prev_label = lv_label_create(ui->screen_music_btn_prev);
    lv_label_set_text(ui->screen_music_btn_prev_label, "" LV_SYMBOL_PREV "");
    lv_label_set_long_mode(ui->screen_music_btn_prev_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_prev_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_prev, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_prev_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_prev, 84, 188);
    lv_obj_set_size(ui->screen_music_btn_prev, 32, 32);

    //Write style for screen_music_btn_prev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_prev, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_prev, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_prev, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_prev, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_prev, -1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_prev, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_prev, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_prev, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_prev, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_prev, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_prev, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_prev, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_prev, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_prev, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_prev, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_prev, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_btn_play
    ui->screen_music_btn_play = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_play_label = lv_label_create(ui->screen_music_btn_play);
    lv_label_set_text(ui->screen_music_btn_play_label, "" LV_SYMBOL_PLAY "");
    lv_label_set_long_mode(ui->screen_music_btn_play_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_play_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_play, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_play_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_play, 136, 180);
    lv_obj_set_size(ui->screen_music_btn_play, 48, 48);

    //Write style for screen_music_btn_play, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_play, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_play, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_play, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_play, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_play, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_play, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_play, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_play, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_play, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_play, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_play, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_play, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_play, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_play, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_play, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_play, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_play, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_play, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_play, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_play, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_play, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_btn_next
    ui->screen_music_btn_next = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_next_label = lv_label_create(ui->screen_music_btn_next);
    lv_label_set_text(ui->screen_music_btn_next_label, "" LV_SYMBOL_NEXT "");
    lv_label_set_long_mode(ui->screen_music_btn_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_next, 204, 188);
    lv_obj_set_size(ui->screen_music_btn_next, 32, 32);

    //Write style for screen_music_btn_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_next, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_next, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_next, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_next, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_next, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_next, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_next, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_next, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_next, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_next, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_next, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_next, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_next, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_next, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_btn_list
    ui->screen_music_btn_list = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_list_label = lv_label_create(ui->screen_music_btn_list);
    lv_label_set_text(ui->screen_music_btn_list_label, "" LV_SYMBOL_DIRECTORY "");
    lv_label_set_long_mode(ui->screen_music_btn_list_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_list_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_list, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_list_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_list, 266, 188);
    lv_obj_set_size(ui->screen_music_btn_list, 32, 32);

    //Write style for screen_music_btn_list, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_list, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_list, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_list, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_list, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_list, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_list, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_list, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_list, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_list, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_list, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_list, 25, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_list, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_music_btn_list, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_list, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_music_btn_list, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_list, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_list, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_list, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_list, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes screen_music_btn_close
    ui->screen_music_btn_close = lv_btn_create(ui->screen_music);
    ui->screen_music_btn_close_label = lv_label_create(ui->screen_music_btn_close);
    lv_label_set_text(ui->screen_music_btn_close_label, "" LV_SYMBOL_CLOSE "");
    lv_label_set_long_mode(ui->screen_music_btn_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_music_btn_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_music_btn_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_music_btn_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_music_btn_close, 6, 6);
    lv_obj_set_size(ui->screen_music_btn_close, 42, 24);

    //Write style for screen_music_btn_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_music_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_btn_close, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_close, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui->screen_music_btn_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui->screen_music_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui->screen_music_btn_close, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui->screen_music_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui->screen_music_btn_close, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_btn_close, &lv_font_montserratMedium_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_btn_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_music_btn_close, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_music_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_music_btn_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_music_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_music_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_music_btn_close, 6, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_music_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_music_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_music_btn_close, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_music_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_music_label_name
    ui->screen_music_label_name = lv_label_create(ui->screen_music);
    lv_label_set_text(ui->screen_music_label_name, "");
    lv_label_set_long_mode(ui->screen_music_label_name, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_pos(ui->screen_music_label_name, 60, 8);
    lv_obj_set_size(ui->screen_music_label_name, 200, 24);

    //Write style for screen_music_label_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_label_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_label_name, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_label_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_music_label_name, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_label_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_music_label_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_label_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_music_label_play_time
    ui->screen_music_label_play_time = lv_label_create(ui->screen_music);
    lv_label_set_text(ui->screen_music_label_play_time, "00:00");
    lv_label_set_long_mode(ui->screen_music_label_play_time, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_music_label_play_time, 10, 166);
    lv_obj_set_size(ui->screen_music_label_play_time, 52, 22);

    //Write style for screen_music_label_play_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_label_play_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_label_play_time, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_label_play_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_music_label_play_time, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_label_play_time, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_label_play_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_music_label_total_time
    ui->screen_music_label_total_time = lv_label_create(ui->screen_music);
    lv_label_set_text(ui->screen_music_label_total_time, "00:00");
    lv_label_set_long_mode(ui->screen_music_label_total_time, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_music_label_total_time, 258, 166);
    lv_obj_set_size(ui->screen_music_label_total_time, 52, 22);

    //Write style for screen_music_label_total_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_music_label_total_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_music_label_total_time, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_music_label_total_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_music_label_total_time, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_music_label_total_time, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_music_label_total_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_music.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_music);

}
