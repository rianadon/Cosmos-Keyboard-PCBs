# Plum Twist

Pinouts and wiring instructions: [see the Plum Twist website](https://ryanis.cool/cosmos/plum-twist/wiring).

## Manufacturing

To maintain compatibility with the [sockets in Cosmos](https://github.com/rianadon/Cosmos-Keyboards/blob/main/src/assets/key-mx-pcb-plum.step), make sure you manufacture these with 1.2mm thickness.

To assemble these yourself these you'll need 1x of these for every PCB:

- 1N4148 Diodes in SOD-323 Package
- Kailh MX Hotswap Sockets (CPG151101S11)
- SK6812MINI-E LEDs (optional and frankly not worth the time)

The hotswap sockets are the most expensive of the three and AliExpress tends to have the best prices for them. LCSC also has good prices on the purple hotswap sockets. YMMV.

## Assembly

Diode orientation doesn't matter as long as you're consistent. If you want to match the ones I sell, the cathode (the white line on the diode) should face inwards close to the big hole in the center of the PCB. This is also how the diode is oriented in the KiCAD file.

The rest of the placements is explained by the [wiring guide](https://ryanis.cool/cosmos/plum-twist/wiring). Set the hotswap socket in so that it's not blocking the center hole, and the RGB LED should be placed with the chopped corner (GND) closest to the center hole.

## License

All hardware designs, excluding images and logos, are licensed under CERN-OHL-P-2.0 (permissive variant of the CERN Open Hardware License, see LICENSE.txt).
