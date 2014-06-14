#include "Equation.h"

QuadraticEquation::QuadraticEquation(){//Constructor sets all coefficients equal to 1
	a = 1, b = 1, c = 1;
}

void QuadraticEquation::getA(double new_A){//Read in a new value for a
	a = new_A;
}

void QuadraticEquation::getB(double new_B){//Read in a new value for b
	b = new_B;
}

void QuadraticEquation::getC(double new_C){//Read in a new value for c
	c = new_C;
}

double QuadraticEquation::getDiscriminant(){//Calculate the discriminant
	double x = (b*b) - (4 * a*c);
	return x;//Return the calculates value
}

double QuadraticEquation::getRoot1(){//Calculate first root
	double x = getDiscriminant();
	double y = ((-b) + sqrt(x)) / (2 * a);
	double y2 = (-b) / (2 * a);//Calculated value if the discrminant is zero
	if (x < 0)
		return 0;
	else if (x == 0)//If discriminant is zero
		return y2;
	else
		return y;
}

double QuadraticEquation::getRoot2(){//Calculate first root
	double x = getDiscriminant();
	double y = ((-b) - sqrt(x)) / (2 * a);//Calculated discriminant
	if (x < 0)
		return 0;
	else if (x == 0)//If equal to zero return 0
		return 0;
	else
		return y;
}