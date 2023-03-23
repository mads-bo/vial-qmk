#pragma once

#define VIAL_KEYBOARD_UID {0xE1, 0xF6, 0x21, 0x1D, 0x64, 0x34, 0x79, 0xDB}
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }

// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_SNAKE

// Change space cadet to use correct symbols
#define LSPO_KEYS KC_LSFT, KC_ALGR, KC_7
#define RSPC_KEYS KC_RSFT, KC_ALGR, KC_0

#define VIAL_TAP_DANCE_ENTRIES 16

// Optimizatons, everything below
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


// Maybe enable if debugging
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT