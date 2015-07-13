/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 9:51 AM
 * Purpose: Homework, Markup.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
float clRetl(float,float);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float whlScst=0, mrkPerc=0, retlP; 
    //whlScst= Wholesale cost 
    //mrkPerc= Markup Percentage
    //retlP= Retail Price 
    
    //Input Process
    cout<<"Enter an item's wholesale cost."<<endl;
    cin>>whlScst;
    
    //Input Validation 
    while (whlScst<0) {
        cout<<"Invalid Input. Enter a positive value."<<endl;
        cin>>whlScst;
    }
    
    //Input Process Continued 
    cout<<"Enter an item's markup percentage."<<endl; 
    cin>>mrkPerc;
    
    //Input Validation 
    while (mrkPerc<0) {
        cout<<"Invalid Input. Enter a positive value."<<endl;
        cin>>mrkPerc;
    }
    
    //Calculate Retail Price 
    retlP=clRetl(whlScst,mrkPerc);
    
    //Output retail price
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<endl<<"The retail price of the item is: $"<<retlP<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 *************************** calculationRetail ***************************
 *************************************************************************
 * Purpose: Calculate Retail Price. 
 * Inputs
 *      whlScst   ->  Wholesale Cost 
 *      mrkPerc   ->  Markup Percentage
 * Output 
 *      t         ->  Retail Price 
 *************************************************************************/
float clRetl(float c, float p) {
    //Declare and Initialize Variables 
    float t=((c/100)*p)+c;
    return t;
}



