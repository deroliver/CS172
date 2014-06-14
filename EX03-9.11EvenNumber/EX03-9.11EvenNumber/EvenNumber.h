#ifndef EVENNUMBER_H_
#define EVENNUMBER_H_

class EvenNumber{
public:
	int value;
	EvenNumber();
	EvenNumber(int);
	int getValue();
	int getNext(EvenNumber);
	int getPrevious(EvenNumber);
};
#endif