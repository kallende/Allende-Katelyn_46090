/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 2:40 PM
 * Purpose: Homework, Largest/Smallest Array Values. 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=10; 
    float numbers[SIZE];
    float small=0;          //Smallest value 
    float large=0;          //Largest value 
    
    //Input Process 
    for(int i=0; i<10; i++){
        cout << "Please enter number " << i+1 << ": " << endl;
        cin >> numbers[i];
    }
    
    //Equations to calculate largest and smallest value 
    small= numbers[0]; 
    large=numbers[0];
    
    //For-loop to find largest and smallest value in the array
    for(int count=1; count<SIZE; count++)
    {
        if (numbers[count]>large)
            large=numbers[count];
        if (numbers[count]<small)
            small=numbers[count];
    }    
    
    //Output largest and smallest value 
    cout << endl << "Largest value = " << large << endl; 
    cout << "Smallest value = " << small << endl;
    
    //Exit Stage Right! 
    
  return 0;  
}

