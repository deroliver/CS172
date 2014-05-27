#include "FanClass.h"

Fan::Fan(){
	speed = 1;
	on = false;
	radius = 5;
}

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