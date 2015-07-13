/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 4:48 PM
 * Purpose: Homework, Membership Fees Increase.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float MembShp=2500;         //Membership fee per year
    const float IncFee=0.04f;   //Percentage increase over the next six years 
       
    //For-loop to calculate Membership Fees over 6 years   
    for(int i=1; i<=6; i++){
        MembShp+=(MembShp*IncFee); 
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Year "<<i<<" fees are: $"<<MembShp<<endl;
    }
    
    //Exit Stage Right! 
    
    return 0;
}
