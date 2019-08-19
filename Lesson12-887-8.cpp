// Section CSC160 - Computer Science I: C++
// File Name: lesson12-887-8.cpp
// Student: Victor Lazos
// Homework Number: 12
// Description: RFIDShipping
// Last Changed: 04/29/2018

#include <iostream>
#include<vector>
#include<string>
#include "ShippingContainer.h"
#include "RFIDShippingContainer.h"
#include "ManualShippingContainer.h"
#include<sstream>
using namespace std;

int main() {

    ShippingContainer* container[6];	//Array of pointers to shipping containers
    ManualShippingContainer ManualShippingContainer1(100);
    ManualShippingContainer ManualShippingContainer2(200);
    ManualShippingContainer ManualShippingContainer3(300);
    RFIDShippingContainer RFIDContainer1(400);
    RFIDShippingContainer RFIDContainer2(500);
    RFIDShippingContainer RFIDContainer3(600);
    
    ManualShippingContainer1.setManifest("1000 diapers.");	//Manually method of inventorying 
    ManualShippingContainer2.setManifest("1000 candy bars. 500 toilet paper.");
    ManualShippingContainer3.setManifest("500 books.");
    RFIDContainer1.add("apples");	//RFID method of inventorying
    RFIDContainer1.add("apples");
    RFIDContainer1.add("cookies");
    RFIDContainer2.add("pineapples");
    RFIDContainer2.add("pineapples");
    RFIDContainer2.add("pears");
    RFIDContainer2.add("pears");
    RFIDContainer3.add("chocolate bars");
    RFIDContainer3.add("chocolate bars");
    RFIDContainer3.add("chocolate bars");
    
    container[0]=&ManualShippingContainer1;
    container[1]=&ManualShippingContainer2;
    container[2]=&ManualShippingContainer3;
    container[3]=&RFIDContainer1;
    container[4]=&RFIDContainer2;
    container[5]=&RFIDContainer3;
    
    for(int i=0; i<6; i++)
    {
    cout << "Container " << container[i]->getID() << " contains "<<container[i]->getManifest()<< "\n";	//Loop for outputting manifest
    }
    return 0;
}
