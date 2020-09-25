/*  accept number from user and count frequency of such a
digits   which are less than 6
Input: 2456   Output: 1
Input:2200      Output: 0
Input:456    Output:1
Input:-098   Output:0
Input: 4665  Output:2 


*/

/*
 Algorithm:
Accept Number as No
Take Counter and initialise it to Zero
Perfrom mod Operation 
Check Remainder is less than Six or not
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
iValue=CntSix(iValue); // Goto function

printf("%d : ",iValue);

return 0;
} 