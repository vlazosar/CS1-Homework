// Section CSC160 - Computer Science I: C++
// File Name: Lesson10-498-7
// Student: Victor Lazos
// Homework Number: 10
// Description: Pig Latin
// Last Changed: 04/18/2018

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
void PigLatin(string &word);
int main()
{
    string firstName, lastName, fullName;
    cout<<"Enter your first name.\n";
    getline(cin, firstName);
    cout<<"Enter your last name.\n";
    getline(cin, lastName);

    for(unsigned int i = 0; i < firstName.length(); i++)	//Using string object as an array
    {
        firstName[i] = tolower(firstName[i]);	//Lowercase first name
    }
    for(unsigned int i = 0; i < lastName.length(); i++)
    {
        lastName[i] = tolower(lastName[i]);	//Lowercase last name
    }
    
    PigLatin(firstName);
    
    PigLatin(lastName);
    
    fullName = firstName + " " + lastName;	//New PigLatin fullname

    cout<<"Your name in pig latin is: " << fullName;

}
void PigLatin(string &word)
{    
    char ch = word[0];
    
    if (std::string("aeiou").find(ch) != std::string::npos)	//Find first letter of name/array
    {
        word += "way"; //Concatenate 'way' at the end of first vowel
    }
    else
    {
        {
             word.erase(0, 1);
             word.append(&ch, 1);	//Append
        }
        word += "ay";	//Concatenate 'ay' at the end of first consonant
    }
    word[0] = toupper(word[0]);	//Capitalize first letter
}
