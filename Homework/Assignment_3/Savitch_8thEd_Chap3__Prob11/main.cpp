/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 2, 2015, 12:20 PM
 * Purpose: Homework, Approximate e^x with an infinite sequence. 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare our variables 
    float x=2.0f;
    float ex=1.0f;
    char  nTerms=30;
    
    //Utilize a for-loop to calculate e^x
    for(int term=1;term<=nTerms;term++){
        float fact=1;
        //Loop and find the n!
        for(int i=1;i<=term;i++){
                fact*=i;
        }
        ex+=pow(x,term)/fact;
    }
    
    //Output the result
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact e("<<x<<")="<<exp(x)<<endl;
    cout<<"Approx e("<<x<<")="<<ex<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}



