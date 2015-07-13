/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 11, 2015, 9:09 PM
 * Purpose: Homework, Present Value.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
float PrstVal (float, float, int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float F= 0;   //Future Value 
    float r=0;    //Interest Rate 
    float n=0;    //Number of years 
    float p=0;    //Present Value 
     
    //Input Process Here 
    cout<<"Enter the amount of money you want to save in dollars."<<endl;
    cin>>F;
    cout<<"Enter the interest rate."<<endl;
    cin>>r;
    cout<<"Enter the number of years you want to be saving."<<endl;
    cin>>n;
    
    //Output Present Value 
    p= PrstVal(F, r, n); 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"In order to save $"<<F<<", you need to deposit $"<<p<<"."<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 ******************************PrstVal************************************
 *************************************************************************
 * Purpose: Calculate Present Value. 
 * Inputs
 *      F       ->  Future Value you want to acquire
 *      r       ->  Interest Rate
 *      n       ->  Number of years you want that future money 
 * Output 
 *      p       ->  Present value you need to put away
 *************************************************************************/
float PrstVal (float F, float r, int n) {
    //Declare and initialize variables 
    float p= F/(pow(1+(r*0.01),n));
    
    return p;
}

