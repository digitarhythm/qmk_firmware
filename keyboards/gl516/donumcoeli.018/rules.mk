# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
#RGB_MATRIX_ENABLE = yes
#RGB_MATRIX_DRIVER = IS31FL3731
LED_ANIMATIONS = yes
AUDIO_ENABLE = no           # Audio output
ENCODER_ENABLE = yes
CUSTOM_MATRIX = lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
DEBOUNCE_TYPE = sym_eager_pk

SRC += matrix.c
