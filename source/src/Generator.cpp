//--------------------------------------------
// Written By: Joseph Canero
// Github Account: jmc41493
// Project Title: NYAN Security
// File Name: Generator.cpp
// File Descrip: Definition of Generator class members
// Course ID: CSC260
// Course Title: Software Engineering
//--------------------------------------------

#include "../headers/Generator.h"

Generator::Generator ()
{
}

string Generator::generatePass (int len)
{
    //This is the function that generates the random password
    
    passLength = len;
    string password;
    
    if (passLength > 0) {
        char passLetter[passLength + 1];
        
        srand (time(NULL)); //this is used to ensure random numbers are generated everytime this function is called
        
        /*
          If the seed value were not initialized with the time, the random number generator would return the same series of random numbers
          every time. 
         */
        
        for (int i = 0; i < passLength; i++) {
            passLetter[i] = rand() % 87 + 35; //this will keep the value within an acceptable ASCII range of characters
        }
        passLetter[passLength] = 0;
        password.append(passLetter); //the random character is appended to the end of the final password string
    }
    else
        password = "";
    return password;
}
