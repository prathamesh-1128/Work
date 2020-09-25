/*  9.2
accept number from user and print numbers till that
number.


Input:  4   Output:  1 2 3 4 
Input:  5    Output: 1 2 3 4 5 
Input:  10    Output:1 2 3 4 5 6 7 8 9 10



*/

/*
 Algorithm:
Accept Number as No
Display Numbers till that Number


*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayNumber(iValue); // Goto function



return 0; //Return to OS
} 