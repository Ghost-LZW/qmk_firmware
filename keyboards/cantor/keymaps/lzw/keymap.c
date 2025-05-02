// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include "keycodes.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤MO2├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,          KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,          KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,          KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, MO(2), KC_SPC,     KC_SPC, LT(1, KC_ENT), KC_RALT
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ F1│ F2│ F3│ F4│ F5│ F6│       │ F7│ F8│ F9│F10│F11│F12│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │       │ 7 │ 8 │ 9 │ 0 │ - │ = │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│REC│PLY│ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤MO4├───┐   ┌───┤Ent├───┘
      *                   └───┤CAP│   │   ├───┘
      *                       └───┘   └───┘
      */
        
    [1] = LAYOUT_split_3x6_3(
        KC_F1,           KC_F2,    KC_F3,    KC_F4,   KC_F5,    KC_F6,                            KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,
        KC_1,            KC_2,     KC_3,     KC_4,    KC_5,     KC_6,                             KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS, KC_EQUAL,
        LM(3, MOD_LCTL), DM_REC1,  DM_PLY1,  KC_PGDN, KC_PGUP,  KC_TRNS,                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
                                             KC_LGUI, MO(4),    KC_CAPS,                 KC_TRNS, KC_TRNS, KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Grv│ Q │ W │ E │ R │ T │       │ Y │ U │Ins│ [ │ ] │ | │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │       │ <-│ v │ ^ │ ->│ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤MO2├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,                          KC_TRNS, KC_TRNS,  KC_INS,   KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_LSFT, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,                          KC_LEFT, KC_DOWN,  KC_UP,    KC_RIGHT, KC_TRNS,  KC_TRNS,
        KC_LCTL, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,                          KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                              KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤MO2├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [3] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, MO(2), KC_SPC,     KC_SPC, KC_ENT, KC_RALT
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Grv│ Q │ wu│ E │ R │ T │       │ Y │ U │Ins│ [ │ ] │ | │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ wl│ wd│ wr│MS1│MS2│       │ <-│ v │ ^ │ ->│ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤MO2├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [4] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_TRNS,  MS_WHLU,  KC_TRNS, KC_TRNS,  KC_TRNS,                          KC_TRNS, KC_TRNS,  KC_INS,   KC_LBRC,  KC_RBRC,  KC_BSLS,
        KC_LSFT, MS_WHLL,  MS_WHLD,  MS_WHLR, MS_BTN1,  MS_BTN2,                          MS_LEFT, MS_DOWN,  MS_UP,    MS_RGHT, KC_TRNS,  KC_TRNS,
        KC_LCTL, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,                          KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                              KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

