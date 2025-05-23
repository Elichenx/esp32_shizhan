/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_menu;
	bool screen_menu_del;
	lv_obj_t *screen_menu_cont_wrap;
	lv_obj_t *screen_menu_label_setting;
	lv_obj_t *screen_menu_label_file;
	lv_obj_t *screen_menu_label_music;
	lv_obj_t *screen_menu_label_alarm;
	lv_obj_t *screen_menu_label_weather;
	lv_obj_t *screen_menu_label_about;
	lv_obj_t *screen_menu_label_update;
	lv_obj_t *screen_menu_label_home;
	lv_obj_t *screen_menu_label_timer;
	lv_obj_t *screen_menu_imgbtn_home;
	lv_obj_t *screen_menu_imgbtn_home_label;
	lv_obj_t *screen_menu_imgbtn_file;
	lv_obj_t *screen_menu_imgbtn_file_label;
	lv_obj_t *screen_menu_imgbtn_music;
	lv_obj_t *screen_menu_imgbtn_music_label;
	lv_obj_t *screen_menu_imgbtn_alarmclock;
	lv_obj_t *screen_menu_imgbtn_alarmclock_label;
	lv_obj_t *screen_menu_imgbtn_weather;
	lv_obj_t *screen_menu_imgbtn_weather_label;
	lv_obj_t *screen_menu_imgbtn_update;
	lv_obj_t *screen_menu_imgbtn_update_label;
	lv_obj_t *screen_menu_imgbtn_calendar;
	lv_obj_t *screen_menu_imgbtn_calendar_label;
	lv_obj_t *screen_menu_imgbtn_setting;
	lv_obj_t *screen_menu_imgbtn_setting_label;
	lv_obj_t *screen_menu_imgbtn_timer;
	lv_obj_t *screen_menu_imgbtn_timer_label;
	lv_obj_t *screen_menu_imgbtn_i2c;
	lv_obj_t *screen_menu_imgbtn_i2c_label;
	lv_obj_t *screen_menu_label_i2c;
	lv_obj_t *screen_menu_imgbtn_recorder;
	lv_obj_t *screen_menu_imgbtn_recorder_label;
	lv_obj_t *screen_menu_label_recorder;
	lv_obj_t *screen_menu_imgbtn_chat;
	lv_obj_t *screen_menu_imgbtn_chat_label;
	lv_obj_t *screen_menu_label_chat;
	lv_obj_t *screen_setting;
	bool screen_setting_del;
	lv_obj_t *screen_setting_list;
	lv_obj_t *screen_setting_list_item0;
	lv_obj_t *screen_setting_list_item1;
	lv_obj_t *screen_setting_list_item2;
	lv_obj_t *screen_setting_list_item3;
	lv_obj_t *screen_setting_list_item4;
	lv_obj_t *screen_setting_list_item5;
	lv_obj_t *screen_setting_list_item6;
	lv_obj_t *screen_setting_list_item7;
	lv_obj_t *screen_setting_list_item8;
	lv_obj_t *screen_setting_list_item9;
	lv_obj_t *screen_setting_list_item10;
	lv_obj_t *screen_setting_msgbox_confirm;
	lv_obj_t *screen_file;
	bool screen_file_del;
	lv_obj_t *screen_file_btn_close;
	lv_obj_t *screen_file_btn_close_label;
	lv_obj_t *screen_file_list_file;
	lv_obj_t *screen_file_list_file_item0;
	lv_obj_t *screen_file_list_file_item1;
	lv_obj_t *screen_file_list_file_item2;
	lv_obj_t *screen_file_cont_info;
	lv_obj_t *screen_file_label_sd;
	lv_obj_t *screen_file_label_state;
	lv_obj_t *screen_file_label_freespace;
	lv_obj_t *screen_file_label_usedspace;
	lv_obj_t *screen_file_label_page_info;
	lv_obj_t *screen_music;
	bool screen_music_del;
	lv_obj_t *screen_music_img_player;
	lv_obj_t *screen_music_btn_volume;
	lv_obj_t *screen_music_btn_volume_label;
	lv_obj_t *screen_music_slider_volume;
	lv_obj_t *screen_music_slider_prog;
	lv_obj_t *screen_music_btn_mode;
	lv_obj_t *screen_music_btn_mode_label;
	lv_obj_t *screen_music_btn_prev;
	lv_obj_t *screen_music_btn_prev_label;
	lv_obj_t *screen_music_btn_play;
	lv_obj_t *screen_music_btn_play_label;
	lv_obj_t *screen_music_btn_next;
	lv_obj_t *screen_music_btn_next_label;
	lv_obj_t *screen_music_btn_list;
	lv_obj_t *screen_music_btn_list_label;
	lv_obj_t *screen_music_btn_close;
	lv_obj_t *screen_music_btn_close_label;
	lv_obj_t *screen_music_label_name;
	lv_obj_t *screen_music_label_play_time;
	lv_obj_t *screen_music_label_total_time;
	lv_obj_t *screen_timer;
	bool screen_timer_del;
	lv_obj_t *screen_timer_btn_back;
	lv_obj_t *screen_timer_btn_back_label;
	lv_obj_t *screen_timer_btn_setting;
	lv_obj_t *screen_timer_btn_setting_label;
	lv_obj_t *screen_timer_btn_reset;
	lv_obj_t *screen_timer_btn_reset_label;
	lv_obj_t *screen_timer_btn_ctrl;
	lv_obj_t *screen_timer_btn_ctrl_label;
	lv_obj_t *screen_timer_cont_min;
	lv_obj_t *screen_timer_img_min0;
	lv_obj_t *screen_timer_img_min1;
	lv_obj_t *screen_timer_cont_sec;
	lv_obj_t *screen_timer_img_sec1;
	lv_obj_t *screen_timer_img_sec0;
	lv_obj_t *screen_timer_cont_setting;
	lv_obj_t *screen_timer_btn_close;
	lv_obj_t *screen_timer_btn_close_label;
	lv_obj_t *screen_timer_btn_set;
	lv_obj_t *screen_timer_btn_set_label;
	lv_obj_t *screen_timer_btn_exec;
	lv_obj_t *screen_timer_btn_exec_label;
	lv_obj_t *screen_timer_label_min;
	lv_obj_t *screen_timer_arc_min;
	lv_obj_t *screen_timer_list_time;
	lv_obj_t *screen_timer_list_time_item0;
	lv_obj_t *screen_timer_list_time_item1;
	lv_obj_t *screen_timer_img_5;
	lv_obj_t *screen_timer_img_6;
	lv_obj_t *screen_i2c;
	bool screen_i2c_del;
	lv_obj_t *screen_i2c_btn_scan;
	lv_obj_t *screen_i2c_btn_scan_label;
	lv_obj_t *screen_i2c_btn_back;
	lv_obj_t *screen_i2c_btn_back_label;
	lv_obj_t *screen_i2c_btnm_addr;
	lv_obj_t *screen_recorder;
	bool screen_recorder_del;
	lv_obj_t *screen_recorder_btn_clear;
	lv_obj_t *screen_recorder_btn_clear_label;
	lv_obj_t *screen_recorder_btn_rec;
	lv_obj_t *screen_recorder_btn_rec_label;
	lv_obj_t *screen_recorder_btn_back;
	lv_obj_t *screen_recorder_btn_back_label;
	lv_obj_t *screen_recorder_list_rec;
	lv_obj_t *screen_recorder_list_rec_item0;
	lv_obj_t *screen_recorder_list_rec_item1;
	lv_obj_t *screen_recorder_list_rec_item2;
	lv_obj_t *screen_recorder_chart_rec;
	lv_chart_series_t *screen_recorder_chart_rec_0;
	lv_obj_t *screen_recorder_label_page_info;
	lv_obj_t *screen_recorder_msgbox_file;
	lv_obj_t *screen_calendar;
	bool screen_calendar_del;
	lv_obj_t *screen_calendar_calendar;
	lv_obj_t *screen_alarmclock;
	bool screen_alarmclock_del;
	lv_obj_t *screen_alarmclock_cont_0;
	lv_obj_t *screen_alarmclock_sw_state0;
	lv_obj_t *screen_alarmclock_label_time0;
	lv_obj_t *screen_alarmclock_label_week0;
	lv_obj_t *screen_alarmclock_label_1;
	lv_obj_t *screen_alarmclock_cont_1;
	lv_obj_t *screen_alarmclock_sw_state1;
	lv_obj_t *screen_alarmclock_label_time1;
	lv_obj_t *screen_alarmclock_label_week1;
	lv_obj_t *screen_alarmclock_label_2;
	lv_obj_t *screen_alarmclock_cont_2;
	lv_obj_t *screen_alarmclock_sw_state2;
	lv_obj_t *screen_alarmclock_label_time2;
	lv_obj_t *screen_alarmclock_label_week2;
	lv_obj_t *screen_alarmclock_label_3;
	lv_obj_t *screen_alarmclock_cont_3;
	lv_obj_t *screen_alarmclock_sw_state3;
	lv_obj_t *screen_alarmclock_label_time3;
	lv_obj_t *screen_alarmclock_label_week3;
	lv_obj_t *screen_alarmclock_label_4;
	lv_obj_t *screen_alarmclock_cont_4;
	lv_obj_t *screen_alarmclock_sw_state4;
	lv_obj_t *screen_alarmclock_label_time4;
	lv_obj_t *screen_alarmclock_label_week4;
	lv_obj_t *screen_alarmclock_label_5;
	lv_obj_t *screen_alarmclock_cont_5;
	lv_obj_t *screen_alarmclock_sw_state5;
	lv_obj_t *screen_alarmclock_label_time5;
	lv_obj_t *screen_alarmclock_label_week5;
	lv_obj_t *screen_alarmclock_label_6;
	lv_obj_t *screen_alarmclock_btn_reset;
	lv_obj_t *screen_alarmclock_btn_reset_label;
	lv_obj_t *screen_alarmclock_btn_back;
	lv_obj_t *screen_alarmclock_btn_back_label;
	lv_obj_t *screen_alarmclock_cont_config;
	lv_obj_t *screen_alarmclock_label_7;
	lv_obj_t *screen_alarmclock_roller_hour;
	lv_obj_t *screen_alarmclock_roller_min;
	lv_obj_t *screen_alarmclock_btnm_week;
	lv_obj_t *screen_alarmclock_sw_enable;
	lv_obj_t *screen_alarmclock_btn_cfg_reset;
	lv_obj_t *screen_alarmclock_btn_cfg_reset_label;
	lv_obj_t *screen_alarmclock_btn_cfg_save;
	lv_obj_t *screen_alarmclock_btn_cfg_save_label;
	lv_obj_t *screen_alarmclock_btn_cfg_close;
	lv_obj_t *screen_alarmclock_btn_cfg_close_label;
	lv_obj_t *screen_weather;
	bool screen_weather_del;
	lv_obj_t *screen_weather_btn_back;
	lv_obj_t *screen_weather_btn_back_label;
	lv_obj_t *screen_weather_btn_refresh;
	lv_obj_t *screen_weather_btn_refresh_label;
	lv_obj_t *screen_weather_label_info;
	lv_obj_t *screen_weather_cont_day2;
	lv_obj_t *screen_weather_label_date2;
	lv_obj_t *screen_weather_label_daynight2;
	lv_obj_t *screen_weather_label_icon2;
	lv_obj_t *screen_weather_label_weather2;
	lv_obj_t *screen_weather_label_temp2;
	lv_obj_t *screen_weather_label_wind2;
	lv_obj_t *screen_weather_img_rise2;
	lv_obj_t *screen_weather_img_set2;
	lv_obj_t *screen_weather_label_rise_time2;
	lv_obj_t *screen_weather_label_set_time2;
	lv_obj_t *screen_weather_label_precip2;
	lv_obj_t *screen_weather_label_humidity2;
	lv_obj_t *screen_weather_img_8;
	lv_obj_t *screen_weather_label_19;
	lv_obj_t *screen_weather_img_7;
	lv_obj_t *screen_weather_label_uv2;
	lv_obj_t *screen_weather_cont_day1;
	lv_obj_t *screen_weather_label_date1;
	lv_obj_t *screen_weather_label_daynight1;
	lv_obj_t *screen_weather_label_icon1;
	lv_obj_t *screen_weather_label_weather1;
	lv_obj_t *screen_weather_label_temp1;
	lv_obj_t *screen_weather_label_wind1;
	lv_obj_t *screen_weather_img_rise1;
	lv_obj_t *screen_weather_img_set1;
	lv_obj_t *screen_weather_label_rise_time1;
	lv_obj_t *screen_weather_label_set_time1;
	lv_obj_t *screen_weather_label_precip1;
	lv_obj_t *screen_weather_label_humidity1;
	lv_obj_t *screen_weather_img_4;
	lv_obj_t *screen_weather_label_7;
	lv_obj_t *screen_weather_img_3;
	lv_obj_t *screen_weather_label_uv1;
	lv_obj_t *screen_weather_cont_day0;
	lv_obj_t *screen_weather_label_date0;
	lv_obj_t *screen_weather_label_daynight0;
	lv_obj_t *screen_weather_label_icon0;
	lv_obj_t *screen_weather_label_weather0;
	lv_obj_t *screen_weather_label_temp0;
	lv_obj_t *screen_weather_label_wind0;
	lv_obj_t *screen_weather_img_rise0;
	lv_obj_t *screen_weather_img_set0;
	lv_obj_t *screen_weather_label_rise_time0;
	lv_obj_t *screen_weather_label_set_time0;
	lv_obj_t *screen_weather_label_precip0;
	lv_obj_t *screen_weather_label_humidity0;
	lv_obj_t *screen_weather_img_2;
	lv_obj_t *screen_weather_label_1;
	lv_obj_t *screen_weather_img_1;
	lv_obj_t *screen_weather_label_uv0;
	lv_obj_t *screen_update;
	bool screen_update_del;
	lv_obj_t *screen_update_btn_back;
	lv_obj_t *screen_update_btn_back_label;
	lv_obj_t *screen_update_bar_prog;
	lv_obj_t *screen_update_label_ip;
	lv_obj_t *screen_update_label_info;
	lv_obj_t *screen_update_label_prog;
	lv_obj_t *screen_chat;
	bool screen_chat_del;
	lv_obj_t *screen_chat_label_user;
	lv_obj_t *screen_chat_label_state;
	lv_obj_t *screen_chat_img_emoji;
	lv_obj_t *screen_chat_label_assistant;
	lv_obj_t *screen_inforeader;
	bool screen_inforeader_del;
	lv_obj_t *screen_setting_network;
	bool screen_setting_network_del;
	lv_obj_t *screen_setting_network_btn_search;
	lv_obj_t *screen_setting_network_btn_search_label;
	lv_obj_t *screen_setting_network_btn_ctrl;
	lv_obj_t *screen_setting_network_btn_ctrl_label;
	lv_obj_t *screen_setting_network_btn_back;
	lv_obj_t *screen_setting_network_btn_back_label;
	lv_obj_t *screen_setting_network_ta_ssid;
	lv_obj_t *screen_setting_network_ta_passwd;
	lv_obj_t *screen_setting_network_list_wifi;
	lv_obj_t *screen_setting_network_list_wifi_item0;
	lv_obj_t *screen_setting_network_label_wifi;
	lv_obj_t *screen_setting_bkl;
	bool screen_setting_bkl_del;
	lv_obj_t *screen_setting_bkl_label_bkl;
	lv_obj_t *screen_setting_bkl_btn_back;
	lv_obj_t *screen_setting_bkl_btn_back_label;
	lv_obj_t *screen_setting_bkl_slider_bkl;
	lv_obj_t *screen_setting_sound;
	bool screen_setting_sound_del;
	lv_obj_t *screen_setting_sound_sw_key;
	lv_obj_t *screen_setting_sound_sw_batlow;
	lv_obj_t *screen_setting_sound_sw_batfull;
	lv_obj_t *screen_setting_sound_slider_volume;
	lv_obj_t *screen_setting_sound_btn_back;
	lv_obj_t *screen_setting_sound_btn_back_label;
	lv_obj_t *screen_setting_sound_label_1;
	lv_obj_t *screen_setting_sound_label_2;
	lv_obj_t *screen_setting_sound_label_3;
	lv_obj_t *screen_setting_sound_label_4;
	lv_obj_t *screen_setting_webserver;
	bool screen_setting_webserver_del;
	lv_obj_t *screen_setting_webserver_btn_back;
	lv_obj_t *screen_setting_webserver_btn_back_label;
	lv_obj_t *screen_setting_webserver_btn_sw;
	lv_obj_t *screen_setting_webserver_btn_sw_label;
	lv_obj_t *screen_setting_webserver_qrcode_ip;
	lv_obj_t *screen_setting_webserver_label_ip;
	lv_obj_t *screen_setting_webserver_label_state;
	lv_obj_t *screen_setting_time;
	bool screen_setting_time_del;
	lv_obj_t *screen_setting_time_btn_back;
	lv_obj_t *screen_setting_time_btn_back_label;
	lv_obj_t *screen_setting_time_roller_year;
	lv_obj_t *screen_setting_time_roller_mon;
	lv_obj_t *screen_setting_time_roller_day;
	lv_obj_t *screen_setting_time_roller_hour;
	lv_obj_t *screen_setting_time_roller_min;
	lv_obj_t *screen_setting_time_roller_sec;
	lv_obj_t *screen_setting_time_sw_sntp;
	lv_obj_t *screen_setting_time_label_1;
	lv_obj_t *screen_setting_time_label_date;
	lv_obj_t *screen_setting_time_label_time;
	lv_obj_t *screen_setting_time_label_4;
	lv_obj_t *screen_setting_time_label_5;
	lv_obj_t *screen_setting_sleep;
	bool screen_setting_sleep_del;
	lv_obj_t *screen_setting_sleep_btn_back;
	lv_obj_t *screen_setting_sleep_btn_back_label;
	lv_obj_t *screen_setting_sleep_roller_min;
	lv_obj_t *screen_setting_sleep_sw_sleep;
	lv_obj_t *screen_setting_sleep_label_1;
	lv_obj_t *screen_setting_ai;
	bool screen_setting_ai_del;
	lv_obj_t *screen_setting_ai_label_code;
	lv_obj_t *screen_setting_ai_label_message;
	lv_obj_t *screen_setting_ai_img_ok;
	lv_obj_t *screen_setting_about;
	bool screen_setting_about_del;
	lv_obj_t *screen_setting_about_label_1;
	lv_obj_t *screen_setting_about_label_2;
	lv_obj_t *screen_setting_about_label_3;
	lv_obj_t *screen_setting_about_label_4;
	lv_obj_t *screen_setting_about_label_5;
	lv_obj_t *screen_setting_about_label_6;
	lv_obj_t *screen_setting_about_label_7;
	lv_obj_t *screen_setting_about_label_cpu;
	lv_obj_t *screen_setting_about_label_version;
	lv_obj_t *screen_setting_about_label_buildtime;
	lv_obj_t *screen_setting_about_label_extend;
	lv_obj_t *screen_setting_about_label_htu;
	lv_obj_t *screen_setting_about_label_rtc;
	lv_obj_t *screen_setting_about_label_14;
	lv_obj_t *screen_setting_about_label_battery;
	lv_obj_t *screen_logo;
	bool screen_logo_del;
	lv_obj_t *screen_logo_label_logo;
	lv_obj_t *screen_main;
	bool screen_main_del;
	lv_obj_t *screen_main_cont_top;
	lv_obj_t *screen_main_line_top;
	lv_obj_t *screen_main_label_week;
	lv_obj_t *screen_main_label_date;
	lv_obj_t *screen_main_label_solarterm;
	lv_obj_t *screen_main_label_lunar;
	lv_obj_t *screen_main_label_ganzhi;
	lv_obj_t *screen_main_label_animal;
	lv_obj_t *screen_main_cont_bottom;
	lv_obj_t *screen_main_line_bottom;
	lv_obj_t *screen_main_label_info;
	lv_obj_t *screen_main_label_pm25;
	lv_obj_t *screen_main_label_pm10;
	lv_obj_t *screen_main_label_co;
	lv_obj_t *screen_main_label_so2;
	lv_obj_t *screen_main_label_pm25_val;
	lv_obj_t *screen_main_label_so2_val;
	lv_obj_t *screen_main_label_pm10_val;
	lv_obj_t *screen_main_label_co_val;
	lv_obj_t *screen_main_label_category;
	lv_obj_t *screen_main_label_5;
	lv_obj_t *screen_main_cont_right;
	lv_obj_t *screen_main_img_ht;
	lv_obj_t *screen_main_label_temp;
	lv_obj_t *screen_main_label_humidity;
	lv_obj_t *screen_main_line_1;
	lv_obj_t *screen_main_cont_left;
	lv_obj_t *screen_main_label_city;
	lv_obj_t *screen_main_label_weather;
	lv_obj_t *screen_main_label_3;
	lv_obj_t *screen_main_label_4;
	lv_obj_t *screen_main_label_wtemp;
	lv_obj_t *screen_main_label_whumi;
	lv_obj_t *screen_main_cont_min;
	lv_obj_t *screen_main_img_min1_temp;
	lv_obj_t *screen_main_img_min0_temp;
	lv_obj_t *screen_main_img_min1;
	lv_obj_t *screen_main_img_min0;
	lv_obj_t *screen_main_cont_hour;
	lv_obj_t *screen_main_img_hour1_temp;
	lv_obj_t *screen_main_img_hour0_temp;
	lv_obj_t *screen_main_img_hour1;
	lv_obj_t *screen_main_img_hour0;
	lv_obj_t *screen_main_cont_center;
	lv_obj_t *screen_main_btn_close;
	lv_obj_t *screen_main_btn_close_label;
	lv_obj_t *screen_main_btn_reboot;
	lv_obj_t *screen_main_btn_reboot_label;
	lv_obj_t *screen_main_btn_sleep;
	lv_obj_t *screen_main_btn_sleep_label;
	lv_obj_t *screen_main_slider_bk;
	lv_obj_t *screen_main_btn_music;
	lv_obj_t *screen_main_btn_music_label;
	lv_obj_t *screen_main_btn_wifi;
	lv_obj_t *screen_main_btn_wifi_label;
	lv_obj_t *screen_main_btn_bluetooth;
	lv_obj_t *screen_main_btn_bluetooth_label;
	lv_obj_t *screen_main_label_wifi;
	lv_obj_t *screen_main_label_alarmclock;
	lv_obj_t *screen_main_label_bluetooth;
	lv_obj_t *screen_main_label_player;
	lv_obj_t *screen_main_label_battery;
	lv_obj_t *g_kb_top_layer;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_screen_menu(lv_ui *ui);
