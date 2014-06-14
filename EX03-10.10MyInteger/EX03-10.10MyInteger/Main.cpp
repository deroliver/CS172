#include "MyInteger.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	srand(time(NULL));
	int x, y, z;
	cout << "Enter an integer for your MyInteger Object: ";
	cin >> x;//Read in an int
	MyInteger M1(x);//Create an obkect, and set the value to the int entered by the user
	cout << "The value stored in your MyInteger Object is: " << M1.getValue() << endl << endl;//Using getValue(), output the value stored in the object

	cout << "Your MyInteger value is even: " << boolString(M1.isEven()) << endl << endl;//Call the isEven function to determine if the value is even
	cout << "Your MyInteger value is odd: " << boolString(M1.isOdd()) << endl << endl;//Call the isOdd function to determine if the value is odd
	cout << "Your MyInteger value is prime: " << boolString(M1.isPrime()) << endl << endl << endl;//Call the isPrime function to determine if the value is prime
	//I used the boolString function, which converts a bool value to a string either "false" or "true"

	cout << "Enter a new number to test: ";
	cin >> y;//Read in a new int

	cout << "Your new number is even: " << boolString(MyInteger::isEven(y)) << endl << endl;//Call the isEven(int) function to determine if the newly entered value is even
	cout << "Your new number is odd: " << boolString(MyInteger::isOdd(y)) << endl << endl;//Call the isOdd(int) function to determine if the newly entered value is odd
	cout << "Your new number is prime: " << boolString(MyInteger::isPrime(y)) << endl << endl << endl;//Call the isEven(int) function to determine if the newly entered value is prime
	//I used the boolString function, which converts a bool value to a string either "false" or "true"
	
	cout << "The value in your MyInteger object is even: " << boolString(MyInteger::isEven(M1)) << endl << endl;//Passing the object into the isEven(MyInteger) function 
	cout << "The value in your MyInteger object is odd: " << boolString(MyInteger::isOdd(M1)) << endl << endl;//Passing the object into the isOdd(MyInteger) function 
	cout << "The value in your MyInteger object is prime: " << boolString(MyInteger::isPrime(M1)) << endl << endl;//Passing the object into the isPrime(MyInteger) function 
	//I used the boolString function, which converts a bool value to a string either "false" or "true"

	cout << "Enter a brand new number: ";
	cin >> z;

	cout << "Your brand new number is equal to the integer stored in your" << endl;
	cout << "MyInteger object : " << boolString(M1.equals(z)) << endl << endl;//Use the equals(int) function to determine if an entered int is equal to the value in the object
	cout << "Your integer in your MyInteger object is equal to the integer" << endl;
	cout << "stored in your original MyInteger object: " << boolString(M1.equals(M1)) << endl << endl;//Use the equals(MyInteger) function to determine if a value stored in an object is equal to the value
	//I used the boolString function, which converts a bool value to a string either "false" or "true"

	string s;
	cout << "Enter a word only containing letters: ";
	cin.ignore();
	getline(cin, s);
	int w = MyInteger::parseInt(s);
	cout << "The numerical value for your word is: " << w << endl << endl;
}

