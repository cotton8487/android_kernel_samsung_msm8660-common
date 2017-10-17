/*
 * Copyright (C) 2017, The LineageOS Project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _BOARD_MSM8x60_CELOX_H
#define _BOARD_MSM8x60_CELOX_H

enum {
	SGH_I727 = 0,
	SGH_T989,
	SGH_T769,
	SC_03D,
};

/* Function to retrieve device model */
int get_celox_model(void);

#endif
