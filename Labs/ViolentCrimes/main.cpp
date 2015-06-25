/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 25, 2015, 12:25 PM
 * Purpose: Lab 4, Violent Crimes 
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries 

//Global Constants 
const unsigned char CNVPCT=100.0f;//Conversion 

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variables Here
    float USVc;   //Number of Violent Crimes in the US 
    float UKVc;   //Number of Violent Crimes in the UK
    float USPop;  //Population in the US 
    float UKPop;  //Population in the UK 
    float USPct;  //Percentage of Violent Crime in the US Population 
    float UKPct;  //Percentage of Violent Crime in the UK Population 
    
    //Input Values Here   
    USVc=11.88e6;
    UKVc=6.52e6;
    USPop=318e6;
    UKPop=64.1e6;
    //Source: http://www.nationmaster.com/country-info/stats/Crime/Total-crimes
    
    //Calculate Percentage of Violent Crime Within Populations 
    USPct=USVc/USPop*CNVPCT;
    UKPct=UKVc/UKPop*CNVPCT;
    
    //Output Unknowns Here
    cout<<fixed<<showpoint<<setprecision(2)<<"Percentage of Violent Crime in the US Population ="<<USPct<<"%"<<endl;
    cout<<"Percentage of Violent Crime in the UK Population ="<<UKPct<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}





