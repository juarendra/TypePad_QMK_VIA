#pragma once
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DEBOUNCE 5

#define ENCODERS_PAD_A {GP10, GP14}
#define ENCODERS_PAD_B {GP12, GP13 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS {4,4}

#define WS2812_DI_PIN GP26 //D3 - underglow C7 - backlight
#define RGBLED_NUM 6    // Number of L
#define MIDI_BASIC
