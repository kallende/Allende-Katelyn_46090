/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 10:43 AM
 * Purpose: Homework, Sum of Numbers.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    int Pint;        //Positive Integer 
    int stNumb=0;    //Starting Number 
    
    //Input Process
    cout<<"Input a positive integer value."<<endl;
    cin>>Pint;
    
    //Input Validation 
    if (Pint<0)
        cout<<endl<<"Run program again and enter a positive integer."<<endl;
    else {
    
    //For-loop to find the sum of all the integers 
    int sum=stNumb;
    for(int num=0; num<=Pint; num++)
        sum+=num;  
                
    //Output the sum of numbers
    cout<<endl<<"The sum of all the integers = "<<sum<<endl; 
    }
    
    //Exit Stage Right! 
    
    return 0;
}



