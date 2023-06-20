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

#include <print.h>
#include QMK_KEYBOARD_H

  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,                          _______,         _______,         _______,                          _______,                                           _______,         _______,         _______,                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
  //          _______,         _______,         _______,         _______,         _______,         _______
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              KC_GESC,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,         KC_PGDN,         KC_PGUP,            KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,         KC_BSPC,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
       LCTL_T(KC_TAB),            KC_A,            KC_S,            KC_D,            KC_F,            KC_G,   LCTL(KC_PGUP),   LCTL(KC_PGDN),            KC_H,            KC_J,            KC_K,            KC_L,         KC_SCLN,          KC_ENT,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_LSFT,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,           MO(2),           MO(3),            KC_B,            KC_N,           KC_M,          KC_COMM,          KC_DOT,   RSFT(KC_SLSH),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_MPLY,                 LALT_T(KC_LANG2),         KC_LCTL,    LT(2,KC_SPC),                            TG(1),                                      LT(2,KC_SPC),         KC_RCTL,RGUI_T(KC_LANG1),                          KC_MUTE,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
           LCTL(KC_Z),      LCTL(KC_Y),   LCTL(KC_PGUP),   LCTL(KC_PGDN),         KC_VOLD,         KC_VOLU
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [1] = LAYOUT(
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,         KC_LGUI,         _______,                            TG(1),                                           _______,         KC_RGUI,RCTL_T(KC_LANG1),                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [2] = LAYOUT(
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
               KC_GRV,            KC_1,            KC_2,            KC_3,            KC_4,            KC_5,            KC_6,            KC_7,            KC_8,            KC_9,            KC_0,         KC_MINS,          KC_EQL,         KC_BSLS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,      LGUI(KC_G),         KC_WBAK,         KC_WFWD,         KC_LEFT,         KC_DOWN,           KC_UP,        KC_RIGHT,         KC_QUOT,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,      LGUI(KC_V),         _______,         _______,         _______,         _______,         _______,         KC_LBRC,         KC_RBRC,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,          KC_DEL,           MO(3),                          RGB_TOG,                                             MO(3),           KC_F2,         _______,                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         KC_WBAK,         KC_WFWD
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [3] = LAYOUT(
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
              KC_SLEP,           KC_F1,           KC_F2,           KC_F3,           KC_F4,           KC_F5,           KC_F6,           KC_F7,           KC_F8,           KC_F9,          KC_F10,          KC_F11,          KC_F12,          KC_F13,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         RGB_VAI,         RGB_VAD,         RGB_SPI,         RGB_SPD,         RGB_MOD,        RGB_RMOD,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         RGB_HUI,         RGB_HUD,         RGB_SAI,         RGB_SAD,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,         _______,         _______,                          _______,                                           _______,         _______,         _______,                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  )
};

#ifdef RGB_MATRIX_ENABLE
  led_config_t g_led_config = { {
    // Key Matrix to LED Index
      { NO_LED,      0,      1,      2,      3,      4,      5 },
      { NO_LED,     23,     22,     21,     20,     19,     18 },
      { NO_LED,     24,     25,     26,     27,     28,     29 },
      { NO_LED, NO_LED,     41,     40,     39, NO_LED, NO_LED },
      { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
      {      6,      7,      8,      9,     10,     11, NO_LED },
      {     17,     16,     15,     14,     13,     12, NO_LED },
      {     30,     31,     32,     33,     34,     35, NO_LED },
      { NO_LED, NO_LED,     38,     37,     36, NO_LED, NO_LED },
      { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
    }, {
    // LED Index to Physical Position
      {   0,   0 }, {  20,   0 }, {  40,   0 }, {  61,   0 }, {  81,   0 }, { 101,   0 }, { 122,   0 }, { 142,   0 }, { 162,   0 }, { 183,   0 }, { 203,   0 }, { 224,   0 },
      { 224,  21 }, { 203,  21 }, { 183,  21 }, { 162,  21 }, { 142,  21 }, { 122,  21 }, { 101,  21 }, {  81,  21 }, {  61,  21 }, {  40,  21 }, {  20,  21 }, {   0,  21 },
      {   0,  43 }, {  20,  43 }, {  40,  43 }, {  61,  43 }, {  81,  43 }, { 101,  43 }, { 122,  43 }, { 142,  43 }, { 162,  43 }, { 183,  43 }, { 203,  43 }, { 224,  43 },
                    { 203,  64 }, { 183,  64 },               { 142,  64 },                             {  81,  64 },               {  40,  64 }, {  20,  64 }
    }, {
    // LED Index to Flag
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4
  } };
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
  keypos_t key;

  dprintf("index=%u, clockwise=%d\n", index, clockwise);

  key.row = 4;

  if (index == 0) {
    if (clockwise) {
      key.col = 1;
    } else {
      key.col = 0;
    }
    tap_code16(keymap_key_to_keycode(layer_switch_get_layer(key), key));
  }

  if (index == 1) {
    if (clockwise) {
      key.col = 3;
    } else {
      key.col = 2;
    }
    tap_code16(keymap_key_to_keycode(layer_switch_get_layer(key), key));
  }

  if (index == 2) {
    if (clockwise) {
      key.col = 5;
    } else {
      key.col = 4;
    }
    tap_code16(keymap_key_to_keycode(layer_switch_get_layer(key), key));
  }

  return false;
}

/*
void keyboard_post_init_user(void) {
  Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}
*/
