////I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

/////
//Name: Derik Oliver
//Date: May 29 2014
//Class: CS172 - Summer Session
//Professor: Pete Tucker
//Title: Exam 1
/////

#ifndef THEATER_H_
#define THEATER_H_

#include "Movie.h"
#include <string>
using namespace std;

class Theater{
private:
	Movie NumberOfMovies[11];//Array of Movie Objects to store the movies in
	int PopcornPrice;//Stores the price of popcorn, private so the price cannot be changed
	int CokePrice;//Stores the price of Coke, private so the price cannot be changed
	string TheaterName;//Stores theater's name, private so the name cannot be changed
	string TheaterPhone;//Stores theater's phone number, private so the phone number cannot be changed
public:
	Theater(string Name, string Phone);	
	void AddMovie(Movie& Movie);//Pass by reference because there is no reason to copy the movie being added, it takes longer, and requires more memory.		
	string GetMovieForHour(int hour);		
	int GetShowTimeForGenre(string Genre);	
	int GetPopcornPrice();//Function to access the value of the price of popcorn			
	int GetCokePrice();//Function to access the value of the price of Coke				


};
#endif 