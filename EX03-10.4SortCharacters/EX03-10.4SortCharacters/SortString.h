#include <string>
using namespace std;

string sort(string& s){
	int x = s.size();//Find the length of the string so I can loop through it
	int temp;//Initialize a temp value
	for (int i = 0; i < x; i++){//Loop through the length of the string
		for (int j = i; j < x - 1; j++){//Loop through the length - 1, so you have the value before the current value
			if (tolower(s[i]) > tolower(s[j + 1])){//A string is an array, so if the first letter is greater than the second letter in the array
				temp = s[i];//Set temp equal to the first value
				s[i] = s[j + 1];//Set the first value equal to the second value, which is less than the first value
				s[j + 1] = temp;//Then set the second value equal to the greater value that was stored in temp
			}
		}
	}
	return s;//Return the string
}