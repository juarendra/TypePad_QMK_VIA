/* Copyright 2024 Juarendra Ramadhani <jrjuarendra@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "typepad.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { NO_LED , NO_LED, NO_LED },
    { 2, 1, 0 },
    { 5, 4, 3 }
}, {
    // LED Index to Physical Position
    { 0, 0 }, { 75, 0 }, { 150, 0 },
    { 0, 32 }, { 75, 32 }, { 150, 32 },
}, {
    // LED Index to Flag
    4, 4, 4,
    4, 4, 4
} };
#endif

