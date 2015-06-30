/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 29, 2015, 12:42 PM
 * Purpose: Lab 5, To show how to swap  
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
    int a,b;
    int min=10, max=100;
    
    //Input the values for a and b 
    cout<<"Input 2 integer values between "<<min<<" and ";
    cout<<max<<endl;
    cin>>a>>b;
    
    //Validate the results 
    if(a>=min && a <=max && b>=min && b<=max){
        //Prompt the user for which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage variable -> s or in-place -> i"<<endl;
        
        //Declare the variable type
        char type;
        cin>>type;
        switch(type){
            case 's':{
               int temp=a;
               a=b;
               b=temp;
               cout<<"type is visible due to scope!"<<endl;
               cout<<"type = "<<type<<endl;
               break;   
            }
            case 'i':{
               a=a^b;
               b=a^b;
               a=a^b;
               break;
            }
            default: 
                cout<<"You don't follow instructions"<<endl;
                cout<<"You didn't type an s or an i"<<endl;
                return 1;
        }
           
    }else{ 
        cout<<"You don't follow instructions"<<endl;
        cout<<"Values not between range given"<<endl;
        cout<<"No swap for you"<<endl;
        return 1;
    }
    
    //Output the results for the swap 
    cout<<"Old a = "<<b<<", new a = "<<a<<endl;
    cout<<"Old b = "<<a<<", new b = "<<b<<endl; 
    //cout<<temp<<endl; //Scope/visibility error 
    //cout<<type<<endl; //Scope/visibility error
    
    //Exit Stage Right!
    
    return 0;
}

