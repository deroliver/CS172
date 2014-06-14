#include "EvenNumber.h"

EvenNumber::EvenNumber(){//Default - Sets value to 0
	value = 0;
}

EvenNumber::EvenNumber(int new_Value){//Allows user to set custom value
	value = new_Value;
}

int EvenNumber::getValue(){//Returns the current value in the object
	return value;
}

int EvenNumber::getNext(EvenNumber E1){
	int x = E1.value;//X is set to the value of the EvenNumber object
	if ((x % 2) == 0)//If the number is even, add 2
		return x + 2;
	else
		return x + 1;//Otherwise add 1, because an odd number + 1 is an even number
}

int EvenNumber::getPrevious(EvenNumber E1){
	int x = E1.value;//X is set to the value of the EvenNumber object
	if ((x % 2) == 0)//If the number is even, subtract 2
		return x - 2;
	else return x - 1;//Otherwise add 1, because an odd number + 1 is an even number
}