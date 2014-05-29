//I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

/////
//Name: Derik Oliver
//Date: May 29 2014
//Class: CS172 - Summer Session
//Professor: Pete Tucker
//Title: Exam 1
/////

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
using namespace std;

class Movie{
private:
	string MovieTitle;//Stores the movie's title, private so the title cannot be changed
	string MovieGenre;//Stores the movie's genre, private so the genre cannot be changed
	int MovieShowTime;//Stores the movie's show time, private so the show time cannot be changed
public:
	Movie();//Default constructor
	Movie(string Title, string Genre, int ShowTime);//Constructor with parameters

	string GetTitle();//Returns the movies title, since private variable cannot be directly accessed	
	string GetGenre();//Returns the movies title, since private variable cannot be directly accessed	
	int GetShowtime();//Returns the movies title, since private variable cannot be directly accessed	

};
#endif
