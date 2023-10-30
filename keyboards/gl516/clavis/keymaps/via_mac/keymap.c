/*
Copyright 2021 Salicylic_Acid

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

//#include <print.h>
#include QMK_KEYBOARD_H

#define KC_LANG1  KC_LANGUAGE_1
#define KC_LANG2  KC_LANGUAGE_2

#define _BASE   0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,                          _______,         _______,         _______,                          _______,         _______,                                           _______,         _______,         _______
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              _______,           KC_F1,           KC_F2,           KC_F3,           KC_F4,           KC_F5,           TG(1),         KC_MUTE,           TG(3),           KC_F6,           KC_F7,           KC_F8,           KC_F9,          KC_F10,         KC_BSPC,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              QK_GESC,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,           KC_P7,           KC_P8,           KC_P9,            KC_Y,            KC_U,            KC_I,            KC_O,         KC_SCLN,         KC_MINS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
       LCTL_T(KC_TAB),            KC_A,            KC_S,            KC_D,            KC_F,            KC_G,           KC_P4,           KC_P5,           KC_P6,            KC_H,            KC_J,            KC_K,            KC_L,            KC_P,         KC_QUOT,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_LSFT,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,           KC_P1,           KC_P2,           KC_P3,            KC_B,            KC_N,            KC_M,         KC_COMM,          KC_DOT, RSFT_T(KC_SLSH),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_HOME,                 LALT_T(KC_LANG2), LGUI_T(KC_BSPC),    LT(2,KC_SPC),                            KC_P0,          KC_DOT,         KC_COMM,                     LT(2,KC_SPC),  RGUI_T(KC_ENT),RCTL_T(KC_LANG1)
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [1] = LAYOUT(
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              _______,         _______,         _______,         _______,         _______,         _______,           TG(1),         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______, LCTL_T(KC_BSPC),         _______,                          _______,         _______,         _______,                          _______,  RCTL_T(KC_ENT),RGUI_T(KC_LANG1)
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [2] = LAYOUT(
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              _______,          KC_F11,          KC_F12,          KC_F13,          KC_F14,          KC_F15,           TG(1),         KC_MUTE,           TG(3),          KC_F16,          KC_F17,          KC_F18,          KC_F19,          KC_F20,         KC_BSPC,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
               KC_GRV,            KC_1,            KC_2,            KC_3,            KC_4,            KC_5,         KC_HOME,         _______,         KC_PGUP,            KC_6,            KC_7,            KC_8,            KC_9,            KC_0,          KC_EQL,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         KC_SLEP,         _______,         KC_LEFT,         KC_DOWN,           KC_UP,        KC_RIGHT,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,          KC_END,         _______,         KC_PGDN,         _______,   LGUI(KC_LBRC),   LGUI(KC_RBRC),         KC_LBRC,         KC_RBRC,         KC_BSLS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,          KC_DEL,         _______,                          _______,         _______,         _______,                          _______,           KC_F2,         _______
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [3] = LAYOUT(
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,           TG(3),         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         KC_HOME,           KC_UP,         KC_PGUP,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         KC_LEFT,          KC_ESC,        KC_RIGHT,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,          KC_END,         KC_DOWN,         KC_PGDN,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,         _______,         _______,                          _______,         _______,         _______,                          _______,         _______,         _______
  //.--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
/* layer 0 */    [_BASE]   = { ENCODER_CCW_CW(LCTL(KC_PGUP), LCTL(KC_PGDN)), ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
/* layer 1 */    [_LOWER]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
/* layer 2 */    [_RAISE]  = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
/* layer 3 */    [_ADJUST] = { ENCODER_CCW_CW(_______, _______),             ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
};
#endif

/*
void keyboard_post_init_user(void) {
  Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}
*/
