/*  8.5
accept number from user and display its table in reverse
order.


Input:  4   Output:  40 36 32 28 24 20 16 12 8 4
Input:  5    Output: 50 45 40 35 30 25 20 15 10 5
Input:  18     Output: 180 162 144 126 108 90 72 54 36 18
Input:  -7      Output: 70 63 56 49 42 35 28 21 14 7



*/

/*
 Algorithm:
Accept Number as No
Display its Table into Reverse Order



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayReverse(iValue); // Goto function



return 0; //Return to Os
} 