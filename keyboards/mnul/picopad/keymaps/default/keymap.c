#include QMK_KEYBOARD_H // This includes the main keyboard header from the parent directory (mnul_picopad.h)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x2_direct( // Use the layout macro from mnul_picopad.h
        // Corresponds to pins as defined in DIRECT_PINS for a 5x2 layout
        KC_A,    KC_B,    // Row 0: GP16, GP17
        KC_C,    KC_D,    // Row 1: GP18, GP19
        KC_E,    KC_F,    // Row 2: GP20, GP21
        KC_G,    KC_H,    // Row 3: GP22, GP26
        KC_I,    KC_J     // Row 4: GP27, GP28
    )
    /*
    , // Example for a second layer
    [1] = LAYOUT_5x2_direct(
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, MO(0)
    )
    */
};

// Optional: User-specific code (often related to keymap features)
void keyboard_post_init_user(void) {
    // Custom code to run on keyboard startup
}

// If you add other keymap-specific functions like layer change indicators, etc.,
// they would go here.
