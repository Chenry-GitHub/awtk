﻿/**
 * File:   rotate_image_bgra8888.c
 * Author: AWTK Develop Team
 * Brief:  rotate on bgra8888
 *
 * Copyright (c) 2018 - 2022  Guangzhou ZHIYUAN Electronics Co.,Ltd.
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
 * 2022-02-24 Generated by gen.sh(DONT MODIFY IT)
 *
 */
#include "tkc/rect.h"
#include "base/pixel.h"
#include "base/bitmap.h"
#include "base/pixel_pack_unpack.h"

#define pixel_dst_t pixel_bgra8888_t
#define pixel_dst_format pixel_bgra8888_format
#define pixel_dst_to_rgba pixel_bgra8888_to_rgba
#define pixel_dst_from_rgb pixel_bgra8888_from_rgb

#include "rotate_image.inc"

ret_t rotate_bgra8888_image(bitmap_t* fb, bitmap_t* img, const rect_t* src, lcd_orientation_t o) {
  return rotate_image(fb, img, src, o);
}

ret_t rotate_bgra8888_image_ex(bitmap_t* fb, bitmap_t* img, const rect_t* src, xy_t dx, xy_t dy,
                               lcd_orientation_t o) {
  return rotate_image_ex(fb, img, src, dx, dy, o);
}
