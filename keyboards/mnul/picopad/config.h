#pragma once

#include "quantum.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0004 // Match info.json
#define DEVICE_VER      0x0001
#define MANUFACTURER    "mnul"
#define PRODUCT         "PicoPad" // Updated to match info.json keyboard_name
#define DESCRIPTION     "A 5x2 RP2040 macropad by mnul with Vial, direct wired keys, named PicoPad."

// Define the GPIO pins for each key directly.
// The order corresponds to the keymap: (Row 0, Col 0), (R0,C1), (R1,C0), (R1,C1), ...
// This matches the physical layout:
// GP16 (0,0) | GP17 (0,1)
// GP18 (1,0) | GP19 (1,1)
// GP20 (2,0) | GP21 (2,1)
// GP22 (3,0) | GP26 (3,1)
// GP27 (4,0) | GP28 (4,1)
#define DIRECT_PINS { \
    GP16, GP17,  /* Row 0 */ \
    GP18, GP19,  /* Row 1 */ \
    GP20, GP21,  /* Row 2 */ \
    GP22, GP26,  /* Row 3 */ \
    GP27, GP28   /* Row 4 */ \
}

// These define how the flat list of DIRECT_PINS is logically arranged in `keymaps[][][]`.
#define MATRIX_ROWS 5 // 5 rows
#define MATRIX_COLS 2 // 2 columns

#define DEBOUNCE 5

#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RP2040_FLASH_SIZE_KB 2048
