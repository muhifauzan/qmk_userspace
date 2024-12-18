// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ `    │ 1 │ 2 │ 3 │ 4 │ 5 │ [ │                     │ ] │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │LY1│                     │LY1│ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Caps │ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Shift│ Z │ X │ C │ V │ B │Hyp│                     │Meh│ N │ M │ , │ . │ / │Shift │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│GUI│Alt│ ← │ → │         │Mut│PrS│ │Ins│ = │         │ ↑ │ ↓ │Alt│GUI│Ctl│
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │Hom│ │PgU│   │   │
     *                              │Spc│Bsp├───┤ ├───┤Del│Ent│
     *                              │   │   │End│ │PgD│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_ergodox_pretty(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,            KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(1),              TG(1),   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HYPR,            KC_MEH,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT,                                                KC_UP,   KC_DOWN, KC_RALT, KC_RGUI, KC_RCTL,
                                                     KC_MUTE, KC_PSCR,            KC_INS,  KC_EQL,
                                                              KC_HOME,            KC_PGUP,
                                            KC_SPC,  KC_BSPC, KC_END,             KC_PGDN, KC_DEL, KC_ENT
    )
};
