# Lemon Wired Swizzle Microcontroller

This is a version of the Lemon Wired that swap the two USB ports depending on which one has power incoming.

The pinout is equivalent to v0.4 of the Lemon Wired. However, while GP16 was previously now unused, it's now the software override for the USB swap.

## Theory of operation

I use LM6620 to isolate the the VBUS voltages on both USB sockets. This part has an ST pin that indicates which VBUS was powered. This ST pin drives sel, and if sel is not overwrittten by GP16, then the two USB data lines are swapped using FSUSB42MUX.

Shortly after the device is powered on, power is applied to both VBUS using a PMOS with an RC circuit at the gate to ensure there is a delay so that ST can settle before both VBUS are turned on. Because of the hysteresis on LM6620, turning on both VBUS does not change the ST pin.

## License

Cosmos Keyboards invests time and resources providing this open source design, please support Cosmos and open-source hardware by purchasing products from Cosmos!

Designed by Ryan Adolf/rianadon for Cosmos Keyboards.

Creative Commons Attribution/Share-Alike, all text above must be included in any redistribution. See license.txt for additional details.

*adapted from Adafruit's Creative Commons Attribution/Share-Alike license.*
