// Board type: WEMOS LOLIN S2 Mini

#include <Arduino.h>

#define LED 15

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}