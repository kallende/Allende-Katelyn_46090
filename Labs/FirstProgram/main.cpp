/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 23, 2015, 10:40 AM
 * Purpose: First Program to test the IDE
 */

//System Libraries 
#include <iostream>  //File I/O 
using namespace std; //std namespace -> iostream 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here!


int main(int argc, char** argv) {
    
    //Declare Variables Here
    float hours,rate,pay;
    
    //Input Values Here   
    hours=40.0f;//Hours Worked  Units = hours
    rate=9.0f; //Pay Rate       Units = $'s/hour
    
    //Process Input Here 
    pay=hours*rate;//Units = $'s
    
    //Output Unknowns Here
    cout<<"Hours worked = "<<hours<<"(hrs)"<<endl;
    cout<< "Pay Rate    = $"<<rate<<"/(hrs)"<<endl;
    cout<<"My Paycheck  = $"<<pay<<endl; 
    //Exit Stage Right!
    return 0;
}



