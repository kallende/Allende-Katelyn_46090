/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 3, 2015, 5:08 PM
 * Purpose: Homework, Volume of a sphere. 
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
    float radius, vm;
    //radius= length of a line segment from its center to its perimeter
    //vm= volume, amount of space that a substance or object occupies 
    
    //Input Process Here 
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
    //Calculation to find volume 
    vm=(4/3)*3.1415*radius*radius*radius; 
    
    //Output Unknowns Here 
    cout<<endl;
    cout<<"The volume is "<<vm<<endl; 
    
    //Exit Stage Right! 
    
    return 0;
}

