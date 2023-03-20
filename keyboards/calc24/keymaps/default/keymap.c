#include QMK_KEYBOARD_H

#define _BASE 0
#define _MOD 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_ortho_6x4(
        TG(_MOD), LALT(KC_J), LALT(KC_S), KC_BACKSPACE,
        KC_TAB, LALT(KC_P), KC_CIRCUMFLEX, KC_KP_SLASH,
        KC_7,   KC_8,   KC_9,   KC_KP_ASTERISK,
        KC_4,   KC_5, KC_6, KC_KP_MINUS,
        KC_1,   KC_2, KC_3, KC_KP_PLUS,
        KC_0,   KC_DOT, KC_X, KC_ENTER
    ),
    [_MOD] = LAYOUT_ortho_6x4(
        TG(_MOD), KC_GRAVE, KC_F14, LCTL(KC_BACKSPACE),
        LSFT(KC_TAB), LSFT(KC_E), LALT(KC_R), LCTL(KC_R),
        LALT(KC_I), LALT(KC_O), LALT(KC_L), KC_LEFT_PAREN,
        LALT(KC_B), LALT(KC_G), KC_UP, KC_RIGHT_PAREN,
        KC_F14, KC_LEFT, KC_F14, KC_RIGHT,
        KC_F14, KC_F14, KC_DOWN, KC_F14
    )

};