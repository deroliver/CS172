#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string filename, line;
	
	cout << "Enter a filename: ";
	cin.ignore;
	getline(cin, filename);//Read in the file name entered
	

	fstream File(filename, ios::in);//Create an fstream object for reading in
	int sum = 0;
	if (File.is_open()){//If the file is open

		while (!File.eof()){//While its not the end of the file
			getline(File, line);//Read in a line from the text file

			int Characters = line.length();//The number of characters
			for (int i = 0; i < line.length(); i++){//Loop through the number of characters
				if (line.at(i) == ' ')//If a char is equal to a space
					Characters--;//Negate characters by one
			}
			sum = Characters + sum;//Add the characters to the sum
		}
		cout << "Number of Characters: " << sum << endl;
	}
	else
		cout << "Error Opening File" << endl << endl;
}