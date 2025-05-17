MCU = RP2040
BOOTLOADER = rp2040
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = yes       # NKRO is fully supported with direct wiring
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no

VIAL_ENABLE = yes
VIAL_INSECURE = yes

# Do NOT include "SRC += matrix.c" for direct pin configurations.
# QMK handles direct pins automatically when DIRECT_PINS is defined.

VIAL_KEYBOARD_UID = $(shell python3 $(QMK_FIRMWARE_DIR)/lib/python/qmk/keyboard.py $(KEYBOARD_H_PATH) uid)
