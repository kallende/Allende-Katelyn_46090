/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 30, 2015, 9:40 PM
 * Purpose: Homework, Miles per Gallon.   
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
    float NofGal, NofMil, MilpGal;
    //NofGal= number of gallons 
    //NofMil= number of miles driven on a full tank 
    //MilpGal= miles per gallon 
    
    //Input the Process
    cout<<"Enter the number of gallons of gas the car can hold."<<endl;
    cin>>NofGal;
    cout<<"Enter the number of miles the car can be driven on a full tank."<<endl;
    cin>>NofMil;
    
    //Output the Unknown
    MilpGal= NofMil/NofGal;
    cout<<endl;
    cout<<"Number of miles that may be driven per gallon of gas = "<<MilpGal<<" mpg"<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

