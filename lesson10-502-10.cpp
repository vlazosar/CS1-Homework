/* Section CSC 160 Comp Sci I : C++
** Name: Victor Lazos
** Student ID: S02013811
** File name: Lesson10-10-502.cpp
** Last Updated : 04/18/2018

** Array program that reads a file and counts the occurances of the numbers in the array and sorts them.

*/
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void check_input(ifstream& iPut);
void set_array(ifstream& iPut, vector <int>& test);
void sort_vector(vector <int>& test);	//Using vectors instead
void check_repeats(vector <int>& test);
int main()
{
    ifstream iPut;
    vector <int> test;

    cout << "Homework 10: Solution to Chapter 8 Project 10" << endl;
    cout << "\n";

    iPut.open("hw10input.txt");	//Using provided file for input

    check_input(iPut);	//In case file input fails

    set_array(iPut, test);	

    sort_vector(test);

    check_repeats(test);

    iPut.close();

    return 0;
}

void check_input(ifstream& iPut)
{
    if(iPut.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }
}

void set_array(ifstream& iPut, vector <int>& test)
{
    int numbers;
    while (iPut >> numbers)
    {
         test.push_back(numbers);
    }

    sort_vector(test);	// Call to selecting sort to sort array before output.

}

void sort_vector(vector <int>& test) //Descending sort borrowed from https://stackoverflow.com/questions/41760341/c-selection-sort-vectors
{
    int j, min, i;

    for (vector<int>::size_type j = 0; j < test.size(); j++ )
    {
        vector<int>::size_type min = j;

        for ( vector<int>::size_type i = j + 1; i < test.size(); i++ )
        {
        if ( test[i] < test[min] ) min = i;
        }

        if ( min != j )
        {
        swap( test[min], test[j] );
        }
    }

}

void check_repeats(vector <int>& test)
{
    for(int i = 0; i < test.size(); i++)
    {
        int count = 0;
        int flag = 1;
        for ( int j = 0; j < i; j++) // First pass through array
        {
            if (test[i] == test[j])
            flag += 1;
        }
            if ( flag == 1 ) // Flag to do a second pass
            {
                for(int k = 0; k < test.size(); k++)
                {
                    if (test[i] == test[k])
                    count += 1;
                }

                cout << test[i] << " " << count <<endl;
            }
      }
}
