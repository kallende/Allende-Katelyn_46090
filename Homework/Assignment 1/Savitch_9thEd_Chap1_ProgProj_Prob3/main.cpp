/* 
 * File:   main.cpp
 * Author: Katelyn
 * Created on June 23, 2015, 8:48 PM
 * Purpose: Homework, Monetary Value 
 */

//System Libraries 
#include <iostream> //I/O Library

using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables Here
    float Quart=25;   //Numerical value of a quarter  
    float Dime=10;    //Numerical value of a dime 
    float Nckl=5;     //Numerical value of a nickel 
    //Quart= quarter 
    //Nckl= nickel 
    float Sum; 
    //Sum= Monetary value of coins added up 
      
    //Process Input Here
    cout<<"Enter Number of Quarters"; 
    cin>>Quart;
    cout<<"Enter Number of Dimes";
    cin>>Dime;  
    cout<<"Enter Number of Nickels";
    cin>>Nckl;
    
    //Calculate Monetary value of coins 
    Sum=25*Quart+10*Dime+5*Nckl;
    
    //Output Unknowns Here
    cout<<" Monetary Value of Coins = "<<Sum<< " cents"<<endl;
    
    //Exit Stage Right!
    
    return 0;
}





