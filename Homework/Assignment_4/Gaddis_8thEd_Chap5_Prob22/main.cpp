/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 1:39 PM
 * Purpose: Homework, Square Display.
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
    int sdSze=0;     //Number 
    
    //Input Process
    cout<<"Enter a number from 1 to 15."<<endl;
    cin>>sdSze; 
    
    //For-loops to display rows and columns 
    for(int r=1; r<=sdSze; r++) {
        for(int c=1; c<=sdSze; c++) {
            cout<<"X";
        }
        cout<<endl;
    }
    
    //Exit Stage Right! 
    
    return 0;
}







