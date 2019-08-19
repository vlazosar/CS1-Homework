// Section CSC160 - Computer Science I: C++
// File Name: Lesson9-441-4
// Student: Victor Lazos
// Homework Number: 9
// Description: List Deleting
// Last Changed: 04/11/2018

#include <iostream>
#include <cstdlib>
#include "List.h"
#include "List.cpp"
using namespace std;
int TEST_COUNT = 7;

int main()
{
	List testList;
	int temp;
	char again;
do
{
cout << "Enter Value: ";
for (int i = 0; i < TEST_COUNT; i++)
{
cin >> temp;
testList.addValue(temp);
}

cout << "There are " << testList.getSize() << " values on list.\n";
cout << "The first value is " << testList.getValue(0) << "\n";
cout << "The last value is " << testList.getLast(testList.getSize()-1) << "\n\n";

testList.deleteLast();

cout << "After deleting last value, there are " << testList.getSize() << " values left\n";
cout << "The new list is:\n" << testList << "\n\n";
while (!testList.full())
{
	testList.addValue(100.0);
}

if (testList.full())
{
cout << "List is filled up at size equal to " << testList.getSize() << "\n";
}
else
{
cout << "List is not full.\n";
}


cout << "Press 'Y' or 'y' to continue, any other key exits.\n";
cin >> again;
}
while (again == 'Y' || again == 'y');

}
