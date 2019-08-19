// Section CSC160 - Computer Science I: C++
// File Name:  Lesson3-245-3
// Student: Victor Lazos
// Homework Number: 3
// Description: Stock Prices
// Last Changed: 02/06/2018

#include <iostream>
#include <cmath>
using namespace std;
double stock_price(int dol, int num, int dnum); //Function call.
int main( )
{
char again;
do
{
int dol, num, dnum, shares;
double sp, total;

cout << "Please enter stock price and number of shares. \n"; //User input for stock price.
cout << "Enter price as integers: Dollars, Numerator, Denominator. \n";
cin >> dol >> num >> dnum;
sp = stock_price(dol, num, dnum);

cout.setf(ios::fixed); //Change fractional ints into dollar format.
cout.setf(ios::showpoint), 
cout.precision(2);

cout << "\nEnter number of shares held. \n"; //User input for shares.
cin >> shares;

cout << "\n" << shares << " shares of stock with market price " << dol << " " << num << "/" << dnum << " have value of $" << sp*shares; //Final output.
cout << "\n";

cout << "\nWould you like to perform this calculation again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.
cin >> again;
cout << "\n";
}
while (again == 'Y' || again == 'y');

    return 0;

}

double stock_price(int dol, int num, int dnum) //Function definition
{	return dol + static_cast<double>(num)/dnum;
}


