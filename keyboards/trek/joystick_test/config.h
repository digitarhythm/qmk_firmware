// Copyright 2024 Hajime Oh-yake (@digitarhythm)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#ifdef JOYSTICK_ENABLE
#define JOYSTICK_BUTTON_COUNT 0
#define JOYSTICK_AXES_COUNT 2
#define JOYSTICK_AXES_RESOLUTION 10
#endif

