/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 22, 2015, 1:22 PM
 * Purpose: Homework, Search Benchmarks. 
 */

//System Libraries 
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes 
bool LinSrch(const int[], int, int);
bool BinSrch(const int[], int, int);
        
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    const int SIZE=20; 
    int list[SIZE]= {2, 3, 8, 9, 15, 19, 21, 22, 25, 30, 31,  
                     34, 38, 39, 47, 52, 60, 62, 67, 71}; 
    int value; 
    
    //Input Process 
    cout << "Enter a value." << endl;
    cin >> value; 
    
    //Output for Linear Search 
    if(LinSrch(list,SIZE,value)==true) {
        cout << value << endl; 
    } else cout << "Value is not in search." << endl; 
    
    //Output for Binary Search 
    if(BinSrch(list,SIZE,value)==true) {
        cout << value << endl; 
    } else cout << "Value is not in search." << endl; 
   
    //Exit Stage Right! 
    
    return 0;
}

/*******************************************************************
 *                             BinSrch                             *
 *******************************************************************
 * Purpose:     To perform a binary search for a value. 
 * Input:
 *      list      -> Array of Numbers 
 *      SIZE      -> Array size  
 *      value     -> Number inputed by user 
 * Output
 *      found     -> Value found in array of numbers 
 */
bool BinSrch(const int list[], int SIZE, int value){
    int first=0;
    int last= SIZE-1; 
    int middle; 
    int pos=-1;
    bool found=false; 
    int count = 1; 
    
    while(!found && first<=last) {
        middle=(first+last)/2;
        if (list[middle]==value) {
            cout << "Count: " << count << endl;
            found=true; 
            pos=middle;
        }
        else if (list[middle]>value)
            last=middle-1;
        else 
            first=middle+1;  
         ++count;    
    }
    return found; 
}

/*******************************************************************
 *                             LinSrch                             *
 *******************************************************************
 * Purpose:     To perform a linear search to determine count 
 *              of times it took to find value. 
 * Input:
 *      list      -> Array of Numbers 
 *      SIZE      -> Array size  
 *      value     -> Number inputed by user 
 * Output
 *      BinSrch   -> Count of times it took to find value 
 */
bool LinSrch(const int list[], int SIZE, int value) {
    bool BinSrch=false;
    int count = 1; 
    for(int i=0; i<SIZE; i++){
        if(list[i]==value)
        {
            cout << "Count: " << count << endl; 
            BinSrch=true;
            return BinSrch;
        }
        ++count;
}
    return BinSrch;
} 
