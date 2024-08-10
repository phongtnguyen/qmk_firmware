#include QMK_KEYBOARD_H

enum my_layers {
    _MAIN,
    _GAME,
    _OSX,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,           KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT, KC_SPC,                    OSL(_FN),KC_LBRC, KC_RBRC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAME] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_INSERT,KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT,KC_DELETE,KC_PAGE_UP,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,           XXXXXXX, S(KC_PAUS),XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, KC_PAGE_DOWN,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT, KC_SPC,                    OSL(_FN),KC_PAUS, C(KC_PAUS)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_OSX] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ENT,           KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LGUI, KC_SPC,                    OSL(_FN),KC_LBRC, KC_RBRC
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, XXXXXXX, KC_VOLU, XXXXXXX, RGB_TOG, RGB_MOD,                            XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_INSERT,KC_PSCR,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F11,  XXXXXXX, KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT,KC_DELETE,KC_PAGE_UP,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,          XXXXXXX, TO(_GAME),KC_MUTE,KC_MPRV, KC_MNXT, KC_MSTP, KC_PAGE_DOWN,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 S(KC_PAUS),C(KC_PAUS),KC_PAUS,                  TO(_FN), TO(_MAIN),TO(_OSX)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


/************************************************************
 * FRONT
 * Left Hand                    Right Hand
 * |00|01|02|03|04|05|          |39|38|37|36|35|34|
 * |11|10|09|08|07|06|          |40|41|42|43|44|45|
 * |12|13|14|15|16|17|          |51|50|49|48|47|46|
 * |23|22|21|20|19|18|27|    |61|52|53|54|55|56|57|
 *             |24|25|26|    |60|59|58|
 * REVERSE
 * Right Hand                   Left Hand
 * |65|--|--|66|--|67|          |33|--|32|--|--|31|
 * |--|--|--|--|--|--|          |--|--|--|--|--|--|
 * |--|--|--|--|--|--|          |--|--|--|--|--|--|
 * |64|--|--|63|--|--|--|    |--|--|--|29|--|--|30|
 *             |--|62|--|    |--|28|--|
 *************************************************************/
bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }

    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(11, RGB_WHITE);
    }

    if (IS_LAYER_ON(_MAIN)) {
        rgb_matrix_set_color(0, RGB_PURPLE);
    } else if (IS_LAYER_ON(_GAME)) {
        rgb_matrix_set_color(0, RGB_GREEN);
        rgb_matrix_set_color(17, RGB_GREEN); // G
        rgb_matrix_set_color(13, RGB_GREEN); // A
        rgb_matrix_set_color(53, RGB_GREEN); // M
        rgb_matrix_set_color(8, RGB_GREEN); // E
    } else if (IS_LAYER_ON(_OSX)) {
        rgb_matrix_set_color(0, RGB_WHITE);
        rgb_matrix_set_color(43, RGB_WHITE); // O
        rgb_matrix_set_color(14, RGB_WHITE); // S
        rgb_matrix_set_color(21, RGB_WHITE); // X
    } else if (IS_LAYER_ON(_FN)) {
        rgb_matrix_set_color(0, RGB_CORAL);
        rgb_matrix_set_color(16, RGB_CORAL); // F
        rgb_matrix_set_color(52, RGB_CORAL); // N
    }
    return true;
}

#if defined(ENCODER_MAP_ENABLE)
   const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
      [_MAIN] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)             ,  ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
      [_GAME]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)            ,  ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
      [_OSX]  = { ENCODER_CCW_CW(0x81, 0x80)                   ,  ENCODER_CCW_CW(0x81, 0x80) },
      [_FN3]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)             ,  ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
      [_FN4]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)             ,  ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
      [_FN]   = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)   ,  ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
   };
#endif