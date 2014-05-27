#include "MyInteger.h"



int MyInteger::value = 0;

MyInteger::MyInteger(int new_Value){
	value = new_Value;//Set the value equal to the new int
}

const int MyInteger::getValue()  {
	return value;//Return the value variable
}

const bool MyInteger::isEven(){
	if (value % 2 == 0)//If value is even, return true
		return true;
	else//else return true
		return false;
}

const bool MyInteger::isOdd(){
	if (value % 2 != 0)//If value is not even
		return true;//return true
	else
		return false;//else return false
}

const bool MyInteger::isPrime(){
	int count = 0;
	for (int i = 2; i < value; i++){//Loop through all the numbers between 2 and value
		if (value % i == 0)//If value is divisible by any of the numbers between 2 and the value
			count++;//Increment count
	}
	if (count == 0)//If count is zero, the number is prime
		return true;
	else
		return false;
}

bool MyInteger::isEven(int x){
	if (x % 2 == 0)//If the number passed is even
		return true;//return true
	else
		return false;//else return false
}

bool MyInteger::isOdd(int x){
	if (x % 2 != 0)//If the number passed is not even
		return true;//Return true
	else
		return false;//else return false
}

bool MyInteger::isPrime(int x){
	int count = 0;
	for (int i = 2; i < x; i++){//Loop from 2 to the number passed
		if (x % i == 0)//Check if the number passed is divisible by any of the numbers between it and 2
			count++;//If it is, then increment count
	}
	if (count == 0)//If count is zero, the number is prime
		return true;
	else
		return false;
}

bool MyInteger::isEven(const MyInteger& M1){
	if (M1.value % 2 == 0)//Check if the value in the object passed is even
		return true;
	else
		return false;
}

bool MyInteger::isOdd(const MyInteger& M1){
	if (M1.value % 2 != 0)//Check if the value in the object passed is not even
		return true;
	else
		return false;
}

bool MyInteger::isPrime(const MyInteger& M1){
	int count = 0;
	for (int i = 2; i < M1.value; i++){//Loop from 2 to the value in the object passed
		if (M1.value % i == 0)//Check if the value in the number passed is divisible by any number between the value and 2
			count++;//If so, increment count
	}
	if (count == 0)//If count is zero, the number is prime
		return true;
	else
		return false;
}

const bool MyInteger::equals(int x){
	if (x == value)//Check if the number passed is equal to value
		return true;
	else
		return false;
}

const bool MyInteger::equals(const MyInteger& M1){
	if (M1.value == value)//Check if the value in the object is equal to value
		return true;
	else
		return false;
}

string boolString(bool b){
	if (b == 1)//Converts bool values to strings
		return "true";
	else
		return "false";
}



int MyInteger::parseInt(const string& s){
	int x = s.size();//Find the Length of the string
	int number = 0;
	for (int i = 0; i < x; i++){//Loop through length of string
		number += (int)s[1];//Convert char in the string to number, and add it to the number int variable
	}
	return number;//Return number
}
