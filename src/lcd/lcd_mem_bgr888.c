﻿/**
 * File:   lcd_mem_bgr888.c
 * Author: AWTK Develop Team
 * Brief:  bgr888 mem lcd.
 *
 * Copyright (c) 2018 - 2021  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2021-07-08 Generated by gen.sh(DONT MODIFY IT)
 *
 */

#define LCD_FORMAT BITMAP_FMT_BGR888

#include "tkc/mem.h"
#include "base/pixel.h"
#include "lcd/lcd_mem.h"

#define pixel_t pixel_bgr888_t
#define pixel_bpp pixel_bgr888_BPP
#define pixel_to_rgba pixel_bgr888_to_rgba
#define pixel_from_rgb pixel_bgr888_from_rgb
#define pixel_from_rgba pixel_bgr888_from_rgba

#include "blend/pixel_ops.inc"
#include "lcd/lcd_mem.inc"

lcd_t* lcd_mem_bgr888_init(lcd_mem_t* lcd, wh_t w, wh_t h, bool_t alloc) {
  return lcd_mem_init(lcd, w, h, alloc);
}

lcd_t* lcd_mem_bgr888_create(wh_t w, wh_t h, bool_t alloc) {
  return lcd_mem_create(w, h, alloc);
}

lcd_t* lcd_mem_bgr888_create_single_fb(wh_t w, wh_t h, uint8_t* fbuff) {
  return lcd_mem_create_single_fb(w, h, fbuff);
}

lcd_t* lcd_mem_bgr888_create_double_fb(wh_t w, wh_t h, uint8_t* online_fb, uint8_t* offline_fb) {
  return lcd_mem_create_double_fb(w, h, online_fb, offline_fb);
}

lcd_t* lcd_mem_bgr888_create_three_fb(wh_t w, wh_t h, uint8_t* online_fb, uint8_t* offline_fb,
                                      uint8_t* next_fb) {
  return lcd_mem_create_three_fb(w, h, online_fb, offline_fb, next_fb);
}
