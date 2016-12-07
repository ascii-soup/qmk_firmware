// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "kc60.h"

// increase readability
#define _______ KC_TRNS

// Layers
#define _BASE_LAYER 0
#define _NAVIGATION_LAYER 1

/* The default layout of the keymap */
/*
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
    ) { \
  {  K00,  K01,  K02,  K03,    K04,    K05,  K06,    K07,    K08,    K09,  K0A,  K0B,  K0C,  K0D,  },  \
  {  K10,  K11,  K12,  K13,    K14,    K15,  K16,    K17,    K18,    K19,  K1A,  K1B,  K1C,  K1D  },  \
  {  K20,  K21,  K22,  K23,    K24,    K25,  K26,    K27,    K28,    K29,  K2A,  K2B,  K2C,  K2D  },  \
  {  K30,  K31,  K32,  K33,    K34,    K35,  K36,    K37,    K38,    K39,  K3A,  K3B,  K3C,  K3D  },  \
  {  K40,  K41,  K42,  KC_NO,  KC_NO,  K45,  KC_NO,  KC_NO,  KC_NO,  K49,  K4A,  K4B,  K4C,  K4D  }   \
}
NOTE: K49 key is for the key at row 1 and column 15 when you split the backspace in 2 1U key.
*/

/* Split backspace, split l-shift, split r-shift - no split enter (yet!)
 * ,-----------------------------------------------------------------------------------------.
 * | K00 | K01 | K02 | K03 | K04 | K05 | K06 | K07 | K08 | K09 | K0A | K0B | K0C | K0D | K49 |
 * |-----------------------------------------------------------------------------------------+
 * | K10    | K11 | K12 | K13 | K14 | K15 | K16 | K17 | K18 | K19 | K1A | K1B | K1C | K1D    |
 * |-----------------------------------------------------------------------------------------+
 * | K20     | K21 | K22 | K23 | K24 | K25 | K26 | K17 | K28 | K29 | K2A | K2B | K2C         |
 * |-----------------------------------------------------------------------------------------+
 * | K30   |K31| K32 | K33 | K34 | K35 | K36 | K37 | K38 | K39 | K3A | K3B | K3C | K3D       |
 * |-----------------------------------------------------------------------------------------+
 * | K40   | K41   | K42   | K45                             | K4A   | K4B   | K4C   | K4D   |
 * `-----------------------------------------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base layer - arrow keys
   * ,-----------------------------------------------------------------------------------------.
   * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  -  |  +  | Ins | Bksp|
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
   * |-----------------------------------------------------------------------------------------+
   * |  Ctrl  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter     |
   * |-----------------------------------------------------------------------------------------+
   * | Shift |Fn0|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  Up | Shift     |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  | Win   | Alt   |              Spacebar           | Alt   | Left  | Down  | Right |
   * `-----------------------------------------------------------------------------------------'
   */
  [_BASE_LAYER] = KEYMAP(
      KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
      KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
      KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,   \
      KC_LSFT,  KC_FN0,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_UP,    KC_RSFT,  \
      KC_LCTL,  KC_LALT,  KC_LGUI,                      KC_SPC,                                 KC_INS,   KC_RALT,  KC_LEFT,  KC_DOWN,  KC_RIGHT  \
  ),

  /* Layer 0 (Fn0) - navigation keys
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     | Del |Pause|
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     | PrScrn |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |              |
   * |-----------------------------------------------------------------------------------------+
   * |       |   |     |     |     |     |     |     |     |     |     |     | PgUp|           |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       | Home  | PgDn  |  End  |
   * `-----------------------------------------------------------------------------------------'
   */
  [_NAVIGATION_LAYER] = KEYMAP(
      _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   \
      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PSCR,  \
      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  \
      _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  _______,  \
      _______,  _______,  _______,                                _______,                      KC_PAUS,  _______,  KC_HOME,  KC_PGDN,  KC_END    \
  ),
};

const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(_NAVIGATION_LAYER), // FN0
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  return MACRO_NONE;
};
