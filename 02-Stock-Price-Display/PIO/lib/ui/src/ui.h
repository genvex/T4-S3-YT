// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Stock api

#ifndef _STOCK_API_UI_H
#define _STOCK_API_UI_H

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
#include "ui_events.h"

// SCREEN: ui_Screen
void ui_Screen_screen_init(void);
extern lv_obj_t *ui_Screen;
extern lv_obj_t *ui_Panel_main;
extern lv_obj_t *ui_Image_mask;
extern lv_obj_t *ui_Panel_Status;
extern lv_obj_t *ui_symbol_bg;
extern lv_obj_t *ui_Label_Symbol;
extern lv_obj_t *ui_Label_date;
extern lv_obj_t *ui_Container_close;
extern lv_obj_t *ui_Label_close;
extern lv_obj_t *ui_Container_rate;
extern lv_obj_t *ui_icon_open;
extern lv_obj_t *ui_Label_open;
extern lv_obj_t *ui_icon_high;
extern lv_obj_t *ui_Label_high;
extern lv_obj_t *ui_icon_low;
extern lv_obj_t *ui_Label_low;
extern lv_obj_t *ui_Label_volume;
extern lv_obj_t *ui_icon_volume;
extern lv_obj_t *ui_Label_updated;
extern lv_obj_t *ui_icon_timer;
extern lv_obj_t *ui_Container_Chart;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_images_mask_png);   // assets/Images/mask.png
LV_IMG_DECLARE( ui_img_images_open_png);   // assets/Images/open.png
LV_IMG_DECLARE( ui_img_images_high_png);   // assets/Images/high.png
LV_IMG_DECLARE( ui_img_images_low_png);   // assets/Images/low.png
LV_IMG_DECLARE( ui_img_images_volume_png);   // assets/Images/volume.png
LV_IMG_DECLARE( ui_img_images_timer_png);   // assets/Images/timer.png


LV_FONT_DECLARE( ui_font_ka25);
LV_FONT_DECLARE( ui_font_ka30);
LV_FONT_DECLARE( ui_font_ka55);
LV_FONT_DECLARE( ui_font_ka90);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif