#include QMK_KEYBOARD_H
//
//const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//  LAYOUT( KC_R )
//};


enum custom_keycodes {
  POOP,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case POOP:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING(SS_LALT("D83D+DCA9"));
        SEND_STRING(SS_TAP(X_ENTER));
        //SEND_STRING(":poop:");
      } else {
          register_code(KC_ENT);
          register_code(KC_ENT);
      }
      break;

  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(POOP)
};

