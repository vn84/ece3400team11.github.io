#include <Servo.h>

#define LEFT_WHEEL_PIN 3
#define RIGHT_WHEEL_PIN 5

#define STOP_POS 90
// WRT left wheel
#define FORWARD_POS 180
#define BACKWARD_POS 0

Servo leftWheel;
Servo rightWheel;

int rightTime = 640;
int leftTime = 600;

int straightTime = 1000;

void setup() {
  leftWheel.attach(LEFT_WHEEL_PIN);
  rightWheel.attach(RIGHT_WHEEL_PIN);
}

void loop() {
  moveStop();
  moveForward();
  moveLeft();
  moveForward();
  moveRight();
  moveForward();
  moveRight();
  moveForward();
  moveRight();
  moveForward();
  moveRight();
  moveForward();
  moveLeft();
  moveForward();
  moveLeft();
  moveForward();
  moveLeft();
}

void moveForward() {
  // go forward
  leftWheel.write(FORWARD_POS);
  rightWheel.write(BACKWARD_POS);
  delay(straightTime);
}

void moveBackward() {
  // go backward
  leftWheel.write(BACKWARD_POS);
  rightWheel.write(FORWARD_POS);
  delay(straightTime);
}

void moveStop() {
  leftWheel.write(STOP_POS);
  rightWheel.write(STOP_POS);
  delay(2000);
}

void moveRight() {
  // turn right
  leftWheel.write(FORWARD_POS);
  rightWheel.write(FORWARD_POS);
  delay(rightTime);
}

void moveLeft() {
  // turn left
  leftWheel.write(BACKWARD_POS);
  rightWheel.write(BACKWARD_POS);
  delay(leftTime);
}

