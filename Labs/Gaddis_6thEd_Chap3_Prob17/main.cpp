/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 9:52 AM
 * Purpose: Monthly Payments
 */

//System Libraries 
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare Variables 
    unsigned char NumMn= 36;       //Number of Months to payoff loan 
    unsigned short LnAmt=10000;    //Loan Amount in $'s
    float IntRt=.01f;              //Interest Rate per Month
    float MnPay;                   //Monthly payment in $'s
    float temp=1.0f;               //Intermediate value found in Monthly Payment equation
    float cstLoan;                 //Cost of the loan in $'s 
    float TtlCst;                  //Total paid back to lender
    
    //calculation the intermediate value  
    float onePlsi=(1+IntRt);
    for(int months=1;months<=NumMn;months++){
        temp*=onePlsi;
    }
    
    //Calculate Monthly Payment 
    MnPay=IntRt*temp*LnAmt/(temp-1);
    MnPay=static_cast<int>(MnPay*100)/100.0f;   //Exact amount in pennies 
    TtlCst=NumMn*MnPay;
    cstLoan=TtlCst-LnAmt;
  
    //Output the Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:              $"<<setw(8)<<LnAmt*1.0f<<endl;
    cout<<"Monthly Interest Rate:     "<<setw(8)<<IntRt*100<<"%"<<endl;
    cout<<"Number of Payments:        "<<setw(8)<<static_cast<int>(NumMn)<<endl;
    cout<<"Monthly Payment:          $"<<setw(8)<<MnPay<<endl;
    cout<<"Amount Paid Back:         $"<<setw(8)<<TtlCst<<endl;
    cout<<"Interest Paid:            $"<<setw(8)<<cstLoan<<endl;
        
    //Exit Stage Right! 
            
    return 0;
}



