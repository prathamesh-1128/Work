/*  9.4
N from user and print all odd numbers up to N.
Input:  4   Output:  1 3 
Input:  5   Output: 1 3  5 
Input:  10  Output:1 3 5 7 9   



*/

/*
 Algorithm:
Accept Number as No
Display Odd Numbers Upto Given Number



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayOdd(iValue); // Goto function



return 0; //Return to OS
} 