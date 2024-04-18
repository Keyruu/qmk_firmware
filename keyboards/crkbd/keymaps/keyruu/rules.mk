LTO_ENABLE          = yes
EXTRAFLAGS			+= -flto

RGBLIGHT_ENABLE     = no
RGB_MATRIX_ENABLE   = yes # Can't have RGBLIGHT and RGB_MATRIX at the same time.
MOUSEKEY_ENABLE     = yes
OLED_ENABLE         = yes
EXTRAKEY_ENABLE     = yes
COMBO_ENABLE        = no
CAPS_WORD_ENABLE    = yes
TAP_DANCE_ENABLE	= no

BOOTLOADER = atmel-dfu

