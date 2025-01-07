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

#include "analog.h"
#include "pointing_device.h"

// Set Parameters
uint16_t minAxisValue = 190;  // Depends on each stick
uint16_t maxAxisValue = 840;

uint8_t maxCursorSpeed = 2;
uint8_t maxScrollSpeed = 1;
uint8_t speedRegulator = 5;  // Lower Values Create Faster Movement

int8_t xPolarity = -1;
int8_t yPolarity = 1;
int8_t hPolarity = 1;
int8_t vPolarity = 1;

uint8_t cursorTimeout = 10;
uint8_t scrollTimeout = 100;

int16_t xOrigin, yOrigin;

uint16_t lastCursor = 0;

int16_t axisCoordinate(uint8_t pin, uint16_t origin) {
  int8_t  direction;
  int16_t distanceFromOrigin;
  int16_t range;

  int16_t position = analogReadPin(pin);

  if (origin == position) {
    return 0;
  } else if (origin > position) {
    distanceFromOrigin = origin - position;
    range = origin - minAxisValue;
    direction = -1;
  } else {
    distanceFromOrigin = position - origin;
    range = maxAxisValue - origin;
    direction = 1;
  }

  float   percent  = (float)distanceFromOrigin  / range;
  int16_t coordinate = (int16_t)(percent * 127);
  if (coordinate < 0) {
    return 0;
  } else if (coordinate > 127) {
    return 127 * direction;
  } else {
    return coordinate * direction;
  }
}

int8_t axisToMouseComponent(uint8_t pin, int16_t origin, uint8_t maxSpeed, int8_t polarity) {
   int coordinate = axisCoordinate(pin, origin);
   if (coordinate == 0) {
     return 0;
   } else {
     float percent = (float)coordinate / 127;
     return percent * maxSpeed * polarity * (abs(coordinate) / speedRegulator);
   }
}

/*
void pointing_device_task(void) {
   report_mouse_t report = pointing_device_get_report();

   if(layer_state_is(_RAISE)) {
     if (timer_elapsed(lastCursor) > scrollTimeout) {
       lastCursor = timer_read();
       report.h   = axisToMouseComponent(GP28, xOrigin, maxCursorSpeed, hPolarity);
       report.v   = axisToMouseComponent(GP29, yOrigin, maxCursorSpeed, vPolarity);
     }
   } else {
     if (timer_elapsed(lastCursor) > cursorTimeout) {
       lastCursor = timer_read();
       report.x   = axisToMouseComponent(GP28, xOrigin, maxCursorSpeed, xPolarity);
       report.y   = axisToMouseComponent(GP29, yOrigin, maxCursorSpeed, yPolarity);
     }
   }

   pointing_device_set_report(report);
   pointing_device_send();
}
*/

void matrix_init_user(void) {
  xOrigin = analogReadPin(GP28);
  yOrigin = analogReadPin(GP29);
}

/*
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
*/
