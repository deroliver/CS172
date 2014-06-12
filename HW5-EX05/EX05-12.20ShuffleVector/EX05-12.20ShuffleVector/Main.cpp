#include <iostream>
#include <vector>
#include <algorithm>//Use random_shuffle
using namespace std;

template<typename T>//Templated function
void shuffle(vector<T>& v){
	random_shuffle(v.begin(), v.end());//Shuffles passed vector from the beginning to the end using 'random_shuffle' function

	
}


int main(){
	vector<int> V1;
	for (int i = 0; i < 10; i++){
		int y = 0;
		cout << "Enter a number: ";
		cin >> y;
		V1.push_back(y);//Read in 10 values to the vector
	}

	shuffle(V1);

	cout << "\n\n\nYour numbers shuffled are: \n";
	for (int i = 0; i < 10; i++){
		cout << "   " << V1[i] << endl;
	}
	cout << endl << endl << endl;
}