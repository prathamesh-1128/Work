/*  11.5
Accept accept range from user and display all numbers in
between that range in reverse order

Input: 5 15   Output: 15 14 13 12 11 10 9 8 7 6 5
Input: 6 10   Output: 10 9 8 7 6
Input:-10 2    Output:-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
Input:100 1   Output:  Ivalid Range
*/


/*
 Algorithm:
Accept Two numbers 

Display the numbers between that range in Reverse order

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

DisplayReverse(iNo1,iNo2); // Goto function




return 0; //Return to OS
} 