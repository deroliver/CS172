#include <iostream>
#include "Course.h"
#include <algorithm>
using namespace std;

string* increaseCapacity(string* students, int size){//Function that increases the size of the passed array
	string* newArray = new string[2 * size];//Create a new dynamic array which is twice the size of the original
	for (int i = 0; i < size; i++){//Fills the new array with the values held in the old array
		newArray[i] = students[i];
	}
	return newArray;//Returns the newly created array
}




Course::Course(const string& courseName, int capacity){//Constructor, sets data fields equal to entered values
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course(){//Destructor
	delete[] students;//Deletes dynamic students array
}

string Course::getCourseName() const{
	return courseName;//Returns value in courseName
}

void Course::addStudent(const string& name){
	
	if (numberOfStudents == capacity){//If the numberOfStudents = capacity
		students = increaseCapacity(students, capacity);//Set the students array equal to the larger array returned by 'increaseCapacity'
		capacity = 2 * capacity;//'increaseCapacity' doubles the size, so multiply the capacity by 2
		students[numberOfStudents] = name;//Still add the name to the array
		}
	else
		students[numberOfStudents] = name;//Else fill the array with the name normally
	numberOfStudents++;//Increment number of students
	sort(students, students + numberOfStudents);//Sort the names in the array alphabetically		
}

void Course::dropStudent(const string& name){
	numberOfStudents--;//Decrement number of students
	for (int i = 0; i <= numberOfStudents; i++){//Loop through the number of students
		if (students[i] == name)//If the value in students[i] is equal to the name to be dropped
		for (int j = i; j <= numberOfStudents; j++){//Loop through the names from the particular i value to the end of the number of students
			students[j] = students[j + 1];//Set the student to be replaced equal to the student after them until the end of the number of students
		}
	}
}

string* Course::getStudents() const{
	return students;//Returns the students pointer
}

int Course::getNumberOfStudents() const{
	return numberOfStudents;//Returns the value held in numberOfStudents
}

void Course::clear(){//Sets all the values in the array students[] equal to "", clears the array of all names
	for (int i = 0; i < numberOfStudents; i++){
		students[i] = "";
	}
	numberOfStudents = 0;//Sets numberOfStudents equal to 0
}

Course::Course(const Course& course){//Copy Constructor to do a deep copy
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}
