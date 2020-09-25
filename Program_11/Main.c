/*  accept number from user and return the count of digits in
between 3 and 7. 
Input: 2456   Output: 3
Input:2200      Output:0
Input:1391    Output:0
Input:-198   Output:0
Input: 554  Output:3


*/

/*
 Algorithm:
Accept Number as No
Take Counter and initialise it to Zero
Perfrom mod Operation 
Check Remainder is Between 3 and 7 
If yes Increament Counter
Display Count of Counter
Continue


*/


#include "Header.h"
int main()
{
int iValue=0;
printf("Enter the number \n");
scanf("%d",&iValue);
iValue=CntDigit(iValue); // Goto function

printf("%d : ",iValue);

return 0;
} 