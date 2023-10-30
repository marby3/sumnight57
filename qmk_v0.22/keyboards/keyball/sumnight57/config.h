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
#define MATRIX_COL_PINS { F7, F6, F5, F4, D0, D4 }
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define DEBOUNCE            5
#define DIODE_DIRECTION COL2ROW

// Split parameters
#define SOFT_SERIAL_PIN         D2
#define SPLIT_HAND_MATRIX_GRID  B5, F6
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       500

#define SPLIT_TRANSACTION_IDS_KB KEYBALL_GET_INFO, KEYBALL_GET_MOTION, KEYBALL_SET_CPI

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

// RGB LED settings
#define WS2812_DI_PIN       D3
#ifdef RGBLIGHT_ENABLE
#    define RGBLED_NUM      60
#    define RGBLED_SPLIT    { 30, 30 }  // (30 + 29)
#    ifndef RGBLIGHT_LIMIT_VAL
#        define RGBLIGHT_LIMIT_VAL  150 // limitated for power consumption
#    endif
#    ifndef RGBLIGHT_VAL_STEP
#        define RGBLIGHT_VAL_STEP   15
#    endif
#    ifndef RGBLIGHT_HUE_STEP
#        define RGBLIGHT_HUE_STEP   17
#    endif
#    ifndef RGBLIGHT_SAT_STEP
#        define RGBLIGHT_SAT_STEP   17
#    endif
#endif
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_SPLIT    { 30, 30 }
#endif

#if !defined(LAYER_STATE_8BIT) && !defined(LAYER_STATE_16BIT) && !defined(LAYER_STATE_32BIT)
#    define LAYER_STATE_8BIT
#endif

// To squeeze firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

//#define SPLIT_POINTING_ENABLE
//#define POINTING_DEVICE_RIGHT
