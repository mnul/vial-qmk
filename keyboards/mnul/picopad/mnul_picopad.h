#pragma once

#include "quantum.h"

// This layout macro helps define keymaps in a 5x2 grid.
// It matches the 10 pins in DIRECT_PINS sequentially.
#define LAYOUT_5x2_direct( \
    k00, k01, \
    k10, k11, \
    k20, k21, \
    k30, k31, \
    k40, k41  \
) \
{ \
    { k00, k01 }, \
    { k10, k11 }, \
    { k20, k21 }, \
    { k30, k31 }, \
    { k40, k41 }  \
}
