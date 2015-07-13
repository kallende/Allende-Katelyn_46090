/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 12:24 PM
 * Purpose: Homework, Winning Division.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
float gtSales(string);
void fndHigh (float, float, float , float);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float NEsale;   //Northeast Sales 
    float SEsale;   //Southeast Sales
    float NWsale;   //Northwest Sales
    float SWsale;   //Southwest Sales 
    
    //For-loop to input each divisions sales  
    for (int i=0; i<4; i++) {
        switch (i) {
            case 0: 
                NEsale= gtSales("NE");
                break;
            case 1: 
                SEsale= gtSales("SE");
                break; 
            case 2: 
                NWsale= gtSales("NW");
                break;    
            default:
                SWsale= gtSales("SW");
                break;
        }     
    }
   
   //To determine the division with the highest sales 
   fndHigh(NEsale, SEsale, NWsale, SWsale);
   
   //Exit Stage Right! 
   
   return 0;
}

/*************************************************************************
 *************************** gtSales *************************************
 *************************************************************************
 * Purpose: Get Sales from each division. 
 * Input
 *      string    -> Name of each division. 
 * Output 
 *      sales     -> Sales from all the divisions. 
 *************************************************************************/
float gtSales(string name) {
  //Declare Variables 
  float sales=0;
  
  //Input Process 
  cout<<"Enter the sales for division "<<name<<" $"<<endl;
  cin>>sales;
  
  //Input Validation 
  while(sales<0) {
      cout<<"Sales must be greater than 0. Input a positive value."<<endl;
      cin>>sales; 
  }
  return sales;
}

/*************************************************************************
 *************************** fndHigh *************************************
 *************************************************************************
 * Purpose: Determine the division with the highest sales. 
 * Inputs
 *      NEsale    -> Northeast Sales.
 *      SEsale    -> Southeast Sales. 
 *      NWsale    -> Northwest Sales. 
 *      SWsale    -> Southwest Sales. 
 * Output 
 *      highest   -> Division with the highest sales.  
 *************************************************************************/
void fndHigh (float NEsale, float SEsale, float NWsale, float SWsale) {
    //Declare Variables
    float highest=0;
    string divsn= "";
    
    //Determining region with highest sales 
    if (NEsale>SEsale && NEsale>NWsale && SEsale>SWsale) {
        highest=NEsale;
        divsn= "Northeast";
    }
    else if (SEsale>NEsale && SEsale>NWsale && SEsale>SWsale) {
        highest=SEsale;
        divsn= "Southeast";
    }
    else if (NWsale>NEsale && NWsale>SEsale && NWsale>SWsale) {
        highest=NWsale;
        divsn= "Northwest";
    }
    else {
        highest= SWsale;
        divsn= "Southwest";
    } 
    
    //Output Unknown
    cout<<endl;
    cout<<"The division with the highest sales is "<<divsn<<" with total sales of $"<<highest<<"."<<endl;
}