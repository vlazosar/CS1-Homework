#ifndef ShippingContainer_h
#define ShippingContainer_h
#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;

class ShippingContainer
{
private:
    int id;
public:
    ShippingContainer();
    ShippingContainer(int newid);
    int getID();
    void setID(int newid);
    virtual string getManifest();
};

#endif
