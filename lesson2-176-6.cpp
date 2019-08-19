// Section CSC160 - Computer Science I: C++
// File Name:  Lesson2-176-6
// Student: Victor Lazos
// Homework Number: 6
// Description: Fibonacci crud
// Last Changed: 01/30/2018

#include <iostream>
using namespace std;
int main( )
{
char again;
do
{
double fib2 = 0, n, Initialbs, Days, Cycles, fibFinal;
cout << "Please enter the inital number of pounds of green crud: ";	//User input for initial values.
cin >> Initialbs;
cout << "\n";

cout << "Please enter the number of days the green crud has had to reproduce: ";
cin >> Days;
cout << "\n";

Cycles = Days/5;

for (n = 1; n <= Cycles; n++)	//Runs based on the number of 5-day cycles.
{
fibFinal = Initialbs + fib2;	//Fibonacci equation.
fib2 = Initialbs;
Initialbs = fibFinal;
}
cout << "After " << Days << " days, there should be " << fibFinal << " pounds of green crud scumming the pond. \n";

cout << "\n";
cout << "Would you like to perform this calculation again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.
cin >> again;
}

while (again == 'Y' || again == 'y');
    return 0;

}
 
