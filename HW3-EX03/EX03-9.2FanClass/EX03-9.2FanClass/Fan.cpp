#include "FanClass.h"

double Fan::getRadius(){
	return radius;
}

int Fan::getSpeed(){
	return speed;
}

string Fan::getPower(){
	if (on)
		return "on";
	else
		return "off";
}