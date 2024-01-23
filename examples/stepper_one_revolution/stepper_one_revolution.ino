/*
 * Created by Antonio X Cerruto 23 Jan 2024
 */

#include "arduino_stepper.h"
#include "Arduino.h"
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper m1(5,4,1000);

void setup() {
  m1.begin();
  m1.set_direction(0);
  m1.set_speed(1000);
}

void loop() {
  m1.step();
}

