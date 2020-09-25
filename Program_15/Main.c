/*  8.4
accept number from user and display its table.


Input:  4   Output:  40
Input:  5    Output: 50
Input:  18     Output: 180
Input:  -7      Output: 70



*/

/*
 Algorithm:
Accept Number as No
Display its Table



*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayTable(iValue); // Goto function



return 0; //Return to Os
} 