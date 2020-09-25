/*  8.3
find factorial of given number


Input:  4   Output:  24
Input:  5    Output: 120
Input:  8     Output: 40320
Input:  -7      Output: 5040



*/

/*
 Algorithm:
Accept Number as No
Find is the Factorial of Number 
Display Factorial



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
int iRet=1;               //Cause Zero Factorial is One
printf("Enter the number \n");
scanf("%d",&iValue);
iRet=Factorial(iValue); // Goto function
printf(" Factorial of Number = %d",iRet);


return 0;
} 