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

