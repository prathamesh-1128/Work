/*  9.3
accept number from user and print its numbers line.

Input:  4   Output: -4 -3 -2 -1 0 1 2 3 4 
Input:  5    Output:  -5 -4 -3 -2 -1 0 1 2 3 4 5
Input:  10    Output:-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10



*/

/*
 Algorithm:
Accept Number as No
Display Series of that Number



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplaySeries(iValue); // Goto function



return 0; //Return to OS
} 