/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 10, 2015, 7:47 PM
 * Purpose: Homework, Falling Distance.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 
const float g=9.8f;   //Gravity 

//Function Prototypes 
float fDist (int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    int time=0;
    float dist=0;
    //dist= distance traveled 
    
    //For-loop to calculate distance 
    for (int i=1; i<=10; i++){
        dist=fDist(i);
        cout<<i<<" seconds: "<<dist<<" meters"<<endl; }
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 ******************************fDist**************************************
 *************************************************************************
 * Purpose: Calculate falling distance. 
 * Input
 *      time   ->  10 seconds 
 * Output 
 *      dist   ->  Distance falling in meters 
 *************************************************************************/
float fDist (int t=0) {
    //Declare Variables 
    float dist=0;
    
    //Calculate distance 
    dist=(0.5*g)*(pow(t,2));
    
    return dist;
}