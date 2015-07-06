/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 30, 2015, 1:02 PM
 * Purpose: Homework, Math Tutor. 
*/

//System Libraries 
#include <iomanip> 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

//User Libraries 

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 

int main(int argc, char** argv) {
    
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables 
    unsigned short op1, op2, result, answer;
    char op;
    bool doAgain;
    
    //Loop based upon continuing to play with the math tutor 
    do{
       //Determine op1/op2
        op1=rand()%900+100;//[100-999];
        op2=rand()%900+100;//[100-999];
        op=rand()%5;
        
        //Display the problem 
        cout<<setw(6)<<op1<<endl;
        switch(op){
            case 0:{
                cout<<" + "<<op2<<endl;
                answer=op1+op2;
                break;
            }   
            case 1:{
                cout<<" - "<<op2<<endl;
                answer=op1-op2;
                break;
            }   
            case 2:{
                cout<<" * "<<op2<<endl;
                answer=op1*op2;
                break;
            }
            case 3:{
                cout<<" / "<<op2<<endl;
                answer=op1/op2;
                break;
            }    
            case 4:{
                cout<<" % "<<op2<<endl;
                answer=op1%op2;
                break; 
            }
        }
        cout<<"------"<<endl;
        
        //Input the value for the sum 
        cin>>result;
        
        //If correct output COngradualtions else try again? 
        if(result==answer){
            cout<<endl<<"Congratulations"<<endl;
        }else{
            cout<<endl<<"Wrong Answer"<<endl;
            cout<<"The answer was ="<<answer<<endl;
        }
        
        //Prompt if the would like to continue
        cout<<endl<<"Would you like to continue y/n"<<endl;
        char response; 
        cin>>response;
        if (response=='y')doAgain=true;
        else doAgain=false;
    }while(doAgain);  
    
    //Exit stage right!
    
    return 0;
}