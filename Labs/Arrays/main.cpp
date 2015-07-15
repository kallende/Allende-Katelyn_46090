/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 14, 2015, 12:14 PM
 * Purpose: Arrays! 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 

//Execution Begins Here! 
int main(int argc, char** argv) {
//Parallel Arrays 
    //Declare Variables 
    const int SIZE=10;
    int array[SIZE];
    int array2[SIZE];
    
    //Output heading 
    cout<<"Parallel Arrays"<<endl;
    cout<<"n"<<"\tn^2"<<endl;
    cout<<"--      --"<<endl;
    
    //For-loop for parallel arrays 
    for(int n=0; n<SIZE; n++) {
       array[n]=n+1;
       array2[n]=(n+1)*(n+1);
    }
    for(int n=0; n<SIZE; n++) {
        cout<<array[n]<<"  \t"<<array2[n]<<endl;
    }
    
//2 Dimensional Arrays 
    //Declare Variables 
    const int ROWS=12, COLS=12;
    int table[ROWS][COLS];
    
    //Output heading 
    cout<<endl<<"2 Dimensional Arrays"<<endl;
    
    //For-loop for 2 Dimensional Arrays 
    for(int cols=0; cols<COLS; cols++){
        for(int rows=0; rows<ROWS; rows++) {
            table[cols][rows]=(rows+1)*(cols+1);
            cout<<table[cols][rows]<<"\t";
        }
        cout<<endl;
    }

    //Exit Stage Right! 
    return 0;
}

