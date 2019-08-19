// Section CSC160 - Computer Science I: C++
// File Name:  Lesson2-172-1
// Student: Victor Lazos
// Homework Number: 1
// Description: Rock/Paper/Scissors
// Last Changed: 01/30/2018

#include <iostream>
using namespace std;

int main( )
{

char again;

do{	//Do-while loop so it runs at least once.
	char Play1, Play2;
	cout << "Please enter either R)ock, P)aper, or S)cissors. Then press return.\n";	//User 1 input.
	cin >> Play1;

	cout << "Please enter either R)ock, P)aper, or S)cissors. Then press return.\n";	//User 2 input.
	cin >> Play2;

	Play1 = (toupper(Play1));	//These make user inputs uppercase?
	Play2 = (toupper(Play2));

	if(Play1 == 'R' && Play2 == 'S')	//Decides winner/loser.
	cout << "Rock breaks scissors. Player 1 wins!";
	else if (Play1 == 'R' && Play2 == 'P')
	cout << "Paper covers rock. Player 2 wins!";
	else if (Play1 == 'S' && Play2 == 'R')
	cout << "Rock breaks scissors. Player 2 wins!";
	else if (Play1 == 'S' && Play2 == 'P')
	cout << "Scissors cuts paper. Player 1 wins!";
	else if (Play1 == 'P' && Play2 == 'S')
	cout << "Scissor cuts paper. Player 2 wins!";
	else if (Play1 == 'P' && Play2 == 'R')
	cout << "Paper covers rock. Player 1 wins!";
	else if (Play1 == Play2)
	cout << "It's a tie!";
	
cout << "\n";
cout << "Would you like to play again? \nPress Y/y for yes or N/n for no.";	//Prompt to loop.

cin >> again;
}
while (again == 'Y' || again == 'y');
	return 0;
	
}
