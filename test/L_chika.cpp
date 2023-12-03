#include <Arduino.h>

void setup() {
  pinMode(PC6, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(PC6, HIGH);
  delay(1000);
  digitalWrite(PC6, LOW);
}