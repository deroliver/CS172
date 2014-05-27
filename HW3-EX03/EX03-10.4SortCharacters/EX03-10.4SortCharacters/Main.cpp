#include <iostream>
#include <string>
#include"SortString.h"
using namespace std;

string sort(string& s);

int main(){
	string s = "Hello";
	cout << "Enter a word containing only letters: ";
	getline(cin, s);//Read in a string

	cout << "The sorted word is: " << sort(s) << endl << endl;//Ouput the sorted string

}





