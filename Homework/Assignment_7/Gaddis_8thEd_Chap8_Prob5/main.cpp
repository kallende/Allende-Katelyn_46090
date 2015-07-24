/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 3:22 PM
 * Purpose: Homework, Rainfall Statistics Modification. 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype
void srtAray(float[], string [], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=12; 
    float rainfal[SIZE];     //Array of rainfall 
    float total=0;           //Total amount over 12 months 
    float avg=0;             //Average rainfall for all 12 months 
    string month[]= {"January", "February", "March", "April", 
                    "May", "June", "July", "August", "September", 
                    "October", "November", "December"}; 

    //Input Process 
    for(int i=0; i<SIZE; i++){
        cout << "Enter rainfall for " << month[i] << ": " << endl; 
        cin >> rainfal[i];
    while(rainfal[i]<0){
        cout << "Invalid entry. Input must be greater than 0." << endl;
        cin >> rainfal[i];
    }   
        total+= rainfal[i];
    }
    
    //Calculate average, highest, lowest rainfall 
    avg=total/12; 
    
    //Output total and average rainfall  
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Total rainfall was " << total << "cm." << endl;  
    cout << "Average rainfall was " << avg << "cm." << endl;
    
    //Sort months from highest to lowest according to rainfall 
    srtAray(rainfal, month, SIZE);
    cout << endl << "List from Lowest to Highest Rainfall by Month." << endl;
    for (int a=0; a<SIZE; a++){
        cout << month[a] << ": " << rainfal[a] << "cm." << endl; 
    }
    
    //Exit Stage Right! 
    
  return 0;  
}

/*******************************************************************
 *                             srtAray                             *
 *******************************************************************
 * Purpose:     To put charge accounts in order. 
 * Input:
 *      rainfal   -> Amount of rainfall array 
 *      month     -> List of months array  
 *      SIZE      -> Array size  
 * Input-Output
 *      swap     -> Two arrays in order from lowest to highest 
 */
void srtAray(float rainfal[], string month[], int SIZE){
    bool swap; 
    int temp; 
    string temp2; 
    do {
        swap=false; 
        for(int count=0; count<(SIZE-1); count++){
            if (rainfal[count]>rainfal[count+1]){
                temp=rainfal[count];
                temp2=month[count];
                rainfal[count]=rainfal[count+1];
                month[count]=month[count+1];
                rainfal[count+1]=temp;
                month[count+1]=temp2;
                swap=true; 
            }
        }
    }while(swap);
}




