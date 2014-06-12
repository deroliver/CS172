#include <iostream>
#include <string>
using namespace std;

template<typename T>//Templated function header
bool isSorted(const T list[], int size);

string boolToString(bool x);//Boll to string function header


int main(){
	int arrayOneA[5] = { 10, 6, 18, 20, 59 };
	int arrayOneB[5] = { 5, 4, 3, 2, 1 };
	
	double arrayTwoA[5] = { 16.8, 15.7, 67.9, 24.6, 56.8 };
	double arrayTwoB[5] = { 5.1, 4.1, 3.1, 2.1, 1.1 };//Declaring several sorted and unsorted array of different types

	string arrayThreeA[5] = { "One", "Two", "Three", "Four", "Five" };
	string arrayThreeB[5] = { "ef", "de", "cd", "bc", "ab" };

	cout << "Array OneA is sorted: " << boolToString(isSorted(arrayOneA, 5)) << endl << endl;
	cout << "Array OneB is sorted: " << boolToString(isSorted(arrayOneB, 5)) << endl << endl << endl;

	cout << "Array TwoA is sorted: " << boolToString(isSorted(arrayTwoA, 5)) << endl << endl;
	cout << "Array TwoB is sorted: " << boolToString(isSorted(arrayTwoB, 5)) << endl << endl << endl;

	cout << "Array ThreeA is sorted: " << boolToString(isSorted(arrayThreeA, 5)) << endl << endl;
	cout << "Array ThreeB is sorted: " << boolToString(isSorted(arrayThreeB, 5)) << endl << endl;

}

template<typename T>
bool isSorted(const T list[], int size){
	for (int i = 1; i < size; i++){//Loop to the size of the array passed
		if (list[i - 1] < list[i]){//If the element at a given index - 1 is less than the element at the given index
			return false;//Automatically return false
		}
	}
	return true;//Else return true
}

string boolToString(bool x){
	if (x == 1)//If the boolean value is 1
		return "True";//Return the string "True"
	if (x == 0)//If is it 0
		return "False";//Return the string "False"
}