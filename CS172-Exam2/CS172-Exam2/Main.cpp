//I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

//////
//Class: CS172 Summer Course
//Date: June 17 2014
//Exam 2
//Name: Derik Oliver
//////

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Runner.h"
using namespace std;

void sortPace(vector<Runner>&);//Function header to write the runners to files based on pace

int main(){
	vector<Runner> runners;//Create a vector of runners
	string first, last;
	int pace;
	fstream registrants("registrants.txt", ios::in);
	
	if (registrants.fail()){
		cout << "The file failed to open!" << endl;
	}

	while (registrants >> first >> last >> pace){//While there is a line with a first name, last name, and pace
		registrants >> first >> last >> pace;//Read in those values to the variables
		runners.push_back(Runner(first, last, pace));//Push back a runner object that is created using the constructor with the values the variables were just assigned to
	}
	sort(runners.begin(), runners.end());//Sort the values in the array, I can use sort because I overloaded the < operator to compare the paces of the runner objects
	//So when sort compares the objects in the 'runners vector', is sorts them by pace in ascending order
	sortPace(runners);//Call my function to write the runners in the vector to text files. Pass the 'runners vector' by reference
}


//A function that takes a vector by reference, and writes the
//runner objects to the correct text file based on their pace
void sortPace(vector<Runner>& runners){
	fstream White("White.txt", ios::out);//Create fstream objects for writing out
	fstream Yellow("Yellow.txt", ios::out);//Create multiple ones, so I can create multiple text files for each color that is needed
	fstream Green("Green.txt", ios::out);
	fstream Orange("Orange.txt", ios::out);
	fstream Blue("Blue.txt", ios::out);
	fstream Lilac("Lilac.txt", ios::out);
	fstream Red("Red.txt", ios::out);
	string first, last;
	int pace;
	for (int i = 0; i < runners.size(); i++){
		first = runners[i].get_firstname();//Set the variable equal to the corresponding values for the specified runner object
		last = runners[i].get_lastname();
		pace = runners[i].get_pace();
		if (pace >= 0 && pace <= 360){//If the pace is in the parameters for the White color
			White << first << " " << last << " " << pace << endl;//Write the values to the White text file
		}

		if (pace >= 361 && pace <= 420){//If the pace is in the parameters for the Yellow color
			Yellow << first << " " << last << " " << pace << endl;//Write the values to the Yellow text file
		}

		if (pace >= 421 && pace <= 480){//If the pace is in the parameters for the Green color
			Green << first << " " << last << " " << pace << endl;//Write the values to the Green text file
		}

		if (pace >= 481 && pace <= 540){//If the pace is in the parameters for the Orange color
			Orange << first << " " << last << " " << pace << endl;//Write the values to the Orange text file
		}

		if (pace >= 541 && pace <= 600){//If the pace is in the parameters for the Blue color
			Blue << first << " " << last << " " << pace << endl;//Write the values to the Blue text file
		}

		if (pace >= 601 && pace <= 720){//If the pace is in the parameters for the Lilac color
			Lilac << first << " " << last << " " << pace << endl;//Write the values to the Lilac text file
		}

		if (pace >= 721 && pace <= 1200){//If the pace is in the parameters for the Red color
			Red << first << " " << last << " " << pace << endl;//Write the values to the Red text file
		}
	}
	White.close();//Close all the fstream objects
	Yellow.close();
	Green.close();
	Orange.close();
	Blue.close();
	Lilac.close();
	Red.close();
}
