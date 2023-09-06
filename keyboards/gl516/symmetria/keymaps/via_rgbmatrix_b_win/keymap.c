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
              QK_GESC,            KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,         KC_HOME,         KC_PGDN,            KC_Y,            KC_U,            KC_I,            KC_O,         KC_SCLN,         KC_MINS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
       LCTL_T(KC_TAB),            KC_A,            KC_S,            KC_D,            KC_F,            KC_G,          KC_END,         KC_PGUP,            KC_H,            KC_J,            KC_K,            KC_L,            KC_P,         KC_QUOT,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              KC_LSFT,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,           MO(3),           MO(3),            KC_B,            KC_N,            KC_M,         KC_COMM,          KC_DOT, RSFT_T(KC_SLSH),
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
                TG(1),                 LALT_T(KC_LANG2), LCTL_T(KC_BSPC),    LT(2,KC_SPC),                          KC_MUTE,                                      LT(2,KC_SPC),  RCTL_T(KC_ENT),RGUI_T(KC_LANG1),                          KC_MPLY,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
        LCTL(KC_PGUP),   LCTL(KC_PGDN),         KC_WH_D,         KC_WH_U,         KC_VOLD,         KC_VOLU
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
                TG(1),                          _______, LGUI_T(KC_BSPC),         _______,                          _______,                                           _______,  RGUI_T(KC_ENT),RCTL(KC_LANG1),                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
  ),
  [2] = LAYOUT(
  //.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
               KC_GRV,            KC_1,            KC_2,            KC_3,            KC_4,            KC_5,            KC_6,            KC_7,            KC_6,            KC_7,            KC_8,            KC_9,            KC_0,          KC_EQL,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,      LGUI(KC_G),         KC_WBAK,         KC_WFWD,         KC_LEFT,         KC_DOWN,           KC_UP,        KC_RIGHT,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,      LGUI(KC_V),         _______,         _______,         _______,         _______,         KC_WBAK,         KC_WFWD,         KC_LBRC,         KC_RBRC,         KC_BSLS,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,                          _______,          KC_DEL,           MO(3),                          RGB_TOG,                                             MO(3),           KC_F2,         _______,                          _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         KC_WH_L,         KC_WH_R,         _______,         _______
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
led_config_t g_led_config = {
  {
    // Key Matrix to LED Index
    {      6,      5,      4,      3,      2,      1,      0 },
    {      7,      8,      9,     10,     11,     12,     13 },
    {     20,     19,     18,     17,     16,     15,     14 },
    { NO_LED, NO_LED,     21,     22,     23, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },

    {     47,     46,     45,     44,     43,     42,     41 },
    {     34,     35,     36,     37,     38,     39,     40 },
    {     33,     32,     31,     30,     29,     28,     27 },
    { NO_LED, NO_LED,    24,      25,     26, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
  }, {
    // LED Index to Physical Position
    // 0, 17, 34, 51, 68, 86, 103, 120, 138, 155, 172, 190, 207, 224
    // 0, 21, 43, 64
    //    0             1             2             3             4             5             6
    { 120,   0 }, { 138,   0 }, { 155,   0 }, { 172,   0 }, { 190,   0 }, { 207,   0 }, { 224,   0 },
    //    7             8             9            10            11            12            13
    { 224,  21 }, { 207,  21 }, { 190,  21 }, { 172,  21 }, { 155,  21 }, { 138,  21 }, { 120,  21 },
    //   14            15            16            17            18            19            20
    { 120,  43 }, { 138,  43 }, { 155,  43 }, { 172,  43 }, { 190,  43 }, { 207,  43 }, { 224,  43 },
    //                               21            22                          23
                                { 190,  64 }, { 172,  64 },               { 138,  64 },

    //                 24                          25            26
                  {  86,  64 },               {  51,  64 }, {  34,  64 },
    //   27            28            29            30            31            32            33
    {   0,  43 }, {  17,  43 }, {  34,  43 }, {  51,  43 }, {  68,  43 }, {  86,  43 }, { 103,  43 },
    //   34            35            36            37            38            39            40
    { 103,  21 }, {  86,  21 }, {  68,  21 }, {  51,  21 }, {  34,  21 }, {  17,  21 }, {   0,  21 },
    //   41            42            43            44            45            46            47
    {   0,   0 }, {  17,   0 }, {  34,   0 }, {  51,   0 }, {  68,   0 }, {  86,   0 }, { 103,   0 },
  }, {
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4
  }
};
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
