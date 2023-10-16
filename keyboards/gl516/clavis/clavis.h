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

#pragma once

#include "quantum.h"

//            left side                                        right side
//  1,   6,  11,  16,  21,  26,  31,           36,  41,      46,  51,  56,  60,  64,  66,
//  2,   7,  12,  17,  22,  27,  32,           37,  42,      47,  52,  57,  61,  65,  67,
//  3,   8,  13,  18,  23,  28,  33,           38,  43,      48,  53,  58,  62,  68,  69,
//  4,   9,  14,  19,  24,  29,  34,  35,           39, 44,  49,  54,  59,  63,       70,
//  5,       10,  15,  20,       25,  30,           40, 45,       50,  55

#define LAYOUT( \
  K00, K01, K02, K03, K04, K05, K06,          K50, K51,      K52, K53, K54, K94, K85, K56, \
  K10, K11, K12, K13, K14, K15, K16,          K60, K61,      K62, K63, K64, K55, K95, K66, \
  K20, K21, K22, K23, K24, K25, K26,          K70, K71,      K72, K73, K74, K65, K76, K86, \
  K30, K31, K32, K33, K34, K35, K36, K46,          K80, K81, K82, K83, K84, K75,      K96, \
  K40,      K41, K42, K43,      K44, K45,          K90, K91,      K92, K93 \
) \
{ \
  {   K00,   K01,   K02,   K03,   K04,   K05,   K06 }, \
  {   K10,   K11,   K12,   K13,   K14,   K15,   K16 }, \
  {   K20,   K21,   K22,   K23,   K24,   K25,   K26 }, \
  {   K30,   K31,   K32,   K33,   K34,   K35,   K36 }, \
  {   K40,   K41,   K42,   K43,   K44,   K45,   K46 }, \
  {   K50,   K51,   K52,   K53,   K54,   K55,   K56 }, \
  {   K60,   K61,   K62,   K63,   K64,   K65,   K66 }, \
  {   K70,   K71,   K72,   K73,   K74,   K75,   K76 }, \
  {   K80,   K81,   K82,   K83,   K84,   K85,   K86 }, \
  {   K90,   K91,   K92,   K93,   K94,   K95,   K96 }  \
}

