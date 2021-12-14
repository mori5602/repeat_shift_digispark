#include "DigiKeyboard.h"

const unsigned long t = 2000;
const unsigned long waitTime = 24000 - t; // 4 * 60 * 1,000(ms)

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(MOD_SHIFT_LEFT);
  DigiKeyboard.delay(t);
  
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  
  DigiKeyboard.delay(waitTime);
}
