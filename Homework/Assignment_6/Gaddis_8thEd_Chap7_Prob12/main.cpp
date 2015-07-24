/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 24, 2015, 8:13 AM
 * Purpose: Homework, Grade Book. 
 */

//System Libraries 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=5; 
    string names[SIZE];              //Array of student names 
    float score[SIZE][4];            //Score for each tests 
    float avg[SIZE];                 //Average of 4 scores 
    float sum[SIZE]={0,0,0,0,0};     //Sum of all 4 tests 
    
    //Input Names and their scores 
    for(int i=0; i<SIZE; i++){
        cout << "Enter a student's name." << endl; 
        cin >> names[i];
    }
    cout << endl; 
    for(int x=0; x<SIZE; x++){
        for(int y=0; y<4; y++) {
            cout << "Enter the score for student " << (x+1) << ":" << endl; 
            cin >> score[x][y];
            
            //Input Validation 
            while(score[x][y]<0|| score[x][y]>100){
                cout << "Invalid entry. The range of the score is 0 to 100. Re-enter." << endl;
                cin >> score[x][y];
            }
            sum[x]+=score[x][y];
        }  
    }
    
    //Get Average score for each student 
    cout << fixed << showpoint << setprecision(2); 
    cout << endl; 
    for(int a=0; a<SIZE; a++){
        avg[a]=sum[a]/4.0;
        cout << "Student " << names[a] << "'s average is " << avg[a] << endl;
    }
    cout << endl; 
    
    //Letter Grade for each student 
    char grade[SIZE];
    for (int g=0; g<SIZE; g++){
        if (avg[g]>=90)grade[g]='A';
        else if (avg[g]>=80 && avg[g]<90)grade[g]='B';
        else if (avg[g]>=70 && avg[g]<80)grade[g]='C';
        else if (avg[g]>=60 && avg[g]<70)grade[g]='D';
        else grade[g]='F';
        cout << "Student " << names[g] << " got an " << grade[g] << endl;
    }
    
    //Exit Stage Right! 
    
    return 0;

}
