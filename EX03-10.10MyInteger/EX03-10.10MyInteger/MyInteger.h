#ifndef MYINTEGER_H_
#define MYINTEGER_H_

#include <string>
#include <ctime>
using namespace std;

class MyInteger{
private:
	static int value;
public:
	MyInteger(int);
	int getValue() const;
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	
	static bool isEven(int);
	static bool isOdd(int x);
	static bool isPrime(int x);

	static bool isEven(const MyInteger& M1);
	static bool isOdd(const MyInteger& M1);
	static bool isPrime(const MyInteger& M1);

	bool equals(int) const;
	bool equals(const MyInteger& M1) const;

	static int parseInt(const string&);
};


string boolString(bool b);

#endif


