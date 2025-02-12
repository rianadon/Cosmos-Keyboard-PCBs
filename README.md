# Cosmos Keyboard PCBs

This repository contains the sources and specs for the PCBs I've made for my pet project, [Cosmos Keyboard Generator](https://ryanis.cool/cosmos).

## Plum Twist

<img src="plum-twist/plum-twist.png" align="left" width="120" height="121" />

A single-key PCB, with hotswap and RGB support that locks into place. [[Main Website](https://ryanis.cool/cosmos/plum-twist/)] [[Buy](https://cosmos-store.ryanis.cool/products/plum-twist)]

It's similar in functionality to the [Amoeba PCBs](https://github.com/JKing-B16/keyboard-pcbs) (in fact I've used some of the same footprints), but I've switched to large SMD pads to make wiring easier and designed the footprint to twist into a custom socket.

The version here on GitHub is pared down in terms of artwork and panelization, as my goal here is to make it easy for you to produce your own functionally identical version, not copy 1:1 what I sell. It's cheaper through JLC to buy the non-panelized version anyways.

To maintain compatibility with the [sockets in Cosmos](https://github.com/rianadon/Cosmos-Keyboards/blob/main/src/assets/key-mx-pcb-plum.step), make sure you manufacture these with 1.2mm thickness.

To assemble these yourself these you'll need 1x of these for every PCB:

- 1N4148 Diodes in SOD-323 Package
- Kailh MX Hotswap Sockets (CPG151101S11)
- SK6812MINI-E LEDs (optional and frankly not worth the time)

The hotswap sockets are the most expensive of the three and AliExpress tends to have the best prices for them. YMMV.

Pinouts and wiring instructions are [on the Plum Twist website](https://ryanis.cool/cosmos/plum-twist/wiring).

*A choc version is sadly impossible because the choc hotswap socket is too large to enable twisting while keeping the PCB footprint small.*

## Lemon Microcontroller

A work-in-progress RP2040 microcontroller with 2 spec-compliant USB ports, a VIK connector, and FPC connectors for connecting keys.

The rightmost USB (closest to the RP2040 chip) is for programming. The leftmost PCB (by the SPI flash) cannot be used for programming.

### V0.0 Pinouts
```
Secondary USB pins: GP0 (D+) and GP1 (D-)
Column pins: GP11, GP24, GP23, GP22, GP21, GP20, GP7
Row pins: GP10, GP6, GP9, GP4, GP8, GP5, GP3
LED pin: GP25
VIK SPI: GP12 (RX), GP13 (CS), GP13 (SCK), GP15 (TX). Uses SPI1.
VIK I2C: GP18 (SDA0, GP19 (SCL). Uses I2C 1.
Onboard neopixel: GP17
```

**Notes for v0.0**: Due to an error in routing, GP25 and GP11 got are in the wrong spot in the FPC connector (FPC1) to be compatible with the Skree PCBs. This is why they are swapped in the pinout and don't match the schematic. The reset button didn't get wired in the PCB, so to upload you need to hold down BOOT while plugging in the microcontroller.

### V0.2 Pinouts

```
Secondary USB pins: GP0 (D+) and GP1 (D-)
Column pins: GP25, GP24, GP23, GP22, GP21, GP20, GP7
Row pins: GP10, GP6, GP9, GP4, GP8, GP5, GP3
LED data pin: GP2
LED power pin: GP11 (active low)
VIK SPI: GP12 (RX), GP13 (CS), GP13 (SCK), GP15 (TX). Uses SPI1.
VIK I2C: GP18 (SDA0, GP19 (SCL). Uses I2C 1.
VIK GPIO: GP16 (1st, digital only), GP26 (2nd, has ADC)
Onboard neopixel: GP17
```

### Testing USB & LED

If you want to have some fun, install Arduino and then from Arduino IDE install the Adafruit TinyUSB and Adafruit NeoPixel libraries. Set your board to `Generic RP2040`, set `Tools -> CPU Speed` to `120 MHz`, and upload the `lemon_test` sketch in this repository. With the serial monitor open, you should see information printed when you plug in/out devices to the secondary USB port. The RGB LED will also slowly fade through colors.

Alternatively, you can upload `File -> Examples -> Adafruit TinyUSB Library -> DualRole -> Simple -> device_info`, which will only test USB. I based `lemon_test` off of this code.

### QMK examples

I've uploaded a simple QMK example with the correct wiring for the microcontroller. It uses the full 7x7 matrix, so it's great for testing that everything works. I haven't gotten to making the split work correctly though. For that you need to reference https://github.com/sekigon-gonnoc/qmk_firmware/tree/rp2040/keyboards/pico_pico_usb.

To use it copy `lemon-microcontroller/lemon7x7-qmk-v0` to `<qmk_firmware>/keyboards/cosmos/lemon7x7` then run `qmk flash -j4 -kb cosmos/lemon7x7 -km via -bl uf2-split-right`.

If you received your Lemon from me, it's probably already running this program.

## Licensing

All hardware designs, excluding images and logos, are licensed under CERN-OHL-P-2.0 (permissive variant of the CERN Open Hardware License, see LICENSE.txt).
