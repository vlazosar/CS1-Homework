// Section CSC160 - Computer Science I: C++
// File Name:  Lesson4-362-2
// Student: Victor Lazos
// Homework Number: 2
// Description: Average of File
// Last Changed: 02/14/2018

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main( )
{
char again;

do	//User input loop.
{
ifstream in_stream;
char fileName[13];	//Specifies 12 character limit.
double nextNumber, average, sum = 0;
int total;

cout << "Please enter a file name. (Maximum of 12 characters)\n"; //Prompt for user file name.
cin >> fileName;

in_stream.open(fileName); //Open file and check if it fails.
if (in_stream.fail()){
	cout << "\nFailed to open file. Invalid file name.";
	exit(1);
}

while (in_stream >> nextNumber) //Begin reading number by number.
{
	sum = sum + nextNumber;
	total++;
}

if (total == 0) //Case for no numbers.
{
	cout << "\nOops! Cannot divide by zero.\n";
	in_stream.close(); //Close file.
}
else if (total > 0 || total < 0) //Case for all other numbers.
{
	average = sum/total;
	cout << "\nThe average of " << total << " numbers is " << sum/total << "\n";	//Output for total numbers and average
	in_stream.close();
}

cout << "\nWould you like to perform this calculation again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.
cin >> again;
cout << "\n";
}
while (again == 'Y' || again == 'y');
return 0;

}

