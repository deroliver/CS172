#include "EvenNumber.h"
#include <iostream>
using namespace std;

int main(){
	EvenNumber E1(16);//Initialize an EvenNumber object with a value of 16

	cout << "The next even number after 16 is: " << E1.getNext(E1) << "." << endl << endl;//Call the getNext function
	cout << "The previous even number before 16 is: " << E1.getPrevious(E1) << "." << endl << endl;//Call the getPrevious function
}