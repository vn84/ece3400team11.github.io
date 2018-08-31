#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potIPT = A0;
void setup() {
  // attach servo to pin 3 PWM
  myservo.attach(3);
  // debugging output
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(potIPT);     // read the input pin
  myservo.write(map(val, 0, 1023, 0, 180));
}

