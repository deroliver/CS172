#include <iostream>
#include "Course.h"
using namespace std;

int main(){

	Course C1("CS172", 10);//Create a course
	Course C2(C1); //Copy C1 to C2 using the deep clean copy constructor

	C1.addStudent("John");//Add three students to the course
	C1.addStudent("Jessica");
	C1.addStudent("Alex");

	cout << "There are currently " << C1.getNumberOfStudents() << " students enrolled in " << C1.getCourseName() << "." << endl;//Display number of students in the course
	cout << "Their names are: ";
	for (int i = 0; i < C1.getNumberOfStudents(); i++){//Display the anames of the students in the course
		cout << C1.getStudents()[i] << ", ";
	}

	C1.dropStudent("John");//Drop the student from the course



	cout << "\n\nA student was dropped from " << C1.getCourseName() << ", there are now " << C1.getNumberOfStudents() << " students enrolled in " << C1.getCourseName() << endl;
	cout << "Their names are: ";
	for (int i = 0; i < C1.getNumberOfStudents(); i++){
		cout << C1.getStudents()[i] << ", ";
	}
	cout << endl << endl;

	


	C2.addStudent("Miranda");//Add students to the second course copied from the first
	C2.addStudent("Jake");
	C2.addStudent("Amanda");


	cout << "\n\n\n\n\nThere are currently " << C2.getNumberOfStudents() << " students enrolled in " << C2.getCourseName() << "." << endl;
	cout << "Their names are: ";
	for (int i = 0; i < C2.getNumberOfStudents(); i++){//Display the names of thes students in the course
		cout << C2.getStudents()[i] << ", ";
	}


		C2.dropStudent("Miranda");//Drop the student



		cout << "\n\nA student was dropped from " << C2.getCourseName() << ", there are now " << C2.getNumberOfStudents() << " students enrolled in " << C2.getCourseName() << endl;
		cout << "Their names are: ";
		for (int i = 0; i <= C2.getNumberOfStudents(); i++){
			cout << C2.getStudents()[i] << ", ";
		}
		cout << endl << endl;

		
}