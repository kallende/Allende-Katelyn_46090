/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 12:25 PM
 * Purpose: Homework, PI
 */

//System Libraries 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 
const float PI=4*atan(1);

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare and initialize variables 
    int nTerms=20000;    //Number of Terms 
    float apprxPI=1;
    
    //Now calculate PI with a for-loop
    for(int i=3,nTerm=1;nTerm<=nTerms;i+=4,nTerms+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
    }
    apprxPI*=4;
            
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl; 
        
    //Exit Stage Right! 
            
    return 0;
}


