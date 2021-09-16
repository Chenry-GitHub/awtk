﻿/**
 * File:   blend_image_bgr888_bgra8888.c
 * Author: AWTK Develop Team
 * Brief:  blend bgra8888 on bgr888
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
 * 2018-10-10 Generated by gen.sh(DONT MODIFY IT)
 *
 */
#ifndef TK_BLEND_IMAGE_BGR888_BGRA8888_H
#define TK_BLEND_IMAGE_BGR888_BGRA8888_H

#include "base/bitmap.h"

ret_t blend_image_bgr888_bgra8888(bitmap_t* dst, bitmap_t* src, const rectf_t* dst_r,
                                  const rectf_t* src_r, uint8_t a);

#endif /*TK_BLEND_IMAGE_BGR888_BGRA8888_H*/
