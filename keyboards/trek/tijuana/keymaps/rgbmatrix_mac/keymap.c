// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE   0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              QK_GESC,    KC_Q,    KC_W,            KC_E,            KC_R,         KC_T,          KC_MUTE,                  KC_Y,           KC_U,            KC_I,     KC_O, KC_SCLN,         KC_MINS,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
       LCTL_T(KC_TAB),    KC_A,    KC_S,            KC_D,            KC_F,         KC_G,   KC_P7,   KC_P8,   KC_P9,         KC_H,           KC_J,            KC_K,     KC_L,    KC_P,         KC_QUOT,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              KC_LSFT,    KC_Z,    KC_X,            KC_C,            KC_V,         KC_B,   KC_P4,   KC_P5,   KC_P6,         KC_B,           KC_N,            KC_M,  KC_COMM,  KC_DOT, RSFT_T(KC_SLSH),
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
                                         LALT_T(KC_LNG2), LGUI_T(KC_BSPC), LT(2,KC_SPC),   KC_P1,   KC_P2,   KC_P3, LT(2,KC_SPC), RGUI_T(KC_ENT), RCTL_T(KC_LNG1),
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
                TG(1),                                                                     KC_P0, KC_PDOT,  KC_ENT,                                                                             TG(3)
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
  ),
  [1] = LAYOUT(
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______, _______, _______,         _______,         _______,      _______,          _______,               _______,        _______,         _______,  _______, _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______, _______, _______,         _______,         _______,      _______, _______, _______, _______,      _______,        _______,         _______,  _______, _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______, _______, _______,         _______,         _______,      _______, _______, _______, _______,      _______,        _______,         _______,  _______, _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
                                                 _______, LCTL_T(KC_BSPC),      _______, _______, _______, _______,      _______, RCTL_T(KC_ENT), RGUI_T(KC_LNG1),
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______,                                                                   _______, _______, _______,                                                                           _______
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
  ),
  [2] = LAYOUT(
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
               KC_GRV,    KC_1,    KC_2,            KC_3,            KC_4,         KC_5,          _______,                  KC_6,           KC_7,            KC_8,     KC_9,    KC_0,          KC_EQL,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
            LSG(KC_4), _______, _______,         _______,         _______,      _______, _______, _______, _______,      KC_LEFT,        KC_DOWN,           KC_UP, KC_RIGHT, _______,         KC_BSLS,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______, _______, _______,         _______,       LSG(KC_V),      _______, _______, _______, _______,      _______,  LGUI(KC_LBRC),   LGUI(KC_RBRC),  KC_LBRC, KC_RBRC,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
                                                 _______,          KC_DEL,        MO(3), _______, _______, _______,        MO(3),          KC_F2,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______,                                                                   _______, _______, _______,                                                                           _______
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
  ),
  [3] = LAYOUT(
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              KC_SLEP,   KC_F1,   KC_F2,           KC_F3,           KC_F4,        KC_F5,          _______,                 KC_F6,          KC_F7,           KC_F8,    KC_F9,  KC_F10,          KC_F11,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              RGB_VAI, RGB_VAD, RGB_SPI,         RGB_SPD,         RGB_MOD,     RGB_RMOD, _______, _______, _______,      _______,        KC_PGDN,         KC_PGUP,  _______, _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              RGB_HUI, RGB_HUD, RGB_SAI,         RGB_SAD,         _______,      RGB_TOG, _______, _______, _______,      _______,        _______,         _______,  _______, _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
                                                 _______,         _______,      _______, _______, _______, _______,      _______,        _______,         _______,
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
              _______,                                                                   _______, _______, _______,                                                                             TG(3)
  //|----------------+--------+--------+----------------+----------------+-------------+--------+--------+--------+-------------+---------------+----------------+---------+--------+----------------|
  )
};

//{   5   0,   0 } {   4  16,   0 } {   3  32,   0 } {   2  48,   0 } {   1  64,   0 } {   0  80,   0 }                                                    {  15 144,   0 } {  16 160,   0 } {  17 176,   0 } {  18 192,   0 } {  19 208,   0 } {  20 224,   0 }
//{   6   0,  16 } {   7  16,  16 } {   8  32,  16 } {   9  48,  16 } {  10  64,  16 } {  11  80,  16 } {  12  96,  12 } {  13 112,  12 } {  14 128,  12 } {  26 144,  16 } {  25 160,  16 } {  24 176,  16 } {  23 192,  16 } {  22 208,  16 } {  21 224,  16 }
//{  35   0,  32 } {  34  16,  32 } {  33  32,  32 } {  32  48,  32 } {  31  64,  32 } {  30  80,  32 } {  29  96,  28 } {  28 112,  28 } {  27 128,  28 } {  42 144,  32 } {  43 160,  32 } {  44 176,  32 } {  45 192,  32 } {  46 208,  32 } {  47 224,  32 }
//                                                   {  36  32,  48 } {  37  48,  48 } {  38  64,  48 } {  39  96,  44 } {  40 112,  44 } {  41 128,  44 } {  50 144,  48 } {  49 160,  48 } {  48 176,  48 }
//                                                                                                      {  53  96,  60 } {  52 112,  60 } {  51 128,  60 }

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
  {
    // Key Matrix to LED Index
    {      5,      4,      3,      2,      1,      0,     12 },
    {      6,      7,      8,      9,     10,     11,     29 },
    {     35,     34,     33,     32,     31,     30,     40 },
    { NO_LED,     36,     37,     38,     53,     39,     52 },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },

    {     13,     14,     15,     16,     17,     23,     20 },
    {     28,     27,     26,     25,     24,     46,     21 },
    {     41,     42,     43,     44,     45,     19,     47 },
    {     51,     50,     49,     48,     18,     22, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
  }, {
    // LED Index to Physical Position
    {  80,   0 }, {  64,   0 }, {  48,   0 }, {  32,   0 }, {  16,   0 }, {   0,   0 }, {   0,  16 },
    {  16,  16 }, {  32,  16 }, {  48,  16 }, {  64,  16 }, {  80,  16 }, {  96,  12 }, { 112,  12 },
    { 128,  12 }, { 144,   0 }, { 160,   0 }, { 176,   0 }, { 192,   0 }, { 208,   0 }, { 224,   0 },
    { 224,  16 }, { 208,  16 }, { 192,  16 }, { 176,  16 }, { 160,  16 }, { 144,  16 }, { 128,  28 },
    { 112,  28 }, {  96,  28 }, {  80,  32 }, {  64,  32 }, {  48,  32 }, {  32,  32 }, {  16,  32 },
    {   0,  32 }, {  32,  48 }, {  48,  48 }, {  64,  48 }, {  96,  44 }, { 112,  44 }, { 128,  44 },
    { 144,  32 }, { 160,  32 }, { 176,  32 }, { 192,  32 }, { 208,  32 }, { 224,  32 }, { 176,  48 },
    { 160,  48 }, { 144,  48 }, { 128,  60 }, { 112,  60 }, {  96,  60 }
  }, {
  // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4
  }
};
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [_BASE]   = { ENCODER_CCW_CW(LCTL(KC_PGUP), LCTL(KC_PGDN)), ENCODER_CCW_CW(KC_WH_D, KC_WH_U), ENCODER_CCW_CW(LCTL(KC_VOLD), LCTL(KC_VOLU))  },
  [_LOWER]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)              },
  [_RAISE]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(LSG(KC_MINS), LSG(KC_EQL))     },
  [_ADJUST] = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)              }
};
#endif

