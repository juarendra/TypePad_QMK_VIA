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

