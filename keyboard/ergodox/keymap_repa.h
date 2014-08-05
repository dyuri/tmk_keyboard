static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Default Layer in DVORAK
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |   1  |   2  |   3  |   4  |   5  | +L2  |           | +L1  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   '  |   ,  |   .  |   Y  |   Y  |      |           |      |   F  |   G  |   C  |   R  |   L  |   /    |
     * |--------+------+------+------+------+------| ?    |           | ?    |------+------+------+------+------+--------|
     * | Caps   |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -    |
     * |--------+------+------+------+------+------| ~L1  |           | ~L1  |------+------+------+------+------+--------|
     * | LShift |   ;  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LCtrl|   `  |   \  |   [  |   ]  |                                       |  Lft |  Dn  |  Up  | Rght | RCtrl|
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | RGui | RAlt |       | LAlt | LGui |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | ~L1  |       | PgUp |      |      |
     *                                 | Space| BkSp |------|       |------| Enter|  Esc |
     *                                 |      |      | ~L4  |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     *
     *
     *
     ****************************************************************************************************
     */

    KEYMAP(  // Layer0: dvorak
        // left hand
        ESC, 1,   2,   3,   4,   5,    FN4,
        TAB, QUOT,COMM,DOT, P,   Y,    FN1,
        RALT,A,   O,   E,   U,   I,
        LSFT,SCLN,Q,   J,   K,   X,    FN3,
        LCTL,GRV, BSLS,LBRC,RBRC,
                                      LGUI,LALT,
                                            FN3,
                                 SPC,BSPC,  FN6,
        // right hand
              FN2,6,   7,   8,   9,   0,   EQL,
              FN5,F,   G,   C,   R,   L,   SLSH,
                  D,   H,   T,   N,   S,   MINS,
              FN3,B,   M,   W,   V,   Z,   RSFT,
                       LEFT,DOWN,UP,  RGHT,RCTL,
        RALT,RGUI,
        PGUP,
        PGDN,ENT, ESC
    ),

    KEYMAP(  // Layer1: function and mouse
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  TRNS,
        TRNS,MENU,MPRV,MNXT,MPLY,PAUS,TRNS,
        CAPS,MUTE,VOLU,INS, HOME,PGUP,
        TRNS,MSTP,VOLD,DEL, END, PGDN,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,F6,  F7,  F8,  F9,  F10, F11, 
             TRNS,BTN3,NO,  MS_U,NO,  ACL0,F12, 
                  BTN4,MS_L,MS_D,MS_R,ACL1,TRNS,
             TRNS,BTN5,NO,  MS_D,NO,  ACL2,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        WH_L,WH_R,
        WH_U,
        WH_D,BTN2,BTN1
    ),

    KEYMAP(  // Layer2: qwerty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   W,   E,   R,   T,   TRNS,
        TRNS,A,   S,   D,   F,   G,
        TRNS,Z,   X,   C,   V,   B,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,Y,   U,   I,   O,   P,   TRNS,
                  H,   J,   K,   L,   SCLN,TRNS,
             TRNS,N,   M,   COMM,DOT, QUOT,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3: keyboard functions
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer4: numpad, mirrored dvorak for left hand
        // left hand
        EQL, 0,   9,   8,   7,   6,   TRNS,
        SLSH,L,   R,   C,   G,   F,   TRNS,
        MINS,S,   N,   T,   H,   D, 
        RSFT,Z,   V,   W,   M,   B,   TRNS,
        RCTL,LEFT,DOWN,UP,  RGHT,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,ENT, TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PENT,TRNS,
                       P0,  PDOT,SLSH,PENT,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    ACTION_LAYER_SET(0, ON_BOTH),                   // FN1 - set Layer0, dvorak
    ACTION_LAYER_SET(1, ON_BOTH),                   // FN2 - set Layer1, function keys
    ACTION_LAYER_MOMENTARY(1),                      // FN3 - momentary Layer1, function keys
    ACTION_LAYER_SET(2, ON_BOTH),                   // FN4 - set Layer2, qwerty
    ACTION_LAYER_MOMENTARY(3),                      // FN5 - set Layer3, bootloader
    ACTION_LAYER_MOMENTARY(4),                      // FN6 - set Layer4, to use with Numpad keys and mirrored left

};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