void setup_scr_screen_setting(lv_ui *ui);
void setup_scr_screen_file(lv_ui *ui);
void setup_scr_screen_music(lv_ui *ui);
void setup_scr_screen_timer(lv_ui *ui);
void setup_scr_screen_i2c(lv_ui *ui);
void setup_scr_screen_recorder(lv_ui *ui);
void setup_scr_screen_calendar(lv_ui *ui);
void setup_scr_screen_alarmclock(lv_ui *ui);
void setup_scr_screen_weather(lv_ui *ui);
void setup_scr_screen_update(lv_ui *ui);
void setup_scr_screen_chat(lv_ui *ui);
void setup_scr_screen_inforeader(lv_ui *ui);
void setup_scr_screen_setting_network(lv_ui *ui);
void setup_scr_screen_setting_bkl(lv_ui *ui);
void setup_scr_screen_setting_sound(lv_ui *ui);
void setup_scr_screen_setting_webserver(lv_ui *ui);
void setup_scr_screen_setting_time(lv_ui *ui);
void setup_scr_screen_setting_sleep(lv_ui *ui);
void setup_scr_screen_setting_ai(lv_ui *ui);
void setup_scr_screen_setting_about(lv_ui *ui);
void setup_scr_screen_logo(lv_ui *ui);
void setup_scr_screen_main(lv_ui *ui);
LV_IMG_DECLARE(_icon_home_alpha_48x48);
LV_IMG_DECLARE(_icon_home_alpha_48x48);
LV_IMG_DECLARE(_icon_file_alpha_48x48);
LV_IMG_DECLARE(_icon_file_alpha_48x48);
LV_IMG_DECLARE(_icon_music_alpha_48x48);
LV_IMG_DECLARE(_icon_music_alpha_48x48);
LV_IMG_DECLARE(_icon_alarmclock_alpha_48x48);
LV_IMG_DECLARE(_icon_alarmclock_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_update_alpha_48x48);
LV_IMG_DECLARE(_icon_update_alpha_48x48);
LV_IMG_DECLARE(_icon_calendar_alpha_48x48);
LV_IMG_DECLARE(_icon_calendar_alpha_48x48);
LV_IMG_DECLARE(_icon_setting_alpha_48x48);
LV_IMG_DECLARE(_icon_setting_alpha_48x48);
LV_IMG_DECLARE(_icon_timer_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_i2c_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_recorder_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_chat_alpha_48x48);
LV_IMG_DECLARE(_icon_weather_alpha_48x48);
LV_IMG_DECLARE(_icon_setting_wifi_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_bkl_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_sound_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_time_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_sleep_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_webserver_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_ai_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_reset_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_reboot_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_about_alpha_20x20);
LV_IMG_DECLARE(_icon_setting_back_alpha_20x20);
LV_IMG_DECLARE(_icon_player_alpha_64x64);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_sunrise_alpha_20x20);
LV_IMG_DECLARE(_icon_sunset_alpha_20x20);
LV_IMG_DECLARE(_icon_uv_alpha_20x20);
LV_IMG_DECLARE(_icon_humidity_alpha_18x18);
LV_IMG_DECLARE(_icon_sunrise_alpha_20x20);
LV_IMG_DECLARE(_icon_sunset_alpha_20x20);
LV_IMG_DECLARE(_icon_uv_alpha_20x20);
LV_IMG_DECLARE(_icon_humidity_alpha_18x18);
LV_IMG_DECLARE(_icon_sunrise_alpha_20x20);
LV_IMG_DECLARE(_icon_sunset_alpha_20x20);
LV_IMG_DECLARE(_icon_uv_alpha_20x20);
LV_IMG_DECLARE(_icon_humidity_alpha_18x18);
LV_IMG_DECLARE(_neutral_48_alpha_48x48);
LV_IMG_DECLARE(_icom_smile_alpha_48x48);
LV_IMG_DECLARE(_icon_ht_alpha_24x24);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);
LV_IMG_DECLARE(_icon_mini_0_alpha_70x92);

LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_14)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_12)
LV_FONT_DECLARE(lv_font_montserratMedium_22)
LV_FONT_DECLARE(lv_font_montserratMedium_14)
LV_FONT_DECLARE(lv_font_montserratMedium_18)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_32)
LV_FONT_DECLARE(lv_font_Antonio_Regular_18)
LV_FONT_DECLARE(lv_font_D_DIN_PRO_700_Bold_18)
LV_FONT_DECLARE(lv_font_D_DIN_PRO_700_Bold_14)
LV_FONT_DECLARE(lv_font_montserratMedium_24)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_18)
LV_FONT_DECLARE(lv_font_HarmonyOS_Sans_SC_Regular_24)
LV_FONT_DECLARE(lv_font_Acme_Regular_12)
LV_FONT_DECLARE(lv_font_Acme_Regular_16)


#ifdef __cplusplus
}
#endif
#endif
