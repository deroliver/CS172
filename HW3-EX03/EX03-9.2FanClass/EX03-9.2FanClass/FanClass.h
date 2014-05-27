#ifndef FANCLASS_H_
#define FANCLASS_H_

#include <string>
using namespace std;

class Fan {
public:
	int speed;
	bool on;
	double radius;

	Fan();
	double getRadius();
	int getSpeed();
	string getPower();
};

#endif

