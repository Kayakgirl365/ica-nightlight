// button.ino - reads the pushbutton on BUTTON_PIN
// The button connects the pin to GND, so a press reads LOW.

// Should return true once for each press of the button.
bool buttonPressed() {
  static int previousState = HIGH;
  static unsigned long lastChangeMs = 0;

  int state = digitalRead(BUTTON_PIN);
  unsigned long nowMs = millis();

  if (state != previousState) {
    previousState = state;

    if (nowMs - lastChangeMs >= BUTTON_DEBOUNCE_MS) {
      lastChangeMs = nowMs;
      if (state == LOW) {
        return true;
      }
    }
  }

  return false;
}
