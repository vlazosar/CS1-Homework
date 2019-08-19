// Section CSC160 - Computer Science I: C++
// File Name:  Lesson1-104-2
// Student: Victor Lazos
// Homework Number: 2
// Description: Babylonian algorithm
// Last Changed: 01/21/2018

#include <iostream>
using namespace std;

int main( )
{
	char again;
	do
	{
	double num, guess, finalguess, r;
	int re=0;
	cout << "Please input a number to compute the square root of.\n"; //User input.
	cout << "Then press return. \n";
	cin >> num;
	cout << "\n";
	guess = num/2;
	
	while (re<100) //100 times loop.
	{
	r = num/guess;
	guess = (guess+r)/2;
	re++;
	}
	
	cout << "The estimate of the square root of " << num << " is " << guess << ".\n"; //Output.
	cout << "\n";
	
	cout << "Would you like to perform this calculation again?\n"; //Loop.
	cout << "(Enter 1 for yes and 0 for no.)\n";
	cin >> again;
}
	while (again == '1');
    return 0;
}
