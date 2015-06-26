/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 23, 2015, 12:07 PM
 * Purpose: Homework, Free Fall 
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries 

//Global Constants 
const float GRAVITY=32.174f;//Acceleration due to Gravity Earth (ft/sec^2)

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    //dstnce=The Distance dropped in (ft)
    //time=Time in (secs)
    float dstnce, time; 
    
    //Prompt then Input the time 
    cout<<"To calculate the Distance Dropped"<<endl;
    cout<<"Input the Time in Seconds"<<endl;
    cout<<"Time should be in floating point format"<<endl;
    cin>>time;
    
    //Calculate the free-fall distance 
    dstnce=1/2.0f*GRAVITY*time*time;
    
    //Output the results 
    cout<<"The distance traveled =";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit stage right! 
    return 0;
}

