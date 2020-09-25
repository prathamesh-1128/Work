/*  12.2

Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.

Input: 5         Output: 350
Input: 6         Output: 420
Input: 2         Output:140
Input:10         Output:  700
*/


/*
 Algorithm:
Accept Amount of US Dollar 
Convert it into Indian Currency
Display Result
*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;  
int iRet=0;
                
printf("Enter the Amount as USD ");

scanf("%d",&iNo1);


iRet=DisplayCurrency(iNo1); // Goto function

printf(" Equivalent amount of USD in Indian Currency is %d",iRet);



return 0; //Return to OS
} 