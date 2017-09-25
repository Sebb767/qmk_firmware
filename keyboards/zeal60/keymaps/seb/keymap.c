// Default layout for Zeal60

#include "zeal60.h"

#define KC_CTLW LCTL(KC_W)

// [0,13] is either left key of split backspace (e.g. HHKB \| key) or 2U backspace
// [1,13] is either backslash or ISO Enter
// [2,12] is either ANSI Enter or key left of ISO Enter
// [2,13] is right key of split backspace (e.g. HHKB `~ key)
// [3,1] is right key of split left-shift (e.g ISO key)
// [3,13] is right key of split right-shift (e.g. HHKB Fn key)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[0] = KEYMAP(
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_FN4,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSPO, KC_Y,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, KC_RGUI, KC_FN0,  KC_RCTL
),

// Fn Layer
[1] = KEYMAP(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL ,
	KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_FN1 ,
	KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, BL_DEC,  BL_INC,  KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_HOME, KC_PGUP, KC_TRNS,
	KC_TRNS, KC_F14,  EF_INC,  KC_TRNS, KC_INS,  KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_END,  KC_PGDN, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

// arrow layer
[2] = KEYMAP(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_CTLW, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	FN_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, FN_RCTL
),

// mouse layer
[4] = KEYMAP(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3, KC_TRNS, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_BTN2, KC_BTN1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)


/*
// FN Layer
[n] = KEYMAP(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),
 */


};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1), // std fn key
    [1] = ACTION_LAYER_TOGGLE(2), // toggles arrow keys
	[2] = ACTION_LAYER_OFF(2, ON_PRESS), // disable arrow key lock on ctrl (unused, instead theres a special keycode which also emits CTRL)
	[3] = ACTION_LAYER_MOMENTARY(3), // switches to zeal60 cfg layer (currently unused)
	[4] = ACTION_LAYER_MOMENTARY(4) // arrow key layer
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch(keycode)
	{
			case FN_LCTL:
					if (record->event.pressed)
					{
						layer_off(2);
						register_code(KC_LCTL);
					}
					else
					{
						unregister_code(KC_LCTL);
					}
					return false;
					break;
		case FN_RCTL:
					if (record->event.pressed)
					{
						layer_off(2);
						register_code(KC_RCTL);
					}
					else
					{
						unregister_code(KC_RCTL);
					}
					return false;
					break;
	}
	
  return true;
}
