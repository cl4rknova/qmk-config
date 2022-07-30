#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_planck_1x2uC(

            KC_Q,          KC_W,            KC_E,            KC_R,          KC_T,       _______,    _______,      KC_Z,       KC_U,             KC_I,             KC_O,             KC_P,
            KC_A,          LT(5,KC_S),      LT(1,KC_D),      LT(3,KC_F),    KC_G,       _______,    _______,      KC_H,       LT(4,KC_J),       LT(2,KC_K),       LT(6,KC_L),       KC_DOT,
            KC_Y,          LCTL_T(KC_X),    LALT_T(KC_C),    KC_V,          KC_B,       _______,    _______,      KC_N,       KC_M,             LALT_T(KC_NO),    LCTL_T(KC_NO),    LT(7,KC_NO),
            _______,       _______,           _______,       KC_SPC,        KC_LSFT,    _______,                  KC_RCTL,    KC_LGUI,          _______,          _______,          KC_NO

            ),
	[1] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_TRNS,         KC_TRNS,        KC_TRNS,       KC_P,       _______,    _______,      KC_TRNS,    KC_BTN1,    KC_WH_U,    KC_BTN2,    KC_TRNS,
            KC_TRNS,       KC_BTN2,         KC_TRNS,        KC_BTN1,       KC_TRNS,    _______,    _______,      KC_TRNS,    KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,
            KC_TRNS,       KC_TRNS,         KC_TRNS,        KC_TRNS,       KC_TRNS,    _______,    _______,      KC_TRNS,    KC_WH_L,    KC_WH_D,    KC_WH_R,    KC_TRNS,
            _______,       _______,           _______,      KC_TRNS,       KC_TRNS,    _______,                  KC_TRNS,    KC_TRNS,    _______,    _______,    KC_NO

            ),
    [2] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_TRNS,         KC_PGUP,        KC_TRNS,        KC_P,       _______,    _______,      KC_TRNS,    KC_C,       KC_R,       KC_L,          KC_BSPC, 
            KC_LEFT,       KC_UP,           KC_DOWN,        KC_RGHT,        KC_U,       _______,    _______,      KC_H,       KC_LGUI,    KC_N,       LCTL(KC_LALT), LCA(KC_LSFT),
            KC_TRNS,       KC_HOME,         KC_PGDN,        KC_END,         KC_K,       _______,    _______,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS, 
            _______,       _______,         _______,        KC_TRNS,        KC_DEL,     _______,                  KC_SPC,     KC_TRNS,    _______,      _______,     KC_NO

            ),
    [3] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_TRNS,    _______,    _______,      KC_TRNS,    KC_UNDS,    KC_PIPE,    KC_QUOT,       KC_BSPC, 
            KC_CIRC,       KC_ASTR,         KC_AMPR,        _______,        KC_TRNS,    _______,    _______,      KC_HASH,    KC_TILD,    KC_SLSH,    KC_DQUO,       KC_DLR,
            KC_TRNS,       KC_TRNS,         KC_TRNS,        KC_TRNS,        KC_TRNS,    _______,    _______,      KC_TRNS,    KC_MINS,    KC_NUBS,    KC_GRV,        KC_TRNS,
            _______,       _______,         _______,        KC_TRNS,        KC_TRNS,    _______,                  KC_TRNS,    KC_TRNS,    _______,    _______,       KC_NO

            ),
    [4] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_COLN,         KC_LT,          KC_GT,           KC_SCLN,    _______,    _______,      KC_TRNS,    KC_TRNS,    KC_DOT,      KC_COMM,      KC_MINS, 
            KC_LCBR,       KC_RCBR,         KC_LPRN,        KC_RPRN,         KC_AT,      _______,    _______,      KC_TRNS,    _______,      KC_EQL,    KC_PLUS,      KC_SCLN, 
            KC_TRNS,       KC_EXLM,         KC_LBRC,        KC_RBRC,         KC_TRNS,    _______,    _______,      KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,      KC_TRNS,
            _______,       _______,         _______,        KC_TRNS,         KC_TRNS,    _______,                  KC_TRNS,    KC_TRNS,    _______,      _______,     KC_NO

            ),
    [5] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_TRNS,         KC_TRNS,       KC_TRNS,     KC_TRNS,         _______,    _______,         KC_1,        KC_F7,        KC_F8,        KC_F9,      KC_F10,
            KC_TRNS,       _______,         LCTL(KC_LALT), KC_TRNS,     KC_TRNS,         _______,    _______,         KC_TRNS,     KC_F4,        KC_F5,        KC_F6,      KC_F11,
            KC_TRNS,       KC_A,            KC_TRNS,       KC_TRNS,     KC_TRNS,         _______,    _______,         KC_TRNS,     KC_F1,        KC_F2,        KC_F3,      KC_F12,
            _______,       _______,         _______,       KC_TRNS,     KC_V,            _______,                     KC_TRNS,     KC_TRNS,     _______,      _______,     KC_NO

            ),
    [6] = LAYOUT_planck_1x2uC(

            KC_TRNS,       KC_7,           KC_8,          KC_9,        RGB_MOD,          _______,    _______,         KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,
            KC_0,          KC_1,           KC_2,          KC_3,        KC_TRNS,          _______,    _______,         KC_TRNS,     KC_TRNS,     KC_TRNS,    _______,     KC_TRNS,
            KC_TRNS,       KC_4,           KC_5,          KC_6,        KC_TRNS,          _______,    _______,         KC_TRNS,     KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,
            _______,       _______,        _______,       KC_TRNS,     KC_TRNS,          _______,                     KC_TRNS,     KC_TRNS,     _______,    _______,   KC_NO

            ),
    [7] = LAYOUT_planck_1x2uC(

            RALT(KC_P),    KC_TRNS,        KC_COLN,    KC_ESC,     KC_TRNS,      _______,     _______,                KC_TRNS,     KC_TRNS,     KC_TRNS,       KC_TRNS,        KC_DEL,
            RALT(KC_Q),    KC_PERC,        KC_SLSH,    KC_ENT,     KC_TRNS,      _______,     _______,                KC_TRNS,     KC_LGUI,     KC_TRNS,       KC_TRNS,        QK_BOOT,
            RALT(KC_Y),    RALT(KC_S),     KC_TRNS,    KC_EXLM,    KC_INS,       _______,     _______,                KC_COMM,     KC_DOT,      RALT(KC_COMM), RCTL_T(KC_DOT), _______,
            _______,       _______,        _______,    KC_BSPC,    KC_TAB,       _______,                             _______,     KC_TRNS,     _______,       _______,        KC_NO

            )};

