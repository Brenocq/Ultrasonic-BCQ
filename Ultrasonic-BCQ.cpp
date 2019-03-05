///////////////////////////////////////////////////////////
//  Ultrasonic-BCQ.cpp
//  Implementation of the Class Ultrasonic
//  Created on:      04-mar-2019 23:15:32
//  Original author: Breno Cunha Queiroz
///////////////////////////////////////////////////////////



#include "Ultrasonic-BCQ.h"

#if defined(ARDUINO) && ARDUINO>=100
#include "Arduino.h"//arduino version >= 1.0.0
#elif defined(ARDUINO) && ARDUINO<100
#include "WProgram.h"//arduino old version
#endif


Ultrasonic::Ultrasonic(int _pinAnalog)
	:pinAnalog(_pinAnalog){
}

Ultrasonic::~Ultrasonic() {
}
 
float Ultrasonic::value() const{
	float sensorValue = analogRead(pinAnalog);
	return sensorValue = sensorValue*0.718;
}
