#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int rank;
	string boyName, girlName, targetName;
	fstream babyNames;
	char again = 'y';
	

	

	babyNames.open("BabyNames.txt", ios::in || ios::out);

	while (again == 'y'){//Loop to let the user decide if they want to search again
		babyNames.seekp(ios::beg);//Set the pointer to the beginning
		cout << "Enter a baby name to search for: ";
		cin >> targetName;
		bool found = false;//Set found = to false initially
		while (!babyNames.eof()){//While its not the end of the file, search for the name
			babyNames >> rank >> boyName >> girlName;//read in the rank, then the boy name, then the girl name
			if (targetName == boyName){//If the entered name is equal to the current boy name
				cout << targetName << " was ranked " << rank << " in the popularity list of top 1000 boy baby names for 1994!" << endl;
				found = true;//Set found to true
				break;
			}
			else if (targetName == girlName){//If the entered name is equal to the current girl name
				cout << targetName << " was ranked " << rank << " in the popularity list of top 1000 girl baby names of 1994!" << endl;
				found = true;//Set found to true
				break;
			}
		}
		if (!found)//If not found
			cout << targetName << " was not found in the popularity list of top 1000 baby names for 1994!" << endl << endl;
		
		cout << "Would you like to search for a new name?(y or n): ";
		cin >> again;//Decide if they want to search again
	}
}

