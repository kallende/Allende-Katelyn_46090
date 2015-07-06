/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 3, 2015, 6:22 PM
 * Purpose: Homework, Insurance.    
*/

//System Libraries
#include <iostream>
using namespace std; 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    float cReplc;       //Replacement cost of a building 
    float ins= .8;      //80 percent insurance on a home or building
    float minIns;       //Minimum insurance on a home or building 
    
    //Input the Process
    cout<<"Enter the replacement cost of a building."<<endl;
    cin>>cReplc;
    
    //Calculation to determine minimum amount of insurance for a home or building 
    minIns= cReplc*ins;
    
    //Output the Unknown
    cout<<endl;
    cout<<"Minimum amount of insurance for the property = $"<<minIns<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

