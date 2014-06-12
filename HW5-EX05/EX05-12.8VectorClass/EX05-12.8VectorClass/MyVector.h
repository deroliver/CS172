#ifndef MYVECTOR_H_
#define MYVECTOR_H_

template<typename T>
class MyVector{
private:
	int capacity;//Private Capacity
	T* vectorArray;//Private pointer 
	int sizeOfVector;//Private size of vector 

public:
	MyVector();//Default constructor
	MyVector(int size);//Construct a vector with a given size
	MyVector(int size, T default);//Construct a vector with a given size, and a given default value
	~MyVector();//Destructor to remove allocated memory
	void push_back(T element);//Push_Back function, appends a value to the vector
	int size() const;//Returns size of the vector
	void new_space();//Allocates new space for the vector
	T at(int index) const;//Returns the element at the given index of the vector
	void pop_back();//Removes a value from the vector
	bool empty() const;//Returns true if the vector is empty
	void clear();//Clears the vector
	void swap(MyVector V2);//Swaps the vector with a given vector
	;
	
};



template<typename T>
MyVector<T>::MyVector(){
	capacity = 1;//Set capacity to 1
	vectorArray = new T[capacity];//Create an allocated array of size capacity
	sizeOfVector = 0;//Vector size is 0
}

template<typename T>
MyVector<T>::MyVector(int size){
	capacity = size;//Capacity is equal to given size
	vectorArray = new T[capacity];//Create allocated array of size capacity
	sizeOfVector = 0;//No values are given, so size of the vecor is 0
}


template<typename T>
MyVector<T>::MyVector(int size, T default){
	capacity = size;//Capacity equal to given size
	vectorArray = new T[capacity];//Create allocated array of given size
	for (int i = 0; i < size; i++)
		vectorArray[i] = default;//Fill the vector with the given defualt value
	sizeOfVector = size;//Size of vector equal to size given, since the vector is full of default values
}


template<typename T>
void MyVector<T>::push_back(T element){
	if (sizeOfVector >= capacity){//If the size of the vector is greater than or equal to the capacity
		new_space();//Run the function new_space
	}
	vectorArray[sizeOfVector] = element;//Then fill the spot at the index sizeOfVector equal to the given element
	sizeOfVector++;//Increment size of vector

}


template<typename T>
void MyVector<T>::new_space(){//Creates more space for the array
	capacity = sizeOfVector * 2;//Double the capacity of the vector
	T* newArray = new T[capacity];//Create a new array of T values, and set it equal to an allocated array of size capacity
	for (int i = 0; i < sizeOfVector; i++)//Fill the new array with the values in the old array
		newArray[i] = vectorArray[i];
	delete[] vectorArray;//Delete allocated array
	vectorArray = newArray;//Set the object's array equal to the newly created array
}



template<typename T>
void MyVector<T>::pop_back(){
	int y = sizeOfVector - 1;
	T* newArray = new T[y];//Create an allocated array of size one less than sizeOfVector
	for (int i = 0; i < y; i++)
		newArray[i] = vectorArray[i];//Fill the new array with the old arrays values, except for the last one
	delete[] vectorArray;//Delete the allocated array
	vectorArray = newArray;//Set the objects array equal to the newly created one
	sizeOfVector--;//Decrement size of array
}


template<typename T>
int MyVector<T>::size() const {
	return sizeOfVector;//Return size of vector
}



template<typename T>
bool MyVector<T>::empty() const{
	return (sizeOfVector == 0);//If sizeOfVector is, it is empty
}


template<typename T>
T MyVector<T>::at(int index) const {
	return vectorArray[index];//Return the value at the given index
}

template<typename T>
void MyVector<T>::clear(){
	sizeOfVector = 0;//Set the sizeOfVector equal to 0
}

template<typename T>
void MyVector<T>::swap(MyVector V2){
		T tempArray = new T[V2.size()];//Create a temporary array
		tempArray = this->vectorArray//Set temporary array equal to the original objects arary
		this->vectorArrary = V2.vectorArray;//Set the original objects array equal to the passed objects array
		V2.vectorArray = tempArray;//Set the passed objects array equal to the temporary array, which holds the original objects array
		delete[] tempArray;//Delete allocated space
}

template<typename T>
MyVector<T>::~MyVector(){
	delete vectorArray;//Delete the allocated array
}
#endif