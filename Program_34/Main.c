/*  12.3

find even factorial of given number
Input: 5         Output: 8
Input: 6         Output: 48
Input: 2         Output:2
Input:10         Output: 3840 
*/


/*
 Algorithm:
Accept Number 
Find Factorial of Even numbers of Given Number
Display Result
*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;  
int iRet=0;
                
printf("Enter the Number  ");

scanf("%d",&iNo1);


iRet=FactEven(iNo1); // Goto function

printf(" Factorial of Even number from Given Number is %d",iRet);



return 0; //Return to OS
} 