#include <iostream>
using namespace std;

int main(){
	int *x;//Creat a pointer
	int numb;//Creat an int variable
	cout << "How many numbers would you like to store? ";
	cin >> numb;//Read in the int

	x = new int[numb];//Set x equal to a dynamic array with size 'numb'

	for (int i = 0; i < numb; i++){//Read in numbers to be stored in the dynamic array
		cout << "Enter a number to be stored: ";
		cin >> x[i];
	}

	int avg = 0;
	int sum = 0;
	for (int i = 0; i < numb; i++){//Find the sum by adding each element of the array
		sum += x[i];
	}

	avg = sum / numb;//Average is sum divided by how many numbers are in the array
	int count = 0;
	for (int i = 0; i < numb; i++){
		if (x[i] > avg)//If a particular number is larger that the average
			count++;//Increment count
	}

	cout << "The average of the numbers is " << avg << endl << endl;
	cout << "There are " << count << " number(s) above the average." << endl << endl;

	delete[] x;//Delete the dynamic array I created
}