/*  accept number from user and return the count of even
digits. 
Input: 2456   Output: 3
Input:2200      Output: 2
Input:456    Output:2
Input:-098   Output:1
Input: 4665  Output:3 


*/

/*
 Algorithm:
Accept Number as No
Take Counter and initialise it to Zero
Perfrom mod Operation 
Check Remainder is even or not
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
iValue=CntEven(iValue); // Goto function

printf("%d : ",iValue);

return 0;
} 