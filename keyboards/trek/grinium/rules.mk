# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no
AUDIO_ENABLE = no           # Audio output
GRAVE_ESC_ENABLE = yes
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
MAGIC_ENABLE = no
ENCODER_ENABLE = yes
CUSTOM_MATRIX = lite

CONSOLE_ENABLE = no
COMMAND_ENABLE = no

DEBOUNCE_TYPE = sym_eager_pk

SRC += matrix.c
