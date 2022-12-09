#ifndef __TIME_H
#define __TIME_H

#pragma warning(disable: 4996) 
#pragma once

class Time
{
private:

	int year;
	int month;
	int day;

public:
	Time(const int the_year, const int the_month ,const int the_day)
	{
		year = the_year;
		month = the_month;
		day = the_day;
	};

	void show_Time();


};

#endif // __TIME_H