#include <iostream>
using namespace std;

int* doubleCapacity(const int *list, int size);

int main(){
	const int SIZE = 10;
	int count[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//Initialize an array with a size of 10
	int count1 = 0;

	cout << "The values held in the first array are: ";
	for (int i = 0; i < SIZE; i++){//Display the numbers held in the array
		cout << count[i] << " ";
	}
	cout << endl;
	int* newArray = doubleCapacity(count, SIZE);//Set a pointer equal to the dynamic array 'doubleCapacity' returns
	

	cout << "The values held in the second array are: ";
	for (int i = 0; i < (2 * SIZE); i++){//Display the numbers in the new dynamic array
		cout << newArray[i] << " ";
	}
	cout << endl;
	
	delete[] newArray;//Delete the created dynamic array

}


int* doubleCapacity(const int *list, int size){
	int x = 2 * size;//Set an int equal to twice the size of the original array
	int* newArray = new int[2*size];//Create a dynamic array with twice the size of the original

	for (int i = 0; i < x; i++){//Copy the values in the original array to the newly created dynamic array
		newArray[i] = list[i];
		static int c = 1;
		if (i >= size){//If i is greated than the original size
			newArray[i] = c;//Put more numbers in the dynamic array, starting at 1, and incrementing every time
			c++;
		}
	}
	
	return newArray;//Return the dynamic array
}