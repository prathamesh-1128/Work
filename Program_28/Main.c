/*  11.2
accept range from user and display all Even numbers in between
that range.

Input: 5 15   Output: 6 8 10 12 14
Input: 6 10   Output: 6 8 10
Input:10 2    Output: Ivalid Range
*/


/*
 Algorithm:
Accept Two numbers 

Display all the Even numbers between that range

*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;
int iNo2=0;
   
                
printf("Enter First Number ");

scanf("%d",&iNo1);

printf("Enter Second Number ");
scanf("%d",&iNo2);

 DisplayRange(iNo1,iNo2); // Goto function



return 0; //Return to OS
} 