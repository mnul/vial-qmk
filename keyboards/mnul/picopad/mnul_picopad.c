#include QMK_KEYBOARD_H // This will include "mnul_picopad.h" and other QMK core headers

// Define your default keymap.
// The structure [MATRIX_ROWS][MATRIX_COLS] is used to map the flat DIRECT_PINS
// list into a 2D array for easier layer definition.
// This keymap corresponds to the 5 rows and 2 columns defined in your config.h
// and the LAYOUT_5x2_direct macro in mnul_picopad.h.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x2_direct( // Using the LAYOUT_5x2_direct macro from mnul_picopad.h
        // These keycodes map sequentially to the pins in DIRECT_PINS
        // (GP16, GP17, GP18, GP19, GP20, GP21, GP22, GP26, GP27, GP28)
        // Row 0 (Top)
        KC_A,    KC_B,    // GP16, GP17
        // Row 1
        KC_C,    KC_D,    // GP18, GP19
        // Row 2
        KC_E,    KC_F,    // GP20, GP21
        // Row 3
        KC_G,    KC_H,    // GP22, GP26
        // Row 4 (Bottom)
        KC_I,    KC_J     // GP27, GP28
    )
    /*
    // Example of a second layer (layer 1)
    , // Don't forget the comma when adding more layers
    [1] = LAYOUT_5x2_direct(
        KC_TRNS, KC_TRNS, // KC_TRNS means "transparent" - use the key from the layer below
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
        KC_TRNS, MO(0)    // MO(0) - Momentarily activates layer 0 while this key is held.
                          // Good for a "Fn" or "Shift" like key to access layer 0 if you're on layer 1.
                          // Or, if this layer is accessed by MO(1) from layer 0,
                          // you might have KC_TRNS here too, or another function.
    )
    */
};

// This function is called once when the keyboard starts up.
// You can use it for custom initializations.
void keyboard_post_init_user(void) {
    // Custom code to run on keyboard startup can go here.
    // For example, if you had RGB LEDs or an OLED screen to initialize.
    // For a simple macropad, this can often be left empty.
}

// If you were to add features like encoders, per-key RGB, OLED displays, etc.,
// their specific callback functions and handling code would also go in this file.
