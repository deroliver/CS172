////I affirm that all code given below was written solely by me, Derik Oliver, and that any help I received adhered to the rules stated for this exam.

/////
//Name: Derik Oliver
//Date: May 29 2014
//Class: CS172 - Summer Session
//Professor: Pete Tucker
//Title: Exam 1
/////

#include "Theater.h"

Theater::Theater(string Name, string Phone){//Theater constructor with parameters
	TheaterName = Name;//Sets the TheaterName to the name provided
	TheaterPhone = Phone;//Sets the phone number to the number provided
	PopcornPrice = 10;//Initializes the popcorn price
	CokePrice = 5;//Initialized the Coke price
}

void Theater::AddMovie(Movie& Movie){//Add a movie to the theater
	static int c = 0;//Create a static int, so the value will not reset when the function is called again
	NumberOfMovies[c] = Movie;//Set the value in our array according to 'c' equal to the movie passed
	c++;//Increment 'c' to the next value
}

string Theater::GetMovieForHour(int hour){
	for (int i = 0; i < 10; i++){//Loop through all the movies in the array NumberOfMovies[i]
		if ((hour <= NumberOfMovies[i + 1].GetShowtime()) && (hour > (NumberOfMovies[i].GetShowtime()))){//If the hour is less than or equal the upcoming movie's show time, and greater than the movie's 
			//show time that is playing, or just played
			return NumberOfMovies[i + 1].GetTitle();//Then return the upcoming movie's show time value
			break;//Then get out of the function
		}
	}
	return "";//If there is not coresponding show time value, return ""
}

int Theater::GetShowTimeForGenre(string Genre){
	int x = 0;
	for (int i = 0; i < 10; i++){//Loop through every movie in the array NumberPfMovies[i]
		if (NumberOfMovies[i].GetGenre() == Genre)//If the genre of the particular movie is equal to the genre passed
			x = NumberOfMovies[i].GetShowtime();//Set 'x' equal to the show time of the corresponding movie
		else
			x = -1;//If not, set x = -1
		return x;//Then return 'x'
	}
	
}

int Theater::GetPopcornPrice(){
	return PopcornPrice;//Return the popcorn price of the theater
}

int Theater::GetCokePrice(){
	return CokePrice;//Return the Coke price of the theater
}