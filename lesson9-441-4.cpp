// Section CSC160 - Computer Science I: C++
// File Name:  Lesson9-441-4
// Student: Victor Lazos
// Homework Number: 9
// Description: Standard Deviation Array
// Last Changed: 04/11/2018

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void initialize_array(int a[], int number_of_scores, int& numbers_used); //Declaration for array
void show(const int a[], int number_used); //Declarations for functions
double calculate_average(const int a[], int numbers_used);
double calculate_deviation(const int a[], int numbers_used);
int max_scores = 10;

int main()
{
    char again;
    do //Show results and repeat loop
    {
    int score[max_scores], numbers_used;

    initialize_array(score, max_scores, numbers_used);
    show(score, numbers_used);
    cout << "Press 'Y' or 'y' to continue, any other key exits."<<endl;
    cin >> again;
    }
    while(again =='Y' || again =='y');
    
    return 0;
}

void initialize_array(int a[], int number_of_scores, int& numbers_used) //Fill array with input data
{
    cout << "Enter up to 10 values, seperated by \n";
    cout << "white space. Terminate input with a -1.\n";
    cout << "I will compute the the average and standard deviation \n";
    int next, index = 0;
    cin >> next;
 
    
    while((next >= 0) && (index < max_scores))
    {
    a[index] = next;
    index++;
    cin >> next;
    }

    numbers_used = index;
}

void show(const int a[], int numbers_used) //Show average/standard deviation
{
    double average = calculate_average(a, numbers_used), deviation = calculate_deviation(a, numbers_used);
    
    cout<<"The average is: "<< average;
    cout<<"\nThe Standard Deviation is: " << deviation << "\n";
}

double calculate_average(const int a[], int numbers_used) //Calculate average
{
    double total = 0;
    for(int index = 0; index < numbers_used; index++)
    {
    total = total + a[index];
    }
    if(numbers_used>0)
    {
    return(total/numbers_used);
    }
    else
    {
    return 0;
    }
}

double calculate_deviation (const int a[], int numbers_used) //Calculate standard deviation
{
    double deviation, average = calculate_average(a, numbers_used);
    double sum = 0;
    
    for ( int i = 0; i <= numbers_used-1; i++ )
    {   
    sum += pow((a[i]-average),2);
    }
    
    deviation = sqrt(sum/(numbers_used));
    return deviation;
}
