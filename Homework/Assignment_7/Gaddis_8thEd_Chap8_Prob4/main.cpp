/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 1:08 PM
 * Purpose: Homework, Charge Account Validation Modification. 
 */

//System Libraries 
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes 
void srtAry(int [], int);
bool AcntVal(int[], int, int);

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=18; 
    int list[SIZE]= {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                     1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int AcntNum=0;   //Account Number 
    bool doAgain; 
    
    //Input Process
    do {
    cout << "Enter your charge account number." << endl; 
    cin >> AcntNum; 
    
    //Input Validation 
    srtAry(list,SIZE);
    if(AcntVal(list,SIZE,AcntNum)==true) {
        cout << "Number is valid!" << endl; 
    }else cout << "The number is invalid." << endl; 
    
    //Prompt if they would like to enter another account number
        cout << endl << "Would you like to enter another charge account number (y/n)?" << endl;
        char response;
        cin >> response;
        cout << endl;
        if (response == 'y') doAgain = true;
        else doAgain = false;
    }while(doAgain);
    
    //Exit Stage Right! 
    return 0;
}

/*******************************************************************
 *                             AcntVal                             *
 *******************************************************************
 * Purpose:     To determine if the account is valid. 
 * Input:
 *      list      -> Array of Account Numbers 
 *      SIZE      -> Array size 
 *      AcntNum   -> Account Number inputed by user 
 * Output
 *      found     -> bool true if account is valid 
 *                        false if account is invalid  
 */
bool AcntVal(int list[], int SIZE, int AcntNum) {
    int first=0;
    int last= SIZE-1; 
    int middle; 
    int pos=-1; 
    bool found=false; 
    
    while(!found && first<=last) {
        middle=(first+last)/2;
        if (list[middle]==AcntNum) {
            found=true; 
            pos=middle;
        }
        else if (list[middle]>AcntNum)
            last=middle-1;
        else 
            first=middle+1; 
    }
    return found;
}

/*******************************************************************
 *                             srtAray                             *
 *******************************************************************
 * Purpose:     To put charge accounts in order. 
 * Input:
 *      list      -> Array of Account Numbers 
 *      SIZE      -> Array size  
 * Input-Output
 *      swap     -> Two arrays in order from lowest to highest 
 */
void srtAry(int list[], int SIZE){
    bool swap;
    int temp; 
    
    do {
        swap=false; 
        for(int count=0; count<(SIZE-1); count++){
            if (list[count]>list[count+1]){
                temp=list[count];
                list[count]=list[count+1];
                list[count+1]= temp;
                swap=true;
            }
        }
    }while(swap);
}