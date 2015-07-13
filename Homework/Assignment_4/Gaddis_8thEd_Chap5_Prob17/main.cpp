/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 6, 2015, 6:10 PM
 * Purpose: Homework, Sales Bar Chart.
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
    int sales[5];    //Sales from 5 stores
    int store;       //Sales from an individual store 
    
    //For-loop to calculate store sales 
    for(int i=0; i<5; i++){
        cout<<"Enter today's sales for store #"<<i+1<<":"<<endl;
        cin>>store;
        sales[i]=store/100; }
    
    //Input Process
    cout<<endl<<"SALES BAR CHART"<<endl;
    cout<<"(Each * = $100)"<<endl;
    
    //For-loop to input asterisks 
    for(int c=0;c<5;c++){
        cout<<"Store "<<c+1<<": ";
        for(int d=0;d<sales[c];d++){
            cout<<"*"; }
        cout<<endl;     }
    
    //Exit Stage Right!
    
    return 0;
}

