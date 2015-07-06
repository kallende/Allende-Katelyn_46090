/* 
  * File:   main.cpp
  * Author: Katelyn Allende 
  * Created on June 30, 2015, 10:37 AM
  * Purpose: Homework, Mad Lib. 
  */

//System Libraries
#include <iostream> 
#include <string> 
#include <cstdlib>
using namespace std;

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here!

int main(int argc, char** argv) {
     //Declare Variables 
     string NofInst, YrNme, Food, Adj, Color, Anml;
     //NofInst= First or Last name of Instructor 
     //YrNme= Your name 
     //Numb= A number between 100 and 120
     //Adj= An adjective
     //Anml= An animal 
     char Numb[50];
     int iNumb = 0;
     int min=100, max=120;
     
     //Input the answers 
     cout<<"Enter a word for the following sections to complete the game of Mad Lib."<<endl;
     cout<<endl;
     cout<<"Enter the first or last name of your instructor"<<endl;
     cin>>NofInst;
     cout<<"Enter your name"<<endl;
     cin>>YrNme;
     cout<<"Enter a food"<<endl;
     cin>>Food;
     cout<<"Enter a number between "<<min<<" and ";
     cout<<max<<endl;
     cin>>Numb;
     
     //Validate the results    
     iNumb = atoi(Numb);
     if(iNumb>=min && iNumb <=max) {
      cout<<"Number is within range, next section!"<<endl;
      cout<<endl;
        }               
     else {
        cout<<endl;
        cout<<"You don't follow instructions"<<endl;
        cout<<"Value not between range given"<<endl;
        cout<<"No Mad Lib for you"<<endl;
        return 1;
        }
        
    //Input the rest of the answers       
     cout<<"Enter an adjective"<<endl;
     cin>>Adj;
     cout<<"Enter a color"<<endl;
     cin>>Color;
     cout<<"Enter an animal"<<endl;
     cin>>Anml;
     cout<<endl;
     
     //Input the answers into story  
     cout<<"Dear Instructor"<<" "<<NofInst<<","<<endl;
     cout<<endl;
     cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
     cout<<"I ate a rotten"<<" "<<Food<<", which made me turn"<<" "<<Color<< " and externally ill. I"<<endl;
     cout<<"came down with a fever of"<<" "<<Numb<<". Next, my"<<" "<<Adj<<" pet"<<endl;
     cout<<Anml<< " must have smelled the remains of the"<<" "<<Food<< " on my homework,"<<endl;
     cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
     cout<<"will accept it late."<<endl;
     cout<<endl;
     cout<<"Sincerely,"<<endl;
     cout<<YrNme<<endl;
     
     //Exit Stage Right! 
     
     return 0;
 }