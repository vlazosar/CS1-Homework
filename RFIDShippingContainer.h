#ifndef RFIDShippingContainer_h
#define RFIDShippingContainer_h
#include <stdio.h>
#include<vector>
#include<string>
#include<sstream>
#include "ShippingContainer.h"
#include <iostream>
using namespace std;

class RFIDShippingContainer:public ShippingContainer
{
private:
    vector<int> count;
    vector<string> elements;
    int search(string s);
public:
    RFIDShippingContainer(int newid);
    void add(string s);
    virtual string getManifest();
};

#endif
