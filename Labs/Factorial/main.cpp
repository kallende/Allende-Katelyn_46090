/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 2, 2015, 12:05 PM
 * Purpose: Calculate the factorial 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare our variables 
    float fact=1; 
    unsigned char n=6; 
    
    //Loop and find the n!
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Output the result
    cout<<static_cast<int>(n)<<"!="<<fact<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}



