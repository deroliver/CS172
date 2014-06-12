#include "Date.h"

Date::Date(){//Default constructor
	int Day = (time(0) / 216000);//Find the current day of the year
	month = findCurrentMonth(Day);
	day= findCurrentDay(month, Day);
	year = findCurrentYear(Day);
}

Date::Date(int elapseTime){//Custom constructor
	int Day = (elapseTime / 216000);//Find how many days in the given elapsed time
	month = findCurrentMonth(Day);
	day = findCurrentDay(month, Day);
	year = findCurrentYear(Day);
}

Date::Date(int newYear, int newMonth, int newDay){//Custom constructor
	year = newYear;
	month = newMonth;
	day = newDay;
}

int Date::getDay(){//Return the day
	return day;
}

int Date::getMonth(){//Return the month
	return month;
}

int Date::getYear(){//Return the year
	return year;
}

void Date::setDate(int elapseTime){//Set the date to a custom value
	int Days = day + (elapseTime / 865400);
	month = findCurrentMonth(Days);
	day = findCurrentDay(month, Days);
	year = findCurrentYear(Days);
}


int findCurrentMonth(int currentDay){//A function to find the current Month given the day of the year
	int currentMonth = 0;
	if (currentDay >= 1 && currentDay <= 31)
		currentMonth = 1;
	else if (currentDay > 31 && currentDay <= 59)
		currentMonth = 2;
	else if (currentDay > 59 && currentDay <= 90)
		currentMonth = 3;
	else if (currentDay > 90 && currentDay <= 120)
		currentMonth = 4;
	else if (currentDay > 120 && currentDay <= 151)
		currentMonth = 5;
	else if (currentDay > 151 && currentDay <= 181)
		currentMonth = 6;
	else if (currentDay > 181 && currentDay <= 212)
		currentMonth = 7;
	else if (currentDay > 212 && currentDay <= 243)
		currentMonth = 8;
	else if (currentDay > 243 && currentDay <= 273)
		currentMonth = 9;
	else if (currentDay > 273 && currentDay <= 304)
		currentMonth = 10;
	else if (currentDay > 304 && currentDay <= 334)
		currentMonth = 11;
	else if (currentDay > 334 && currentDay <= 365)
		currentMonth = 12;

	return currentMonth;
}

int findCurrentDay(int Month, int Day){//A function to find the current day in a given monthe, given the day of the year, and the month
	int currentDay = 0;
	if (Month == 1)
		currentDay = Day;
	else if (Month == 2)
		currentDay = Day - 31;
	else if (Month == 3)
		currentDay = Day - 59;
	else if (Month == 4)
		currentDay = Day - 90;
	else if (Month == 5)
		currentDay = Day - 120;
	else if (Month == 6)
		currentDay = Day - 151;
	else if (Month == 7)
		currentDay = Day - 181;
	else if (Month == 8)
		currentDay = Day - 212;
	else if (Month == 9)
		currentDay = Day - 243;
	else if (Month == 10)
		currentDay = Day - 273;
	else if (Month == 11)
		currentDay = Day - 304;
	else if (Month == 12)
		currentDay = Day - 334;
	
	return currentDay;
}

int findCurrentYear(int Days){//Function to find the current year
	int currentYear = 1970 + (Days / 365);
	return currentYear;
}