/*  8.2
Accept single digit number from user and print it into word.


Input:  4   Output:  Four
Input:  5    Output: Five
Input:  3     Output:Three
Input:  65      Output: Invalid Number



*/

/*
 Algorithm:
Accept Number as No
Check Conditions 
Display Result according to that


Continue


*/


#include "Header.h"
int main()                // Entry Point Function
{
int iValue=0;             
printf("Enter the number \n");
scanf("%d",&iValue);
DisplayNo(iValue); // Goto function


return 0;
} 