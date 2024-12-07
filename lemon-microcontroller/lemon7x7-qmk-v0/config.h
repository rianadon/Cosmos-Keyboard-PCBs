/*
Copyright 2022 BentoBox Studio
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see http://www.gnu.org/licenses/.
*/

#pragma once

#define EE_HANDS

/* #define ROTATIONAL_TRANSFORM_ANGLE -30 */
/* #define POINTING_DEVICE_ROTATION_180_RIGHT */
/* #define POINTING_DEVICE_INVERT_X */

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP14
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP15
#define POINTING_DEVICE_CS_PIN GP13

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
/* #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP10 */
