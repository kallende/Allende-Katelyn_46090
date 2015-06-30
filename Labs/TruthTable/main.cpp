/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on June 29, 2015, 12:42 PM
 * Purpose: Lab 5, To show the truth 
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
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  (X^Y)^Y  ";
    cout<<"(X^Y)^X  !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //Row 1 output 
    x=true;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<endl;
   
    //Row 2 output 
    x=true;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Row 3 output 
    x=false;y=true;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //Row 4 output 
    x=false;y=false;
    cout<<(x?'T':'F')<<"  ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"   ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<endl;
            
    //Exit Stage Right!
    
    return 0;
}

