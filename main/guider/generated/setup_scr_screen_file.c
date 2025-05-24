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



void setup_scr_screen_file(lv_ui *ui)
{
    //Write codes screen_file
    ui->screen_file = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_file, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_file, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_file, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_file, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_file, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_file, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_btn_close
    ui->screen_file_btn_close = lv_btn_create(ui->screen_file);
    ui->screen_file_btn_close_label = lv_label_create(ui->screen_file_btn_close);
    lv_label_set_text(ui->screen_file_btn_close_label, "" LV_SYMBOL_CLOSE "");
    lv_label_set_long_mode(ui->screen_file_btn_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_file_btn_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_file_btn_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_file_btn_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_file_btn_close, 4, 198);
    lv_obj_set_size(ui->screen_file_btn_close, 110, 38);

    //Write style for screen_file_btn_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_file_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_file_btn_close, lv_color_hex(0xff3856), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_file_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_file_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_btn_close, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_btn_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_btn_close, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_btn_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_btn_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_file_btn_close, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_file_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_file_btn_close, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_file_btn_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_file_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_file_btn_close, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_file_btn_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_file_btn_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_file_btn_close, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_file_btn_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_file_list_file
    ui->screen_file_list_file = lv_list_create(ui->screen_file);
    ui->screen_file_list_file_item0 = lv_list_add_btn(ui->screen_file_list_file, LV_SYMBOL_LEFT, "/");
    ui->screen_file_list_file_item1 = lv_list_add_btn(ui->screen_file_list_file, LV_SYMBOL_LEFT, "上一页");
    ui->screen_file_list_file_item2 = lv_list_add_btn(ui->screen_file_list_file, LV_SYMBOL_RIGHT, "下一页");
    lv_obj_set_pos(ui->screen_file_list_file, 120, 28);
    lv_obj_set_size(ui->screen_file_list_file, 200, 208);
    lv_obj_set_scrollbar_mode(ui->screen_file_list_file, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_screen_file_list_file_main_main_default
    static lv_style_t style_screen_file_list_file_main_main_default;
    ui_init_style(&style_screen_file_list_file_main_main_default);

    lv_style_set_pad_top(&style_screen_file_list_file_main_main_default, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_main_main_default, 2);
    lv_style_set_pad_right(&style_screen_file_list_file_main_main_default, 2);
    lv_style_set_pad_bottom(&style_screen_file_list_file_main_main_default, 2);
    lv_style_set_bg_opa(&style_screen_file_list_file_main_main_default, 15);
    lv_style_set_bg_color(&style_screen_file_list_file_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_file_list_file_main_main_default, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_main_main_default, 255);
    lv_style_set_border_color(&style_screen_file_list_file_main_main_default, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_file_list_file_main_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_file_list_file_main_main_default, 2);
    lv_style_set_shadow_width(&style_screen_file_list_file_main_main_default, 0);
    lv_obj_add_style(ui->screen_file_list_file, &style_screen_file_list_file_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_FOCUSED for &style_screen_file_list_file_main_main_focused
    static lv_style_t style_screen_file_list_file_main_main_focused;
    ui_init_style(&style_screen_file_list_file_main_main_focused);

    lv_style_set_pad_top(&style_screen_file_list_file_main_main_focused, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_main_main_focused, 2);
    lv_style_set_pad_right(&style_screen_file_list_file_main_main_focused, 2);
    lv_style_set_pad_bottom(&style_screen_file_list_file_main_main_focused, 2);
    lv_style_set_bg_opa(&style_screen_file_list_file_main_main_focused, 15);
    lv_style_set_bg_color(&style_screen_file_list_file_main_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_main_main_focused, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_file_list_file_main_main_focused, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_main_main_focused, 255);
    lv_style_set_border_color(&style_screen_file_list_file_main_main_focused, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_file_list_file_main_main_focused, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_file_list_file_main_main_focused, 2);
    lv_style_set_shadow_width(&style_screen_file_list_file_main_main_focused, 0);
    lv_obj_add_style(ui->screen_file_list_file, &style_screen_file_list_file_main_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DISABLED for &style_screen_file_list_file_main_main_disabled
    static lv_style_t style_screen_file_list_file_main_main_disabled;
    ui_init_style(&style_screen_file_list_file_main_main_disabled);

    lv_style_set_pad_top(&style_screen_file_list_file_main_main_disabled, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_main_main_disabled, 2);
    lv_style_set_pad_right(&style_screen_file_list_file_main_main_disabled, 2);
    lv_style_set_pad_bottom(&style_screen_file_list_file_main_main_disabled, 2);
    lv_style_set_bg_opa(&style_screen_file_list_file_main_main_disabled, 13);
    lv_style_set_bg_color(&style_screen_file_list_file_main_main_disabled, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_main_main_disabled, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_file_list_file_main_main_disabled, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_main_main_disabled, 255);
    lv_style_set_border_color(&style_screen_file_list_file_main_main_disabled, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_file_list_file_main_main_disabled, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_file_list_file_main_main_disabled, 2);
    lv_style_set_shadow_width(&style_screen_file_list_file_main_main_disabled, 0);
    lv_obj_add_style(ui->screen_file_list_file, &style_screen_file_list_file_main_main_disabled, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_file_list_file_main_scrollbar_default
    static lv_style_t style_screen_file_list_file_main_scrollbar_default;
    ui_init_style(&style_screen_file_list_file_main_scrollbar_default);

    lv_style_set_radius(&style_screen_file_list_file_main_scrollbar_default, 2);
    lv_style_set_bg_opa(&style_screen_file_list_file_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_file_list_file_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_file_list_file, &style_screen_file_list_file_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_file_list_file_extra_btns_main_default
    static lv_style_t style_screen_file_list_file_extra_btns_main_default;
    ui_init_style(&style_screen_file_list_file_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_file_list_file_extra_btns_main_default, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_extra_btns_main_default, 4);
    lv_style_set_pad_right(&style_screen_file_list_file_extra_btns_main_default, 4);
    lv_style_set_pad_bottom(&style_screen_file_list_file_extra_btns_main_default, 2);
    lv_style_set_border_width(&style_screen_file_list_file_extra_btns_main_default, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_extra_btns_main_default, 255);
    lv_style_set_border_color(&style_screen_file_list_file_extra_btns_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_file_list_file_extra_btns_main_default, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_text_color(&style_screen_file_list_file_extra_btns_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_file_list_file_extra_btns_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_file_list_file_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_file_list_file_extra_btns_main_default, 2);
    lv_style_set_bg_opa(&style_screen_file_list_file_extra_btns_main_default, 255);
    lv_style_set_bg_color(&style_screen_file_list_file_extra_btns_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_extra_btns_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_file_list_file_item2, &style_screen_file_list_file_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_file_list_file_item1, &style_screen_file_list_file_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_file_list_file_item0, &style_screen_file_list_file_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_PRESSED for &style_screen_file_list_file_extra_btns_main_pressed
    static lv_style_t style_screen_file_list_file_extra_btns_main_pressed;
    ui_init_style(&style_screen_file_list_file_extra_btns_main_pressed);

    lv_style_set_pad_top(&style_screen_file_list_file_extra_btns_main_pressed, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_extra_btns_main_pressed, 4);
    lv_style_set_pad_right(&style_screen_file_list_file_extra_btns_main_pressed, 4);
    lv_style_set_pad_bottom(&style_screen_file_list_file_extra_btns_main_pressed, 2);
    lv_style_set_border_width(&style_screen_file_list_file_extra_btns_main_pressed, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_extra_btns_main_pressed, 255);
    lv_style_set_border_color(&style_screen_file_list_file_extra_btns_main_pressed, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_file_list_file_extra_btns_main_pressed, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_file_list_file_extra_btns_main_pressed, 2);
    lv_style_set_text_color(&style_screen_file_list_file_extra_btns_main_pressed, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_file_list_file_extra_btns_main_pressed, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_file_list_file_extra_btns_main_pressed, 255);
    lv_style_set_bg_opa(&style_screen_file_list_file_extra_btns_main_pressed, 255);
    lv_style_set_bg_color(&style_screen_file_list_file_extra_btns_main_pressed, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_file_list_file_item2, &style_screen_file_list_file_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_file_list_file_item1, &style_screen_file_list_file_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_file_list_file_item0, &style_screen_file_list_file_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style state: LV_STATE_FOCUSED for &style_screen_file_list_file_extra_btns_main_focused
    static lv_style_t style_screen_file_list_file_extra_btns_main_focused;
    ui_init_style(&style_screen_file_list_file_extra_btns_main_focused);

    lv_style_set_pad_top(&style_screen_file_list_file_extra_btns_main_focused, 2);
    lv_style_set_pad_left(&style_screen_file_list_file_extra_btns_main_focused, 4);
    lv_style_set_pad_right(&style_screen_file_list_file_extra_btns_main_focused, 4);
    lv_style_set_pad_bottom(&style_screen_file_list_file_extra_btns_main_focused, 2);
    lv_style_set_border_width(&style_screen_file_list_file_extra_btns_main_focused, 1);
    lv_style_set_border_opa(&style_screen_file_list_file_extra_btns_main_focused, 255);
    lv_style_set_border_color(&style_screen_file_list_file_extra_btns_main_focused, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_file_list_file_extra_btns_main_focused, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_file_list_file_extra_btns_main_focused, 2);
    lv_style_set_text_color(&style_screen_file_list_file_extra_btns_main_focused, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_file_list_file_extra_btns_main_focused, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_file_list_file_extra_btns_main_focused, 255);
    lv_style_set_bg_opa(&style_screen_file_list_file_extra_btns_main_focused, 255);
    lv_style_set_bg_color(&style_screen_file_list_file_extra_btns_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_extra_btns_main_focused, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_file_list_file_item2, &style_screen_file_list_file_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_file_list_file_item1, &style_screen_file_list_file_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_file_list_file_item0, &style_screen_file_list_file_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_file_list_file_extra_texts_main_default
    static lv_style_t style_screen_file_list_file_extra_texts_main_default;
    ui_init_style(&style_screen_file_list_file_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_file_list_file_extra_texts_main_default, 4);
    lv_style_set_pad_left(&style_screen_file_list_file_extra_texts_main_default, 4);
    lv_style_set_pad_right(&style_screen_file_list_file_extra_texts_main_default, 4);
    lv_style_set_pad_bottom(&style_screen_file_list_file_extra_texts_main_default, 4);
    lv_style_set_border_width(&style_screen_file_list_file_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_file_list_file_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_file_list_file_extra_texts_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_file_list_file_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_file_list_file_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_file_list_file_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_file_list_file_extra_texts_main_default, 255);
    lv_style_set_bg_color(&style_screen_file_list_file_extra_texts_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_file_list_file_extra_texts_main_default, LV_GRAD_DIR_NONE);

    //Write codes screen_file_cont_info
    ui->screen_file_cont_info = lv_obj_create(ui->screen_file);
    lv_obj_set_pos(ui->screen_file_cont_info, 0, 2);
    lv_obj_set_size(ui->screen_file_cont_info, 118, 190);
    lv_obj_set_scrollbar_mode(ui->screen_file_cont_info, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_file_cont_info, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_cont_info, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_file_cont_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_file_cont_info, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_file_cont_info, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_cont_info, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_cont_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_label_sd
    ui->screen_file_label_sd = lv_label_create(ui->screen_file_cont_info);
    lv_label_set_text(ui->screen_file_label_sd, "" LV_SYMBOL_DRIVE "");
    lv_label_set_long_mode(ui->screen_file_label_sd, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_file_label_sd, 4, 14);
    lv_obj_set_size(ui->screen_file_label_sd, 24, 24);

    //Write style for screen_file_label_sd, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_label_sd, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_label_sd, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_label_sd, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_label_sd, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_label_sd, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_label_state
    ui->screen_file_label_state = lv_label_create(ui->screen_file_cont_info);
    lv_label_set_text(ui->screen_file_label_state, "SD卡未插入");
    lv_label_set_long_mode(ui->screen_file_label_state, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_file_label_state, 32, 14);
    lv_obj_set_size(ui->screen_file_label_state, 78, 24);

    //Write style for screen_file_label_state, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_label_state, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_label_state, &lv_font_HarmonyOS_Sans_SC_Regular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_label_state, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_label_state, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_label_state, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_label_freespace
    ui->screen_file_label_freespace = lv_label_create(ui->screen_file_cont_info);
    lv_label_set_text(ui->screen_file_label_freespace, "0M");
    lv_label_set_long_mode(ui->screen_file_label_freespace, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_file_label_freespace, 8, 106);
    lv_obj_set_size(ui->screen_file_label_freespace, 100, 24);

    //Write style for screen_file_label_freespace, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_label_freespace, lv_color_hex(0x2FDA64), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_label_freespace, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_label_freespace, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_file_label_freespace, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_label_freespace, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_label_freespace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_label_usedspace
    ui->screen_file_label_usedspace = lv_label_create(ui->screen_file_cont_info);
    lv_label_set_text(ui->screen_file_label_usedspace, "0M");
    lv_label_set_long_mode(ui->screen_file_label_usedspace, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_file_label_usedspace, 8, 72);
    lv_obj_set_size(ui->screen_file_label_usedspace, 100, 24);

    //Write style for screen_file_label_usedspace, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_label_usedspace, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_label_usedspace, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_label_usedspace, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_file_label_usedspace, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_label_usedspace, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_label_usedspace, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_file_label_page_info
    ui->screen_file_label_page_info = lv_label_create(ui->screen_file);
    lv_label_set_text(ui->screen_file_label_page_info, "0/0");
    lv_label_set_long_mode(ui->screen_file_label_page_info, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_file_label_page_info, 120, 2);
    lv_obj_set_size(ui->screen_file_label_page_info, 200, 24);

    //Write style for screen_file_label_page_info, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_file_label_page_info, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_file_label_page_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_file_label_page_info, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_file_label_page_info, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_file_label_page_info, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_file_label_page_info, &lv_font_montserratMedium_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_file_label_page_info, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_file_label_page_info, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_file_label_page_info, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_file_label_page_info, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_file_label_page_info, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_file.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_file);

    //Init events for screen.
    events_init_screen_file(ui);
}
