/*****************************************************************************
 *
 * mtdev - Multitouch Protocol Translation Library (MIT license)
 *
 * Copyright (C) 2010 Henrik Rydberg <rydberg@euromail.se>
 * Copyright (C) 2010 Canonical Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 ****************************************************************************/

/* Tables are automatically generated by mtdev-mapgen */

#ifndef _MTDEV_MAPPING_H
#define _MTDEV_MAPPING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <mtdev.h>

#define MTDEV_TOUCH_MAJOR	0
#define MTDEV_TOUCH_MINOR	1
#define MTDEV_WIDTH_MAJOR	2
#define MTDEV_WIDTH_MINOR	3
#define MTDEV_ORIENTATION	4
#define MTDEV_POSITION_X	5
#define MTDEV_POSITION_Y	6
#define MTDEV_TOOL_TYPE		7
#define MTDEV_BLOB_ID		8
#define MTDEV_TRACKING_ID	9
#define MTDEV_PRESSURE		10

static const unsigned int mtdev_map_abs2mt[ABS_CNT] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008,
 0x0009, 0x000a, 0x000b, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

static const unsigned int mtdev_map_mt2abs[MT_ABS_SIZE] = {
 0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037,
 0x0038, 0x0039, 0x003a,
};

static inline int mtdev_is_absmt(unsigned int code)
{
	return mtdev_map_abs2mt[code];
}

static inline unsigned int mtdev_abs2mt(unsigned int code)
{
	return mtdev_map_abs2mt[code] - 1;
}

static inline unsigned int mtdev_mt2abs(unsigned int mtcode)
{
	return mtdev_map_mt2abs[mtcode];
}

#ifdef __cplusplus
}
#endif

#endif
