#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int doubleNumber(int x);
int add(int x, int y);
int addToParameter(int &x);
void Array(int array[], int size);
void Array1(int array[], int size);
void ex02();
void ex03();
void ex04();
void ex05();



int main(){
	srand(time(NULL));
	ex02();
	ex03();
	ex04();
	ex05();
}



void ex02(){
	bool hasPassedTest = true;
	int x = rand();
	int y = rand();
	int numberOfShares;
	int boxWidth, bookWidth;
	int shelfLife;
	int temp;
	if (x >= y){//If x is greater than or equal to y
		if (hasPassedTest){//hasPassedTest is already true
			cout << "X is greater than or equal to Y" << endl << endl << endl;//Tell the user x is greater than or equal to y
		}
	}
	else if (x < y){//If x is less than y
		hasPassedTest = false;//Set hasPassedTest to false
		if (!hasPassedTest){//If not hasPassedTest is true
			cout << "X is not greater than or equal to Y" << endl << endl << endl;//Tell the user x is not less than or equal to y
		}
	}
		
	
	cout << "Enter the number of shares: ";
		cin >> numberOfShares;//Read in number of shares
		if (numberOfShares < 100){//If less than 100
			hasPassedTest = true;//hasPassedTest set to true
			if (hasPassedTest){
				cout << "The number of shares is less than 100" << endl << endl << endl;//Tell User number of shares is less than 100
			}
		}
		else if (numberOfShares >= 100){//If greater than or equal to
			hasPassedTest = false;//Set hasPassedTest to false
			if (!hasPassedTest){//If not hasPassedTest is true
				cout << "The number of shares is greater than or equal to 100" << endl << endl << endl;//Tell user number of shares is not greater than or equal to 100
			}
		}
	
		
		cout << "Enter the box width: ";
		cin >> boxWidth;//Read in box width
		cout << "Enter the book width: ";
		cin >> bookWidth;//Read in book width
		if (boxWidth % bookWidth == 0){//Check for even divisibility
			hasPassedTest = true;//If evenly divisible, hasPassedTest set to true
			if (hasPassedTest){
				cout << "The box width is evenly divisible by the book width" << endl << endl << endl;//Tell user box width is evenly divisible by book width
			}
		}
		else if (boxWidth % bookWidth != 0){//If not evenly divisible
			hasPassedTest = false;//Set hasPassedTest to false
			if (!hasPassedTest){
				cout << "The box width is not evenly divisible by the book width" << endl << endl << endl;//Tell user box width is noy evenly divisible by book width
			}
		}

		cout << "Enter the shelf life of your box of chocolates: ";
		cin >> shelfLife;//Read in shelf life
		cout << "Enter the temperature outside, it farenheit: ";
		cin >> temp;//Read in outside temperature
		if (temp > 90){//If temperature is greater than 90
			hasPassedTest = true;//Set hasPassedTest to true
			if (hasPassedTest){
				shelfLife = shelfLife - 4;//Subtract 4 from shelf life
				cout << "Your actual shelf life is: " << shelfLife <<  endl << endl << endl;//Output actual shelf life
			}
		}
		else{
			hasPassedTest = false;//If not greater than 90, hasPassedTest set to false
			if (!hasPassedTest){//If not hasPassedTest
				shelfLife = shelfLife;//shelfLife is not changed
				cout << "Your shelf life is unaffected" << endl << endl << endl;//Output original shelf life
			}
		}
		
}



