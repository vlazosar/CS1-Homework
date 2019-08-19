// Section CSC160 - Computer Science I: C++
// File Name:  Lesson1-106-4
// Student: Victor Lazos
// Homework Number: 4
// Description: Discount Installment Loan Calculator
// Last Changed: 01/21/2018

#include <iostream>
using namespace std;

int main( )
{
	double amount, IR, final_total, month_pay, time, dur;
	char again;
	
	do
	{
	cout << "\n";
	cout << "Discount Installment Loan Calculator.";
	cout << "Please enter the amount of money requested in USD.\n"; //User inputs.
	cout << "$"; cin >> amount;
	cout << "\n";

	cout << "Please enter the percent interest rate of the loan.\n";
	cout << "%"; cin >> IR;
	cout << "\n";
	
	cout << "Please enter the duration of the loan in number of months.\n";
	cin >> dur;
	cout << "\n";
	
	IR = IR/100; //Interest rate.
	time = dur/12; //Time in years.

	final_total = amount/(1-IR*time); //Principal amount equation.
	month_pay = final_total/dur;

	cout.setf(ios::fixed); // Magic money formula.
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "The total amount required is $" << final_total << ".\n"; //Output.
	cout << "Your monthly payment would equal $" << month_pay << ".\n";
	cout << "\n";
	
	cout << "Would you like to calculate a new loan?\n"; //Prompt to start a loop, unsure about how to continue.
	cout << "(Enter 1 for yes and 0 for no.)\n";
	cin >> again;
}
	while (again == '1');

	return 0;
}
