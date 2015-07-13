/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 7:29 PM
 * Purpose: Homework, Pennies for Pay.
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
    int nDays=1;       //Number of Days 
    float money=1.0;
    float total;       //Total Pay 
    float dPay;        //Pay in one day 
    
    //Input Process
    cout<<"Enter the number of days worked."<<endl;
    cin>>nDays;
    
    //Input Validation 
    while (nDays<1){
        cout<<"Invalid entry. Enter a number greater than 1."<<endl;
        cin>>nDays;
    }
   
    //For-loop to calculate pennies per pay 
    for(int i=1; i<=nDays;i++) {
        dPay=money/100;
        cout<<"Day "<<i<<" you earned $"<<dPay<<endl;
        total+=dPay;
        money*=2;
    }
    
    //Output Total Pay 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<endl<<"Total Pay = $"<<total<<endl; 
    
    //Exit Stage Right! 
    
    return 0;
}



