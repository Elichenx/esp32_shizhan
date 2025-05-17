SET(SOURCES components/ui_comp_alarm_comp.c
    components/ui_comp_clock_dot.c
    components/ui_comp_scrolldots.c
    components/ui_comp_small_label.c
    components/ui_comp.c
    screens/ui_Splash.c
    screens/ui_menu.c
    screens/ui_Music_Player.c
    screens/ui_Weather.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_sls_logo_png.c
    images/ui_img_pattern_png.c
    images/ui_img_wifi_png.c
    images/ui_img_cemare_png.c
    images/ui_img_mp3_png.c
    images/ui_img_sd_png.c
    images/ui_img_bluetooth_png.c
    images/ui_img_weather_png.c
    images/ui_img_album_png.c
    images/ui_img_play_png.c
    images/ui_img_backward_png.c
    images/ui_img_forward_png.c
    images/ui_img_back_png.c
    images/ui_img_cloud_png.c
    images/ui_img_weather_1_png.c
    images/ui_img_weather_2_png.c
    images/ui_img_weather_3_png.c
    images/ui_img_chatbox2_png.c
    fonts/ui_font_Number.c)

add_library(ui ${SOURCES})
