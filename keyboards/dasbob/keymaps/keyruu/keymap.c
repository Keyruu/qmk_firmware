#include QMK_KEYBOARD_H

enum dasbob_layers {
  _QWERTY,
  _NAVIGATION,
  _MOUSE,
  _MEDIA,
  _NUMBER,
  _SYMBOL,
  _FUNCTION
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │DEL├───┐           ┌───┤ESC│
      *           └───┤SPC├───┐   ┌───┤BSP├───┘
      *               └───│LOW│   │RSE├───┘
      *                   └───┘   └───┘
      */


    [_QWERTY] = LAYOUT_split_3x5_3(
            KC_Q, KC_W, KC_E, KC_R, KC_T,                                            KC_Y, KC_U, KC_I, KC_O, KC_P,
            LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F),           KC_G, KC_H, LGUI_T(KC_J), LALT_T(KC_K), LCTL_T(KC_L), LSFT_T(KC_SCLN),
            KC_Z, KC_X, KC_C, KC_V, KC_B,                                    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
            LT(3,KC_TAB), LT(1,KC_SPC), LT(2,KC_ESC),                                       LT(5,KC_ENT), LT(4,KC_BSPC), LT(6,KC_DEL)
        ),

    [_NAVIGATION] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO,
            KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,                               KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, CW_TOGG,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        ),

    [_MOUSE] = LAYOUT_split_3x5_3(
            KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC,                              KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
            KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,                                KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3
        ),

    // Media Layer
	[_MEDIA] = LAYOUT_split_3x5_3(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,                               KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_MSTP, KC_MPLY, KC_TRNS
        ),

    // Number Layer
	[_NUMBER] = LAYOUT_split_3x5_3(
            KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_QUOT, KC_4, KC_5, KC_6, KC_EQL,                                       KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
            KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,                                       KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_LPRN, KC_0, KC_MINS,                                                         KC_TRNS, KC_TRNS, KC_TRNS
        ),

    // Symbol Layer
	[_SYMBOL] = LAYOUT_split_3x5_3(
            KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_DQUO, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                              KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
            KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,                               KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,
            KC_LPRN, KC_RPRN, KC_UNDS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        ),

    // Function Layer
	[_FUNCTION] = LAYOUT_split_3x5_3(
            KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_F11, KC_F4, KC_F5, KC_F6, KC_NO,                                      KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,
            KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        )
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x5_3(
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
                  'L', 'L', 'L',  'R', 'R', 'R'
    );

// bool process_record_user(uint16_t keycode, keyrecord_t* record) {
//   if (!process_achordion(keycode, record)) { return false; }
//   // Your macros ...
//
//   return true;
// }

// void matrix_scan_user(void) {
//   achordion_task();
// }
