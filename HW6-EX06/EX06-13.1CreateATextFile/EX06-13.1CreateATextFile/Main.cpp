#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	fstream output;//Create an fstream object
	output.open("Excercise13_1.txt", ios::out);//Open it for writing out, will be saved to the default location

	int value = 0;
	for (int i = 0; i < 49; i++){//Cannot have more than 100 numbers/spaces a line? It gave me weird symbols when I tried to loop from 0 to 99
		value = rand() % 10;
		output << value << " ";
		
	}

	output << endl;
	for (int i = 0; i < 49; i++){//Finish writing the other 50 numbers to the file
		value = rand() % 10;
		output << value << " ";
	}


	output.close();//Close the file
}