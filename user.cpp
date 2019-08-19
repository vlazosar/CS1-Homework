#include<iostream>
#include <string>
#include<cstring>
#include "user.h"

namespace  //Unnamed namespace
{
	string username;
    bool isValid()
	{
        int count=0;
        if(username.length()==8)
            for(int i=0; i<username.length();i++)
            {
                if((username[i] >= 'a' && username[i]<='z') || (username.length()>= 'A' && username[i]<='Z'))
                count++;
            }
        	if (count==8)
            return true; //True if 8 letters.
        	else return false;   
    }
}	

namespace Authenticate
{
    void inputUserName() 
	{
		do
    	{
        cout << "Enter your username (8 letters only)" << endl; //Prompt for user input
		cin >> username;
    	} while (!isValid());
}

string getUserName()
	{
    return username;
	}
}
