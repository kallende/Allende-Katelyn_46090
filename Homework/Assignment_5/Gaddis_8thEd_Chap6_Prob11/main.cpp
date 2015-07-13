/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 12, 2015, 10:36 AM
 * Purpose: Homework, Lowest Score Drop.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
int GtScore(int, int, int &total);
float CalcAve (int, int);
int fndLow (int sArray[5]); 

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    int sArray [5];     // Score array of 5 tests
    int tScore=0;       // Test Score
    float avg=0.0f;     // Average test scores 
    int lowest=0;       // Lowest test score out of the 5
    int total=0;        // Tests added up 
    
    //Populate the array
    for (int i =1; i <= 5; i++)
    { 
       tScore= GtScore(tScore, i, total); 
       sArray[i-1]=tScore; 
    }
    
    //Calculations
    lowest = fndLow(sArray);
    avg = CalcAve(lowest, total);
    
    //Output Unknowns 
    cout<<endl;
    cout<<"The lowest score dropped was: "<<lowest<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Average is "<<avg<<endl;  
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 ******************************GtScore************************************
 *************************************************************************
 * Purpose: Enter all 5 test scores. 
 * Input
 *      tScore   -> Score of each test individually 
 *      i        -> Increments of test
 *      total    -> Score of all 5 tests   
 * Output 
 *      tScore   -> Total of all test scores  
 *************************************************************************/ 
int GtScore(int tScore, int i, int &total) {
    //Input Process
    cout<<"Enter test score for exam number "<<i<<":";
    cin>>tScore; 
    
    //Input Validation 
    while (tScore <0||tScore>100) 
    {
        cout<<"Enter a valid score. Try Again."<<endl;
        cin>>tScore;
    }
    
    //Total of all tests 
    total+=tScore;
    
    return tScore;
}

/*************************************************************************
 ******************************fndLow*************************************
 *************************************************************************
 * Purpose: Determine lowest test score and drop it.  
 * Input
 *      sArray     -> 5 tests scores  
 * Output 
 *      smallest   -> lowest test score  
 *************************************************************************/ 
int fndLow (int sArray[5]) {
    //Declare variables 
    int smallest=sArray[0];
    
    //For-loop to determine lowest score
    for (int i =1; i < 5; i++) 
    {
        if (sArray[i]<smallest)
            smallest=sArray[i];
    }
    return smallest;
}

/*************************************************************************
 ******************************CalcAve************************************
 *************************************************************************
 * Purpose: Calculate average of the 5 tests. 
 * Input
 *      lowest   ->  Lowest test score dropped
 *      total    ->  Tests added up   
 * Output 
 *      ave      -> Average test score out of the 4 remaining test scores  
 *************************************************************************/ 
float CalcAve (int lowest, int total) {
    //Declare Variables 
    int sum=0;
    float avg=0.0f;
    
    //Calculate Average
    sum=total-lowest;
    avg=sum/4.0f;
    
    return avg;
}
