#include QMK_KEYBOARD_H

#define ____ KC_TRNS

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_UP, KC_DOWN),  ENCODER_CCW_CW(KC_LEFT, KC_RIGHT) },
    [1] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),  ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),  ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),  ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_DEL,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE,          KC_ENTER,
    KC_RSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,          KC_LSFT,
         KC_RCTL, KC_LGUI, KC_LALT,     MO(1), KC_BSPC, KC_SPACE,  KC_SPACE,  MO(2),            KC_LEFT, KC_DOWN, KC_RIGHT
  ),

  [1] = LAYOUT(
  ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,
    ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,          ____,
    ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,          ____,
         ____, ____, ____,              ____,  ____,  ____,  ____,  ____,            ____, ____, ____
  ),
  
  [2] = LAYOUT(
    ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,
    ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,          ____,
    ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,          ____,
         ____, ____, ____,              ____,  ____,  ____,  ____,  ____,            ____, ____, ____
  ),

  [3] = LAYOUT(
    ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   ____,   ____,
    ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,          ____,
    ____,        ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,          ____,
         ____, ____, ____,              ____,  ____,  ____,  ____,  ____,            ____, ____, ____
  ),

};