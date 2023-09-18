// Copyright 2023 marby3 (@marby3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Split settings */
#define SPLIT_HAND_MATRIX_GRID B2, C6
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       500

// in config.h:
#define PMW33XX_CS_PIN B6

#if !defined(LAYER_STATE_8BIT) && !defined(LAYER_STATE_16BIT) && !defined(LAYER_STATE_32BIT)
#    define LAYER_STATE_8BIT
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define MATRIX_COL_PINS       { C6, D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT { F7, F6, F5, F4, D0, D4 }
#define MATRIX_ROW_PINS       { F6, F7, B1, B3, B2 }
#define MATRIX_ROW_PINS_RIGHT { C6, D7, E6, B4, B5 }
#define SOFT_SERIAL_PIN D2
#define DIODE_DIRECTION COL2ROW
