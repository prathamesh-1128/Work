/*  9.1
accept number from user and print that number of $ & *
on screen.


Input:  4   Output:  $ * $ * $ * $ * 
Input:  5    Output: $ * $ * $ * $ * $ * 
Input:  6     Output: $ * $ * $ * $ * $ * $ *



*/

/*
 Algorithm:
Accept Number as No
Display $ * into alternative manner


*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;   
               
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayPattern(iValue); // Goto function



return 0; //Return to OS
} 