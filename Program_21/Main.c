/*  9.5
accept N and print first 5 multiples of N.
Input:  4   Output:  4 8 12 16 20 
Input:  5   Output:  5 10 15 20 25
Input:  10  Output:  10 20 30 40 50 


*/

/*
 Algorithm:
Accept Number as No
Display First 5 Multiples of Number



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayMulti(iValue); // Goto function



return 0; //Return to OS
} 