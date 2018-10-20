#include QMK_KEYBOARD_H

#define _BASE 0

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define BR_EURO LALT(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT( \
    KC_MEDIA_PLAY_PAUSE,  KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_AUDIO_MUTE ,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,  KC_MY_COMPUTER, \
    KC_NO, KC_NO, KC_NO,  KC_ESC,    KC_1,    KC_3,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL, KC_BSPC,  KC_HOME, \
    KC_NO,  KC_NO,  KC_NO,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC, KC_ENT, KC_END, \
    LCTL(KC_TAB), KC_NO, KC_NO, BR_EURO,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT, KC_NUHS, KC_ENT,  KC_PGUP, \
    SGUI(KC_S), KC_MS_UP,   KC_NO, KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM,    KC_DOT, KC_SLSH,  KC_NUBS, KC_RSFT, KC_UP,   KC_PGDN, \
    KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_LCTL, KC_LGUI, KC_LALT, KC_ENT,  KC_SPC,  KC_LALT,        KC_SPC, KC_SPC,  KC_BSPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT \
)
};
