/* 
 * File:   main.cpp
 * Author: Katelyn
 * Created on June 24, 2015, 6:15 PM
 * Purpose: Homework, Pods and Peas_3 
 */

//System Libraries 
#include <iostream> //I/O Library

using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants  

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables Here
    int NofPds, PeaPrPd, TPeas;
    //NofPds= number of pods
    //PeaPrPd= peas per pod
    //TPeas= total peas 
    
    //Process Input Here 
    cout << "Hello\n";
    cout<<"\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> NofPds;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> PeaPrPd;
    
    //Calculate the total number of peas
    TPeas= NofPds/PeaPrPd;
    
    //Output Unknowns here 
    cout << "If you have ";
    cout << NofPds;
    cout << " pea pods\n";
    cout << "and ";
    cout  << PeaPrPd;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << TPeas;
    cout << " peas in all the pods.\n";
    cout<<"\n";
    cout << "Good-bye\n";
   
    //Exit Stage Right!
    
    return 0;
}