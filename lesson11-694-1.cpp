// Section CSC160 - Computer Science I: C++
// File Name:  Lesson11-694-1
// Student: Victor Lazos
// Homework Number: 11
// Description: Fake Vectors
// Last Changed: 04/24/2018

#include <iostream>
#include <vector>
using namespace std;

class VectorDouble
{
private:
  	int max_count;
  	int count;
    double *Elements;	//Elements pointer
  	void expandCapacity();
public:
  	VectorDouble();	//Default constructor
  	VectorDouble(int size);
  	VectorDouble(const VectorDouble &vector);
  	~VectorDouble();	//Destructor
  	void push_back(double Value);
  	int capacity() const;
  	int size() const;
  	void reserve(int);
  	void resize(int);
    double value_at(int i) const;	
    void change_value_at(double d, int i);
    friend ostream& operator<< (ostream &outs, const VectorDouble& vector);
    void operator= (const VectorDouble& vector1);	//Overloaded = operator
    friend bool operator== (const VectorDouble& vector1, const VectorDouble& vector2);	//Overloaded == operator
};

int main()
{

	cout << "Testing constructors:\n";	//Constructor testing
    VectorDouble vector;
    cout << "The capacity of the new_vector is: " << vector.capacity() << "\n";
    cout << "The size of new_vector is: " << vector.size() << "\n";
    
    VectorDouble vector2(33);
    cout << "The capacity of the new_vector2 is: " << vector2.capacity() << "\n";
    cout << "The size of new_vector2 is: " << vector2.size() << "\n";
    
    VectorDouble vector3(vector2);
    cout << "The capacity of the new_vector3 is: " << vector3.capacity() << "\n";
    cout << "The size of new_vector3 is: " << vector3.size() << "\n";
    
    
	cout << "\nTesting member functions:\n";	//Function testing
	
	VectorDouble temporaryvector(33);
	vector = temporaryvector;
	cout << "The new capacity of new_vector is: " << vector.capacity() << "\n";
    cout << "The new size of new_vector is: " << vector.size() << "\n";
    
    VectorDouble vector4(50);
    vector4.push_back(21);
    cout << "The first value in new_vector4 is: " << vector4.value_at(0) << "\n";
    vector4.change_value_at(23,0);
	cout << "The new first value in new_vector4 is now: " << vector4.value_at(0) << "\n";
	
	if(vector4 == vector3)
	{
    cout << "Vectors 4 and 3 are equal.\n";
    }
    else
	{
    cout << "Vectors 4 and 3 are not equal.\n" << endl;
    }
    
    cout << "The capacity of new_vector4 is: " << vector4.capacity() << "\n";
    vector4.reserve(52);
    cout << "After a call to reserve the capacity of new_vector4 is: " << vector4.capacity() << "\n";
    cout << "The size of new_vector4 is: "  << vector4.size() << "\n";
    vector4.resize(3);
    cout << "After a call to resize the capacity of new_vector4 is: " << vector4.capacity() << "\n";
    
    cout << "\nTesting expanding array:\n";

	vector.reserve(66);
	for(int i = 0; i < 99; i++)
	{
	vector.push_back(i);
	}
	cout << "The capacity of new_vector is: " << vector.capacity() << "\n";
	cout << "The size of new_vector is: " << vector.size() << "\n";
    return 0;
}


VectorDouble::VectorDouble()
{
    max_count = 50;
    Elements = new double[max_count];
    count = 0;
}

VectorDouble::VectorDouble(int size)
{
    max_count = size;
    Elements = new double[max_count];
    count = 0;
}

VectorDouble::VectorDouble(const VectorDouble &vector)
{
    double *tempelements = new double[vector.max_count];

    max_count = vector.capacity();
    for(int i = 0; i < vector.capacity(); i++)
    {
    tempelements[i] = vector.value_at(i);
	}
	
    Elements = tempelements;
    
}

VectorDouble::~VectorDouble()
{
    delete [] Elements;
}



void VectorDouble::push_back(double Value)
{
    
    if(count == max_count)
    expandCapacity();
    
    Elements[count] = Value;
    count++;
}

int VectorDouble::capacity() const
{
    return max_count;
}

int VectorDouble::size() const
{
    return count;
}

void VectorDouble::reserve(int size)
{
    max_count = size;
    double *newElement = new double[max_count];
    for (int i = 0; i < count; i++)
        newElement[i] = Elements[i];
    delete [] Elements;
    Elements = newElement;
}

void VectorDouble::expandCapacity()
{
    max_count = 2 * max_count;
    double *newElement = new double[max_count];
    for(int i = 0; i < count; i++)
    	newElement[i] = Elements[i];
    delete[] Elements;
    Elements = newElement;
}

void VectorDouble::resize(int size)
{
    if(size > 0)
    {
        max_count = size;
        double *newElement = new double[max_count];
        for(int i=0;i<count;i++)
        	newElement[i] = Elements[i];
        delete[]Elements;
        Elements = newElement;
    }
}

double VectorDouble::value_at(int i ) const
{
    if(i < 0 || i > count)
    {
        return 0;
    }
    else
    {
        return Elements[i];
    }
}

void VectorDouble::change_value_at(double d, int index)
{
    Elements[index] =d;
}

ostream& operator<<(ostream& outs, const VectorDouble& vector)
{
    for(int i = 0; i < vector.count; i++)
    outs << vector.Elements[i] << endl;
    return outs;
}

void VectorDouble::operator =(const VectorDouble &vector)
{
    
    double *temporary = new double[vector.max_count];

    max_count = vector.capacity();
    for(int i = 0; i < vector.capacity(); i++)
    {
    temporary[i] = vector.value_at(i);
	}
	
    Elements = temporary;
}

bool operator ==(const VectorDouble &vector1, const VectorDouble &vector2)
{
    bool equal = true;
    if(vector1.size() != vector2.size())
    equal = false;
    else
    {
    for(int i = 0; i < vector1.size(); i++)
    if(vector1.value_at(i) != vector2.value_at(i))
    equal = false;
    }
    return equal;
}
