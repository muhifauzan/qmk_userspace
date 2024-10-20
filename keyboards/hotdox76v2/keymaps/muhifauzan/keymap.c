// Copyright 2021 JasonRen(biu)
// Copyright 2022 Drashna Jael're (@Drashna Jael're)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ `    │ 1 │ 2 │ 3 │ 4 │ 5 │ [ │                     │ ] │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab  │ Q │ W │ E │ R │ T │LY0│                     │LY1│ Y │ U │ I │ O │ P │    \ │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Caps │ A │ S │ D │ F │ G ├───┤                     ├───┤ H │ J │ K │ L │ ; │    ' │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Shift│ Z │ X │ C │ V │ B │Hyp│                     │Meh│ N │ M │ , │ . │ / │Shift │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │Ctl│GUI│Alt│ ← │ ↑ │         │Esc│Mut│ │Ins│ = │         │ ↓ │ → │Alt│GUI│Ctl│
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │Hom│ │End│   │   │
     *                              │Spc│Del├───┤ ├───┤Bsp│Ent│
     *                              │   │   │PgU│ │PgD│   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_ergodox_pretty(
        LT(3, KC_GRV),  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,            KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    LT(3, KC_MINS),
        LT(2, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX,            TO(1),   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    LT(2, KC_BSLS),
        LT(1, KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, LT(1, KC_QUOT),
        KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HYPR,            KC_MEH,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,        KC_LGUI, KC_LALT, KC_LEFT, KC_UP,                                                  KC_DOWN, KC_RGHT, KC_RALT, KC_RGUI, KC_RCTL,
                                                            KC_ESC,  KC_MUTE,            KC_INS,  KC_EQL,
                                                                     KC_HOME,            KC_END,
                                                   KC_SPC,  KC_DEL,  KC_PGUP,            KC_PGDN, KC_BSPC, KC_ENT
    ),

    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ XXX  │ ~ │ ^ │ : │ & │ @ │ $ │                     │XXX│XXX│ 7 │ 8 │ 9 │XXX│  Num │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ XXX  │ % │ # │ { │ } │ " │LY0│                     │LY2│ / │ 4 │ 5 │ 6 │ * │  XXX │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ XXX  │ ! │ ? │ ( │ ) │ _ ├───┤                     ├───┤ - │ 1 │ 2 │ 3 │ + │Enter │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │      │ | │ < │ [ │ ] │ > │   │                     │   │XXX│ , │ 0 │ . │ = │      │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │   │   │         │   │   │ │   │   │         │   │   │   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │   │ │   │   │   │
     *                              │   │   ├───┤ ├───┤   │   │
     *                              │   │   │   │ │   │   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [1] = LAYOUT_ergodox_pretty(
        XXXXXXX, KC_TILD, KC_CIRC, KC_COLN, KC_AMPR, KC_AT,   KC_DLR,             XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   XXXXXXX, KC_NUM,
        XXXXXXX, KC_PERC, KC_HASH, KC_LCBR, KC_RCBR, KC_DQUO, TO(0),              TO(2),   KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PAST, XXXXXXX,
        XXXXXXX, KC_EXLM, KC_QUES, KC_LPRN, KC_RPRN, KC_UNDS,                              KC_PMNS, KC_P1,   KC_P2,   KC_P3,   KC_PPLS, KC_PENT,
        _______, KC_PIPE, KC_LABK, KC_LBRC, KC_RBRC, KC_RABK, _______,            _______, XXXXXXX, KC_PCMM, KC_P0,   KC_PDOT, KC_PEQL, _______,
        _______, _______, _______, _______, _______,                                                _______, _______, _______, _______, _______,
                                                     _______, _______,            _______, _______,
                                                              _______,            _______,
                                            _______, _______, _______,            _______, _______, _______
    ),

    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ XXX  │ F1│ F2│ F3│ F4│ F5│F11│                     │F12│F6 │F7 │F8 │F9 │F10│PrtSc │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ XXX  │XXX│XXX│XXX│XXX│XXX│LY1│                     │LY3│Bak│Stp│Ref│Fwd│Fav│ScrLk │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ XXX  │XXX│XXX│XXX│XXX│XXX├───┤                     ├───┤Hom│Sch│Com│Cal│XXX│Pause │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │      │XXX│XXX│XXX│XXX│XXX│   │                     │   │Prv│Stp|Ply│Nxt│XXX│      │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │   │   │         │   │   │ │   │   │         │   │   │   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │   │ │   │   │   │
     *                              │   │   ├───┤ ├───┤   │   │
     *                              │   │   │   │ │   │   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [2] = LAYOUT_ergodox_pretty(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,             KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_PSCR,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(1),              TO(3),   KC_WBAK, KC_WSTP, KC_WREF, KC_WFWD, KC_WFAV, KC_SCRL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              KC_WHOM, KC_WSCH, KC_MYCM, KC_CALC, XXXXXXX, KC_PAUS,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,            _______, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, XXXXXXX, _______,
        _______, _______, _______, _______, _______,                                                _______, _______, _______, _______, _______,
                                                     _______, _______,            _______, _______,
                                                              _______,            _______,
                                            _______, _______, _______,            _______, _______, _______
    ),

    /*
     * ┌──────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ BLoad│XXX│XXX│XXX│XXX│XXX│XXX│                     │XXX│XXX│XXX│XXX│XXX│XXX│Power │
     * ├──────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ RBoot│XXX│RTG│SpD│SpI│RGP│LY2│                     │LY3│XXX│XXX│XXX│XXX│XXX│Sleep │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Debug│XXX│HuD│RGB│RGB│HuI├───┤                     ├───┤ ← │ ↓ │ ↑ │ → │XXX│ Wake │
     * ├──────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │      │XXX│SaD│BrD|BrI│SaI│   │                     │   │ScD│VoD│VoU│ScU│XXX│      │
     * └──┬───┼───┼───┼───┼───┼───┴───┘ ┌───┬───┐ ┌───┬───┐ └───┴───┼───┼───┼───┼───┼───┬──┘
     *    │   │   │   │   │   │         │   │   │ │   │   │         │   │   │   │   │   │
     *    └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                              │   │   │   │ │   │   │   │
     *                              │   │   ├───┤ ├───┤   │   │
     *                              │   │   │   │ │   │   │   │
     *                              └───┴───┴───┘ └───┴───┴───┘
     */
    [3] = LAYOUT_ergodox_pretty(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PWR,
        QK_RBT,  XXXXXXX, RGB_TOG, RGB_SPD, RGB_SPI, RGB_M_P, TO(2),              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,
        DB_TOGG, XXXXXXX, RGB_HUD, RGB_RMOD,RGB_MOD, RGB_HUI,                              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_WAKE,
        _______, XXXXXXX, RGB_SAD, RGB_VAD, RGB_VAI, RGB_SAI, _______,            _______, KC_BRID, KC_VOLD, KC_VOLU, KC_BRIU, XXXXXXX, _______,
        _______, _______, _______, _______, _______,                                                _______, _______, _______, _______, _______,
                                                     _______, _______,            _______, _______,
                                                              _______,            _______,
                                            _______, _______, _______,            _______, _______, _______
    )
};

const uint16_t PROGMEM lesc_combo[] = {KC_SPC, KC_G, COMBO_END};
const uint16_t PROGMEM resc_combo[] = {KC_ENT, KC_H, COMBO_END};

const uint16_t PROGMEM lctl_combo[] = {KC_SPC, KC_A, COMBO_END};
const uint16_t PROGMEM rctl_combo[] = {KC_ENT, KC_SCLN, COMBO_END};
// const uint16_t PROGMEM lgui_combo[] = {KC_SPC, KC_S, COMBO_END};
// const uint16_t PROGMEM rgui_combo[] = {KC_ENT, KC_L, COMBO_END};
const uint16_t PROGMEM lalt_combo[] = {KC_SPC, KC_D, COMBO_END};
const uint16_t PROGMEM ralt_combo[] = {KC_ENT, KC_K, COMBO_END};
const uint16_t PROGMEM lsft_combo[] = {KC_SPC, KC_F, COMBO_END};
const uint16_t PROGMEM rsft_combo[] = {KC_ENT, KC_J, COMBO_END};

const uint16_t PROGMEM meh_combo[] = {KC_DEL, KC_F, COMBO_END};
const uint16_t PROGMEM hypr_combo[] = {KC_DEL, KC_D, COMBO_END};

const uint16_t PROGMEM cut_combo[] = {KC_DEL, KC_X, COMBO_END};
const uint16_t PROGMEM copy_combo[] = {KC_DEL, KC_C, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_DEL, KC_V, COMBO_END};
const uint16_t PROGMEM select_all_combo[] = {KC_DEL, KC_A, COMBO_END};

combo_t key_combos[] = {
    COMBO(lesc_combo, KC_ESC),
    COMBO(resc_combo, KC_ESC),
    COMBO(lctl_combo, KC_LCTL),
    COMBO(rctl_combo, KC_RCTL),
    // COMBO(lgui_combo, KC_LGUI),
    // COMBO(rgui_combo, KC_RGUI),
    COMBO(lalt_combo, KC_LALT),
    COMBO(ralt_combo, KC_RALT),
    COMBO(lsft_combo, KC_LSFT),
    COMBO(rsft_combo, KC_RSFT),
    COMBO(meh_combo, KC_MEH),
    COMBO(hypr_combo, KC_HYPR),
    COMBO(cut_combo, C(KC_X)),
    COMBO(copy_combo, C(KC_C)),
    COMBO(paste_combo, C(KC_V)),
    COMBO(select_all_combo, C(KC_A))
};

// Optimization
#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}
#endif
