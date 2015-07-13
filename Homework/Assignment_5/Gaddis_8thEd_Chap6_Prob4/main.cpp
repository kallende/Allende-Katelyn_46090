/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 10:19 PM
 * Purpose: Homework, Safest Driving Area.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
int getNumAccidents(string);
void findLowest (int, int, int, int, int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    int nrth, south, est, wst, cntrl;
    //nrth= North region 
    //south= South region 
    //est= East region 
    //wst= West region 
    //cntrl= Central region 
    
    //For-loop to getNumAddicents
    for(int i=0;i<5;i++) {
        switch (i) {
            case 0:
                nrth=getNumAccidents("North");
                break;
            case 1:
                south=getNumAccidents("South");
                break;
            case 2:
                est=getNumAccidents("East");
                break;
            case 3:
                wst=getNumAccidents("West");
                break;  
            default:   
                cntrl=getNumAccidents("Central");
        }
    }
   
    //Find region with lowest number of accidents 
    findLowest(nrth, south, est, wst, cntrl);
   
    //Exit Stage Right! 
    
   return 0;
}

/*************************************************************************
 *************************** getNumAccidents *****************************
 *************************************************************************
 * Purpose: Get Number of Accidents. 
 * Input
 *      string   -> Accidents in each region. 
 * Output 
 *      accdnt   -> Accidents in each region. 
 *************************************************************************/
int getNumAccidents(string regn) {
    //Declare Variables 
    int acdnt=0;
    
    //Input Process
    cout<<"Enter number of accidents for region "<<regn<<" ";
    cin>>acdnt;
    
    //Input Validation 
    while (acdnt<0) {
        cout<<"Number of accidents must be a positive number. Re-enter valid input."<<endl;
        cin>>acdnt;
    }
    return acdnt;
}

/*************************************************************************
 *************************** findLowest***********************************
 *************************************************************************
 * Purpose: Find region with the least amount of accidents.
 * Input 
 *      r1-r5     -> 5 regions 
 * Output 
 *      lowest    -> Region with the least amount of accidents. 
 *************************************************************************/
void findLowest (int r1, int r2, int r3, int r4, int r5) {
   //Declare Variables 
   int lowest=0;
   string regn= "";
   
   //Calculate Lowest 
   if(r1<r2 && r1<r3 && r1<r4 && r1<r5) {
       lowest=r1;
       regn= "North";
   }
   else if(r2<r1 && r2<33 && r2<r4 && r2<r5) {
       lowest=r2;
       regn= "South";
   }
   else if(r3<r1 && r3<r2 && r3<r4 && r3<r5) {
       lowest=r3;
       regn= "East";
   }
   else if(r4<r2 && r4<r3 && r4<r4 && r4<r5) {
       lowest=r4;
       regn= "West";
   }
   else {
       lowest=r5;
       regn= "Central";
   }
   
   //Output Unknowns 
   cout<<endl;
   cout<<"The region with the lowest accidents is "<<regn<<"."<<endl;
   cout<<"Total number of accidents in that region was "<<lowest<<"."<<endl;
   
}

