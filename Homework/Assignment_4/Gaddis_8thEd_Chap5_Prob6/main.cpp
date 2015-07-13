/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 5:05 PM
 * Purpose: Homework, Distance Traveled.
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
    float dist;    //Distance the car traveled
    float speed;   //Speed at which the car traveled 
    float time;    //Time the car was traveling 
    
    //Input Process
    cout<<"What is the speed of the vehicle?"<<endl;
    cin>>speed; 
    
    //Input Validation 
    while (speed<=0){
        cout<<endl<<"Run program again and enter a speed above 0."<<endl;
        cin>>speed; }

    //Input hours traveled 
    cout<<"How many hours has it traveled?"<<endl;
    cin>>time; 
    
    //Input Validation      
    while (time<1){
        cout<<endl<<"Time traveled must not be less than 1."<<endl; 
        cin>>time; }
   
    //Output Unknowns 
    cout<<endl<<"Hour       Distance Traveled"<<endl;
    cout<<"----------------------------------"<<endl;
    
        //For-loop to calculate distance traveled 
        for(int i=1; i<=time; i++){ 
            dist=speed*i; 
            cout<<i<<"                  "<<dist<<endl;}
    
    //Exit Stage Right! 
    
    return 0;
}


