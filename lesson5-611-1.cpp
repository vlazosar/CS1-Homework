// Section CSC160 - Computer Science I: C++
// File Name:  Lesson5-611-1
// Student: Victor Lazos
// Homework Number: 1
// Description: CDAccount
// Last Changed: 02/28/2018

#include <iostream>
using namespace std;
class CDAccount
{
public:
	
	CDAccount ( ); //Default constructor sets to 0.
    CDAccount (double balance, double interest_rate, int term); //Constructor for specified values.
    
    void set(double balance, double interest_rate, int term); //Declarataion for setting values.
    void set( );
    void output(ostream& outs);
    
    double get_balance( ); //Member functions to return current values.
    double get_interest_rate( );
    int get_term( );
    
    double get_final_balance( ); //Function to return account balance at maturity.
    
    
private:
   double balance; //Private variables
   double interest_rate;
   int term; 
   
};

int main( )
{
	CDAccount accountOne, accountTwo;
	double user_balance;
	double user_rate;
	double user_term;
	
	accountOne.set(1000.0, 4.0, 8); //Provide initial value for first account
	accountOne.output(cout);
	cout <<	"Please enter CD initial balance, interest rate, and term:\n"; //Prompt for values for second account
	cin >> user_balance >> user_rate >> user_term;
	accountTwo.set(user_balance, user_rate, user_term);
	accountTwo.output(cout);
	
	return 0;
}

void CDAccount::set(double new_balance, double new_interest_rate, int new_term) //Sets values from user inputs and checks for invalid numbers
{
	if ((new_interest_rate < 0 ) || (new_term < 0))
	{
		cout << "Illegal values for interest rate or term.\n";
		exit(1);
	}
	balance = new_balance;
	interest_rate = new_interest_rate;
	term = new_term;
}

void CDAccount::set( )
{
	cout << balance << " \n" << interest_rate << " \n" << term;
}

double CDAccount::get_balance( ) //Function declarations for getting variables
{
	return balance;
}

double CDAccount::get_interest_rate( )
{
	return interest_rate;
}

int CDAccount::get_term( )
{
	return term;
}

CDAccount::CDAccount()
{
	balance = 0.0;
	interest_rate = 0.0;
	term = 0;
}

void CDAccount::output(ostream& outs) //Outputs results to screen
{
outs.setf(ios::fixed);
outs.setf(ios::showpoint);
outs.precision(2);

outs << "CD Account balance $" << balance << "\n";
outs << "CD Account interest rate " << interest_rate << "\nCD Account term is " << term << " months.\n";
outs << "When your CD matures in " << term << " months\n";
outs << "It will have a balance of " << get_final_balance() << " \n";
}

double CDAccount::get_final_balance() //Calculate balance after maturity
{
	{double interest_fraction, new_interest;
	interest_fraction = interest_rate/100.0;
	new_interest = balance*(term/12.0)*interest_fraction;
	balance = new_interest + balance;
	}
	return balance;
}
