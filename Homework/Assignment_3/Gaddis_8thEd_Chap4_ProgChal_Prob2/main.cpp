/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 1, 2015, 10:22 PM
 * Purpose: Homework, Roman Numeral.    
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
    int RmnNum=0;
    cout<<"Enter a number (1 - 10): ";
    cin>>RmnNum;    

    //If within range output Roman Numeral 
    if (RmnNum>0 && RmnNum <=10)
    {
        cout<<endl<<"The Roman numeral version of "<<RmnNum<< " is ";
        switch (RmnNum)
        {
            case 1:
                cout<<"I.";
                break;
            case 2:
                cout<<"II.";
                break;
            case 3:
                cout<<"III.";
                break;
            case 4:
                cout<<"IV.";
                break;
            case 5:
                cout<<"V.";
                break;
            case 6:
                cout<<"VI.";
                break;
            case 7:
                cout<<"VII.";
                break;
            case 8:
                cout<<"VIII.";
                break;
            case 9:
                cout<<"IX.";
                break;
            case 10:
                cout<<"X.";
                break;
        }
    }else{
        cout<<endl<<"Invalid Input."<<endl;
        cout<<"Number needs to be between 1 and 10."<<endl;  
    }
    
    //Exit Stage Right! 
    
    return 0;
}

