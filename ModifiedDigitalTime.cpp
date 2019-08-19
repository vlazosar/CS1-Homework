//File Name:  DigitalTime.cpp
//Description: Lesson 8, Homework Problem 2
//Last Changed: October 2011
// Modified DigitalTime implementation from Displays 12.1 and 12.2

//This is the IMPLEMENTATION file for the class DigitalTime
//  as used in the Homework assignment for the lesson on Exception handling
//This is a starting point file for Lesson 8 Homework Problem 2 updates

#include <iostream>
#include <cctype>
#include <cstdlib>
#include "ModifiedDigitalTime.h"
#include "DigitalTimeException.h"
using namespace std;

//These FUNCTION DECLARATIONS are for use in the definition of 
//the overloaded input operator >>:

void read_hour(istream& ins, int& the_hour);
//Precondition: Next input in the stream ins is a time in notation,
//like 9:45 or 14:45.
//Postcondition: the_hour has been set to the hour part of the time. 
//The colon has been discarded and the next input to be read is the minute.

void read_minute(istream& ins, int& the_minute);
//Reads the minute from the stream ins after read_hour has read the hour.

int digit_to_int(char c);
//Precondition: c is one of the digits '0' through '9'.
//Returns the integer for the digit; for example, digit_to_int('3') returns 3.

bool operator ==(const DigitalTime& time1, const DigitalTime& time2)
{
	return (time1.hour == time2.hour && time1.minute == time2.minute);
}

//Uses iostream and cstdlib:
DigitalTime::DigitalTime(int the_hour, int the_minute)
{
	if (the_hour < 0 || the_hour > 23 || the_minute < 0 || the_minute > 59)
	{
        throw DigitalTimeException(101, "Invalid time entry!");
	}
	else
	{
		hour = the_hour;
		minute = the_minute;
	}
}

DigitalTime::DigitalTime( ) : hour(0), minute(0)
{
	//Body intentionally empty.
}


{
	int gross_minutes = minute + minutes_added;
	minute = gross_minutes%60;

	int hour_adjustment = gross_minutes/60;
	hour = (hour + hour_adjustment)%24;
}

void DigitalTime::advance(int hours_added, int minutes_added)
{
	hour = (hour + hours_added)%24;
	advance(minutes_added);
}

// *****   Added for Homework 7 Problem 1   *****

void DigitalTime::interval_since(const DigitalTime& previous, int& hours,
	 int& minutes) const
{
// Be sure to account for "previous" times that are later
// Check to see if hour difference value goes negative
//  and for previous times that have same hour but are really later (like 6:30 passed into 6:15)
	hours = hour - previous.hour;
	if ((hours < 0) || (hours == 0 && (minute < previous.minute)))
		hours = hours + 24;
	minutes = minute - previous.minute;
// Need to check for minute difference that goes negative and adjust
	if (minutes < 0)
	{
		hours = hours - 1;
		minutes = minutes + 60;
	}  
}


//Uses iostream:
ostream& operator <<(ostream& outs, const DigitalTime& the_object)
{
	outs << the_object.hour << ':';
	if (the_object.minute < 10)
		outs << '0';
	outs << the_object.minute;
	return outs;
}

//Uses iostream:
istream& operator >>(istream& ins, DigitalTime& the_object)
{
	read_hour(ins, the_object.hour);
	read_minute(ins, the_object.minute);
	return ins;
}

int digit_to_int(char c)
{
	return ( int(c) - int('0') );
}

//Uses iostream, cctype, and cstdlib:
void read_Minute(istream& ins, int& the_minute)
{
	char c1, c2;
	ins >> c1 >> c2;

	if (!(isdigit(c1) && isdigit(c2)))
	{
    	throw DigitalTimeException(102, "Incorrect minute!");
    
	}

	the_minute = digit_to_int(c1)*10 + digit_to_int(c2);

	if (the_minute < 0 || the_minute > 59)
	{
        throw DigitalTimeException(103, "Bad minute!");
	}
}

//Uses iostream, cctype, and cstdlib:
void read_hour(istream& ins, int& the_hour)
{
	char c1, c2;
	ins >> c1 >> c2;
	if ( !( isdigit(c1) && (isdigit(c2) || c2 == ':' ) ) )
	{
        throw DigitalTimeException(104, "Incorrect hour!");
	}

	if (isdigit(c1) && c2 == ':')
	{
		the_hour = digit_to_int(c1);
	}
	else //(isdigit(c1) && isdigit(c2))
	{
		the_hour = digit_to_int(c1)*10 + digit_to_int(c2);
		ins >> c2;//discard ':'
		if (c2 != ':')
		{
            	throw DigitalTimeException(105, "Bad hour input!");
            	exit(1);
		}
	}

	if ( the_hour < 0 || the_hour > 23 )
	{
        throw DigitalTimeException(106, "Bad hour!");
	}
}
