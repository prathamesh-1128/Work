/*  12.5
Write a program which returns difference between Even factorial and odd factorial
of given number.
Input: 5         Output: (8-15) -7
Input: 6         Output: (48-15) 33
Input: 2         Output:  (2-1)  1
Input:10         Output:  (3840-945) 2894
*/


/*
 Algorithm:
Accept Number 
Find Diiference between Even number Factorial and Odd number Factorial of Number 
Display Result
*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;  
int iRet=0;
                
printf("Enter the Number  ");

scanf("%d",&iNo1);


iRet=FactDiff(iNo1); // Goto function

printf(" Difference of Factorials is %d",iRet);



return 0; //Return to OS
} 