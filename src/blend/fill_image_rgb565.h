﻿/**
 * File:   fill_image_rgb565.c
 * Author: AWTK Develop Team
 * Brief:  fill on rgb565
 *
 * Copyright (c) 2018 - 2023  Guangzhou ZHIYUAN Electronics Co.,Ltd.
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
#ifndef TK_FILL_IMAGE_RGB565_H
#define TK_FILL_IMAGE_RGB565_H

#include "base/bitmap.h"

ret_t fill_rgb565_rect(bitmap_t* fb, const rect_t* dst, color_t c);

ret_t clear_rgb565_rect(bitmap_t* fb, const rect_t* dst, color_t c);

#endif /*TK_FILL_IMAGE_RGB565_H*/
