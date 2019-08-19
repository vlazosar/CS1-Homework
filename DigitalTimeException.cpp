// Section CSC160 - Computer Science I: C++
// File Name: Lesson 8 Problem 2
// Student: Victor Lazos
// Homework Number: 2
// Description: Time Exceptions
// Last Changed: 03/21/2018

#include <string>
#include <iostream>
#include "DigitalTimeException.h"
using namespace std;

DigitalTimeException::DigitalTimeException(int errornum, string errorstri)
{
	ErrorNumber = errornum;
	ErrorMessage = errorstri;
}
	
int DigitalTimeException::read_ErrorNumber()
{
	return ErrorNumber;
}

string DigitalTimeException::read_ErrorMessage()
{
	return ErrorMessage;
}
