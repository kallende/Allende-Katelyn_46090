/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 16, 2015, 11:25 AM
 * Purpose: Calculate the mean and standard deviation. 
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
const double MXRND=pow(2,31)-1; 

//Function Prototypes
float normal(); 
void filAray(float [], int);
void prntAry(const float [], int, int);
float max(float [], int);
float min(float [], int);
float mean (float [], int);
float stdev(float[], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    const int SIZE=500000;
    float array[SIZE];
    
    //Initialize the array
    filAray(array, SIZE);
    
    //Output the initial array 
    //prntAry(array, SIZE, 5);
    
    //Print the statistics
    cout<<"The max value of the array= "<<max(array,SIZE)<<endl;
    cout<<"The min value of the array= "<<min(array,SIZE)<<endl;
    cout<<"The mean value of the array= "<<mean(array,SIZE)<<endl;
    cout<<"The standard deviation value of the array= "<<stdev(array,SIZE)<<endl;
    
    //Exit Stage Right! 
    
  return 0;  
}

/*******************************************************************
 *               Normal Distribution Approximation                 *
 *******************************************************************
 * Output  -> Normal density function approximation       
 */
float normal(){
    //Declare a variable
    float norm=0; //[-6,6]
    
    //Loop 12 times 
    for(int i=1; i<=12;i++){
        norm+=(rand()/MXRND-0.5);  //[-0.5,0.5] 
    }
    
    //Exit and return norm variable
    return norm; 
}

/*******************************************************************
 *                          Fill Array                             *
 *******************************************************************
 * Purpose:     To fill a float array with 2 digit integer 
 *              random numbers. 
 * Input:
 *      n-> The size of the array 
 * Input-Output
 *      a-> The float Array
 */
void filAray(float a[], int n) {
    //Loop on every element and equate to 2 digits 
     for(int i=0; i<n; i++){ 
         a[i]=normal();  //[-6,6]
     }
}

/*******************************************************************
 *                          Print Array                            *
 *******************************************************************
 * Purpose:     To print an float type array with any 
 *              number of columns. 
 * Input:
 *      n-> The size of the array 
 *      a-> The float Array
 *      nCols -> Number of columns to display the array. 
 * Output:
 *      On Screen
 */
void prntAry(const float a[], int n, int nCols) {
    //Format
    cout << fixed << showpoint << setprecision(4);
    //Separate outputs with a line 
    cout<<endl; 
    //Loop an output every element in the array 
    for(int i=0; i<n; i++){
        cout << setw(8)<<a[i]; 
        //When column is reached go to next line 
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line 
    cout<<endl;    
}

/*******************************************************************
 *                              Max                                *
 *******************************************************************
 * Purpose:       To find the maximum value.     
 * Input:
 *      n     -> The size of the array 
 *      a     -> The float Array  
 * Output:
 *      max   -> Maximum value    
 */
float max(float a[], int n){
    //Declare Variable and initialize 
    float max=a[0];
    
    //Loop to find the maximum 
    for(int i=1; i<n; i++){
        if(max<a[i])max=a[i];
    }
    
    //Return the maximum value
    return max; 
}

/*******************************************************************
 *                              Min                                *
 *******************************************************************
 * Purpose:       To find the minimum value.     
 * Input:
 *      n     -> The size of the array 
 *      a     -> The float Array  
 * Output:
 *      min   -> Minimum value    
 */
float min(float a[], int n){
    //Declare Variable and initialize 
    float min=a[0];
    //Loop to find the minimum 
    for(int i=1; i<n; i++){
        if(min>a[i])min=a[i];
    }
    
    //Return the minimum value
    return min; 
}

/*******************************************************************
 *                              Mean                                *
 *******************************************************************
 * Purpose:       To find the mean value.     
 * Input:
 *      n        -> The size of the array 
 *      a        -> The float Array  
 * Output:
 *      mean/n   -> Mean value divided by size of array   
 */
float mean(float a[], int n){
    float mean=0;
    //Loop to find the mean
    for(int i=0;i<n;i++){
        mean+=a[i];
    }
    
    //Return the mean
    return mean/n;
}

/*******************************************************************
 *                         Standard Deviation                      *
 *******************************************************************
 * Purpose:       To find the standard deviation.     
 * Input:
 *      n     -> The size of the array 
 *      a     -> The float Array  
 * Output:
 *      sqrt  -> Standard Deviation    
 */
float stdev(float a[], int n){
  //Declare Variables and initialize 
    float std=0, avg=mean(a,n);
    //Loop to find the standard deviation 
    for (int i=0; i<n; i++){
        float amavg=(a[i]-avg);
        std+=(amavg*amavg);
    }
    
    //Return the standard deviation 
    return sqrt(std/(n-1));
}