/* arduino_stepper.cpp
*  Library for non-blocking drive of multiple stepper motors.
*  Created by Antonio X Cerruto 23 Jan 2024
*  Apache 2.0 License
*/ 

#include "Arduino.h"
#include "arduino_stepper.h"

Stepper::Stepper(int step_pin, int dir_pin)
{
	_step_pin = step_pin;
	_dir_pin = dir_pin;
	_interval = 0;
	_tstamp = micros();
}

void Stepper::begin()
{
	pinMode(_step_pin, OUTPUT);
	pinMode(_dir_pin, OUTPUT);
	digitalWrite(_step_pin, 0);
}

void Stepper::set_speed(unsigned long interval)
{
	_interval = interval;
}

void Stepper::set_direction(int dir)
{
	digitalWrite(_dir_pin, dir);
}

void Stepper::step(){
	if(micros() - _tstamp > _interval){
		digitalWrite(_step_pin, 1);
		_tstamp = micros();
	}else{
		digitalWrite(_step_pin, 0);
	}
}

