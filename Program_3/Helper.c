#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Display Given number into Reverse manner
// Author: Prathamesh
// Date : 4th Aug 2020
///////////////////////////////////////////

void CheckReverse(int iNo)  // 1234
{

int iDigit=0;
if(iNo<0)
{

 iNo=-iNo;

}

while(iNo !=0)
{
iDigit=iNo%10;
printf("%d",iDigit);
iNo=iNo/10;
}






}


