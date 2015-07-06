/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 3, 2015, 3:15 PM
 * Purpose: Homework, Box Office.    
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

//User Libraries 

//Global Constants

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    string movie;
    int sAdult, sChild;  
    //sAdult= Amount of adult tickets sold 
    //sChild= Amount of child tickets sold 
    int pAdult=10, pChild=6;
    //pAdult= Price for an adult ticket 
    //pChild= Price for a child ticket 
    float gPft, nPft, pDist;    
    //gPft= Gross Profit from ticket sales
    //nPft= Net Profit from ticket sales 
    //pDist= Amount paid to distributor 
    float PofGrs=.2;            
    //Percentage of gross profit going to distributor 
    
    //Input the Process
    cout<<"Enter the name of the movie."<<endl;
    getline(cin, movie);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>sAdult;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>sChild;
    
    //Calculations 
    gPft=(pAdult*sAdult)+(pChild*sChild);
    nPft=gPft*PofGrs;
    pDist=gPft-nPft;
    
    //Output the Unknown
    cout<<endl;
    cout<<"Movie Name:                        \""<<movie<<"\""<<endl;
    cout<<"Adult Tickets Sold:                  "<<sAdult<<endl;
    cout<<"Child Tickets Sold:                  "<<sChild<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Gross Box Office Profit:          $ "<<gPft<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Net Box Office Profit:            $  "<<nPft<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Amount Paid to Distributor:       $ "<<pDist<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}