void ex03(){
	int area;
	char ans;
	char tab = '\t';
	string mailingAddress;
	cout << "Enter the area of your square: ";
	cin >> area;//Read in area of square
	double diag = (sqrt(2 * area));//Find diagonal length
	cout << "The diagonal is " << diag << endl << endl;//Output diagonal length

	cout << "Enter yes (y) or no (n): ";
	cin >> ans;//Read in char ans
	if (ans == 'y'){//If char ans is equal to y
		cout << "You entered Yes (y)" << endl << endl << endl;
	}
	else if (ans == 'n'){//If char ans is equal to n
		cout << "You entered No (n)" << endl << endl << endl;
	}
	
	cout << "What is your mailing address? ";
	cin.ignore();//Ignore any left over value in cin
	getline(cin, mailingAddress);//Get all of the user's input for their address

	cout << "Your mailing address is: " << mailingAddress << endl << endl << endl;//Output address

}



void ex04(){
	int numb;
	int sum = 0;
	int j = 0;
	do{//Ask the user for a number
		cout << "Enter a number between 1 and 10: ";
			cin >> numb;//Read in number
	} while (numb < 1 || numb > 10);//Continue to ask until the number is between 1 and 10

	for (int i = 1; i <= numb; i++){//Loop between 1 and the number the user entered
		int temp = i * i * i;//Set the cube of the number equal to temp
		sum += temp;//Add temp to sum
	}
	cout << "The sum of the cubes from 1 to " << numb << " is " << sum << endl << endl << endl;//Output the sum of the cubbes
	
	do{//Output an asterisk
		cout << "*" << endl;
		j++;
	} while (j < numb);//While int j = 0 is less than the number the user entered

	cout << " " << endl << endl << endl;

	for (int i = 0; i <= 40; i++){//Loop from 0 to 40
		if (i % 2 == 0){//If the number is even
			cout << i << " ";//Output the number
		}
	}

	cout << " " << endl << endl << endl;

	int d = doubleNumber(numb);
	cout << "Your number doubled is " << d << endl << endl << endl;

	int added = add(rand(), rand());
	cout << "The sum of two random number is " << added << endl << endl << endl;

	int param = addToParameter(numb);
	cout << "The new parameter is " << param << endl << endl << endl;
}

int doubleNumber(int x){
	int y = 2 * x;//Multiple the parameter by 2
		return y;//Return the multiplied number
}

int add(int x, int y){
	int sum = x + y;//Add the two parameters
	return sum;//Return the added numbers
}

int addToParameter(int &x){
	x++;//Add one to the parameter
	return x;//Return the new value
}



void ex05(){
	const int SET = 5;
	int numbers[SET];
	int sum = 0;
	int product = 1;
	for (int i = 0; i < SET; i++){//Loops between 0 and the size of the array
		int temp;
		cout << "Enter a number: ";
		cin >> temp;//Reads in a number
		numbers[i] = temp;//Stores number in the array
	}
	cout << " " << endl << endl << endl;
	
	for (int i = 0; i < SET; i++){//Loops between 0 and size of array
		sum += numbers[i];//Adds every value in the array
	}
	cout << "The sum of your numbers is: " << sum << endl << endl << endl;//Outputs sum of the numbers in the array

	for (int i = 0; i < SET; i++){//Loops between 0 and size of array
		product *= numbers[i];//Multiplies every number in the array
	}
	cout << "The product of your numbers is: " << product << endl << endl << endl;//Outputs product of all numbers in the array

	cout << "The numbers you entered are: " << endl;
	Array(numbers, SET);//Calls function Array
	cout << " " << endl << endl << endl;


	Array1(numbers, SET);//Calls function Array1

}

void Array(int array[], int size){
	for (int i = 0; i < size; i++){//Loops between 0 and size of array
		cout << array[i];//Outputs every value in the passed function
		cout << " ";
	}
}

void Array1(int array[], int size){
	int temp;
	int n = 0;
	cout << "Enter a number: ";
	cin >> temp;//Reads in a number
	for (int i = 0; i < size; i++){//Loops between 0 and size of array
		if (temp == array[i]){//Checks whether the entered value is somewhere in the array
			n++;//Increments everytime the entered number is in the array
		}
	}
		cout << temp << " is in the array " << n << " times" << endl << endl << endl;//Outputs the number of times the value is in the array
	
}