/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 23, 2015, 1:37 PM
 * Purpose: Lab 2, Excessive Military Budget   
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
    //MlBdgt=Military Budget for 2015 
    //FedBdgt=Federal Government for 2015 
    float MlBdgt=.606f;    //Numerical value of military budget 
    float FedBdgt=3.8f;   //Numerical value of federal budget 
    
    //Initialize values from reference website 
    //https://www.whitehouse.gov/sites/default/files/omb/budget/fy2015/assets/tables.pdf  
    
    //Calculate Percentage of budget allocated to military  
    //AlBdgt=Allocated Budget to Military 
    float AlBdgt=(MlBdgt/FedBdgt)*CNVPCT;
    
    //Output Unknowns Here
    cout<<"Budget Allocated to Military = "<<AlBdgt<<endl;
    //Exit Stage Right!
    return 0;
}


