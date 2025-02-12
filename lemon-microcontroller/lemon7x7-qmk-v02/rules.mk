# Build Options
#   change yes to no to disable
#

#
AUDIO_SUPPORTED = no        # Audio is not supported
RGB_MATRIX_SUPPORTED = yes  # RGB matrix is supported and enabled by default
RGBLIGHT_SUPPORTED = yes    # RGB underglow is supported, but not enabled by default

BOOTMAGIC_ENABLE = yes
# ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes
EXTRAKEY_ENABLE = yes
POINTING_DEVICE_ENABLE = yes

SPLIT_KEYBOARD = yes

POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
CIRQUE_PINNACLE_DIAMETER_MM = 35

RGBLIGHT_ENABLE = yes

SERIAL_DRIVER = vendor
