/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 1:05 PM
 * Purpose: Eventually to play the game of craps. 
 */

//System Libraries
#include <iostream>  //I/O
#include <iomanip>
#include <cstdlib>   //Random 
#include <ctime>     //Time
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
unsigned char roll(unsigned char, unsigned char);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    unsigned int nGames=36000;
    unsigned int win=0, lose=0, plyAgn=0;
    unsigned int chkSum=0;
    
    //Play the game 
    for(int game=1;game<=nGames;game++){
       //Roll the Dice 
       int sum=roll(6,2);
       //Winner, loser, or roll again 
       if(sum==7||sum==11)win++;
       else if (sum==2||sum==3||sum==12)lose++;
       else {
           //Roll Again 
           plyAgn++;
           bool rollAgn=true;
           do{
               int sum2=roll(6,2);
               if(sum==sum2){
                   win++;
                   rollAgn=false;
               }else if(sum2==7){
                   lose++;
                   rollAgn=false;
               }
           }while(rollAgn);
       }
    }
    
    //Calculate the total of all sides 
    chkSum=win+lose;
    
    //Display the results 
    cout<<"Out of "<<nGames<<" we win  "<<setw(5)<<win<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we lose "<<setw(5)<<lose<<" times"<<endl;
    cout<<"Out of "<<nGames<<" we roll again "<<setw(5)<<plyAgn<<" times"<<endl;
    cout<<endl<<"Check sum = "<<chkSum<<endl; 
    
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 *************************** roll ****************************************
 *************************************************************************
 * Purpose: Random throw of any number of dice 
 * Inputs
 *      sides -> Number of sides to the dice
 *      nDie  -> Number of dice to throw 
 * Output 
 *      sum   -> Sum of all the dice throws 
 *************************************************************************/
unsigned char roll(unsigned char sides, unsigned char nDie) {
    //Declare the sum of the die rolls
    unsigned char sum=0;
    //Loop for each die 
    for(int thrw=1;thrw<=nDie;thrw++){
        sum+=(rand()%sides+1);
    }
    return sum;
}

