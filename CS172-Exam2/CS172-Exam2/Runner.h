//I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.


#ifndef RUNNER_H_
#define RUNNER_H_

#include <string>
using namespace std;

class Runner{
public:
	Runner(string, string, int);//Constructor
	string get_firstname() const;
	string get_lastname() const;
	int get_pace() const;
	bool operator< (Runner&) const;//Overloaded operator

private://Private Member variables
	string firstname;
	string lastname;
	int pace;
};




#endif