// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: t4 test

#ifndef _T4_TEST_UI_H
#define _T4_TEST_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
#include "ui_theme_manager.h"
#include "ui_themes.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Container1;
extern lv_obj_t *ui_Panel6;
extern lv_obj_t *ui_Panel3;
extern lv_obj_t *ui_Panel4;
extern lv_obj_t *ui_Panel5;
extern lv_obj_t *ui_Panel1;
extern lv_obj_t *ui_Panel2;
extern lv_obj_t *ui_Roller1;
extern lv_obj_t *ui_Switch1;
extern lv_obj_t *ui_Slider1;
extern lv_obj_t *ui_Slider2;
extern lv_obj_t *ui_Panel7;
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Spinbox1;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_1100325711);   // assets/img/ios-18-wallpaper.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif