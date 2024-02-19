// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE   0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
        LCTL(KC_D),       KC_MUTE,    LCTL(KC_X),    LCTL(KC_C),    LGUI(KC_V),
           KC_HOME,        KC_END,         KC_P7,         KC_P8,         KC_P9,
                            TG(1),         KC_P4,         KC_P5,         KC_P6,
                                           KC_P1,         KC_P2,         KC_P3,
                                           KC_P0,       KC_PDOT,  LT(2,KC_ENT)
  ),
  [1] = LAYOUT(
           _______,       _______,       _______,       _______,       _______,
           _______,       _______,       _______,       _______,       _______,
                            TG(1),       _______,       _______,       _______,
                                         _______,       _______,       _______,
                                         _______,       _______,       _______
  ),
  [2] = LAYOUT(
           _______,       _______,       RGB_VAD,       RGB_VAI,       _______,
           _______,       _______,       RGB_HUD,       RGB_HUI,       _______,
                          _______,       RGB_SPD,       RGB_SPI,       _______,
                                         RGB_RMOD,      RGB_MOD,       _______,
                                         RGB_TOG,       _______,       _______
  ),
  [3] = LAYOUT(
           _______,       _______,       _______,       _______,       _______,
           _______,       _______,       _______,       _______,       _______,
                          _______,       _______,       _______,       _______,
                                         _______,       _______,       _______,
                                         _______,       _______,       _______
  )
};

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
  {
    // Key Matrix to LED Index
    { NO_LED, NO_LED,      0,      1,      2 },
    {      7,      6,      5,      4,      3 },
    {      8,      9,     10,     11,     12 },
    { NO_LED,     16,     15,     14,     13 },
    { NO_LED, NO_LED,     17,     18,     19 }
  }, {
    // LED Index to Physical Position
    //                            { 112,   0 }, { 168,   0 }, { 224,   0 },
    //{   0,  24 }, {  56,  24 }, { 112,  16 }, { 168,  16 }, { 224,  16 },
    //{   0,  40 }, {  56,  40 }, { 112,  32 }, { 168,  32 }, { 224,  32 },
    //              {  56,  56 }, { 112,  48 }, { 168,  48 }, { 224,  48 },
    //                            { 112,  64 }, { 168,  64 }, { 224,  64 },

                                  { 112,   0 }, { 168,   0 }, { 224,   0 },
      { 224,  16 }, { 168,  16 }, { 112,  16 }, {  56,  24 }, {   0,  24 },
      {   0,  40 }, {  56,  40 }, { 112,  32 }, { 168,  32 }, { 224,  32 },
                    { 224,  48 }, { 168,  48 }, { 112,  48 }, {  56,  56 },
                                  { 112,  64 }, { 168,  64 }, { 224,  64 }
  }, {
  // LED Index to Flag
          4, 4, 4,
    4, 4, 4, 4, 4,
    4, 4, 4, 4, 4,
       4, 4, 4, 4,
          4, 4, 4
  }
};
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
/* layer 0 */    [_BASE]   = { ENCODER_CCW_CW(LCTL(KC_MINS), LCTL(KC_PLUS)), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
/* layer 1 */    [_LOWER]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
/* layer 2 */    [_RAISE]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
/* layer 3 */    [_ADJUST] = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif

