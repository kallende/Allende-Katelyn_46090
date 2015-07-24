/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 23, 2015, 10:10 AM
 * Purpose: Homework, Monkey Business. 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int COLMAX=5, ROWMAX=3;
    int monkey[ROWMAX][COLMAX];
    int  monone, montwo, montree;
    float totfood, avg, large, small; 
    
    //Input Process         
    cout << "How much did the monkeys eat these past 5 days?" << endl;

    //For-loop to enter data for each monkey 
    for(int m=0; m<3; m++){
        for(int day=0; day<5; day++){
            cout << "Monkey " << (m+1);
            cout << ", Day "  <<(day+1) << " : " ;
            cin >> monkey[m][day];
        }
    }

    //For-loop to calculate total food 
    for(int m=0; m<3 ;m++){
      for(int day=0; day<5; day++){
          totfood+=monkey[m][day];
        }     
      cout << endl;
    }

    //Calculate average amount eaten per day
    avg= totfood/5;
    cout << "The monkeys ate an average of " << avg << " lbs per day" << endl;

    //Calculate total amount of food eaten by each monkey in the week 
    monone= monkey[0][0]+monkey[0][1]+monkey[0][2]+monkey[0][3]+monkey[0][4];
    montwo= monkey[1][0]+monkey[1][1]+monkey[1][2]+monkey[1][3]+monkey[1][4];
    montree= monkey[2][0]+monkey[2][1]+monkey[2][2]+monkey[2][3]+monkey[2][4];

    //Find greatest amount of food eaten per week
    if(monone > montwo && monone > montree){
        cout << "Monkey 1 ate the most amount of food with " << monone << " lbs. " << endl;
    }else if (montwo > monone && montwo > montree){
        cout << "Monkey 2 ate the most amount of food with " << montwo << " lbs. " << endl;
    }else if(montree > monone && montree > monone){
        cout << "Monkey 3 ate the most amount of food with " << montree << " lbs. " << endl;
    }

    //Find least amount of food eaten per week
    if(monone < montwo && monone < montree){
        cout << "Monkey 1 ate the least amount of food with " << monone << " lbs. " << endl;
    }else if (montwo < monone && montwo < montree){
        cout << "Monkey 2 ate the least amount of food with " << montwo << " lbs. " << endl;
    }else if(montree < monone && montree < monone){
        cout << "Monkey 3 ate the least amount of food with " << montree << " lbs. " << endl;
    }

    //Exit Stage Right! 
    
    return 0;

}
