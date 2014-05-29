////I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

/////
//Name: Derik Oliver
//Date: May 29 2014
//Class: CS172 - Summer Session
//Professor: Pete Tucker
//Title: Exam 1
/////

#include "Movie.h"

Movie::Movie(){//Default Constructor
	MovieTitle = "Star Wars";//Sets default title
	MovieGenre = "Action";//Default Genre
	MovieShowTime = 0;//Default show time
}

Movie::Movie(string Title, string Genre, int ShowTime){//Constructor with parameters
	MovieTitle = Title;//MovieTitle = Give title
	MovieGenre = Genre;//MovieGenre = Given genre
	MovieShowTime = ShowTime;//MovieShowTime = Given show time
}

string Movie::GetTitle(){
	return MovieTitle;//Return the private variable MovieTitle, since private variables cannot be accessed directly
}

string Movie::GetGenre(){
	return MovieGenre;//Return the private variable MovieGenre, since private variables cannot be accessed directly
}

int Movie::GetShowtime(){
	return MovieShowTime;//Return the private variable MovieShowTime, since private variables cannot be accessed directly
}