#include <iostream>
#include <algorithm>
using namespace std;

int smallestElement(int *x, int size);


int main(){
	int *x;//Create a pointer
	int numbers[8] = { 1, 2, 4, 5, 10, 100, 2, -22 };//Initialize an array with particular values
	x = numbers;//Set the pointer x equal to the array

	cout << "The smallest number in the array is: " << smallestElement(x, 8) << endl << endl;//Call the function 'smallestElement' which returns the smallest element in the array
}

int smallestElement(int *x, int size){
	int* min = min_element(x, x + size);//Create a pointer which points to the smallest element in the array, which is found using the 'min_element function'
	return *min;//Return the value held in the address min is pointing to
}