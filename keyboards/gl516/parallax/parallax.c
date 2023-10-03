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

//  0,  20,  40,  61,  81, 101, 122, 142, 162, 183, 203, 224
// 21
// 42
// 64

#ifdef RGB_MATRIX_ENABLE
  led_config_t g_led_config = {{
        // Key Matrix to LED Index
        { NO_LED,      0,      1,      2,      3,      4,      5 },
        { NO_LED,     23,     22,     21,     20,     19,     18 },
        { NO_LED,     24,     25,     26,     27,     28,     29 },
        { NO_LED, NO_LED,     41,     40,     39, NO_LED, NO_LED },
        {      6,      7,      8,      9,     10,     11, NO_LED },
        {     17,     16,     15,     14,     13,     12, NO_LED },
        {     30,     31,     32,     33,     34,     35, NO_LED },
        { NO_LED, NO_LED,     38,     37,     36, NO_LED, NO_LED }
    }, {
        // LED Index to Physical Position
/*  0 */{   0,   0 }, {  20,   0 }, {  40,   0 }, {  61,   0 }, {  81,   0 }, { 101,   0 },
/*  6 */{ 122,   0 }, { 142,   0 }, { 162,   0 }, { 183,   0 }, { 203,   0 }, { 224,   0 },
/* 12 */{ 224,  20 }, { 203,  20 }, { 183,  20 }, { 162,  20 }, { 142,  21 }, { 122,  21 },
/* 18 */{ 101,  20 }, {  81,  20 }, {  61,  20 }, {  40,  20 }, {  20,  20 }, {   0,  20 },
/* 24 */{   0,  42 }, {  20,  42 }, {  40,  42 }, {  61,  42 }, {  81,  42 }, { 101,  42 },
/* 30 */{ 122,  42 }, { 142,  42 }, { 162,  42 }, { 183,  42 }, { 203,  42 }, { 223,  42 },
/* 36 */              { 203,  64 }, { 183,  64 }, { 162,  64 },
/* 40 */                            {  61,  64 }, {  40,  64 }, {  20,  64 }
    }, {
    // LED Index to Flag
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
      4, 4, 4, 4, 4, 4
  }};
#endif

