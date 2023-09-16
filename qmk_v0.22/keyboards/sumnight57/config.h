// Copyright 2023 marby3 (@marby3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Split settings */
#define SPLIT_HAND_MATRIX_GRID C6, B2
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_LEFT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT       500

// in config.h:
#define PMW33XX_CS_PIN B6

#if !defined(LAYER_STATE_8BIT) && !defined(LAYER_STATE_16BIT) && !defined(LAYER_STATE_32BIT)
#    define LAYER_STATE_8BIT
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
