/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 23, 2015, 7:20 PM
 * Purpose: Homework, Two Integers 
 */

//System Libraries 
#include <iostream>  //File I/O 

using namespace std; //Namespace for iostream 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {  
    //Declare Variables Here
    float FrstInt, ScInt;
    //FrstInt= first integer 
    //ScInt= second integer 
    float sum, prdct;
    //sum= Adding of two integers 
    //prdct= Multiplication of two integers 
    
    //Process Input Here
    cout<<"Enter first integer"; 
    cin>>FrstInt;
    cout<<"Enter second integer";
    cin>>ScInt;
   
    //Perform arithmetic operations 
    sum=FrstInt+ScInt;
    prdct=FrstInt*ScInt;
    
    //Output Unknowns Here
    cout<<"The sum is = "<<sum<<endl;
    cout<<"The product is = "<<prdct<<endl;
     
    //Exit Stage Right!
    
    return 0;
}




