/* This is a super basic keymap following instructions from the Handwired guide:
   https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire
   Current keymap was just for testing purposes
*/

#include "kb.h"

enum layers {
	_COLEMAK,
	_QWERTY,
	_RAISE,
	_LOWER,
	_ADJUST
};

enum keycodes {
	QWERTY = SAFE_RANGE,
	RAISE,
	LOWER,
	ADJUST
};

#define QWERTY  TT(_QWERTY)
#define RAISE   TT(_RAISE)
#define LOWER   TT(_LOWER)
#define ADJUST  TT(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Colemak
	* ,-----------------------------------------------------------------------------------.
	* |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |Enter |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |  "   |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | Ctrl |ADJUST| Alt  |  OS  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
	* `-----------------------------------------------------------------------------------'
	*/
	[_COLEMAK] = KEYMAP(
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
		KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
		KC_ESC,  KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
  		KC_LCTL, ADJUST,  KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),



	/* Qwerty
	* ,-----------------------------------------------------------------------------------.
	* |      |      |      |      |      |      |      |      |      |      |      |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |      |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |      |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |      |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |      |      |      |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |      |      |      |      |      |      |      |      |      |      |      |
	* `-----------------------------------------------------------------------------------'
	*/
	[_QWERTY] = KEYMAP(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  		_______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______, 
  		_______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, _______, 
  		_______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    _______, _______, _______, _______, 
  		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),



	/* RAISE - Symbols and Media Controls
	* ,-----------------------------------------------------------------------------------.
	* |      |      |      |      |      |      |      |      |      |      |      |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |      |      |      |      |             |      |      |      |      |      |
	* `-----------------------------------------------------------------------------------'
	*/
	[_RAISE] = KEYMAP(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, 
		_______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, 
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______, _______),



	/* LOWER - Number pad and F Keys
	* ,-----------------------------------------------------------------------------------.
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |  F1  |  F2  |  F3  |  F4  |  F5  |   _  |   +  |   {  |   }  |  |   |      |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |      |  F6  |  F7  |  F8  |  F9  |  F10 |   -  |   =  |   [  |   ]  |  \   |      |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |  F11 |  F12 |  NO  |  NO  |  NO  |   `  |   ~  |  NO  | Home | End  |  NO  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |  NO  |      |      |      |             |  NO  | Next | Vol- | Vol+ | Play |
	* `-----------------------------------------------------------------------------------'
	*/
	[_LOWER] = KEYMAP(
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, _______,
        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, _______,
        _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,  KC_TILD, XXXXXXX, KC_HOME, KC_END,  XXXXXXX,
        _______, XXXXXXX, _______, _______, _______, _______, _______, XXXXXXX, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),


	/* ADJUST - Number pad and F Keys
	* ,-----------------------------------------------------------------------------------.
	* |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |      |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |      |      |      |  NO  |             |  NO  |      |      |      |      |
	* `-----------------------------------------------------------------------------------'
	*/
	[_ADJUST] = KEYMAP(
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, 
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, XXXXXXX, _______, _______, XXXXXXX, _______, _______, _______, _______)
};












/* UNUSED - (But I may use in future and don't want to type out again)
		KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,



  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |


	/* RAISE - Symbols and Media Controls
	* ,-----------------------------------------------------------------------------------.
	* |      |      |      |      |      |      |      |      |      |      |      |      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |   =  |   -  |   \  |   [  |   ]  |Enter |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  | Home | End  |  NO  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
	* `-----------------------------------------------------------------------------------'

	[_RAISE] = KEYMAP(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, 
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_EQL,  KC_MINS, KC_BSLS, KC_LCBR, KC_RCBR, _______, 
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_END,  XXXXXXX, 
        _______, _______, _______, _______, XXXXXXX, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),








			/* LOWER - Number pad and F Keys
	* ,-----------------------------------------------------------------------------------.
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |NumLck|   /  |   *  |  -   |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |  NO  |   7  |   8  |   9  |  +   |
	* |------+------+------+------+------+-------------+------+------+------+------+------|
	* |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  NO  |   4  |   5  |   6  |Enter |
	* |------+------+------+------+------+------|------+------+------+------+------+------|
	* |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  NO  |   1  |   2  |   3  |Bkspc |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* |      |      |      |      |      |             |      |   0  |   0  |   .  |  Del |
	* `-----------------------------------------------------------------------------------'

	[_LOWER] = KEYMAP(
		_______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK,  KC_SLSH, KC_ASTR,  KC_MINS,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_7,  KC_KP_8, KC_KP_9,  KC_PLUS,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, KC_KP_4,  KC_KP_5, KC_KP_6,  KC_ENT,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_KP_1,  KC_KP_2, KC_KP_3,  KC_BSPC,
        _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_KP_0,  KC_KP_0, KC_DOT,   KC_DEL)




*/
