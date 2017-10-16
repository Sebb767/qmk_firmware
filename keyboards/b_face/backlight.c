/* Copyright 2017 Sebastian Kaim
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef BACKLIGHT_ENABLE

#include "backlight.h"

void backlight_init_ports(void)
{
#if BACKLIGHT_ON_STATE == 0
	backlight_on();
#else
	backlight_off();
#endif

	// setup pwm
	OCR1BH = 0;
	OCR1BL = 0;
}

void backlight_set(uint8_t level)
{
	if( level == 0 ) {
		backlight_off();
	}
	else {
		backlight_on();
		uint8_t pwm = get_pwm_for_brightness(level);
		set_backlight_pwm(pwm);
	}
}

#define PWM_MAX 0xFF
uint8_t get_pwm_for_brightness(uint8_t level)
{
	// we need to cast up here to allow multiplication with 0xFF. We could also use floats, but this is probably a lot faster.
	uint16_t brightness = (uint16_t)level * (uint16_t)PWM_MAX / (uint16_t)BACKLIGHT_LEVELS;
	return (uint8_t)brightness;
}

void backlight_on(void)
{
	_SFR_IO8(0x12) |= _BV(0x4);
}

void backlight_off(void)
{
	_SFR_IO8(0x12) &= ~_BV(0x4);
}

void set_backlight_pwm(uint8_t level) {
	OCR1B = level;
}

#endif // BACKLIGHT_ENABLE
