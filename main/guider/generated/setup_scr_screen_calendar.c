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
lv_obj_t *extern_screen_calendar_calendar_header;


lv_calendar_date_t screen_calendar_calendar_today;
lv_calendar_date_t screen_calendar_calendar_highlihted_days[1];
void setup_scr_screen_calendar(lv_ui *ui)
{
    //Write codes screen_calendar
    ui->screen_calendar = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_calendar, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen_calendar, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_calendar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_calendar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_calendar, lv_color_hex(0x242424), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_calendar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_calendar_calendar
    ui->screen_calendar_calendar = lv_calendar_create(ui->screen_calendar);
    screen_calendar_calendar_today.year = 2025;
    screen_calendar_calendar_today.month = 5;
    screen_calendar_calendar_today.day = 24;
    lv_calendar_set_today_date(ui->screen_calendar_calendar, screen_calendar_calendar_today.year, screen_calendar_calendar_today.month, screen_calendar_calendar_today.day);
    lv_calendar_set_showed_date(ui->screen_calendar_calendar, screen_calendar_calendar_today.year, screen_calendar_calendar_today.month);
    screen_calendar_calendar_highlihted_days[0].year = 2025;
    screen_calendar_calendar_highlihted_days[0].month = 5;
    screen_calendar_calendar_highlihted_days[0].day = 25;
    lv_calendar_set_highlighted_dates(ui->screen_calendar_calendar, screen_calendar_calendar_highlihted_days, 1);
    lv_obj_t *screen_calendar_calendar_header = lv_calendar_header_arrow_create(ui->screen_calendar_calendar);
    lv_calendar_t *screen_calendar_calendar = (lv_calendar_t *)ui->screen_calendar_calendar;
    lv_obj_add_event_cb(screen_calendar_calendar->btnm, screen_calendar_calendar_draw_part_begin_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL);
    lv_obj_add_event_cb(ui->screen_calendar_calendar, screen_calendar_calendar_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_set_pos(ui->screen_calendar_calendar, 0, 0);
    lv_obj_set_size(ui->screen_calendar_calendar, 320, 240);

    //Write style state: LV_STATE_DEFAULT for &style_screen_calendar_calendar_main_main_default
    static lv_style_t style_screen_calendar_calendar_main_main_default;
    ui_init_style(&style_screen_calendar_calendar_main_main_default);

    lv_style_set_border_width(&style_screen_calendar_calendar_main_main_default, 0);
    lv_style_set_bg_opa(&style_screen_calendar_calendar_main_main_default, 255);
    lv_style_set_bg_color(&style_screen_calendar_calendar_main_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_calendar_calendar_main_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_shadow_width(&style_screen_calendar_calendar_main_main_default, 0);
    lv_style_set_radius(&style_screen_calendar_calendar_main_main_default, 0);
    lv_obj_add_style(ui->screen_calendar_calendar, &style_screen_calendar_calendar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_calendar_calendar_extra_header_main_default
    static lv_style_t style_screen_calendar_calendar_extra_header_main_default;
    ui_init_style(&style_screen_calendar_calendar_extra_header_main_default);

    lv_style_set_text_color(&style_screen_calendar_calendar_extra_header_main_default, lv_color_hex(0xffffff));
    lv_style_set_text_font(&style_screen_calendar_calendar_extra_header_main_default, &lv_font_montserratMedium_14);
    lv_style_set_text_opa(&style_screen_calendar_calendar_extra_header_main_default, 255);
    lv_style_set_bg_opa(&style_screen_calendar_calendar_extra_header_main_default, 255);
    lv_style_set_bg_color(&style_screen_calendar_calendar_extra_header_main_default, lv_color_hex(0x242424));
    lv_style_set_bg_grad_dir(&style_screen_calendar_calendar_extra_header_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(screen_calendar_calendar_header, &style_screen_calendar_calendar_extra_header_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_calendar_calendar_main_items_default
    static lv_style_t style_screen_calendar_calendar_main_items_default;
    ui_init_style(&style_screen_calendar_calendar_main_items_default);

    lv_style_set_bg_opa(&style_screen_calendar_calendar_main_items_default, 0);
    lv_style_set_border_width(&style_screen_calendar_calendar_main_items_default, 1);
    lv_style_set_border_opa(&style_screen_calendar_calendar_main_items_default, 255);
    lv_style_set_border_color(&style_screen_calendar_calendar_main_items_default, lv_color_hex(0xc0c0c0));
    lv_style_set_border_side(&style_screen_calendar_calendar_main_items_default, LV_BORDER_SIDE_FULL);
    lv_style_set_text_color(&style_screen_calendar_calendar_main_items_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_calendar_calendar_main_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_calendar_calendar_main_items_default, 255);
    lv_obj_add_style(lv_calendar_get_btnmatrix(ui->screen_calendar_calendar), &style_screen_calendar_calendar_main_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //The custom code of screen_calendar.
    extern_screen_calendar_calendar_header = screen_calendar_calendar_header;

    //Update current screen layout.
    lv_obj_update_layout(ui->screen_calendar);

}
