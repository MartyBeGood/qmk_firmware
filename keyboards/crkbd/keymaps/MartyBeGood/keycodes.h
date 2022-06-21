#pragma once

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
    _GAMING,
};

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    C_ARROW
};

#define SFT_EQ MT(MOD_LSFT, KC_EQL)
#define SFT_QT MT(MOD_RSFT, KC_QUOT)

#define SFT_A MT(MOD_LSFT, KC_A)
#define CTL_Z MT(MOD_LCTL, KC_Z)

#define SFT_SCLN MT(MOD_RSFT, KC_SCLN)
#define CTL_SLSH MT(MOD_RCTL, KC_SLSH)
#define SFT_ENT MT(MOD_RSFT, KC_ENT)

#define RAI_SPC LT(_RAISE, KC_SPC)
#define RAI_ENT LT(_RAISE, KC_ENT)
#define LOW_ESC LT(_LOWER, KC_ESC)
#define LOW_SLS LT(_LOWER, KC_SLSH)
#define LOW_BSP LT(_LOWER, KC_BSPC)
#define LOW_DEL LT(_LOWER, KC_DEL)
#define LOW_TAB LT(_LOWER, KC_TAB)
#define ADJ_ESC LT(_ADJUST, KC_ESC)
#define KC_ANGL LSFT(KC_COMM)
#define KC_ANGR LSFT(KC_DOT)
#define MO_NMPD MO(_NUMPAD)
