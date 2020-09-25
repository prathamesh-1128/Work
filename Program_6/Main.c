/*  accept number from user and count frequency of 2 in it.  
Input: 2456   Output: 1
Input:2200      Output: 0
Input:456    Output:1
Input:-098   Output:0
Input: 4465  Output:2 


*/

/*
 Algorithm:
Accept Number as No
Take Counter and initialise it to Zero
Perfrom mod Operation 
Check Remainder is Four or not
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
iValue=CntFour(iValue); // Goto function

printf("%d : ",iValue);

return 0;
} 