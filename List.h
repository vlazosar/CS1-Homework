// Section CSC160 - Computer Science I: C++
// File Name: List.h
// Student: Victor Lazos
// Homework Number: 9
// Description: List.h
// Last Changed: 04/11/2018

#ifndef List_h
#define List_h
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

const int max_size = 50;
class List
{
public:
	List();
	double list_array[max_size];
	int array_size;
	void addValue(double temp);
	double getValue(int position);
	int getSize();
	double getLast(int position);
	void deleteLast();
	bool full();
	friend ostream& operator <<(ostream& outs, const List& the_value);
};

#endif
