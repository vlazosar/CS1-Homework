// Section CSC160 - Computer Science I: C++
// File Name:  Lesson3-300-5
// Student: Victor Lazos
// Homework Number: 5
// Description: Windchill Index
// Last Changed: 02/06/2018

#include <iostream>
#include <cmath>
using namespace std; 
double windchill(double t, double v, double w); //Function call.
int main( )
{
char again;
do
{
double t, v, w;
cout << "Enter the Celcius temperature: (Must be <=10 degrees.) \n"; //User inputs.
cin >> t;
cout << "\nEnter wind speed in meters/second: \n";
cin >> v;

if (t <= 10) //Ensure temperature variable is valid.
{cout << "\nWind chill factor is " << windchill(t, v, w) << "\n";
}
else if (t > 10) //Invalid input message.
cout << "\nInvalid temperature input! \n";

cout << "\nWould you like to perform this calculation again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.
cin >> again;
cout << "\n";
}

while (again == 'Y' || again == 'y');

    return 0;

}

double windchill(double t, double v, double w) //Function definition.
{w = 13.12 + (0.6215*t) - (11.37 * pow(v, 0.16)) + (0.3965 * t * pow(v, 0.16));
}
