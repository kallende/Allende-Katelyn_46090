/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 11:56 AM
 * Purpose: Homework, Kinetic Energy.
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
float knEnrgy(float, float);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float mass=0;
    float vlcty=0;  //Velocity
    float ke=0;     //Kinetic Energy
    
    //Input Process
    cout<<"Enter object's mass in kilograms."<<endl;
    cin>>mass;
    cout<<"Enter object's velocity in meters per second."<<endl;
    cin>>vlcty;
    
    //Output Kinetic Energy
    ke= knEnrgy(mass,vlcty);
    cout<<endl;
    cout<<"Kinetic Energy of this object is = "<<ke<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 ******************************knEnrgy**************************************
 *************************************************************************
 * Purpose: Calculate falling distance. 
 * Inputs
 *      m      ->  Mass
 *      v      ->  Velocity
 * Output 
 *      ke     ->  Kinetic Energy 
 *************************************************************************/
float knEnrgy(float m, float v) {
    return (0.5*m)*(pow(v,2));
}

