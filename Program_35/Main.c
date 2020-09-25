/*  12.4

find  factorial of odd Number from given number
Input: 5         Output: 15
Input: 6         Output: 15
Input: 2         Output:  1
Input:10         Output: 945 
*/


/*
 Algorithm:
Accept Number 
Find Factorial of Odd numbers of Given Number
Display Result
*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;  
int iRet=0;
                
printf("Enter the Number  ");

scanf("%d",&iNo1);


iRet=FactOdd(iNo1); // Goto function

printf(" Factorial of Odd number from Given Number is %d",iRet);



return 0; //Return to OS
} 