// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: t4 test

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1( lv_event_t * e);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Container_Panels;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Panel11;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Panel14;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Panel15;
lv_obj_t *ui_Icon_tv;
lv_obj_t *ui_icon_tv_off;
lv_obj_t *ui_icon_ac;
lv_obj_t *ui_icon_ac_on;
lv_obj_t *ui_icon_lamp;
lv_obj_t *ui_Icon_lamp_on;
lv_obj_t *ui_Container_LR;
lv_obj_t *ui_Label_Living_Room;
lv_obj_t *ui_Label_TV;
lv_obj_t *ui_Label_TV_Stat;
void ui_event_Switch_TV( lv_event_t * e);
lv_obj_t *ui_Switch_TV;
lv_obj_t *ui_Container4;
lv_obj_t *ui_Label_time;
lv_obj_t *ui_Label_amPm;
lv_obj_t *ui_Container_pagination;
lv_obj_t *ui_Panel8;
lv_obj_t *ui_Panel9;
lv_obj_t *ui_Container_AC;
void ui_event_Slider_AC( lv_event_t * e);
lv_obj_t *ui_Slider_AC;
lv_obj_t *ui_Container2;
lv_obj_t *ui_Label_temp;
lv_obj_t *ui_Label_item2;
lv_obj_t *ui_Label_AC;
lv_obj_t *ui_Label_ac_set;
lv_obj_t *ui_Container_lamp;
void ui_event_Slider_Lamp( lv_event_t * e);
lv_obj_t *ui_Slider_Lamp;
lv_obj_t *ui_Container3;
lv_obj_t *ui_Label_lux;
lv_obj_t *ui_Label_item5;
lv_obj_t *ui_Label_item6;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
void ui_event_Screen2( lv_event_t * e);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Container_Panels_1;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_Panel16;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_Panel17;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Panel18;
lv_obj_t *ui_Panel7;
lv_obj_t *ui_icon_washing;
lv_obj_t *ui_Icon_washing_off;
lv_obj_t *ui_icon_cleaner;
lv_obj_t *ui_Icon_cleaner_off;
lv_obj_t *ui_Container_pagination_1;
lv_obj_t *ui_Panel10;
lv_obj_t *ui_Panel12;
lv_obj_t *ui_Container_cleaner;
lv_obj_t *ui_Roller2;
lv_obj_t *ui_Label_batt;
lv_obj_t *ui_Container5;
lv_obj_t *ui_Label_battery;
lv_obj_t *ui_Label_item8;
void ui_event_Slider_vacuum_batt( lv_event_t * e);
lv_obj_t *ui_Slider_vacuum_batt;
lv_obj_t *ui_Label_Vacuum;
void ui_event_Switch_vacuum( lv_event_t * e);
lv_obj_t *ui_Switch_vacuum;
lv_obj_t *ui_Container_WM;
lv_obj_t *ui_Container6;
void ui_event_Button_Smart( lv_event_t * e);
lv_obj_t *ui_Button_Smart;
lv_obj_t *ui_Label_WM1;
void ui_event_Button_Quick( lv_event_t * e);
lv_obj_t *ui_Button_Quick;
lv_obj_t *ui_Label_WM2;
void ui_event_Button_Linen( lv_event_t * e);
lv_obj_t *ui_Button_Linen;
lv_obj_t *ui_Label_WM3;
void ui_event_Button_Saver( lv_event_t * e);
lv_obj_t *ui_Button_Saver;
lv_obj_t *ui_Label_WM4;
lv_obj_t *ui_Label_wm_timer;
lv_obj_t *ui_Label_wm;
lv_obj_t *ui_Container_SP;
void ui_event_Switch_SP( lv_event_t * e);
lv_obj_t *ui_Switch_SP;
lv_obj_t *ui_Container7;
lv_obj_t *ui_Label_watt;
lv_obj_t *ui_Label_item11;
lv_obj_t *ui_Label_item10;
lv_obj_t *ui_Label_SP;
lv_obj_t *ui_Container_EV;
lv_obj_t *ui_Bar_ev;
lv_obj_t *ui_Panel19;
lv_obj_t *ui_Label_EV;
lv_obj_t *ui_Container8;
lv_obj_t *ui_Label_ev_battery;
lv_obj_t *ui_Label_item12;
lv_obj_t *ui_icon_smart_plug;
lv_obj_t *ui_icon_smart_plug_on;
lv_obj_t *ui_icon_car;
lv_obj_t *ui_icon_car_on;
void ui_event_Switch_ev( lv_event_t * e);
lv_obj_t *ui_Switch_ev;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_icon_car_[1] = {&ui_img_img_icon_car_2_png};
const lv_img_dsc_t *ui_imgset_icon_lamp[1] = {&ui_img_img_icon_lamp1_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_LEFT, 250, 0, &ui_Screen2_screen_init);
}
}
void ui_event_Switch_TV( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_checked_set_text_value( ui_Label_TV_Stat, target, "ON	", "OFF");
      _ui_flag_modify( ui_icon_tv_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Slider_AC( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_slider_set_text_value( ui_Label_temp, target, "", "");
      _ui_flag_modify( ui_icon_ac_on, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      acSlider( e );
}
}
void ui_event_Slider_Lamp( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_slider_set_text_value( ui_Label_lux, target, "", "");
      _ui_flag_modify( ui_Icon_lamp_on, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
      lampSlider( e );
}
}
void ui_event_Screen2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 250, 0, &ui_Screen1_screen_init);
}
}
void ui_event_Slider_vacuum_batt( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_slider_set_text_value( ui_Label_battery, target, "", "");
}
}
void ui_event_Switch_vacuum( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Icon_cleaner_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Button_Smart( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_Button_Smart, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
      washingTimer( e );
      _ui_flag_modify( ui_Icon_washing_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Button_Quick( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_Button_Quick, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
      _ui_flag_modify( ui_Icon_washing_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Button_Linen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_Button_Linen, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
      _ui_flag_modify( ui_Icon_washing_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Button_Saver( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      _ui_state_modify( ui_Button_Saver, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
      _ui_flag_modify( ui_Icon_washing_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Switch_SP( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_checked_set_text_value( ui_Label_SP, target, "ON	", "OFF");
      _ui_flag_modify( ui_icon_tv_off, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      smartPlug( e );
      _ui_flag_modify( ui_icon_smart_plug_on, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Switch_ev( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      _ui_flag_modify( ui_icon_car_on, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
ui_Screen2_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Screen1);
}