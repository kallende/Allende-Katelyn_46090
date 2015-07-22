/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 17, 2015, 2:10 PM
 * Purpose: Midterm - Create a game - 
 *          Blackjack
 */

//System Libraries 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries 

//Global Constants 

//Function Prototypes 
void shuffle(bool []);
void PrntCrd(int);
void PrntHnd(int [], const int);
int NxtCard(bool []);
int ScrHnd(int [], const int);
void PrntSaH(int [], const int, int [], const int);

//Execution Begins Here! 

int main(int argc, char** argv) {
    //Declare Variables 
    bool CrdsDlt[52];         	      //Deck of Cards 
    int hCrdCnt = 0;	              //House Card Count 
    int HseHnd[12];                   //Array of House Hand 
    int pCrdCnt = 0;                  //Player Card Count 
    int PlyrHnd[12];                  //Array of Player Hand 
    bool doAgain;                     //Decision to play again or not 
    char pChoice;                     //Choice to Hit or Stay 
    bool pHits = true;                //Player Hits 
    int pScore;                       //Player's Score 
    int hScore;                       //House's Score 
    bool hBusts;                      //House Bust 

    //Set the random number seed
    srand(time(0));
    //Loop for each hand
    do {
        //Shuffle the cards 
        shuffle(CrdsDlt);

        //Deal two cards to each player 
        HseHnd[0] = NxtCard(CrdsDlt);
        PlyrHnd[0] = NxtCard(CrdsDlt);
        HseHnd[1] = NxtCard(CrdsDlt);
        PlyrHnd[1] = NxtCard(CrdsDlt);
        hCrdCnt = 2;
        pCrdCnt = 2;

        //Heading for a new hand 
        cout << "******************* New Hand *******************" << endl;

        //Display first two cards 
        do {
            cout << "House's Hand" << endl;
            cout << "**";
            PrntCrd(HseHnd[1]);
            cout << endl;
            cout << "Player's Hand Score: " << ScrHnd(PlyrHnd, pCrdCnt) << endl;
            PrntHnd(PlyrHnd, pCrdCnt);

            //Ask player if they would like to hit or stay
            cout << "Would you like to hit(h) or stay(s)?" << endl;
            cin >> pChoice;
            if (pChoice == 'h') {
                PlyrHnd[pCrdCnt] = NxtCard(CrdsDlt);
                ++pCrdCnt;
            } else if (pChoice == 's') {
                pHits = false;
            } else {
                cout << "Invalid input. Try Again." << endl;
            }
            cout << endl;

            //Update Score, Check for Bust, and See Who Wins 
            pScore = ScrHnd(PlyrHnd, pCrdCnt);
            }while (pHits && pScore < 22);
                if (pScore > 21) {
                    cout << "-------------------------" << endl;
                    cout << "THE HOUSE WINS!!!" << endl;
                    PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                }else if (pScore==21){
                    cout << "-------------------------" << endl;
                    cout << "THE PLAYER WINS!!!" << endl;
                    PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                }else {
                    hScore = ScrHnd(HseHnd, hCrdCnt);
                    while (hScore < 17) {
                        HseHnd[hCrdCnt] = NxtCard(CrdsDlt);
                        ++hCrdCnt;
                        hScore = ScrHnd(HseHnd, hCrdCnt);
                    }
                    hBusts = (hScore > 21);
                    if (hBusts) {
                        cout << "-------------------------" << endl;
                        cout << "THE PLAYER WINS!!!" << endl;
                        PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                    }else {
                        if (pScore == hScore) {
                            cout << "-------------------------" << endl;
                            cout << "TIE!!!" << endl;
                            PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                        }else if (pScore > hScore) {
                            cout << "-------------------------" << endl;
                            cout << "THE PLAYER WINS!!!" << endl;
                            PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                        }else {
                            cout << "-------------------------" << endl;
                            cout << "THE HOUSE WINS!!!" << endl;
                            PrntSaH(HseHnd, hCrdCnt, PlyrHnd, pCrdCnt);
                        }
                    }
                }

        //Prompt if they would like to continue
        cout << endl << "Would you like to continue y/n?" << endl;
        char response;
        cin >> response;
        cout << endl;
        if (response == 'y') doAgain = true;
        else doAgain = false;
    } while (doAgain);

    return 0;
}

