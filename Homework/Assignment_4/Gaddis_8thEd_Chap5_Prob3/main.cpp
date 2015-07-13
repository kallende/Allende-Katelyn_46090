/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 1:16 PM
 * Purpose: Homework, Ocean Levels.
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
    float level=0;      //Ocean level
    int years=25;       //Increasing for 25 years 
    
    //For-loop to determine ocean level for 25 years
    for(int i=1; i<=years; i++) {
       level+=1.5; 
    cout<< "year "<<i<<": "<<level<<" mm"<<endl;
    }
    
    //Exit Stage Right! 
    
    return 0;
}





