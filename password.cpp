#include<iostream>
#include<string>
#include "password.h"

namespace  //Unnamed namespace
{
    string password;
    int count;
    bool isValid()
    {
        int count=0;
        if(password.length()==8)
            for(int i=0; i<password.length();i++)
    		{
                if((password[i] >= 'a' && password[i]<='z') || (password.length()>= 'A' && password[i]<='Z'))
                count++;
            }
    		if (count<8) //True if at least 8 characters.
    		return true;
    		else return false;
    }
    
}

namespace Authenticate 
{
    void inputPassword() 
	{
    	do
        {
        cout << "Enter your password (at least 8 characters " <<	//Prompt for user input
        		"and at least one nonletter)" << endl; 
		cin >> password;
        } while (!isValid()); 
	}
        
    string getPassword() 
	{
    return password; 
	}
}
