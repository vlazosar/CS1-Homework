// Section CSC160 - Computer Science I: C++
// File Name: Lesson 8 Problem 1
// Student: Victor Lazos
// Homework Number: 1
// Description: Exceptions Catching
// Last Changed: 03/21/2018

#include <iostream>
#include <cstdlib>
#include <string>
#include "Student.h"
#include "Student.cpp"
#include "StudentException.h"
#include "StudentException.cpp"
using namespace std;

int main()
{
	Student firstStudent("S0000101");	//Declaring 3 students' Student variables
	Student secondStudent("S0000102");
	Student thirdStudent("S0000103");
try
{	
	firstStudent.enroll("CSC-160-500");	//Enrolling the 3 students in different courses
	secondStudent.enroll("CSC-161-500");
	thirdStudent.enroll("PHI-112-500");
}

catch(StudentException err)	//Catching exceptions thrown by enrollment
{
	cout << err.errorMessage();
}

try	
{
	Student("S0000101");	//Implementing students by Student ID
	Student("S0000102");
	Student("S0000103");
}

catch(StudentException err)	//Catching exceptions thrown by Student ID
{
	cout << err.errorMessage();
}

catch(...)	//Special catch block for any thrown value type
{
	cout << "Unexplained exception!";
}

return 0;
}
