/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Key matrix parameters
#define MATRIX_COLS           ( 6 )
#define MATRIX_ROWS           ( 10 )
#define MATRIX_COL_PINS       { C6, D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F7, F6, F5, F4, D0, D4 }
#define MATRIX_ROW_PINS       { F6, F7, B1, B3, B2 }
#define MATRIX_ROW_PINS_RIGHT { C6, D7, E6, B4, B5 }
#define DEBOUNCE            5

// Split parameters
#define SPLIT_HAND_MATRIX_GRID B2, C6
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       500

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#ifdef POINTING_DEVICE_ENABLE
#define PMW33XX_CS_PIN B6
//#define PMW33XX_CPI
//#define PMW33XX_CLOCK_SPEED 2000000
//#define PMW33XX_SPI_DIVISOR
//#define
#endif

// To squeeze firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

