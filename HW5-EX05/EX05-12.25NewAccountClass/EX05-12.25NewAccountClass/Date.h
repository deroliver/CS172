#ifndef DATE_H_
#define DATE_H_

#include <string>
#include <ctime>

class Date{
private:
	int year;
	int month;
	int day;

public:
	Date();//Default constructor
	Date(int elapseTime);//Created Date object with elapsed time in seconds since January 1, 1970
	Date(int newYear, int newMonth, int newDay);//Set a custom Date object

	int getYear();//Returns year
	int getMonth();//Returns month
	int getDay();//Returns day

	void setDate(int elapseTime);//Set date using seconds

};


int findCurrentMonth(int currentDay);//Header to find the current month
int findCurrentDay(int Month, int Day);//Header to find the current day
int findCurrentYear(int Days);//Header to find the current year
#endif

