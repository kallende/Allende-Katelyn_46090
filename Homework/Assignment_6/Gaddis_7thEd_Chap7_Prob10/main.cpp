/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 16, 2015, 1:25 PM
 * Purpose: Homework, Grade a test. 
 */

//System Libraries 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype
void filAray(char [], int);
void prntAry(const char [], int, int);
int grade(char [],char [],char [], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    const int SIZE=20;
    char qstns[SIZE], answrs[SIZE], rhtwrg[SIZE];
    
    //Initialize the array
    filAray(qstns, SIZE);
    filAray(answrs, SIZE);
    
    //Grade the test
    int score=grade(qstns,answrs,rhtwrg, SIZE);
    
    //Output the initial array
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns, SIZE, 5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs, SIZE, 5);
    cout<<"The scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE<<endl;
    
    //Exit Stage Right! 
    
  return 0;  
}

/*******************************************************************
 *                          Fill Array                             *
 *******************************************************************
 * Purpose:     To fill an array with a,b,c,d
 * Input:
 *      n-> The size of the array 
 * Input-Output
 *      a-> The character Array
 * Output:
 */
void filAray(char a[], int n) {
    //Loop on every element and equate to 2 digits 
     for(int i=0; i<n; i++){ 
         a[i]=rand()%4+97;  //[-6,6]
     }
}

/*******************************************************************
 *                          Print Array                            *
 *******************************************************************
 * Purpose:     To print a character type array with any 
 *              number of columns. 
 * Input:
 *      n-> The size of the array 
 *      a-> The float Array
 *      nCols -> Number of columns to display the array. 
 * Output:
 *      On Screen
 */
void prntAry(const char a[], int n, int nCols) {
    //Format
    cout << fixed << showpoint << setprecision(4);
    //Separate outputs with a line 
    cout<<endl; 
    //Loop an output every element in the array 
    for(int i=0; i<n; i++){
        cout<<setw(8)<<a[i];
        //When column is reached go to next line 
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line 
    cout<<endl;    
}

/*******************************************************************
 *                          Score the Test                         *
 *******************************************************************
 * Purpose:     To print a character type array with any 
 *              number of columns. 
 * Input:
 *      n-> The size of the array 
 *      q-> The question Array
 *      a-> The answer Array
 * Output:
 *      c-> The score Array
 *      score -> The total correct        
 */
int grade(char q[],char a[],char c[], int n){
    //Declare the count/score
    int score=0;
   
    //Grade each answer 
    for(int i=0; i<n;i++){
        if(q[i]==a[i]){
           c[i]='c'; 
           score++;
        } else c[i]='i';
    }
    //Return the score
    return score; 
}






