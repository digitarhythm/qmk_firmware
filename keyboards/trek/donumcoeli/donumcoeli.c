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

#include "donumcoeli.h"

//bool encoder_update_kb(uint8_t index, bool clockwise) {
//  return encoder_update_user(index, clockwise);
//}

#ifdef RGB_MATRIX_ENABLE
  led_config_t g_led_config = {{
    // Key Matrix to LED Index
    { NO_LED,      0,      1,      2,      3,      4 },
    { NO_LED,      9,      8,      7,      6,      5 },
    { NO_LED,     10,     11,     12,     13,     14 },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },

    {     25,     26,     27,     28,     29, NO_LED },
    {     24,     23,     22,     21,     20, NO_LED },
    {     15,     16,     17,     18,     19, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
  }, {
  // LED Index to Physical Position
    {   0,   0 }, {  24,   0 }, {  49,   0 }, {  74,   0 }, {  99,   0 }, {  99,  21 }, {  74,  21 }, {  49,  21 }, {  24,  21 }, {   0,  21 },
    {   0,  42 }, {  24,  42 }, {  49,  42 }, {  74,  42 }, {  99,  42 }, { 124,  42 }, { 149,  42 }, { 174,  42 }, { 199,  42 }, { 224,  42 },
    { 224,  21 }, { 199,  21 }, { 174,  21 }, { 149,  21 }, { 124,  21 }, { 124,   0 }, { 149,   0 }, { 174,   0 }, { 199,   0 }, { 224,   0 }
  }, {
  // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4
  }};
#endif

