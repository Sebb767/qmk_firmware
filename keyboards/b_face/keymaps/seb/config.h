#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* enable/disable LEDs based on layout */
// extra keycodes
//enum layout_seb_keycodes {
//	FN_LCTL = 0x5FE0, // left ctl; disable layer 3
//	FN_RCTL, 		  // right ctl; disable layer 3
//	KC_CTW			  // close tab (crtl+w)
//};

#define FN_LCTL 0x5FE0 // left ctl; disable layer 3
#define FN_RCTL 0x5FE1 // right ctl; disable layer 3
#define KC_CTW 0x5FE2  // close tab (crtl+w)
#endif //CONFIG_USER_H 
