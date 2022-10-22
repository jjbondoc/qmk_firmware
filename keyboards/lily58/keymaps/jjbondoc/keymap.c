#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		//-------------------------------------------------------------------|----------------------------------------------------------------------      
		KC_ESC,  	KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     					  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,
		KC_TAB,  	KC_Q, 	  KC_W,     KC_E,     KC_R,     KC_T,     					  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_DEL,
		KC_LSFT, 	HOME_A,   HOME_S,   HOME_D,   HOME_F,   KC_G,     					  KC_H,     HOME_J,   HOME_K,   HOME_L,   HOME_SCLN,KC_QUOT,
		KC_LCTL, 	KC_Z,     KC_X, 	KC_C, 	  KC_V,     KC_B,     KC_NO,    KC_NO,    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_NUHS,
							  			KC_LGUI,  KC_LALT,  KC_SPC,   MO(1),    MO(2),	  KC_BSPC,  KC_ENT,   KC_RSFT
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	),

	[1] = LAYOUT(
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
		KC_TRNS, 	KC_F1, 	  KC_F2,    KC_F3,    KC_F4,    KC_F5, 						  KC_F6, 	KC_F7, 	  KC_F8, 	KC_F9, 	  KC_F10,   KC_F11,
		KC_ESC, 	KC_F13,   KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_TRNS, 					  KC_PERC,  KC_LCBR,  KC_RCBR,  KC_CIRC,  KC_AMPR,  KC_F12,
		KC_TRNS, 	KC_F14,   KC_VOLD,  KC_MUTE,  KC_VOLU,  KC_TRNS, 					  KC_HASH,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_AT, 	KC_TRNS,
		KC_TRNS, 	KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_DLR,   KC_LBRC,  KC_RBRC,  KC_NUBS,  KC_TRNS,  KC_GRV,
										KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(3),    KC_TRNS,  KC_DEL,   KC_TRNS
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	),

	[2] = LAYOUT(
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
		KC_TRNS,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5, 						  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
		KC_TRNS,    KC_PSLS,  KC_7,     KC_8,     KC_9,     KC_PMNS, 					  KC_EXLM,  KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  KC_F12,
		KC_TRNS,  	KC_PAST,  KC_4, 	KC_5, 	  KC_6, 	KC_EQL, 					  KC_DOT, 	KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_INS,   KC_TRNS,
		KC_TRNS, 	KC_0, 	  KC_1, 	KC_2, 	  KC_3, 	KC_PPLS,  KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_HOME,  KC_END,   KC_TRNS,  KC_TRNS,
										KC_TRNS,  KC_LGUI, 	KC_TRNS,  MO(3),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	),

	[3] = LAYOUT(
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
		KC_NO, 		KC_NO, 	  KC_NO, 	KC_NO, 	  KC_NO, 	KC_NO,    					  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
		KC_NO,      KC_F12,   KC_F7,    KC_F8, 	  KC_F9, 	KC_NO, 	  					  KC_NO, 	KC_NO, 	  KC_NO,    KC_NO, 	  KC_NO, 	KC_NO,
		KC_CAPS, 	KC_F11,   KC_F4, 	KC_F5,    KC_F6, 	KC_NO, 	  					  KC_NO, 	KC_RSFT,  KC_RCTL,  KC_LALT,  KC_RGUI,  KC_NO,
		KC_NO, 		KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 	KC_NO,    KC_NO, 	TG(4),
										KC_NO, 	  KC_NO,    KC_NO, 	  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_NO
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	),

	[4] = LAYOUT(
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
		KC_NO, 	    KC_1, 	  KC_2,     KC_3,     KC_4,     KC_5, 						  KC_6, 	KC_7, 	  KC_8, 	KC_9, 	  KC_0, 	KC_MINS,
		KC_TAB, 	KC_Q, 	  KC_W, 	KC_E, 	  KC_R, 	KC_T, 						  KC_Y, 	KC_U, 	  KC_I,     KC_O, 	  KC_P,     KC_EQL,
		KC_LSFT, 	KC_A,     KC_S, 	KC_D, 	  KC_F, 	KC_G, 						  KC_H, 	KC_J, 	  KC_K, 	KC_L, 	  KC_SCLN,  KC_QUOT,
		KC_LCTL, 	KC_Z, 	  KC_X, 	KC_C, 	  KC_V, 	KC_B,     KC_NO,    KC_NO, 	  KC_N, 	KC_M, 	  KC_COMM,  KC_DOT,   KC_SLSH,  TG(4),
										KC_LGUI,  KC_LALT,  KC_SPC,   MO(5),    MO(5),    KC_BSPC,  KC_ENT,   KC_RSFT
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	),

	[5] = LAYOUT(
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
		KC_TRNS, 	KC_F1, 	  KC_F2,    KC_F3,    KC_F4,    KC_F5, 						  KC_F6, 	KC_F7, 	  KC_F8, 	KC_F9, 	  KC_F10,   KC_F11,
		KC_ESC, 	KC_F13,   KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_TRNS, 					  KC_PERC,  KC_LCBR,  KC_RCBR,  KC_CIRC,  KC_AMPR,  KC_F12,
		KC_TRNS, 	KC_F14,   KC_VOLD,  KC_MUTE,  KC_VOLU,  KC_TRNS, 					  KC_HASH,  KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_AT, 	KC_TRNS,
		KC_TRNS, 	KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_DLR,   KC_LBRC,  KC_RBRC,  KC_NUBS,  KC_TRNS,  KC_GRV,
										KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_DEL,   KC_TRNS
		//-------------------------------------------------------------------|---------------------------------------------------------------------- 
	)
};