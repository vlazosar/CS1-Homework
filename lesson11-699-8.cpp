// Section CSC160 - Computer Science I: C++
// File Name:  Lesson11-699-8
// Student: Victor Lazos
// Homework Number: 11
// Description: Dynamic List
// Last Changed: 04/24/2018

#include<iostream>
using namespace std;
const int MAX_SIZE = 50;
typedef double* DoublePtr;	//Typedef for a double-pointer

class ListDynamic
{
private:
    double* listValues;
    int size;
public:
    ListDynamic();
    bool full();
    int getSize();
    void addValue(double value);
    double getValue(int index);
    double getLast();
    void deleteLast();
    friend ostream& operator <<(ostream& out, const ListDynamic& thisList);
    

};
int main()
{
    double value;
    int sizeoflist;
    DoublePtr p;
    p = new double [sizeoflist];	//Sets array to max size
    sizeoflist = 50;
    ListDynamic list;
	cout << "Enter Value: ";	//Inputting values
    cin >> value;
    list.addValue(value);
	cout << "Enter Value: ";
    cin >> value;
    list.addValue(value);
	cout << "Enter Value: ";
    cin >> value;
    list.addValue(value);
	cout << "Enter Value: ";
    cin >> value;
    list.addValue(value);
	cout << "Enter Value: ";
    cin >> value;
    list.addValue(value);
    cout << "There are " << list.getSize() << " values on the list\n";
    cout << "The first value on the list is " << list.getValue(0) << "\n";
    cout << "The last value on the list is " << list.getLast() << "\n";
    list.deleteLast();
    cout << "After deleting the last value, there are "  << list.getSize() << " values left\n";
    cout << "The new list is: " << "\n" << list << "\n";
    cout << "Added values up to item " << MAX_SIZE;
    delete [] p; //Deleting the dynamic array
    return 0;
}

ListDynamic::ListDynamic()
{
    size = 0;
}

bool ListDynamic::full()
{
    return (size == MAX_SIZE);
}

int ListDynamic::getSize()
{
    return size;
}

void ListDynamic::addValue(double value)	//Dynamically adds values
{
    if (full())
    {
    double* temp = new double[size];
    std::copy(listValues, listValues + size, temp);
        
    delete[] listValues;
    listValues = new double[size + 1];
        
    std::copy(temp, temp + size, listValues);
    listValues[size] = value;
    delete[] temp;
    } 
	else
    {
    listValues[size++] = value;
    }
}

double ListDynamic::getValue(int index)
{
    return listValues[index];
}

double ListDynamic::getLast()
{
    if (size > 0)
    { 
    }
    else
    {
        cout << "\nError: List is empty";
    }
    return getValue(size - 1);
}

void ListDynamic::deleteLast()
{
    if (size > 0)
    size--;
    else
    cout << "\nError: Cannot delete last value";
}
ostream& operator <<(ostream& out, const ListDynamic& thisList)
{
    for (int i = 0; i < thisList.size; i++)
    out << thisList.listValues[i] << endl;
    return out;
}
