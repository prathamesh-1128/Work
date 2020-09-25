#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckDigit
// Input: Integer
// Output: Integer
// Description: It is used to Check No of Digits from number
// Author: Prathamesh
// Date : 3rd Aug 2020
///////////////////////////////////////////




int CheckDigit(int iNo)
{

int iCnt=0;

while(iNo !=0)
{

iNo= iNo/10;
iCnt++;



}


return iCnt;

}