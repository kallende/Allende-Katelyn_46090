/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 24, 2015, 10:00 AM
 * Purpose: Homework, Energy Drinks  
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries 

//Global Constants 
const float CNVPCT=100.0f;//Conversion 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables Here
    unsigned short cSurv=12467; //Numbers of customers surveyed 
    unsigned short nEDrnks;     //Number of customers that have one or more energy drinks a week 
    unsigned short nCDrnks;     //Number of customers that prefer citrus drinks to energy drinks 
    unsigned char pEDrnks=14;   //Percentage surveyed that prefer citrus 
    unsigned char pCDrnks=64;   //Percentage of energy drinkers  
    
    //Calculate number of drinkers 
    nEDrnks=cSurv*pEDrnks/CNVPCT;
    nCDrnks=nEDrnks*pCDrnks/CNVPCT;
    
    //Output Unknowns Here
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit Stage Right!
    return 0;
}


