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

#include "parallax.h"

//bool encoder_update_kb(uint8_t index, bool clockwise) {
//  return encoder_update_user(index, clockwise);
//}

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

