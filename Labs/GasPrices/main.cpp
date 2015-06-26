/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 24, 2015, 1:25 PM
 * Purpose: Lab 3, Calculate the percent of your gas purchase due to taxes   
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries 

//Global Constants 
const unsigned char CNVPCT=100.0f;//Conversion 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables Here
    float FedTx=.18f;      //Federal Tax $'s
    float CETx=.36f;       //California Tax $'s
    float CSalTx=.08f;     //California Sales Tax % 
    float Gallon=3.69f;    //Price of a gallon of gas $'s
    float NetTx;           //Total tax $'s
    float TxPct;           //Total tax % 
    float SlsTxV;          //Sales Tax Value $'s
    float BsePrc;          //Cost of gas before tax
    float wSlsTx;          //Price of a gallon with sales tax only
    
    //Calculate the total tax and it's percentage
    wSlsTx=Gallon-CETx-FedTx;
    BsePrc=wSlsTx/ (1+CSalTx);
    SlsTxV=wSlsTx-BsePrc;
    NetTx=FedTx+CETx+SlsTxV;
    TxPct=NetTx/BsePrc*CNVPCT;
    
    //Output Unknowns Here
    cout<<"The total tax on a gallon of gas @ $";
    cout<<Gallon<<"/gallon -> $"<<NetTx<<endl;
    cout<<"Gas price before tax = $"<<BsePrc<<endl;
    cout<<"The percentage tax = "<<TxPct<< " %"<<endl;
    
    //Exit Stage Right!
    return 0;
}




