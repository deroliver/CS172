//I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

#include "Runner.h"
#include <fstream>

Runner::Runner(string firstname, string lastname, int pace){//Constructor, created a runner object with a given first name, last name, and pace
	this->firstname = firstname;
	this->lastname = lastname;
	this->pace = pace;

}

string Runner::get_firstname() const{//Returns the first name
	return firstname;
}

string Runner::get_lastname() const{//Returns the last name
	return lastname;
}

int Runner::get_pace() const{//Returns the pace
	return pace;
}

bool Runner::operator<(Runner& runner) const{//Overloaded operator that compares the pace of two runner objects
	return (this->pace < runner.get_pace());//I can now use the 'sort' function to sort my vector by pace
}




