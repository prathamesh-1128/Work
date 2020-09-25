/* Accept Number from User and Display No of Digits in Number
Input: 2456   Output:4
Input:22      Output:2
Input:456     Output:3
Input:-3211   Output:4


*/



/*
 Algorithm:
Accept Number as No
Take one counter as Cnt and initialise to 0
Divide No by 10 and store result into itself
Check No is not equal to 0 
Continue 

Return Cnt
*/

#include "Header.h"
int main()
{
int iValue=0;
int iRet=0;
printf("Enter the number \n");
scanf("%d",&iValue);
iRet=CheckDigit(iValue); // Goto function
printf("No of Digits are : \n %d", iRet); 
return 0;
} 