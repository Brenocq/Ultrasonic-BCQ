///////////////////////////////////////////////////////////
//  Ultrasonic-BCQ.h
//  Implementation of the Class Ultrasonic
//  Created on:      04-mar-2019 23:15:32
//  Original author: Breno Cunha Queiroz
///////////////////////////////////////////////////////////

#if !defined(ULTRASONIC_H)
#define ULTRASONIC_H

class Ultrasonic
{
public:
	Ultrasonic(int pinAnalog);//constructor
	virtual ~Ultrasonic();//destroyer
	float value() const;//return sensor value in centimeters

private:
	const int pinAnalog;

};

#endif // !defined(ULTRASONIC_H)
