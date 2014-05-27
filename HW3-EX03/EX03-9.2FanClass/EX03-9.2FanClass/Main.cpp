#include "FanClass.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Fan F1, F2;
	F1.speed = 3;
	F1.radius = 10;
	F1.on = true;

	F2.speed = 2;
	F2.radius = 5;
	F2.on = false;


	cout << "Fan 1 has a speed of " << F1.getSpeed() << "." << endl;
	cout << "Fan 1 has a radius of " << F1.getRadius() << "." << endl;
	cout << "Fan 1 is currently " << F1.getPower() << "." << endl;

	cout << "Fan 2 has a speed of " << F2.getSpeed() << "." << endl;
	cout << "Fan 2 has a radius of " << F2.getRadius() << "." << endl;
	cout << "Fan 2 is currently " << F2.getPower() << "." << endl;

}