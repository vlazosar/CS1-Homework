#include "RFIDShippingContainer.h"
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;

RFIDShippingContainer::RFIDShippingContainer(int newid):ShippingContainer(newid)
{
}
void RFIDShippingContainer::add(string s)
{
    int i;
    i = search(s);
    if (i == -1)
    {
    elements.push_back(s);
    count.push_back(1);
    }
    else
    {
    count[i]++;
    }
}
string RFIDShippingContainer::getManifest()
{
    string s = "";
    int i;
    for (i=0; i<elements.size(); i++)
    {
    stringstream converter;
    converter << count[i];
    s+=converter.str() + " " + elements[i] + ". ";
    }
    return s;
}

int RFIDShippingContainer::search(string s)
{
    int i;
    for(i=0; i<elements.size(); i++)
    {
    if(elements[i]==s)
    return i;
    }
    return -1;
}
