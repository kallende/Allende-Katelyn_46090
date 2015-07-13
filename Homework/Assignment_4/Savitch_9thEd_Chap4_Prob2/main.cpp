/* 
 * File:   main.cpp
 * Author: Katelyn Allende 
 * Created on July 7, 2015, 9:01 PM
 * Purpose: Homework, Clothing Sizes. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes 
float hat (float w, float h);
float jckt (float w, float h, int a);
float waist (float w, float h, int a);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables 
    float ht, wght;
    int age;
    bool doAgain;
    
    //Input Process
    do {
        cout<<"Enter your height (inches)."<<endl;
        cin>>ht;
        cout<<"Enter your weight (lbs)."<<endl;
        cin>>wght;
        cout<<"Enter your age."<<endl;
        cin>>age;  
        
    //Output Unknowns 
    cout<<endl; 
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your hat size is: "<<hat(wght,ht)<<" (in)"<<endl;
    cout<<"Your jacket size is: "<<jckt(wght,ht,age)<<" (in)"<<endl;
    cout<<"Your waist size is: "<<waist(wght,ht,age)<<" (in)"<<endl;
    
    //Prompt if they would like to continue
        cout<<endl<<"Would you like to repeat y/n?"<<endl;
        char response; 
        cin>>response;
        if (response=='y')
            doAgain=true;
        else 
            doAgain=false;
    }while(doAgain);  
     
    //Exit Stage Right! 
    
    return 0;
}

/*************************************************************************
 *************************** hat *****************************************
 *************************************************************************
 * Purpose: Calculate Hat size. 
 * Inputs
 *      wght   ->  Weight
 *      ht     ->  Height
 * Output 
 *      s      ->  Hat size
 *************************************************************************/
float hat (float w, float h){
    //Declare and initialize variables 
    float s=(w/h)*2.9;
    
    return s;
}

/*************************************************************************
 *************************** jckt ****************************************
 *************************************************************************
 * Purpose: Calculate Jacket size. 
 * Inputs
 *      wght   ->  Weight
 *      ht     ->  Height
 *      age    ->  Age
 * Output 
 *      t      ->  Jacket size
 *************************************************************************/
float jckt (float w, float h, int a){
    //Declare and initialize variables 
    float t=(h*w)/288;
    
    //Calculate measurement change based on age 
    if (a>= 30 && a<40)
	t+=.125;
    else if (a>=40 && a<50)
	t+=.25;
    else if (a>=50 && a<60)
	t+=.375;
    else if (a>=60 && a<70)
	t+=.5;
    else if (a>=70 && a<80)
	t+=.625;
    else if (a>=80 && a<90)
	t+=.75;
    else if (a>=90 && a<100)
	t+=.875;

return (t);
}

/*************************************************************************
 *************************** waist ****************************************
 *************************************************************************
 * Purpose: Calculate Waist size. 
 * Inputs
 *      wght   ->  Weight
 *      ht     ->  Height
 *      age    ->  Age
 * Output 
 *      r      ->  Waist size
 *************************************************************************/
  float waist (float w, float h, int a) {
      //Declare and initialize variables 
      float u= w/5.7 + (a>28?(a-28)/2:0*.1); 

      return u;
}  


