/* 
 * File:   main.cpp
 * Author: Katelyn Allende
 * Created on July 2, 2015, 1:30 PM
 * Purpose: Time Calculator  
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
    //Declare Variables 
    int nSecs; 
    int yrs, mnths, weeks, days, hrs, min, sec;
    
    //Prompt for the number of seconds 
    cout<<"Input the number of seconds."<<endl;
    cin>>nSecs; 
    cout<<"The number of seconds to convert = "<<nSecs<<"(secs)"<<endl;
    
    //Calculate the values 
    sec=nSecs%60;       //How many seconds 
    nSecs/=60;          //Now determine minutes 
    min=nSecs%60;       //How many minutes 
    nSecs/=60;          //Now determine hours 
    hrs=nSecs%24;       //How many hours 
    nSecs/=24;          //Now determine days 
    days=nSecs%7;       //How many days 
    nSecs/=7;           //Now determine weeks 
    weeks=nSecs%4;      //How many weeks 
    nSecs/=4;           //Now determine months 
    mnths=nSecs%12;     //How many months 
    yrs=nSecs/12;       //Now determine years 
    
    //Output the results 
    cout<<"The number of years   = "<<yrs<<endl;
    cout<<"The number of months  = "<<mnths<<endl;  
    cout<<"The number of weeks   = "<<weeks<<endl;
    cout<<"The number of days    = "<<days<<endl;
    cout<<"The number of hours   = "<<hrs<<endl;
    cout<<"The number of minutes = "<<min<<endl;
    cout<<"The number of seconds = "<<sec<<endl; 
    
    //Check result 
    cout<<endl<<"As a check =";
    cout<<((((((yrs*12+mnths)*4+weeks)*7+days)*24+hrs)*60+min)*60+sec);
    cout<<"(secs)";
    
    //Exit Stage Right! 
    
    return 0;
}



