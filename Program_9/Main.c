/*  accept number from user and return the count of odd
digits.  
Input: 2456   Output: 0
Input:2200      Output:0
Input:1391    Output:4
Input:-198   Output:1
Input: 773  Output:3 


*/

/*
 Algorithm:
Accept Number as No
Take Counter and initialise it to Zero
Perfrom mod Operation 
Check Remainder is Odd 
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
iValue=CntOdd(iValue); // Goto function

printf("%d : ",iValue);

return 0;
} 