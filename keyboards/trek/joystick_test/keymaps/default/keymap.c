// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define POINTING_DEVICE_DEBUG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * ┌───┬───┬───┬───┐
   * │ 7 │ 8 │ 9 │ / │
   * ├───┼───┼───┼───┤
   * │ 4 │ 5 │ 6 │ * │
   * ├───┼───┼───┼───┤
   * │ 1 │ 2 │ 3 │ - │
   * ├───┼───┼───┼───┤
   * │ 0 │ . │Ent│ + │
   * └───┴───┴───┴───┘
   */
  [0] = LAYOUT(
      KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
      KC_P4,   KC_P5,   KC_P6,   KC_PAST,
      KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
      KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
  )
};

#ifdef JOYSTICK_ENABLE
#include "joystick.h"
#include "analog.h"

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_IN(GP28, 1023, 512, 0),
    [1] = JOYSTICK_AXIS_IN(GP29, 0, 512, 1023)
};
#endif

#ifdef POINTING_DEVICE_ENABLE
// Function to handle mouse reports and perform drag scrolling
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
  if  (mouse_report.x != 0 || mouse_report.y != 0) {
    if (mouse_report.x < 0) {
      mouse_report.x *= 6;
    } else {
      mouse_report.x *= 2;
    }

    if (mouse_report.y < 0) {
      mouse_report.y *= 4;
    } else {
      mouse_report.y *= 2;
    }
  }

  return mouse_report;
}
#endif
