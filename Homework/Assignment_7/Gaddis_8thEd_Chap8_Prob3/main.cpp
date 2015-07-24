/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 12:41 PM
 * Purpose: Homework, Lottery Winners Modification.
 */

//System Libraries 
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes 
bool NumbVal(int[], int, int);

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=10; 
    int list[SIZE]= {13579, 26791, 26792, 33445, 55555,
                     62483, 77777, 79422, 85647, 93121};
    int WinNumb=0;   //Winning Number 
    
    //Input Process
    cout << "Enter this week's winning 5-digit number." << endl; 
    cin >> WinNumb; 
    
    //Input Validation 
    if(NumbVal(list,SIZE,WinNumb)==true) {
        cout << "One of the tickets is a winner this week!" << endl; 
    }else cout << "None of the tickets are winners. Better luck next week." << endl; 
   
    //Exit Stage Right! 
    
    return 0;
}
/*******************************************************************
 *                             NumbVal                             *
 *******************************************************************
 * Purpose:     To determine if lottery ticket array is a winner. 
 * Input:
 *      list      -> Array of Lottery Numbers 
 *      SIZE      -> Array size 
 *      WinNumb   -> Winning Number 
 * Output
 *      found     -> bool true if number is valid 
 *                        false if number is invalid  
 */
bool NumbVal(int list[], int SIZE, int WinNumb) {
    int first=0;
    int last= SIZE-1; 
    int middle; 
    int pos=-1; 
    bool found=false; 
    
    while(!found && first<=last) {
        middle=(first+last)/2;
        if (list[middle]==WinNumb) {
            found=true; 
            pos=middle;
        }
        else if (list[middle]>WinNumb)
            last=middle-1;
        else 
            first=middle+1; 
    }
    return found;
}
    
    
    
   