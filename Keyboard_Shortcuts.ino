#include "DigiKeyboard.h"
int sure = 1000;
void setup() {

}

void loop() {

DigiKeyboard.sendKeyStroke(0); // bir tuş vuruşu gönderir
DigiKeyboard.sendKeyStroke (0,MOD_GUI_LEFT); // Windows tuşu 
DigiKeyboard.delay(sure); // bekleme 
DigiKeyboard.sendKeyStroke(KEY_A , MOD_CONTROL_LEFT); //Ctrl + A
DigiKeyboard.delay(sure);
DigiKeyboard.sendKeyStroke(KEY_C , MOD_CONTROL_LEFT); //Ctrl + C
DigiKeyboard.delay(sure);
DigiKeyboard.sendKeyStroke(KEY_V , MOD_CONTROL_LEFT); //Ctrl + V
DigiKeyboard.delay(sure);
DigiKeyboard.sendKeyStroke(KEY_9 , MOD_ALT_RIGHT); //Alt Gr + 9
DigiKeyboard.delay(sure);
DigiKeyboard.sendKeyStroke(0 , MOD_ALT_LEFT); //Alt
DigiKeyboard.delay(sure);
DigiKeyboard.sendKeyStroke ( KEY_A , MOD_SHIFT_RIGHT); //Shift + A
DigiKeyboard.delay(sure);
}
