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

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, 
	KC_D,  KC_E, KC_F, 
	KC_G, KC_H, KC_I
    ),
    [_FN1] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, 
	KC_D,  KC_E, KC_F, 
	KC_G, KC_H, KC_I
    ),
    [_FN2] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, 
	KC_D,  KC_E, KC_F, 
	KC_G, KC_H, KC_I
    ),
    [_FN3] = LAYOUT_1x7(
        KC_A, KC_B, KC_C, 
	KC_D,  KC_E, KC_F, 
	KC_G, KC_H, KC_I
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_FN1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_FN2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_FN3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  }
};
#endif

