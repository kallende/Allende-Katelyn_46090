/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 11:53 AM
 * Purpose: Homework, Calories Burned.
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
    float calBurn;         //Total calories burnt 
    float calPMin=3.6f;    //Calories burnt per minute 
    
    //For-loop to calculate calories burnt  
    for(int i=5; i<=30; i+=5){
        calBurn=i*calPMin; 
        cout<<"After "<<i<<" minutes, you have burned "<<calBurn<<" calories."<<endl;
    }
    
    //Exit Stage Right! 
    
    return 0;
}



