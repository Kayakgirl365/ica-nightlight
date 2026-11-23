// logger.ino - prints status messages to the Serial Monitor (9600 baud)

// TODO Task 4 (Project Manager): add modeName() here.
int modeName();

void logStatus(int light) {
  // TODO Task 4 (Project Manager): print one tidy status line twice per second.
  const unsigned long LOG_INTERVAL_MS = 500; // Log every 500 milliseconds
  delay(LOG_INTERVAL_MS);
  Serial.println(light);
}

void logBanner() {
  Serial.println("NightLight");
  Serial.println("Press the button to change mode");
}
// TODO Task 6 (Developer B): add logBanner() below this line.