/*******************************************************************
 ***************************** PrntSaH *****************************
 *******************************************************************
 * Purpose:     To print the score and hand.  
 * Input:
 *          HseHnd    ->  House Hand 
 *          hCnt      ->  House Card Count
 *          PlyrHnd   ->  Player Hand 
 *          pCnt      ->  Player Card Count 
 * Input-Output:
 *          ScrHnd    ->  Score Hand for House and Player 
 *          PrntHnd   ->  Print Hand for House and Player 
 ********************************************************************/
void PrntSaH(int HseHnd[], const int hCnt, int PlyrHnd[], const int pCnt) {
    //Output each score and the hand
    cout << "House's Hand Score: " << ScrHnd(HseHnd, hCnt) << endl;
    PrntHnd(HseHnd, hCnt);
    cout << "Player's Hand Score: " << ScrHnd(PlyrHnd, pCnt) << endl;
    PrntHnd(PlyrHnd, pCnt);
    cout << endl;
}

/*******************************************************************
 ***************************** ScrHnd ******************************
 *******************************************************************
 * Purpose:     To determine the score of the hand.  
 * Input:
 *          h       ->  Hand 
 *          t       ->  Card Count      
 * Output:
 *          score   ->  Score of hand  
 ********************************************************************/
int ScrHnd(int h[], const int t) {
    //Declare Variables 
    int AceCnt = 0;    //Ace Count 
    int Score = 0;
    int newCrd;        //New Card 
    int iRank;         //Rank of Card 

    //For-loop to determine score of hand 
    for (int r = 0; r < t; r++) {
        newCrd = h[r];
        iRank = (newCrd % 13);
        if (iRank == 0) {
            ++AceCnt;
            ++Score;
        } else if (iRank < 9) {
            Score = Score + (iRank + 1);
        } else {
            Score = Score + 10;
        }
    }
    while (AceCnt > 0 && Score < 12) {
        --AceCnt;
        Score = Score + 10;
    }
    return Score;
}

/*******************************************************************
 ***************************** NxtCrd ******************************
 *******************************************************************
 * Purpose:     To deal next card(s).  
 * Input:
 *          CrdsDlt    ->  Deck of cards         
 * Output:
 *          newCard    ->  Next card(s)
 ********************************************************************/
int NxtCard(bool CrdsDlt[]) {
    //Declare Variable
    int newCard = -1;
    bool d = true;

    //Loop to get next card 
    do {
        newCard = (rand() % 52);
        if (!CrdsDlt[newCard]) {
            d = false;
        }
    } while (d);
    return newCard;
}

/*******************************************************************
 ***************************** PrntHnd *****************************
 *******************************************************************
 * Purpose:     To print the card hand. 
 * Input: 
 *          h       ->  Hand 
 *          t       ->  Card Count       
 * Input-Output:
 *          On Screen 
 ********************************************************************/
void PrntHnd(int h[], const int t) {
    //For-loop to print hand of cards 
    for (int r = 0; r < t; r++) {
        const int iNxtCrd = h[r];
        PrntCrd(iNxtCrd);
        cout << " ";
    }
    cout << endl;
}

/*******************************************************************
 ***************************** PrntCrd *****************************
 *******************************************************************
 * Purpose:     To print the card. 
 * Input:
 *          p       ->   Card      
 * Input-Output:
 *          On Screen 
 ********************************************************************/
void PrntCrd(int p) {
    //Declare Variables 
    const int cRank = (p % 13);     //Card Rank 
    const int cSuit = (p % 13);     //Card Suit 

    //Print the rank of the card 
    if (cRank == 0) {
        cout << 'A';
    } else if (cRank < 9) {
        cout << (cRank + 1);
    } else if (cRank == 9) {
        cout << 'T';
    } else if (cRank == 10) {
        cout << 'J';
    } else if (cRank == 11) {
        cout << 'Q';
    } else {
        cout << 'K';
    }
    //Print the suit of the card 
    if (cSuit == 0) {
        cout << 'C';
    } else if (cSuit == 1) {
        cout << 'D';
    } else if (cSuit == 2) {
        cout << 'H';
    } else {
        cout << 'S';
    }
}

/*******************************************************************
 ***************************** shuffle *****************************
 *******************************************************************
 * Purpose:     To shuffle the deck of cards. 
 * Input:
 *          CrdsDlt        ->   Deck of cards      
 * Input-Output:
 *          bool CrdsDlt   ->   Shuffled cards 
 ********************************************************************/
void shuffle(bool CrdsDlt[]) {
    //For-loop to shuffle cards 
    for (int i = 0; i < 52; i++) {
        CrdsDlt[i] = false;
    }
}
