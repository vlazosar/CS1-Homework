// Section CSC160 - Computer Science I: C++
// File Name: Lesson 8 Problem 2
// Student: Victor Lazos
// Homework Number: 2
// Description: Time Exceptions
// Last Changed: 03/21/2018

#ifndef DIGITALTIMEEXCEPTION_H	//Defined only once with ifndef
#define DIGITALTIMEEXCEPTION_H
#include <string>
using namespace std;

class DigitalTimeException
{
public:
	DigitalTimeException(int ErrorNumber, string ErrorMessage);	//Constructor for int error and string error
	string read_ErrorMessage();	//Return stored message error
	int read_ErrorNumber();	//Return stored number error
private:
	string ErrorMessage;
	int ErrorNumber;
};
#endif
