#include "Equation.h"
#include <iostream>
using namespace std;

int main(){
	QuadraticEquation E1;//Cread QuadraticEquation object
	double A, B, C;
	cout << "Enter a value for coefficient A: ";
	cin >> A;//Read in value for C
	
	cout << "Enter a value for coefficient B: ";
	cin >> B;//Read in value for B

	cout << "Enter a value for coefficient C: ";
	cin >> C;//Read in value for C
	
	E1.getA(A);//Set value of A in E1 using value read in above
	E1.getB(B);//Set value of B in E1 using value read in above
	E1.getC(C);//Set value of C in E1 using value read in above

	
	double X, Y, O;
	X = E1.getRoot1(); //Value of first root
	Y = E1.getRoot2(); //Value of second root
	O = (-B) / (2 * A); //What the root would be equal to if the discriminant is zero

	if (X == 0 && Y == 0 || A == 0 && B == 0 && C == 0){ // If they are both equal to zero, or all values entered are zero
		cout << "The equation has no real roots." << endl << endl;//No real roots
	}

	else if (O == X || O == Y){ //If what the root would be equal to if the discriminant is zero is equal to the actual root, then only display output the first root
		cout << "The discriminant is equal to 0" << endl;
		cout << "The first root is equal to: " << X << endl;
	}
	else { //Else output both of the roots
		cout << "The first root is equal to: " << X << "." << endl << endl;
		cout << "The second root is equal to: " << Y << "." << endl << endl;
	}





}