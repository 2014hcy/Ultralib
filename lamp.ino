#include "Ultralib.h"

Ultra ultra(25, 26);

void setup() {
  Serial.begin(115200);
  pinMode(27, OUTPUT);
}

void loop() {
  float distance = ultra.read();

  Serial.println(distance);
  if (distance <= 30) {
    analogWrite(27, 10);
  } else {
    analogWrite(27, 0);
  }

  delay(1000);
}