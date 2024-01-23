/*
 * Created by Antonio X Cerruto 23 Jan 2024
 */

#include "arduino_stepper.h"

Stepper m1(5,4);

void setup() {
  m1.begin();
  m1.set_direction(0);
  m1.set_speed(1000);
  m1.rotate(200); // set number of steps to take
}

void loop() {
  m1.step(); // continuously call this to move motor
}