#include "ShippingContainer.h"
#include "RFIDShippingContainer.h"
#include "ManualShippingContainer.h"
#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

ManualShippingContainer::ManualShippingContainer(int newid): ShippingContainer(newid)
{
}

void ManualShippingContainer::setManifest(string s)
{
   elements=s;
}
string ManualShippingContainer::getManifest()
{
    return elements;
}
