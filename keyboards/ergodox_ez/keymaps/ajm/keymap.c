#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  CMD_TAB,
  CMD_TILDE,
  ALT_TAB
};

enum layers {
  MAC,
  WINDOWS,
  MAC_NAV,
  GAMES,
  WIN_NAV,
  SYMBOLS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [MAC] = LAYOUT_ergodox(

    KC_TRANSPARENT,         KC_1,                   KC_2,                   KC_3,                   KC_4,                   KC_5,                   KC_ESCAPE,
    KC_TAB,                 KC_Q,                   KC_W,                   KC_E,                   KC_R,                   KC_T,                   KC_TRANSPARENT,
    KC_TAB,                 KC_A,                   KC_S,                   KC_D,                   KC_F,                   KC_G,
    KC_LSHIFT,              KC_Z,                   KC_X,                   KC_C,                   KC_V,                   KC_B,                   KC_TRANSPARENT,
    KC_LCTRL,               KC_LGUI,                KC_MEDIA_PLAY_PAUSE,    KC_AUDIO_MUTE,          MO(MAC_NAV),

                            KC_INSERT,              TG(WINDOWS),
                                                    KC_TRANSPARENT,
    MO(SYMBOLS),            KC_ENTER,               KC_TRANSPARENT,

    KC_ESCAPE,              KC_6,                   KC_7,                   KC_8,                   KC_9,                   KC_0,                   KC_F12,
    KC_TRANSPARENT,         KC_Y,                   KC_U,                   KC_I,                   KC_O,                   KC_P,                   KC_BSLASH,
                            KC_H,                   KC_J,                   KC_K,                   KC_L,                   KC_SCOLON,              KC_RGUI,
    KC_TRANSPARENT,         KC_N,                   KC_M,                   KC_COMMA,               KC_DOT,                 KC_SLASH,               KC_RSHIFT,
                                                    MO(SYMBOLS),            KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_RCTRL,

    TG(GAMES),              KC_DELETE,
    KC_TRANSPARENT,
    KC_RALT,                KC_BSPACE,              KC_SPACE

    ),

  [WINDOWS] = LAYOUT_ergodox(

    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         MO(WIN_NAV),

                            KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
                            KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_RGUI,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT

    ),

  [MAC_NAV] = LAYOUT_ergodox(

    CMD_TILDE,              KC_F1,                  KC_F2,                  KC_F3,                  KC_F4,                  KC_F5,                  KC_TRANSPARENT,
    CMD_TAB,                LGUI(KC_Q),             LGUI(KC_W),             LGUI(KC_E),             LGUI(KC_R),             LGUI(KC_T),             LGUI(KC_BSLASH),
    KC_TRANSPARENT,         LGUI(KC_A),             LGUI(KC_S),             LGUI(KC_D),             LGUI(KC_F),             LGUI(KC_G),
    KC_TRANSPARENT,         LGUI(KC_Z),             LGUI(KC_X),             LGUI(KC_C),             LGUI(KC_V),             LGUI(KC_L),             LGUI(LSFT(KC_R)),
    KC_TRANSPARENT,         LGUI(KC_Y),             KC_AUDIO_VOL_DOWN,      KC_AUDIO_VOL_UP,        KC_TRANSPARENT,

                            KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_F6,                  KC_F7,                  KC_F8,                  KC_F9,                  KC_F10,                 KC_F11,
    LALT(LGUI(KC_BSLASH)),  KC_TRANSPARENT,         LGUI(KC_LBRACKET),      KC_UP,                  KC_PGUP,                KC_TRANSPARENT,         KC_F12,
                            KC_HOME,                KC_LEFT,                KC_DOWN,                KC_RIGHT,               KC_END,                 KC_TRANSPARENT,
    LSFT(LGUI(KC_5)),       LGUI(KC_N),             LGUI(KC_RBRACKET),      KC_TRANSPARENT,         KC_PGDOWN,              KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_MS_BTN2,             KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_DELETE,              KC_TRANSPARENT

    ),

  [GAMES] = LAYOUT_ergodox(

    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

                            KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_EQUAL,               KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_F12,
    KC_TAB,                 KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
                            KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_QUOTE,
    KC_ENTER,               KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_RALT,                KC_EQUAL,               KC_GRAVE,               KC_LBRACKET,            KC_RBRACKET,

    KC_TRANSPARENT,         KC_ESCAPE,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT

    ),

