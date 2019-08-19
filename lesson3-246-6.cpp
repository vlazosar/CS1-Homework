// Section CSC160 - Computer Science I: C++
// File Name:  Lesson3-246-6
// Student: Victor Lazos
// Homework Number: 6
// Description: Credit Card
// Last Changed: 02/06/2018

#include <iostream>
#include <cmath>
using namespace std;
double interest_total(double ibalance, double imonth, int monthnum); //Function call.
int main( )
{
char again;
do
{
int monthnum;
double ibalance, imonth;

cout << "Credit Card Interest \n"; //User inputs.
cout << "Please enter the inital balance. \n";
cout << "$";
cin >> ibalance;
cout << "\nPlease enter monthly interest rate as a decimal fraction.\nExample: For 1.5% write 0.015, 2.3% write 0.023. \n";
cin >> imonth;
cout << " \nPlease enter the number of months the bill has run. \n";
cin >> monthnum;
cout << " \n";

cout.setf(ios::fixed); //Change into dollar format.
cout.setf(ios::showpoint), 
cout.precision(2);

cout << "The interest accumulated is $" << interest_total(ibalance, imonth, monthnum) - ibalance << "\n"; //Final output.

cout << "\nWould you like to perform this calculation again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.
cin >> again;
cout << "\n";
}
while (again == 'Y' || again == 'y');

    return 0;

}

double interest_total(double ibalance, double imonth, int monthnum) //Function definition.
{
for (int n = 0; n < monthnum; n++) //Interest loop.
{double new_balance, new_interest;
new_balance = ibalance + (ibalance*imonth);
new_interest = new_balance - ibalance;
ibalance = new_balance;
}

return ibalance;
}

