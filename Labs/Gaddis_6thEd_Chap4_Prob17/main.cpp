/* 
 * File:   main.cpp
 * Author: Katelyn Allende
 * Created on July 2, 2015, 12:55 PM
 * Purpose: Spectral Analysis 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    float cWave;  //
    
    //Input Process 
    cout<<"Input wavelenth of an electromagnetic wave in meters."<<endl;
    cin>>cWave; 
    
        //Determining the wave depending on input 
        if (cWave>=1e-2)
            cout<<"You have Radio Waves."<<endl;
        else if (cWave>1e-3)
            cout<<"You have Microwaves."<<endl;
        else if (cWave>7e-7)
            cout<<"You have Infrared."<<endl;
        else if (cWave>4e-7)
            cout<<"You have Visible Light."<<endl;
        else if (cWave>1e-8)
            cout<<"You have Ultraviolet."<<endl;
        else if (cWave>1e-11)
            cout<<"You have X Rays."<<endl;
        else
            cout<<"You have Gamma Rays."<<endl;
            
    //Exit Stage Right! 
    
    return 0;
}



