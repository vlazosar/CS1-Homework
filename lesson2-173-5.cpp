// Section CSC160 - Computer Science I: C++
// File Name:  Lesson2-173-5
// Student: Victor Lazos
// Homework Number: 5
// Description: Prime Numbers
// Last Changed: 01/30/2018

#include <iostream>
using namespace std;

int main( )
{
int n,n2;

for (n = 2; n <= 100; n++)	//Counting up to 100.
    for (n2 = 2; n2 < n; n2++)
    {
    if (n % n2 == 0)	//Determine if prime.
        break;
    else if (n == n2+1)
        cout << n << " is a prime number. \n";	//Output n, which is determined to be prime.

    }   
    return 0;
}
