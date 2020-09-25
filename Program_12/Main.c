/*  8.1
Accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large.


Input:  40    Output: Small
Input:  75    Output:Medium
Input:  123     Output:Greater
Input:  -65      Output:Small



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
CheckNo(iValue); // Goto function


return 0;
} 