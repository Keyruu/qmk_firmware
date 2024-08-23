/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdint.h>
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base Layer
	[0] = LAYOUT_split_3x6_3(
            KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
            OSM(MOD_MEH), LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F),           KC_G, KC_H, LGUI_T(KC_J), LALT_T(KC_K), LCTL_T(KC_L), LSFT_T(KC_SCLN), OSM(MOD_MEH),
            OSM(MOD_HYPR), KC_Z, KC_X, KC_C, KC_V, KC_B,                                    KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_HYPR),
            LT(3,KC_TAB), LT(1,KC_SPC), LT(2,KC_ESC),                                       LT(5,KC_ENT), LT(4,KC_BSPC), LT(6,KC_DEL)
        ),

    // Navigation Layer
	[1] = LAYOUT_split_3x6_3(
            C(G(KC_Q)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, QK_BOOT,
            KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,                               KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, CW_TOGG, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        ),


    // Whatever Layer (in miryoku its the mouse layer)
	[2] = LAYOUT_split_3x6_3(
            KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC,                              KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS,
            KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,                                             KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_UP, KC_MS_WH_RIGHT, KC_NO, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3
        ),

    // Media Layer
	[3] = LAYOUT_split_3x6_3(
            C(G(KC_Q)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,                               KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                       KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_MSTP, KC_MPLY, KC_TRNS
        ),

    // Number Layer
	[4] = LAYOUT_split_3x6_3(
            C(G(KC_Q)), KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_QUOT, KC_4, KC_5, KC_6, KC_EQL,                                       KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,
            KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,                                       KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
            KC_LPRN, KC_0, KC_MINS,                                                         KC_TRNS, KC_TRNS, KC_TRNS
        ),

    // Symbol Layer
	[5] = LAYOUT_split_3x6_3(
            C(G(KC_Q)), KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_DQUO, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                              KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,
            KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,                               KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
            KC_LPRN, KC_RPRN, KC_UNDS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        ),

    // Function Layer
	[6] = LAYOUT_split_3x6_3(
            C(G(KC_Q)), KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO,                                      KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,
            KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,                                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_TRNS, KC_TRNS, KC_TRNS,                                                      KC_TRNS, KC_TRNS, KC_TRNS
        )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        // #define RGB_BLUE        0x00, 0x00, 0xFF
        // assign RGB colors to layers
        unsigned char r, g, b;

        switch(layer) {
            case 6:
                // red
                r = 0xFF;
                g = 0x00;
                b = 0x00;
                break;
            case 5:
                // green
                r = 0x00;
                g = 0xFF;
                b = 0x00;
                break;
            case 4:
                // blue
                r = 0x00;
                g = 0x00;
                b = 0xFF;
                break;
            case 3:
                // red
                r = 0xFF;
                g = 0x00;
                b = 0x00;
                break;
            case 2:
                // green
                r = 0x00;
                g = 0xFF;
                b = 0x00;
                break;
            case 1:
                // blue
                r = 0x00;
                g = 0x00;
                b = 0xFF;
                break;
            default:
                break;
        }


        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, r, g, b);
                }
            }
        }
    }
    return false;
}

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

static void render_my_logo(void) {
  static const char PROGMEM my_logo[] = {
        // 'keyruu_qmk_logo', 128x32px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xb0,
0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0xf0,
0x80, 0xc0, 0x60, 0xa0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
0x01, 0x01, 0x01, 0xff, 0xff, 0x02, 0x81, 0x81, 0x80, 0x40, 0x40, 0x60, 0x20, 0x38, 0x18, 0x18,
0x18, 0x08, 0x08, 0x04, 0x06, 0x42, 0xc2, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x40, 0xc0, 0x80,
0x00, 0x00, 0xc0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xe0, 0x10, 0x10, 0x10,
0x00, 0x40, 0x40, 0xff, 0xff, 0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x83, 0x83, 0x83, 0xc7,
0xce, 0xff, 0x7d, 0x19, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40,
0xe0, 0xf0, 0x10, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0x10, 0x00, 0x00, 0x00, 0x00, 0x40, 0xe0,
0xf0, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
0x80, 0x80, 0xc0, 0xff, 0xff, 0xc7, 0x8f, 0x8d, 0x98, 0x98, 0x30, 0x70, 0x60, 0xe0, 0xc0, 0xc0,
0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x11, 0x1f, 0x1f, 0x12, 0x12, 0x12, 0x12, 0x10, 0x18, 0x00,
0x00, 0x00, 0x07, 0x07, 0x0f, 0x0c, 0x18, 0x58, 0x58, 0x4c, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
0x00, 0x80, 0xc0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x07,
0x0e, 0x1e, 0x3c, 0x78, 0xe0, 0xe0, 0xc0, 0x8f, 0x1f, 0x1c, 0x0c, 0x04, 0x04, 0x04, 0x06, 0x1c,
0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x04, 0x04, 0x04, 0x1c, 0x1f,
0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x37, 0x20,
0x20, 0x20, 0x60, 0x7f, 0x7f, 0x60, 0x60, 0x20, 0x21, 0x33, 0x3e, 0x00, 0x00, 0x00, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  oled_write_raw_P(my_logo, sizeof(my_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_my_logo();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE

