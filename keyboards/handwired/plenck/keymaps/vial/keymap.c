#include QMK_KEYBOARD_H

#include <stdio.h>
char wpm_str[10];
// KC_SCLN = æ
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x12(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_0,
        MO(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_MINS, KC_RSFT,
        CTL_T(KC_LBRC), KC_LWIN, KC_LALT, KC_0,    MO(1),   KC_SPC,  RGB_MOD, KC_MPLY, KC_0,    KC_0,    KC_0,    KC_RSFT
    ),
    [1] = LAYOUT_ortho_5x12(
        KC_0,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_DEL,
        KC_TAB,  KC_Q,    KC_P7,   KC_P8,   KC_P9,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_0,
        KC_SCLN, KC_A,    KC_MPRV, KC_MPLY, KC_MNXT, KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_ENT,
        KC_LSFT, KC_Z,    KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_N,    KC_M,    KC_COMM, KC_HOME, KC_UP,   KC_END,
        KC_RCTL, KC_LWIN, KC_0,    KC_0,    KC_0,    KC_SPC,  QK_BOOT, KC_0,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [2] = LAYOUT_ortho_5x12(
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,  KC_Q,    KC_P7,   KC_P8,   KC_P9,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_0,
        KC_SCLN, KC_A,    KC_P4,   KC_P5,   KC_P6,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_ENT,
        KC_LSFT, KC_Z,    KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_N,    KC_M,    KC_COMM, KC_HOME, KC_UP,   KC_END,
        KC_RCTL, KC_LWIN, KC_0,    KC_0,    KC_0,    KC_SPC,  QK_BOOT, KC_0,    KC_0,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT)  },
    [1] =  { ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_UP, KC_DOWN)  },
    [2] =  { ENCODER_CCW_CW(KC_NO, KC_NO), ENCODER_CCW_CW(KC_NO, KC_NO)  },
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    // oled_write_P(PSTR("Layer: "), false);
    //render_logo();
    sprintf(wpm_str, "WPM:%03d", get_current_wpm());  // edit the string to change wwhat shows up, edit %03d to change how many digits show up
    oled_write(wpm_str, false);                       // writes wpm on top left corner of string
    
    return false;
}
#endif

