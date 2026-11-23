// led.ino - controls the LED brightness (0 = off, 255 = full brightness)

int ledBrightness = 0;   // remembers the current brightness

void setLed(int brightness) {
  ledBrightness = constrain(brightness, 0, 255);
  analogWrite(LED_PIN, ledBrightness);
}

// Moves the LED toward the target brightness.
void fadeTowards(int target) {
  target = constrain(target, 0, 255);

  if (ledBrightness < target) {
    setLed(min(ledBrightness + FADE_STEP, target));
  } else if (ledBrightness > target) {
    setLed(max(ledBrightness - FADE_STEP, target));
  }
}

void blinkLed(int times) {
  for (int i = 0; i < times; i++) {
    setLed(255);
    delay(150);
    setLed(0);
    delay(150);
  }
}