  [WIN_NAV] = LAYOUT_ergodox(

    KC_TRANSPARENT,         KC_F1,                  KC_F2,                  KC_F3,                  KC_F4,                  KC_F5,                  KC_TRANSPARENT,
    ALT_TAB,                LCTL(KC_Q),             LCTL(KC_W),             LCTL(KC_E),             LCTL(KC_R),             LCTL(KC_T),             LCTL(KC_BSLASH),
    KC_TRANSPARENT,         LCTL(KC_A),             LCTL(KC_S),             LCTL(KC_D),             LCTL(KC_F),             LCTL(KC_G),
    KC_TRANSPARENT,         LCTL(KC_Z),             LCTL(KC_X),             LCTL(KC_C),             LCTL(KC_V),             LCTL(KC_L),             LGUI(KC_R),
    KC_TRANSPARENT,         LCTL(KC_Y),             KC_AUDIO_VOL_DOWN,      KC_AUDIO_VOL_UP,        KC_TRANSPARENT,

                            KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_F6,                  KC_F7,                  KC_F8,                  KC_F9,                  KC_F10,                 KC_F11,
    LALT(LCTL(KC_BSLASH)),  KC_TRANSPARENT,         LCTL(KC_LBRACKET),      KC_UP,                  KC_PGUP,                KC_TRANSPARENT,         KC_F12,
                            KC_HOME,                KC_LEFT,                KC_DOWN,                KC_RIGHT,               KC_END,                 KC_TRANSPARENT,
    LALT(LSFT(KC_5)),       LCTL(KC_N),             LCTL(KC_RBRACKET),      KC_TRANSPARENT,         KC_PGDOWN,              KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_MS_BTN2,             KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_DELETE,              KC_TRANSPARENT

    ),

  [SYMBOLS] = LAYOUT_ergodox(

    KC_TRANSPARENT,         KC_CIRC,                KC_AMPR,                KC_ASTR,                KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_PIPE,                KC_TRANSPARENT,         KC_LPRN,                KC_RPRN,                KC_LBRACKET,            KC_RBRACKET,            KC_TRANSPARENT,
    KC_PLUS,                KC_QUOTE,               KC_DQUO,                KC_EQUAL,               KC_MINUS,               KC_UNDS,
    KC_GRAVE,               KC_TILD,                KC_LT,                  KC_GT,                  KC_LCBR,                KC_RCBR,                KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

                            KC_TRANSPARENT,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_EXLM,                KC_AT,                  KC_HASH,                KC_DLR,                 KC_PERC,                KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_LBRACKET,            KC_RBRACKET,            KC_LPRN,                KC_RPRN,                KC_ASTR,                KC_PIPE,
                            KC_UNDS,                KC_MINUS,               KC_EQUAL,               KC_DQUO,                KC_QUOTE,               KC_AMPR,
    KC_TRANSPARENT,         KC_LCBR,                KC_RCBR,                KC_PLUS,                KC_GRAVE,               KC_TILD,                KC_CIRC,
                                                    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT

    ),

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

bool _cmd_flag = false;
bool _alt_flag = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {

    // if this is a keypress of one of our custom keys and the flag isn't
    // already tripped, activate the correct modifier
    if (!_cmd_flag && (keycode == CMD_TAB || keycode == CMD_TILDE)) {
      _cmd_flag = true;
      SEND_STRING(SS_DOWN(X_LGUI));
    }
    if (!_alt_flag && keycode == ALT_TAB) {
      _alt_flag = true;
      SEND_STRING(SS_DOWN(X_LALT));
    }

    switch (keycode) {
      case CMD_TAB:
      case ALT_TAB:
        SEND_STRING("\t");
        return false;
        break;
      case CMD_TILDE:
        SEND_STRING("~");
        return false;
        break;

      // dynamically generate these.
      case EPRM:
        eeconfig_init();
        return false;
        break;
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
        break;
      case RGB_SLD:
        rgblight_mode(1);
        return false;
        break;
    }

  } else {

    // if this is a release of a key other than our custom keys or a shift key
    // and the flag is tripped, remove the correct modifier
    if (_cmd_flag && keycode != CMD_TAB && keycode != CMD_TILDE && keycode != KC_LSHIFT && keycode != KC_RSHIFT) {
      SEND_STRING(SS_UP(X_LGUI));
      _cmd_flag = false;
    }
    if (_alt_flag && keycode != ALT_TAB && keycode != KC_LSHIFT && keycode != KC_RSHIFT) {
      SEND_STRING(SS_UP(X_LALT));
      _alt_flag = false;
    }

  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      default:
        break;
    }
    return state;

};
