// Section CSC160 - Computer Science I: C++
// File Name:  Lesson4-369-5
// Student: Victor Lazos
// Homework Number: 5
// Description: Advice Oracle
// Last Changed: 02/14/2018

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std; //Function call.

fstream in_stream;
ofstream out_stream;

out_streamCreate() //Writing to file.
{out_stream.open("hw4pr02input.txt");
if (out_stream.fail())
{
	cout << "\nFailed to write to file.";
	exit(1);
}
}

in_streamRead() //Reading from file.
{in_stream.open("hw4pr02input.txt");
if (in_stream.fail()){
	cout << "\nFailed to open file.";
	exit(1);
}
}
int main( )
{
char nextWord, newAdvice;
cout << "PROGRAMMING ORACLE\n";

in_streamRead();

cout << "\nI will write programming advice to the screen.\nPlease enter another piece of programming advice as an offering.\n\nHere is your advice:\n\n"; //Display previous advice.
while (!in_stream.eof())
{
	in_stream.get(nextWord);
	cout.put(nextWord);
}
in_stream.close(); //Close file.

out_streamCreate();

cout << "\n\nPlease put in your advice. When you are finished press the Enter key:\n"; //Prompt for new advice.

cin.get(nextWord);	//Take new advice and replace old advice.
while (!out_stream.eof())
{
{
	out_stream << nextWord;
	nextWord = newAdvice;
	cin.get(nextWord);
}
	if (nextWord == '\n')	//Checks for one enter key press.
{	
		cout <<"\nThank you for your advice. \n";
		return 0;
}
}

out_stream.close(); //Close file.

return 0;

}

