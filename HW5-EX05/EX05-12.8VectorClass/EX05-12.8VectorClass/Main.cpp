#include <iostream>
#include "MyVector.h"
using namespace std;

int main(){
	MyVector<double> V2;
	V2.push_back(3.1);
	V2.push_back(4.4);
	V2.push_back(5.9);

	V2.pop_back();

	cout << V2.at(1);


	MyVector<int> Vector1;
	Vector1.push_back(26);
	Vector1.push_back(2);
	Vector1.push_back(107);

	Vector1.clear();

	cout << Vector1.at(1);


}