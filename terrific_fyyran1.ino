int ledPins[] = {2, 3, 4, 5, 6, 7, 8}; // Array of digital pins connected to LEDs
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]); // Number of LEDs

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); // Set LED pins as outputs
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(100); // Adjust the delay to change the scanning speed
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }

  for (int i = numLEDs - 2; i >= 1; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(100); // Adjust the delay to change the scanning speed
    digitalWrite(ledPins[i], LOW); // Turn off the current LED
  }
}
