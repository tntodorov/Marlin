/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// custom R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1234[] PROGMEM = {
  { OV(  17), 315 },
  { OV(  19), 307 },
  { OV(  22), 297 },
  { OV(  24), 292 },
  { OV(  25), 288 },
  { OV(  28), 279 },
  { OV(  30), 275 },
  { OV(  32), 269 },
  { OV(  35), 263 },
  { OV(  37), 259 },
  { OV(  40), 254 },
  { OV(  44), 248 },
  { OV(  49), 242 },
  { OV(  53), 237 },
  { OV(  57), 233 },
  { OV(  61), 229 },
  { OV(  68), 223 },
  { OV(  72), 219 },
  { OV(  79), 214 },
  { OV(  87), 208 },
  { OV(  95), 203 },
  { OV( 104), 198 },
  { OV( 114), 193 },
  { OV( 124), 188 },
  { OV( 137), 183 },
  { OV( 150), 178 },
  { OV( 164), 173 },
  { OV( 179), 168 },
  { OV( 197), 163 },
  { OV( 215), 159 },
  { OV( 235), 154 },
  { OV( 258), 149 },
  { OV( 282), 144 },
  { OV( 308), 139 },
  { OV( 335), 134 },
  { OV( 365), 129 },
  { OV( 397), 124 },
  { OV( 430), 119 },
  { OV( 466), 114 },
  { OV( 502), 109 },
  { OV( 539), 104 },
  { OV( 585),  98 },
  { OV( 615),  94 },
  { OV( 658),  89 },
  { OV( 667),  87 },
  { OV( 700),  83 },
  { OV( 736),  78 },
  { OV( 776),  72 },
  { OV( 808),  67 },
  { OV( 842),  62 },
  { OV( 875),  55 },
  { OV( 901),  50 },
  { OV( 916),  46 },
  { OV( 934),  41 },
  { OV( 945),  38 },
  { OV( 956),  32 },
  { OV( 963),  30 },
  { OV( 965),  29 },
  { OV( 972),  27 },
  { OV( 977),  25 },
  { OV( 988),  20 },
  { OV( 989),  19 },
  { OV( 991),  17 }
};
