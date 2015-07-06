/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 30, 2015, 7:52 PM
 * Purpose: Homework, Breakfast Cereal.  
*/

//System Libraries
#include <iostream>
using namespace std; 

//User Libraries 

//Global Constants 
const float ton = 35273.92;   //Ounces in 1 metric ton 
//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare variables 
    float WtCal, ounce, NofBox;
    bool doAgain;
    //WtCal= Weight of the box in metric tons 
    //Nofbox= Number of boxes to yield 1 metric ton of cereal 

    //Input Process
do{
    cout<<"Enter the weight of your packaged cereal in ounces."<<endl;
    cin>>ounce;
    cout<<endl;
    
    //Output Unknowns Here 
    cout<<"Weight of cereal = "<<ounce<<"(ounces)"<<endl;
    WtCal=ounce/ton;
    cout<<"The weight of the box of cereal in metric tons = "<<WtCal<<" tons"<<endl;
    NofBox=1/WtCal;
    cout<<"Number of boxes to yield 1 metric ton of cereal = "<<NofBox<<" boxes"<<endl;
        
        //Prompt if the would like to continue
        char response; 
        cout<<endl<<"Would you like to repeat this calculation y/n?"<<endl;
        cin>>response;
        if (response=='y')doAgain=true;
        else doAgain=false;
    }while(doAgain);  
    
    //Exit stage right!
    
    return 0;
}

