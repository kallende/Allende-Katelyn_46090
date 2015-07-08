/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 12:14 PM
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
    unsigned int s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, 
                 s7=0, s8=0, s9=0, s10=0, s11=0, s12=0;
    unsigned int chkSum=0;
    
    //Play the game 
    for(int game=1;game<=nGames;game++){
       int sum=roll(6,2);
       switch(sum){
           case 1: s1++; break;
           case 2: s2++; break;
           case 3: s3++; break;
           case 4: s4++; break;
           case 5: s5++; break;
           case 6: s6++; break;
           case 7: s7++; break;
           case 8: s8++; break;
           case 9: s9++; break;
           case 10: s10++; break;
           case 11: s11++; break;
           case 12: s12++; break;
           default:cout<<"Not Possible."<<endl;
       }
    }
    
    //Calculate the total of all sides 
    chkSum=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12; 
    
    //Display the results 
    cout<<"Out of "<<nGames<<" 1 was thrown "<<setw(5)<<s1<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 2 was thrown "<<setw(5)<<s2<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 3 was thrown "<<setw(5)<<s3<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 4 was thrown "<<setw(5)<<s4<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 5 was thrown "<<setw(5)<<s5<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 6 was thrown "<<setw(5)<<s6<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 7 was thrown "<<setw(5)<<s7<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 8 was thrown "<<setw(5)<<s8<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 9 was thrown "<<setw(5)<<s9<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 10 was thrown "<<setw(5)<<s10<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 11 was thrown "<<setw(5)<<s11<<" times"<<endl;
    cout<<"Out of "<<nGames<<" 12 was thrown "<<setw(5)<<s12<<" times"<<endl;
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
