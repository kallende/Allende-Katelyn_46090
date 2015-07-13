/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 1:57 PM
 * Purpose: Homework, isPrime Function.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes
bool isPrme (int); 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    int number=0; 
    
    //Input Process 
    cout<<"Enter a positive integer."<<endl;
    cin>>number;
    
    //Output Unknown
    if (isPrme (number)) {
        cout<<endl<<number<<" is prime number."<<endl;
    } else { 
        cout<<endl<<number<<" is not a prime number."<<endl;
    }
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 ****************************** isPrme ***********************************
 *************************************************************************
 * Purpose: Determine if a number is a prime number. 
 * Input
 *     number ->  Number in between 1 and 15   
 * Output 
 *     bool   ->  Number is prime if statement is true 
 *                and not prime if statement is false   
 *************************************************************************/ 
bool isPrme (int number) {
    //For-loop to determine prime numbers 
    for(int i=2; i<number; i++) {
        if(number%i==0) {
            return false;
        }
    }
    return true; 
}
