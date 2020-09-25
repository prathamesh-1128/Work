/*  11.3
Accept range from user and return addition of all numbers
in between that range

Input: 5 15   Output: 90
Input: 6 10   Output: 40
Input:-10 2    Output: Ivalid Range
Input:1 100   Output:5050
*/


/*
 Algorithm:
Accept Two numbers 

Display Sum of the numbers between that range

*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;
int iNo2=0;
int iRet=0;   
                
printf("Enter First Number ");

scanf("%d",&iNo1);

printf("Enter Second Number ");
scanf("%d",&iNo2);

 iRet=DisplaySum(iNo1,iNo2); // Goto function


printf("Addition of Numbers is %d",iRet);

return 0; //Return to OS
} 