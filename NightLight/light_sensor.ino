// light_sensor.ino - reads the photoresistor on LIGHT_SENSOR_PIN
// Returns 0 (dark) up to 1023 (bright).

int readLight() {
  unsigned long total = 0;

  // TODO Task 1 (Developer A): average SENSOR_SAMPLES readings.
  for (int i = 0; i < SENSOR_SAMPLES; i++) {
    total = total + analogRead(LIGHT_SENSOR_PIN);
  }

  // Return the average reading
  return total / SENSOR_SAMPLES;
}

// TODO Task 8 (Project Manager): add lightLabel() below this line.
