//File Name:  DigitalTime.h
//Description:  Lesson 8, Homework Problem 2
//Last Changed: October 2011

//Header file DigitalTime.h: This is the INTERFACE for the class DigitalTime
//  as used in the Homework assignment for the lesson on Exception handling
#ifndef MODIFIEDDIGITALTIME_H
#define MODIFIEDDIGITALTIME_H
#include <iostream>
using namespace std;

class DigitalTime
{
public:
	friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);
	//Returns true if time1 and time2 represent the same time; 
	//otherwise, returns false.

    friend ostream& operator <<(ostream& outs, const DigitalTime& time);
    //Friend to overload << operator

	DigitalTime(int the_hour, int the_minute);
	//Precondition: 0 <= the_hour <= 23 and 0 <= the_minute <= 59.
	//Initializes the time value to the_hour and the_minute.

	DigitalTime( );
	//Initializes the time value to 0:00 (which is midnight).
	
    friend ostream& operator <<(ostream& outs, const DigitalTime& time);
	//Friend to overload << operator got this from https://msdn.microsoft.com/en-us/library/1z2f6c2k.aspx

private:
	int hour;
	int minute;
};
#endif
