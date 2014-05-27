#ifndef EQUATION_H_
#define EQUATION_H_

#include <math.h> 
using namespace std;

class QuadraticEquation{
public:
	double a, b, c;
	QuadraticEquation();
	void getA(double);
	void getB(double);
	void getC(double);
	double getDiscriminant();
	double getRoot1();
	double getRoot2();

};

#endif