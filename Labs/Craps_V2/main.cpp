/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 12:51 PM
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
       int sum=roll(6,2);
       switch(sum){
           case 1: plyAgn++; break;
           case 2: 
           case 3: lose++; break;
           case 4: 
           case 5: 
           case 6: plyAgn++; break;
           case 7: win++; break;
           case 8: 
           case 9: 
           case 10: plyAgn++; break;
           case 11: win++; break;
           case 12: lose++; break;
           default:cout<<"Not Possible."<<endl;
       }
    }
    
    //Calculate the total of all sides 
    chkSum=win+lose+plyAgn;
    
    //Display the results 
    cout<<"Out of "<<nGames<<" we win "<<setw(5)<<win<<" times"<<endl;
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


