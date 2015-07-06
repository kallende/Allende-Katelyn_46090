/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 30, 2015, 10:05 PM
 * Purpose: Homework, Stadium Seating.   
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    int ClassA, ClassB, ClassC;
    int CstA = 15, CstB = 12, CstC = 9;
    //CstA= cost of Class A seats 
    //CstB= cost of Class B seats
    //CstC= cost of Class C seats
    unsigned int Total;  //Total income from ticket sales 
    
    //Input the Process
    cout<<"Enter the number of Class A seats sold."<<endl;
    cin>>ClassA;
    cout<<"Enter the number of Class B seats sold."<<endl;
    cin>>ClassB;
    cout<<"Enter the number of Class C seats sold."<<endl;
    cin>>ClassC;
    
    //Equation to calculate total income from ticket sales 
    Total=(ClassA*CstA)+(ClassB*CstB)+(ClassC*CstC);
    
    //Output the Unknown
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"Amount of income generated from ticket sales = $"<<Total<<endl;
    
    //Exit Stage Right! 
    
    return 0;
}



