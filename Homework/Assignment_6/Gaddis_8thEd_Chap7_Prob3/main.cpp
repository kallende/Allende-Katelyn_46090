/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 23, 2015, 1:01 PM
 * Purpose: Homework, Chips and Salsa. 
 */

//System Libraries 
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype
void srtAray(int[], string [], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=5; 
    int numSold[SIZE];
    int total=0, high=0, low=0;
    int posMax= 0;
    int posMin= 0;
    string ChpSlsa[]= {"mild", "medium", "sweet", "hot", "zesty"}; 
    
    //Input Process 
    for(int i=0; i<SIZE; i++){
        cout << "Enter the number of jars sold during the past month for "
             << ChpSlsa[i]<< ": " << endl;
        cin >> numSold[i]; 
        
        while (numSold[i]<0){
        cout << "Invalid Entry. Input must be a positive value. Re-enter." << endl; 
        cin >> numSold[i];
    }
        total+=numSold[i];
    }
    
    //For-loop to find highest and lowest value in the array
    for(int count=1; count<SIZE; count++)
    {
        if (numSold[count]>high) 
            high=numSold[count];
            posMax=count;      
        if (numSold[count]<low)
           low=numSold[count];
           posMin=count;  
    }       
    
    //Output Unknowns 
    cout << endl << "The total sales = " << total;
    srtAray(numSold, ChpSlsa, SIZE);
    cout << endl << "*Sales for each salsa type from lowest to highest*" << endl;
    for (int a=0; a<SIZE; a++){
        cout << ChpSlsa[a] << ": " << numSold[a] << " jars" << endl; 
    }
    
    //Exit Stage Right! 
    
    return 0;
}

/*******************************************************************
 *                             srtAray                             *
 *******************************************************************
 * Purpose:     To put salsa sales in order by name and amount. 
 * Input:
 *      numSold  -> Array of number of jars sold 
 *      ChpSlsa  -> Array of different types of salsa 
 *      SIZE     -> Array size  
 * Input-Output
 *      swap     -> Two arrays in order from lowest to highest 
 */
void srtAray(int numSold[], string ChpSlsa[], int SIZE){
    bool swap; 
    int temp; 
    string temp2; 
    do {
        swap=false; 
        for(int count=0; count<(SIZE-1); count++){
            if (numSold[count]>numSold[count+1]){
                temp=numSold[count];
                temp2=ChpSlsa[count];
                numSold[count]=numSold[count+1];
                ChpSlsa[count]=ChpSlsa[count+1];
                numSold[count+1]=temp;
                ChpSlsa[count+1]=temp2;
                swap=true; 
            }
        }
    }while(swap);
}
