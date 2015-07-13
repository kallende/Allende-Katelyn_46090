/* 
 * File:   main.cpp
 * Author: Katelyn Allende
 * Created on July 8, 2015, 12:20 PM
 * Purpose: Retirement Calculator. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries

//Global Constants 

//Function Prototypes
void heading(float, float, float);
float table(int, int, float,float, float);
float retirement (float, float, float);

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=.06f;  //Investment Rate -> see Calif Muni Bonds
    float savReq;        //Savings required at retirement 
    float pDep=.20f;     //Of your gross Salary -> Percentage Deposit 
    float deposit;       //Yearly deposit in $'s 
    float savings=0;     //Initial Savings at start of Employment
    int year=0;           
    int interest;
    
    heading(salary,invRate,pDep);
    //Calculate required savings. 
    savReq=salary/invRate; 
    
//    //Loop to calculate when Retirement is possible 
//       do{
//           //retirement(salary, invRate,pDep,interest, deposit, savings)
//           year++;
//           int date;
//           date=16;
//           cout<<year<<"\t06/01/"<<date+year<<endl;     
//           table(year, date, savings,interest,deposit);
//    }while(savings<savReq);  //When we have enough to retire then exit the loop  
//       
    //table(year, date, savings,interest,deposit);
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl; 
    
    //Exit Stage Right! 
    
    return 0;
}

float table(int y, int d, float s,float i, float dpst){
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(4)<<y;
    cout<<setw(8)<<d;
    cout<<setw(12)<<s;
    cout<<setw(10)<<i;
    cout<<setw(10)<<dpst;
    cout<<endl;  
}

//float retire (float salary, float invRate, float pDep, float deposit, float savings){
//    deposit=pDep*salary;  //Deposit based on salary 
//    savings*=(1+invRate); //Earning based upon investment rate
//    savings+=deposit;     //Add the deposit after earning interest    
//}

void heading (float s, float i, float p){
    cout<<"Retirement Calculator based on Muni-Bond Investment"<<endl;
    cout<<"                Salary    = $"<<setw(7)<<s<<endl;
    cout<<"       Investment Rate    = $"<<setw(7)<<i*100<<"%"<<endl;
    cout<<"   Yearly Deposit Rate    = $"<<setw(7)<<p*100<<"%"<<endl;
    cout<<endl;
    cout<<"Year\t Date\t   Savings\t  Interest\t  Deposit"<<endl;
cout<<"-------------------------------------------------------------"<<endl; }