/* arduino_stepper.h
*  Library for non-blocking drive of multiple stepper motors.
*  Created by Antonio X Cerruto 23 Jan 2024
*  Apache 2.0 License
*/ 
#ifndef arduino_stepper_h
#define arduino_stepper_h

#include "Arduino.h"

class Stepper
{
	public:
		Stepper(int step_pin, int dir_pin);
		void begin();
		void step();
		void set_direction(int dir);
		void set_speed(unsigned long interval);
	private:
		int _step_pin;
		int _dir_pin;
		unsigned long _interval;
		unsigned long _tstamp;
};

#endif