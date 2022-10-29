/*
  Author: Chelsea Bhuiyan
  Course: CSCI-135
  Instructor: Genady Maryash
  Assignment: Lab 1B
  
  This program asks the user to enter three numbers and prints the smaller number.
*/

#include <iostream>       
using namespace std;       

int main()
{
    int num1,num2,num3;    
    cout<<"Enter the first number:";   
    cin>> num1;                
    cout<<"Enter the second number:";  
    cin>>num2;               
    cout<<"Enter the third number:";  
    cin>>num3;                 

    if ((num1 < num2) and (num1<num3))                           //if first number is smaller
    {
        cout<<"The smaller of the two number is" <<num1<<endl;   //prints first number
    }
    else if ((num2 < num1) and (num2<num3))                      //if the second number is smaller
    {
        cout<<"The smaller of the two number is" <<num2<<endl;   //prints second number
    }
     else if ((num3 < num1) and (num3<num2))                     //if the third number is smaller 
    {
        cout<<"The smaller of the two number is" <<num3<<endl;   //prints third number
    }
    return 0;                   
}