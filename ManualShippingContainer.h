#ifndef ManualShippingContainer_h
#define ManualShippingContainer_h
#include "ShippingContainer.h"
#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;

class ManualShippingContainer: public ShippingContainer	//Derived class
{
private:
    string elements;
public:
    ManualShippingContainer(int newid);
    void setManifest(string s);
    virtual string getManifest();
};

#endif
