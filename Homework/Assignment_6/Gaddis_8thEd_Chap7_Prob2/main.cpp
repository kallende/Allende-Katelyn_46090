/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 3:00 PM
 * Purpose: Homework, Rainfall Statistics. 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=12; 
    float rainfal[SIZE];        //Rainfall for each month 
    float total=0;              //Total rainfall for all months 
    float avg=0;                //Average rainfall 
    float high=0;               //Month with highest rainfall 
    float low=0;                //Month with lowest rainfall 
    int posMax= 0;
    int posMin= 0;
    
    //Input Process 
    for(int i=0; i<SIZE; i++){
        cout << "Enter rainfall for month " << i+1 << ": " << endl; 
        cin >> rainfal[i];
    while(rainfal[i]<0){
        cout << "Invalid entry. Input must be greater than 0." << endl;
        cin >> rainfal[i];
    }   
        total+= rainfal[i];
    }
    
    //Calculate average, highest, lowest rainfall 
    avg=total/SIZE; 
    low=rainfal[0]; 
    high=rainfal[0];
    
    //For-loop to find highest and lowest value in the array
    for(int count=1; count<SIZE; count++)
    {
        if (rainfal[count]>high) {
            high=rainfal[count];
            posMax=count; 
        }     
        if (rainfal[count]<low) {
           low=rainfal[count];
           posMin=count; 
        }
           
    }    
    
    //Output Unknowns  
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Total rainfall was " << total << "cm." << endl;  
    cout << "Average rainfall was " << avg << "cm." << endl;
    cout << "Highest rainfall was in month " << posMax +1 << " with " << high << "cm." << endl;
    cout << "Lowest rainfall was in month "   << posMin +1 << " with " << low << "cm." << endl;
    
    //Exit Stage Right! 
    
  return 0;  
}



