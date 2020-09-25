/* accept number from user and display its digits in reverse
order. 
Input: 2456   Output: 6 5 4 2
Input:22      Output:2 2
Input:456     Output:6 5 4
Input:-3211   Output: 1 1 2 3


*/

/*
 Algorithm:
Accept Number as No
Take One Counter and Initialise it to 0
Check Whether is not equal to 0
Perform mod Operation and Seperate digit from number
Store Digit and Display Digit
Perform Division and reduce no
Continue
Return Digit 

*/


#include "Header.h"
int main()
{
int iValue=0;
printf("Enter the number \n");
scanf("%d",&iValue);
CheckReverse(iValue); // Goto function
return 0;
} 