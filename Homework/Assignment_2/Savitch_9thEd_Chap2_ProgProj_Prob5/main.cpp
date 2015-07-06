/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 1:15 PM
 * Purpose: Homework, Fire Regulations.    
*/

//System Libraries 
#include <iostream> 
#include <iomanip>
#include <cstdlib>
using namespace std; 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables Here
    int MaxRm,NumofP, add, excl;
    //MaxRm= Maximum room capacity 
    //NumofP= Number of people attending the meeting
    //add= Additional number of people that may legally attend the meeting
    //excl= People that need to be excluded from the meeting for it to be legal 
    bool doAgain;
    
    //Input Process
    do{
    cout<<"Enter maximum room capacity."<<endl;
    cin>>MaxRm;
    cout<<"Enter the number of people attending the meeting."<<endl;
    cin>>NumofP;
    
    //Loop based upon re-running program  
        //If correct output Legal to hold meeting 
        if(NumofP<=MaxRm){
            cout<<endl<<"Legal to hold the meeting."<<endl;
            add=MaxRm-NumofP;
            cout<<"Amount of additional people may legally attend the meeting = "<<add<<endl;
        }else{
            cout<<endl<<"Illegal to hold the meeting."<<endl;
            excl=NumofP-MaxRm;
            cout<<"Number of people that must be excluded from meeting for it to be legal = "<<excl<<endl;
        }
        
        //Prompt if they would like to continue
        cout<<endl<<"Would you like to repeat y/n?"<<endl;
        char response; 
        cin>>response;
        if (response=='y')
            doAgain=true;
        else 
            doAgain=false;
    }while(doAgain);  
    
    //Exit stage right!
    
    return 0;
}


