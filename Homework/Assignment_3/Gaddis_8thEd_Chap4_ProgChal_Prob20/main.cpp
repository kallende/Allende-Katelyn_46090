/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 10:40 PM
 * Purpose: Homework, Speed of Sound. 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 
 const int sAir=1100;         //Speed of sound in air. 
 const int sWater=4900;       //Speed of sound in water. 
 const int sSteel=16400;      //Speed of sound in steel. 

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare Variables 
    int sChoice;                 //Selected choice between air, water, or steel. 
    float dst;                   //Distance sound travels. 

    //Input Process
    cout<<"Select a medium:"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cout<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>sChoice;  
    
    //Process dependent on choice 
    if (sChoice>=1 && sChoice <=3)
    {
        cout<<"Enter the distance:  "<<endl;
        cin>>dst;
        if (dst>0.0)
        {
            cout<<"A sound wave takes ";
            cout<<fixed<<showpoint<<setprecision(4);
            switch (sChoice)
            {
                case 1:
                    cout<<dst/sAir<<" seconds to travel "<<dst<<" feet through air.";
                    break;
                case 2:
                    cout<<dst/sWater<<" seconds to travel "<<dst<<" feet through water.";
                    break;
                case 3:
                    cout<<dst/sSteel<<" seconds to travel "<<dst<<" feet through steel.";
                    break;
            }
        }else{
            cout<<"Distance must be greater than zero.";
        }
    }else{
        cout<<"The valid choices are 1 through 3. Run the program again and select one of those.";
    }
    
    //Exit Stage Right! 
    
return 0;
}

