/* accept number from user and check whether it contains 0
in it or not. 
Input: 2456   Output: There is no zero
Input:2200      Output: It Contains Zero
Input:456    Output:There is no zero
Input:-098   Output: 


*/

/*
 Algorithm:
Accept Number as No
Perfrom mod Operation 
Check Remainder is Zero
Display It Contains Zero
OtherWise Display There is no Zero

*/


#include "Header.h"
int main()
{
int iValue=0;
BOOL bRet=FALSE;
printf("Enter the number \n");
scanf("%d",&iValue);
bRet=DisplayZero(iValue); // Goto function

if(bRet== TRUE)
{
printf(" It Contains Zero \n");
}

else
{
printf("There is no Zero");
}

return 0;
} 