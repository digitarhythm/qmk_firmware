// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE   0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              QK_GESC,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                          KC_MUTE,                             KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,         KC_MINS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
       LCTL_T(KC_TAB),            KC_A,            KC_S,            KC_D,            KC_F,            KC_G,           KC_P7,           KC_P8,           KC_P9,            KC_H,            KC_J,            KC_K,            KC_L,         KC_SCLN,         KC_QUOT,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_LSFT,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,           KC_P4,           KC_P5,           KC_P0,            KC_B,            KC_N,            KC_M,         KC_COMM,          KC_DOT, RSFT_T(KC_SLSH),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                         LALT_T(KC_LNG2), LGUI_T(KC_BSPC),    LT(2,KC_SPC),           KC_P1,           KC_P2,           KC_P3,    LT(2,KC_SPC),  RGUI_T(KC_ENT), RCTL_T(KC_LNG1),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                TG(1),                                                                                                KC_P0,         KC_PDOT,          KC_ENT,                                                                                                TG(3)
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  ),
  [1] = LAYOUT(
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                          _______,                          _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                 _______, LCTL_T(KC_BSPC),         _______,         _______,         _______,         _______,         _______,  RCTL_T(KC_ENT), RGUI_T(KC_LNG1),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                                                                                              _______,         _______,         _______,                                                                                              _______
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  ),
  [2] = LAYOUT(
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
               KC_GRV,            KC_1,            KC_2,            KC_3,            KC_4,            KC_5,                          _______,                             KC_6,            KC_7,            KC_8,            KC_9,            KC_0,          KC_EQL,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         KC_LEFT,         KC_DOWN,           KC_UP,        KC_RIGHT,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,   LGUI(KC_LBRC),   LGUI(KC_RBRC),         KC_LBRC,         KC_RBRC,         KC_BSLS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                 _______,          KC_DEL,           MO(3),         _______,         _______,         _______,           MO(3),           KC_F2,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                                                                                              _______,         _______,         _______,                                                                                              _______
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  ),
  [3] = LAYOUT(
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_SLEP,           KC_F1,           KC_F2,           KC_F3,           KC_F4,           KC_F5,                          _______,                            KC_F6,           KC_F7,           KC_F8,           KC_F9,          KC_F10,          KC_F11,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              RGB_VAI,         RGB_VAD,         RGB_SPI,         RGB_SPD,         RGB_MOD,        RGB_RMOD,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              RGB_HUI,         RGB_HUD,         RGB_SAI,         RGB_SAD,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                                                                 _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                                                                                              _______,         _______,         _______,                                                                                              _______
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  )
};

//  {  0  0,  0 } {  1 17,  0 } {  2 34,  0 } {  3 51,  0 } {  4 68,  0 } {  5 86,  0 } {  6 103,  0 } {  7 120,  0 } {  8 137,  0 } {  9 155,  0 } { 10 172,  0 } { 11 189,  0 } { 12 206,  0 } { 13 224,  0 }
//  { 14  0, 21 } { 15 17, 21 } { 16 34, 21 } { 17 51, 21 } { 18 68, 21 } { 19 86, 21 } { 20 103, 21 } { 21 120, 21 } { 22 137, 21 } { 23 155, 21 } { 24 172, 21 } { 25 189, 21 } { 26 206, 21 } { 27 224, 21 }
//  { 28  0, 42 } { 29 17, 42 } { 30 34, 42 } { 31 51, 42 } { 32 68, 42 } { 33 86, 42 } { 34 103, 42 } { 35 120, 42 } { 36 137, 42 } { 37 155, 42 } { 38 172, 42 } { 39 189, 42 } { 40 206, 42 } { 41 224, 42 }
//                { 42 17, 64 } { 43 34, 64 } { 44 51, 64 } { 45 68, 64 } { 46 86, 64 } { 47 103, 64 } { 48 120, 64 } { 49 137, 64 } { 50 155, 64 } { 51 172, 64 } { 52 189, 64 } { 53 206, 64 }

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
    {  86,   0 }, {  68,   0 }, {  51,   0 }, {  34,   0 }, {  17,   0 }, {   0,   0 }, { 206,   0 },
    { 103,   0 }, { 120,   0 }, { 137,   0 }, { 155,   0 }, { 172,   0 }, { 189,   0 }, {  17,  42 },
    { 120,  42 }, { 103,  42 }, {  86,  42 }, {  68,  42 }, {  51,  42 }, {  34,  42 }, { 206,  42 },
                  { 137,  42 }, { 155,  42 }, { 172,  42 }, { 206,  64 }, { 189,  42 }, { 189,  64 },
    { 224,   0 }, {   0,  21 }, {  17,  21 }, {  34,  21 }, {  51,  21 }, { 155,  21 }, { 103,  21 },
    {   0,  42 }, { 224,  21 }, { 206,  21 }, { 189,  21 }, { 172,  21 }, {  86,  64 }, { 120,  21 },
    { 224,  42 }, {  17,  64 }, {  34,  64 }, {  51,  64 }, {  68,  64 }, {  86,  21 }, { 103,  64 },
    { 172,  64 }, { 155,  64 }, { 137,  64 }, { 120,  64 }, {  68,  21 }, { 137,  21 }
  }, {
  // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4
  }
};
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [_BASE]   = { ENCODER_CCW_CW(LGUI(KC_MINS), LGUI(KC_PLUS)), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
  [_LOWER]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
  [_RAISE]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
  [_ADJUST] = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif

