#pragma once

enum layers {
    _QWERTY,
    _GAMING,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD,
};

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
    C_ARROW,
    C_HASHA,
};

#define CTL_QT MT(MOD_RCTL, KC_QUOT)

#define SFT_A MT(MOD_LSFT, KC_A)
#define CTL_Z MT(MOD_LCTL, KC_Z)

#define SFT_SCLN MT(MOD_RSFT, KC_SCLN)
#define SFT_SLSH MT(MOD_RSFT, KC_SLSH)

#define RAI_SPC LT(_RAISE, KC_SPC)
#define RAI_ENT LT(_RAISE, KC_ENT)
#define LOW_SLS LT(_LOWER, KC_SLSH)
#define LOW_ESC LT(_LOWER, KC_ESC)
#define LOW_ENT LT(_LOWER, KC_ENT)
#define LOW_BSP LT(_LOWER, KC_BSPC)
#define NMP_TAB LT(_NUMPAD, KC_TAB)
#define ADJ_ESC LT(_ADJUST, KC_ESC)
#define KC_ANGL LSFT(KC_COMM)
#define KC_ANGR LSFT(KC_DOT)
#define NMP_TAB LT(_NUMPAD, KC_TAB)
#define MO_NMPD MO(_NUMPAD)
#define TG_GMNG TG(_GAMING)
