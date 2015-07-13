/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 2:21 PM
 * Purpose: Homework, Mpg.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 
const float litr=.264179f;  //Conversion from liters to gallons 

//Function Prototypes 
float mpg (float, float); 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float gas=0, dist=0, mpg;
    //gas=  Number of liters of gasoline consumed by the car
    //dist= Number of miles traveled by the car 
    //mpg=  Number of miles per gallon delivered by a car
    bool doAgain;
    
    //Input process 
    do {
        cout<<"Enter the number of liters of gasoline consumed by the car."<<endl;
        cin>>gas;
        
        //Input Validation 
        while (gas<0) {
        cout<<"Invalid Input. Enter a positive value."<<endl;
        cin>>gas;
        }
        
        //Input Process Continued 
        cout<<"Enter the number of miles traveled by the car."<<endl;
        cin>>dist;
        
        //Input Validation 
        while (dist<0) {
        cout<<"Invalid Input. Enter a positive value."<<endl;
        cin>>dist;
        }
        
        //Calculate mpg using a conversion 
        float litPgal=1/litr; 
        mpg=(dist/gas)*litPgal;
        
        //Output Unknown 
        cout<<fixed<<showpoint<<setprecision(2)<<endl;
        cout<<"The number of miles per gallon the car delivered is "<<mpg<<"."<<endl;
        
        //Prompt if they would like to continue
        cout<<endl<<"Would you like to repeat y/n?"<<endl;
        char response; 
        cin>>response;
        if (response=='y')
            doAgain=true;
        else 
            doAgain=false;
    }while(doAgain);  
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 *************************** mpg *****************************************
 *************************************************************************
 * Purpose: Calculate Miles per Gallon of a car. 
 * Inputs
 *      gas   ->  Number of liters of gasoline consumed by the car
 *      dist  ->  Number of miles traveled by the car
 * Output 
 *      mpg   ->  Number of miles per gallon delivered by a car
 *************************************************************************/
float mpg (float g, float d){
    return d/g;
}

