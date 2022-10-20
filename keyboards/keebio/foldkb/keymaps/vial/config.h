/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xA6, 0xD7, 0x59, 0x7B, 0x6E, 0x98, 0x14, 0x68}

// Space savers: i only have two layers
#define LAYER_STATE_8BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

// ECS + BACKSPACE = UNLOCK
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 7 }

// Space savers: i don't have the Cherry MX Lock switch
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Space savers: i'm not using oneshots
#define NO_ACTION_ONESHOT

// Space savers: tapping keys (mod tap, layer tap, etc)
// #define NO_ACTION_TAPPING

// Space savers: tranlates matrix positions into notes
#define NO_MUSIC_MODE

// Space savers: too many effects
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE
