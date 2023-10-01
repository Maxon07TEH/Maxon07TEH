#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(15);
  DigiKeyboard.print("CMD");
  delay(15);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(0);
  delay(1500);
  DigiKeyboard.print("color 2");
  delay(15);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(15);
  DigiKeyboard.print("dir/s");
  delay(15);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
}
