// Section CSC160 - Computer Science I: C++
// File Name: List.cpp
// Student: Victor Lazos
// Homework Number: 9
// Description: List.cpp
// Last Changed: 04/11/2018

#include "List.h"

using namespace std;

List::List(): array_size(0) //Default constructor
{
}

int List::getSize()
{
	return array_size;
}

void List::addValue(double temp)
{
	if (full())
    {
        cout << "Error: adding to a full list.";
        exit(1);
    }
    else
    {
        list_array[array_size] = temp;
        array_size = array_size+1;
    }
}

double List::getValue(int position)
{
	return(list_array[position]);
	
}

double List::getLast(int position)
{
	return(list_array[position]);
}

void List::deleteLast()
{
	array_size = array_size-1;
}

bool List::full()
{
return (array_size == max_size);
}

ostream& operator << (ostream& outs, const List& the_value)
{
	for (int i = 0; i < the_value.array_size; i++)
	outs << the_value.list_array[i];
	return outs;
}
