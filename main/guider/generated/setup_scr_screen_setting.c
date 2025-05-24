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



void setup_scr_screen_setting(lv_ui *ui)
{
    //Write codes screen_setting
    ui->screen_setting = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_setting, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_setting_list
    ui->screen_setting_list = lv_list_create(ui->screen_setting);
    ui->screen_setting_list_item0 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_wifi_alpha_20x20, "网络连接");
    ui->screen_setting_list_item1 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_bkl_alpha_20x20, "背光设置");
    ui->screen_setting_list_item2 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_sound_alpha_20x20, "声音设置");
    ui->screen_setting_list_item3 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_time_alpha_20x20, "时间设置");
    ui->screen_setting_list_item4 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_sleep_alpha_20x20, "休眠设置");
    ui->screen_setting_list_item5 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_webserver_alpha_20x20, "配网服务");
    ui->screen_setting_list_item6 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_ai_alpha_20x20, "聊天助手");
    ui->screen_setting_list_item7 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_reset_alpha_20x20, "重置设置");
    ui->screen_setting_list_item8 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_reboot_alpha_20x20, "重启设备");
    ui->screen_setting_list_item9 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_about_alpha_20x20, "关于");
    ui->screen_setting_list_item10 = lv_list_add_btn(ui->screen_setting_list, &_icon_setting_back_alpha_20x20, "返回");
    lv_obj_set_pos(ui->screen_setting_list, 0, 0);
    lv_obj_set_size(ui->screen_setting_list, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_setting_list, LV_SCROLLBAR_MODE_OFF);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_list_main_main_default
    static lv_style_t style_screen_setting_list_main_main_default;
    ui_init_style(&style_screen_setting_list_main_main_default);

    lv_style_set_pad_top(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_pad_left(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_pad_right(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_bg_opa(&style_screen_setting_list_main_main_default, 255);
    lv_style_set_bg_color(&style_screen_setting_list_main_main_default, lv_color_hex(0x282294));
    lv_style_set_bg_grad_dir(&style_screen_setting_list_main_main_default, LV_GRAD_DIR_VER);
    lv_style_set_bg_grad_color(&style_screen_setting_list_main_main_default, lv_color_hex(0x292222));
    lv_style_set_bg_main_stop(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_bg_grad_stop(&style_screen_setting_list_main_main_default, 255);
    lv_style_set_border_width(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_radius(&style_screen_setting_list_main_main_default, 0);
    lv_style_set_shadow_width(&style_screen_setting_list_main_main_default, 0);
    lv_obj_add_style(ui->screen_setting_list, &style_screen_setting_list_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_FOCUSED for &style_screen_setting_list_main_main_focused
    static lv_style_t style_screen_setting_list_main_main_focused;
    ui_init_style(&style_screen_setting_list_main_main_focused);

    lv_style_set_pad_top(&style_screen_setting_list_main_main_focused, 5);
    lv_style_set_pad_left(&style_screen_setting_list_main_main_focused, 5);
    lv_style_set_pad_right(&style_screen_setting_list_main_main_focused, 5);
    lv_style_set_pad_bottom(&style_screen_setting_list_main_main_focused, 5);
    lv_style_set_bg_opa(&style_screen_setting_list_main_main_focused, 255);
    lv_style_set_bg_color(&style_screen_setting_list_main_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_list_main_main_focused, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_setting_list_main_main_focused, 1);
    lv_style_set_border_opa(&style_screen_setting_list_main_main_focused, 255);
    lv_style_set_border_color(&style_screen_setting_list_main_main_focused, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_setting_list_main_main_focused, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_setting_list_main_main_focused, 3);
    lv_style_set_shadow_width(&style_screen_setting_list_main_main_focused, 0);
    lv_obj_add_style(ui->screen_setting_list, &style_screen_setting_list_main_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_list_main_scrollbar_default
    static lv_style_t style_screen_setting_list_main_scrollbar_default;
    ui_init_style(&style_screen_setting_list_main_scrollbar_default);

    lv_style_set_radius(&style_screen_setting_list_main_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_setting_list_main_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_setting_list_main_scrollbar_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_list_main_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_setting_list, &style_screen_setting_list_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_list_extra_btns_main_default
    static lv_style_t style_screen_setting_list_extra_btns_main_default;
    ui_init_style(&style_screen_setting_list_extra_btns_main_default);

    lv_style_set_pad_top(&style_screen_setting_list_extra_btns_main_default, 3);
    lv_style_set_pad_left(&style_screen_setting_list_extra_btns_main_default, 8);
    lv_style_set_pad_right(&style_screen_setting_list_extra_btns_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_setting_list_extra_btns_main_default, 3);
    lv_style_set_border_width(&style_screen_setting_list_extra_btns_main_default, 1);
    lv_style_set_border_opa(&style_screen_setting_list_extra_btns_main_default, 255);
    lv_style_set_border_color(&style_screen_setting_list_extra_btns_main_default, lv_color_hex(0x2F92DA));
    lv_style_set_border_side(&style_screen_setting_list_extra_btns_main_default, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_text_color(&style_screen_setting_list_extra_btns_main_default, lv_color_hex(0xfef6ea));
    lv_style_set_text_font(&style_screen_setting_list_extra_btns_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_list_extra_btns_main_default, 255);
    lv_style_set_radius(&style_screen_setting_list_extra_btns_main_default, 0);
    lv_style_set_bg_opa(&style_screen_setting_list_extra_btns_main_default, 0);
    lv_obj_add_style(ui->screen_setting_list_item10, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item9, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item8, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item7, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item6, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item5, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item4, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item3, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item2, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item1, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_setting_list_item0, &style_screen_setting_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_PRESSED for &style_screen_setting_list_extra_btns_main_pressed
    static lv_style_t style_screen_setting_list_extra_btns_main_pressed;
    ui_init_style(&style_screen_setting_list_extra_btns_main_pressed);

    lv_style_set_pad_top(&style_screen_setting_list_extra_btns_main_pressed, 3);
    lv_style_set_pad_left(&style_screen_setting_list_extra_btns_main_pressed, 8);
    lv_style_set_pad_right(&style_screen_setting_list_extra_btns_main_pressed, 0);
    lv_style_set_pad_bottom(&style_screen_setting_list_extra_btns_main_pressed, 3);
    lv_style_set_border_width(&style_screen_setting_list_extra_btns_main_pressed, 1);
    lv_style_set_border_opa(&style_screen_setting_list_extra_btns_main_pressed, 255);
    lv_style_set_border_color(&style_screen_setting_list_extra_btns_main_pressed, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_setting_list_extra_btns_main_pressed, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_setting_list_extra_btns_main_pressed, 3);
    lv_style_set_text_color(&style_screen_setting_list_extra_btns_main_pressed, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_setting_list_extra_btns_main_pressed, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_list_extra_btns_main_pressed, 255);
    lv_style_set_bg_opa(&style_screen_setting_list_extra_btns_main_pressed, 255);
    lv_style_set_bg_color(&style_screen_setting_list_extra_btns_main_pressed, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_list_extra_btns_main_pressed, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_setting_list_item10, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item9, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item8, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item7, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item6, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item5, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item4, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item3, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item2, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item1, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_add_style(ui->screen_setting_list_item0, &style_screen_setting_list_extra_btns_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style state: LV_STATE_FOCUSED for &style_screen_setting_list_extra_btns_main_focused
    static lv_style_t style_screen_setting_list_extra_btns_main_focused;
    ui_init_style(&style_screen_setting_list_extra_btns_main_focused);

    lv_style_set_pad_top(&style_screen_setting_list_extra_btns_main_focused, 3);
    lv_style_set_pad_left(&style_screen_setting_list_extra_btns_main_focused, 8);
    lv_style_set_pad_right(&style_screen_setting_list_extra_btns_main_focused, 0);
    lv_style_set_pad_bottom(&style_screen_setting_list_extra_btns_main_focused, 3);
    lv_style_set_border_width(&style_screen_setting_list_extra_btns_main_focused, 1);
    lv_style_set_border_opa(&style_screen_setting_list_extra_btns_main_focused, 255);
    lv_style_set_border_color(&style_screen_setting_list_extra_btns_main_focused, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_setting_list_extra_btns_main_focused, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_setting_list_extra_btns_main_focused, 3);
    lv_style_set_text_color(&style_screen_setting_list_extra_btns_main_focused, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_setting_list_extra_btns_main_focused, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_list_extra_btns_main_focused, 255);
    lv_style_set_bg_opa(&style_screen_setting_list_extra_btns_main_focused, 255);
    lv_style_set_bg_color(&style_screen_setting_list_extra_btns_main_focused, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_setting_list_extra_btns_main_focused, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_setting_list_item10, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item9, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item8, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item7, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item6, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item5, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item4, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item3, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item2, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item1, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_add_style(ui->screen_setting_list_item0, &style_screen_setting_list_extra_btns_main_focused, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_list_extra_texts_main_default
    static lv_style_t style_screen_setting_list_extra_texts_main_default;
    ui_init_style(&style_screen_setting_list_extra_texts_main_default);

    lv_style_set_pad_top(&style_screen_setting_list_extra_texts_main_default, 6);
    lv_style_set_pad_left(&style_screen_setting_list_extra_texts_main_default, 5);
    lv_style_set_pad_right(&style_screen_setting_list_extra_texts_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_setting_list_extra_texts_main_default, 0);
    lv_style_set_border_width(&style_screen_setting_list_extra_texts_main_default, 0);
    lv_style_set_text_color(&style_screen_setting_list_extra_texts_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_setting_list_extra_texts_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_list_extra_texts_main_default, 255);
    lv_style_set_radius(&style_screen_setting_list_extra_texts_main_default, 3);
    lv_style_set_transform_width(&style_screen_setting_list_extra_texts_main_default, 0);
    lv_style_set_bg_opa(&style_screen_setting_list_extra_texts_main_default, 0);

    //Write codes screen_setting_msgbox_confirm
    static const char * screen_setting_msgbox_confirm_btns[] = {"确定","关闭", ""};
    ui->screen_setting_msgbox_confirm = lv_msgbox_create(ui->screen_setting, "提醒", "是否重置配置", screen_setting_msgbox_confirm_btns, false);
    lv_obj_set_size(lv_msgbox_get_btns(ui->screen_setting_msgbox_confirm), 160, 30);
    lv_obj_set_pos(ui->screen_setting_msgbox_confirm, 70, 60);
    lv_obj_set_size(ui->screen_setting_msgbox_confirm, 180, 120);
    lv_obj_add_flag(ui->screen_setting_msgbox_confirm, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_setting_msgbox_confirm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_setting_msgbox_confirm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_setting_msgbox_confirm, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_setting_msgbox_confirm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_setting_msgbox_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_setting_msgbox_confirm, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_setting_msgbox_confirm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_msgbox_confirm_extra_title_main_default
    static lv_style_t style_screen_setting_msgbox_confirm_extra_title_main_default;
    ui_init_style(&style_screen_setting_msgbox_confirm_extra_title_main_default);

    lv_style_set_text_color(&style_screen_setting_msgbox_confirm_extra_title_main_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_setting_msgbox_confirm_extra_title_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_14);
    lv_style_set_text_opa(&style_screen_setting_msgbox_confirm_extra_title_main_default, 255);
    lv_style_set_text_letter_space(&style_screen_setting_msgbox_confirm_extra_title_main_default, 0);
    lv_style_set_text_line_space(&style_screen_setting_msgbox_confirm_extra_title_main_default, 30);
    lv_obj_add_style(lv_msgbox_get_title(ui->screen_setting_msgbox_confirm), &style_screen_setting_msgbox_confirm_extra_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_msgbox_confirm_extra_content_main_default
    static lv_style_t style_screen_setting_msgbox_confirm_extra_content_main_default;
    ui_init_style(&style_screen_setting_msgbox_confirm_extra_content_main_default);

    lv_style_set_text_color(&style_screen_setting_msgbox_confirm_extra_content_main_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_setting_msgbox_confirm_extra_content_main_default, &lv_font_HarmonyOS_Sans_SC_Regular_12);
    lv_style_set_text_opa(&style_screen_setting_msgbox_confirm_extra_content_main_default, 255);
    lv_style_set_text_letter_space(&style_screen_setting_msgbox_confirm_extra_content_main_default, 0);
    lv_style_set_text_line_space(&style_screen_setting_msgbox_confirm_extra_content_main_default, 10);
    lv_obj_add_style(lv_msgbox_get_text(ui->screen_setting_msgbox_confirm), &style_screen_setting_msgbox_confirm_extra_content_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_setting_msgbox_confirm_extra_btns_items_default
    static lv_style_t style_screen_setting_msgbox_confirm_extra_btns_items_default;
    ui_init_style(&style_screen_setting_msgbox_confirm_extra_btns_items_default);

    lv_style_set_bg_opa(&style_screen_setting_msgbox_confirm_extra_btns_items_default, 255);
    lv_style_set_bg_color(&style_screen_setting_msgbox_confirm_extra_btns_items_default, lv_color_hex(0xe6e6e6));
    lv_style_set_bg_grad_dir(&style_screen_setting_msgbox_confirm_extra_btns_items_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_setting_msgbox_confirm_extra_btns_items_default, 1);
    lv_style_set_border_opa(&style_screen_setting_msgbox_confirm_extra_btns_items_default, 255);
    lv_style_set_border_color(&style_screen_setting_msgbox_confirm_extra_btns_items_default, lv_color_hex(0xe6e6e6));
    lv_style_set_border_side(&style_screen_setting_msgbox_confirm_extra_btns_items_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_setting_msgbox_confirm_extra_btns_items_default, 6);
    lv_style_set_text_color(&style_screen_setting_msgbox_confirm_extra_btns_items_default, lv_color_hex(0x4e4e4e));
    lv_style_set_text_font(&style_screen_setting_msgbox_confirm_extra_btns_items_default, &lv_font_HarmonyOS_Sans_SC_Regular_12);
    lv_style_set_text_opa(&style_screen_setting_msgbox_confirm_extra_btns_items_default, 255);
    lv_obj_add_style(lv_msgbox_get_btns(ui->screen_setting_msgbox_confirm), &style_screen_setting_msgbox_confirm_extra_btns_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //The custom code of screen_setting.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_setting);

    //Init events for screen.
    events_init_screen_setting(ui);
}
