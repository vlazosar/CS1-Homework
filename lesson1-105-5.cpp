// Section CSC160 - Computer Science I: C++
// File Name:  Lesson1-105-5
// Student: Victor Lazos
// Homework Number: 5
// Description: Volume of sphere
// Last Changed: 01/21/2018

#include <iostream>
using namespace std;

int main( )
{
	double radius, vm; //Defined variables.
	const double PI = 3.1415; 
	
	cout << "Enter radius of a sphere." << endl; //Input for radius.
	cin >> radius;
	
	vm = (4.0 / 3.0) * PI * radius * radius * radius; //Computes volume of sphere.
	cout << "The volume is " << vm << endl;
	
	return 0;
}
