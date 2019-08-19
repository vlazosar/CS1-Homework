#include "ShippingContainer.h"
#include "RFIDShippingContainer.h"
#include "ManualShippingContainer.h"
#include<vector>
#include<string>
#include<sstream>
#include <iostream>
using namespace std;

ShippingContainer::ShippingContainer()
{
}

ShippingContainer::ShippingContainer(int newid)
{
    id = newid;
}

int ShippingContainer::getID()
{
    return id;
}

void ShippingContainer::setID(int newid)
{
    id = newid;
}

string ShippingContainer::getManifest()
{
    return " ";
}
