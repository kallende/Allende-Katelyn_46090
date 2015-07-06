/* 
 * File:   main.cpp
 * Author: Katelyn Allende
 * Created on July 1, 2015, 6:21 PM
 * Purpose: Homework, Paper-Rock-Scissor Game. 
 */

//System Libraries 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare Variables 
    char p1, p2;
    //p1= player 1
    //p2= player 2
    bool doAgain;
	
    //Input Process 
    do{
        cout<<"Player 1, please enter your choice [P/R/S]"<<endl;
	cin>>p1;
	cout << "Player 2, please enter your choice [P/R/S]"<<endl;
	cin>>p2;
            p1=toupper(p1);
	    p2=toupper(p2);
        
        //Display the Game 
        if (p1 == p2){
            cout<<endl<<"Nobody wins."<<endl;
	}else
	{
            switch (p1)   
                {case 'P':
		if (p2 == 'R')
                    cout<<endl<<"Paper covers rock, Player 1 wins."<<endl;
		else
                    cout<<endl<<"Scissors cut paper, Player 2 wins."<<endl;
		break;
				
                case 'R':
		if (p2 == 'S')
                    cout<<endl<<"Rock breaks scissors, Player 1 wins."<<endl;
		else
                    cout<<endl<<"Paper covers rock, Player 2 wins."<<endl;
		break; 	
				
		case 'S':
		if (p2 == 'P')
                    cout<<endl<<"Scissors cut paper, Player 1 wins."<<endl;
		else
                    cout<<endl<<"Rock breaks scissors, Player 2 wins."<<endl;
		break;
                }
        }
        
        //Prompt if they would like to continue
        cout<<endl<<"Would you like to continue y/n?"<<endl;
        char response; 
        cin>>response;
        cout<<endl;
        if (response=='y')
            doAgain=true;
        else 
            doAgain=false;
    }while(doAgain);  
    
    //Exit Stage Right! 
    
    return 0;
}


