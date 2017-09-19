#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* enable/disable LEDs based on layout */
#undef USE_SPLIT_BACKSPACE
#define USE_SPLIT_BACKSPACE 0

#undef USE_SPLIT_LEFT_SHIFT
#define USE_SPLIT_LEFT_SHIFT 0

#undef USE_SPLIT_RIGHT_SHIFT
#define USE_SPLIT_RIGHT_SHIFT 0

#undef USE_7U_SPACEBAR
#define USE_7U_SPACEBAR 0

#undef USE_ISO_ENTER
#define USE_ISO_ENTER 0

// extra keycodes
enum layout_seb_keycodes {
	FN_LCTL = 0x5FE0, // left ctl; disable layer 3
	FN_RCTL, 		  // right ctl; disable layer 3
	KC_CTW			  // close tab (crtl+w)
};

#endif //CONFIG_USER_H 
