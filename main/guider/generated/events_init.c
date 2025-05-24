/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void screen_menu_imgbtn_home_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_music_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_music, guider_ui.screen_music_del, &guider_ui.screen_menu_del, setup_scr_screen_music, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_alarmclock_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_alarmclock, guider_ui.screen_alarmclock_del, &guider_ui.screen_menu_del, setup_scr_screen_alarmclock, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_weather_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_weather, guider_ui.screen_weather_del, &guider_ui.screen_menu_del, setup_scr_screen_weather, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_update_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_update, guider_ui.screen_update_del, &guider_ui.screen_menu_del, setup_scr_screen_update, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_calendar_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_calendar, guider_ui.screen_calendar_del, &guider_ui.screen_menu_del, setup_scr_screen_calendar, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_setting_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_setting, guider_ui.screen_setting_del, &guider_ui.screen_menu_del, setup_scr_screen_setting, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_timer_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_timer, guider_ui.screen_timer_del, &guider_ui.screen_menu_del, setup_scr_screen_timer, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_i2c_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_inforeader, guider_ui.screen_inforeader_del, &guider_ui.screen_menu_del, setup_scr_screen_inforeader, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_menu_imgbtn_chat_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_chat, guider_ui.screen_chat_del, &guider_ui.screen_menu_del, setup_scr_screen_chat, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_menu (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_home, screen_menu_imgbtn_home_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_music, screen_menu_imgbtn_music_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_alarmclock, screen_menu_imgbtn_alarmclock_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_weather, screen_menu_imgbtn_weather_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_update, screen_menu_imgbtn_update_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_calendar, screen_menu_imgbtn_calendar_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_setting, screen_menu_imgbtn_setting_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_timer, screen_menu_imgbtn_timer_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_i2c, screen_menu_imgbtn_i2c_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_menu_imgbtn_chat, screen_menu_imgbtn_chat_event_handler, LV_EVENT_ALL, ui);
}

static void screen_setting_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_get_act());
            ui_load_scr_animation(&guider_ui, &guider_ui.screen_menu, guider_ui.screen_menu_del, &guider_ui.screen_setting_del, setup_scr_screen_menu, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_screen_setting (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_setting, screen_setting_event_handler, LV_EVENT_ALL, ui);
}

static void screen_file_btn_close_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_menu, guider_ui.screen_menu_del, &guider_ui.screen_file_del, setup_scr_screen_menu, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_file (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_file_btn_close, screen_file_btn_close_event_handler, LV_EVENT_ALL, ui);
}

static void screen_music_btn_list_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_file, guider_ui.screen_file_del, &guider_ui.screen_music_del, setup_scr_screen_file, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

static void screen_music_btn_close_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_menu, guider_ui.screen_menu_del, &guider_ui.screen_music_del, setup_scr_screen_menu, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_music (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_music_btn_list, screen_music_btn_list_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_music_btn_close, screen_music_btn_close_event_handler, LV_EVENT_ALL, ui);
}

static void screen_timer_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_menu, guider_ui.screen_menu_del, &guider_ui.screen_timer_del, setup_scr_screen_menu, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, false);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_timer (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_timer_btn_back, screen_timer_btn_back_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
