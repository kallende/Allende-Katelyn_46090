/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 10:00 PM
 * Purpose: Homework, Min/Max.
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare Variables 
    float Numb1, Numb2;
    
    //Input Process 
    cout<<"Enter two numbers."<<endl;
    cin>>Numb1;
    cin>>Numb2;
    
    //Determine which is smaller and larger
    if (Numb1>Numb2){
        cout<<endl<<"Number 1 is larger and Number 2 is smaller."<<endl;
        
    }else{ 
        cout<<endl<<"Number 1 is smaller and Number 2 is larger."<<endl;
    } 

    //Exit Stage Right!
    
    return 0;
}

