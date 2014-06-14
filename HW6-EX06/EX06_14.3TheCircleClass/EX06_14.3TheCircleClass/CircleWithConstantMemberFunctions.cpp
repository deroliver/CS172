#include "CircleWithConstantMemberFunctions.h"


int Circle::numberOfObjects = 0;//Initialize static member variable

Circle::Circle(){//Default Constructor
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double radius){//Custom radius constructor
	this->radius = radius;
	numberOfObjects++;
}

double Circle::getArea() const{//Return Area
	return (radius * radius * 3.14159);
}

double Circle::getRadius() const{//Return Radius
	return radius;
}

void Circle::setRadius(double radius){//Change the radius
	this->radius = radius;
}

int Circle::getNumberOfObjects(){//Return how many circles have been created
	return numberOfObjects;
}


bool Circle::operator<(Circle C1){//If this-> Objects radius is smaller than the passed objects radius, return true
	if (radius < C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator<=(Circle C1){//If this-> Objects radius is smaller or equal to the passed objects radius, return true
	if (radius <= C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator==(Circle C1){//If this-> Objects radius is equal to the passed objects radius, return true
	if (radius == C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator!=(Circle C1){//If this-> Objects radius is not equal to the passed objects radius, return true
	if (radius != C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator>(Circle C1){//If this-> Objects radius is greater than the passed objects radius, return true
	if (radius > C1.getRadius())
		return true;
	else
		return false;
}

bool Circle::operator>=(Circle C1){//If this-> Objects radius is greater or equal to the passed objects radius, return true
	if (radius >= C1.getRadius())
		return true;
	else
		return false;
}