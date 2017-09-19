/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>
Copyright 2017 Sebastian Kaim <sebastian.kaim@sebb767.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#define VENDOR_ID       0x20A0
#define PRODUCT_ID      0x422D
// You can edit those at usbconfig.h about line 250. These values will 
// unforunatly be ignored so far
#define MANUFACTURER    winkeyless.kr
#define PRODUCT         b.face

/* matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 15

#define RGBLED_NUM 16
#define RGBLIGHT_ANIMATIONS

#define NO_UART 1
#define BOOTLOADHID_BOOTLOADER 1

/* key combination for command */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

#ifdef BACKLIGHT_ENABLE
	// so far, this pin is not set correctly. Therefore, the backlight on the keys will not work
    #define BACKLIGHT_PIN C6
    #define BACKLIGHT_LEVELS 5
#endif

#endif
