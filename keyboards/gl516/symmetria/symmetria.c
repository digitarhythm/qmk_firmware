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

#include "symmetria.h"

//bool encoder_update_kb(uint8_t index, bool clockwise) {
//  return encoder_update_user(index, clockwise);
//}

#ifdef RGB_MATRIX_ENABLE
  led_config_t g_led_config = { {
    // Key Matrix to LED Index
      {      6,      5,      4,      3,      2,      1,      0 },
      {      7,      8,      9,     10,     11,     12,     13 },
      {     20,     19,     18,     17,     16,     15,     14 },
      { NO_LED, NO_LED,     21,     22, NO_LED,     23, NO_LED },
      { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
      {     47,     46,     45,     44,     43,     42,     41 },
      {     34,     35,     36,     37,     38,     39,     40 },
      {     33,     32,     31,     30,     29,     28,     27 },
      { NO_LED,     24, NO_LED,     25,     26, NO_LED, NO_LED }
    }, {
    // LED Index to Physical Position
      { 103,   0 }, {  86,   0 }, {  68,   0 }, {  51,   0 }, {  34,   0 }, {  17,   0 }, {   0,   0 },
      {   0,  21 }, {  17,  21 }, {  34,  21 }, {  51,  21 }, {  68,  21 }, {  86,  21 }, { 103,  21 },
      { 103,  42 }, {  86,  42 }, {  68,  42 }, {  51,  42 }, {  34,  42 }, {  17,  42 }, {   0,  42 },
                                  {  34,  64 }, {  51,  64 },               {  86,  64 },
                    { 137,  64 },               { 172,  64 }, { 189,  64 },
      { 224,  42 }, { 206,  42 }, { 189,  42 }, { 172,  42 }, { 155,  42 }, { 137,  42 }, { 120,  42 },
      { 120,  21 }, { 137,  21 }, { 155,  21 }, { 172,  21 }, { 189,  21 }, { 206,  21 }, { 224,  21 },
      { 224,   0 }, { 206,   0 }, { 189,   0 }, { 172,   0 }, { 155,   0 }, { 137,   0 }, { 120,   0 }
    }, {
    // LED Index to Flag
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4
  } };
#endif

