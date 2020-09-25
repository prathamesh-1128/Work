#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Check no of Even  numbers  from number
// Author: Prathamesh
// Date : 3rd Aug 2020
///////////////////////////////////////////

int CheckEven(int iNo)  // 456
{

int iCnt=0;
int iCheck=0;

while(iNo !=0) // 
{

  iCheck=iNo%10;

if ((iCheck%2 )==0)

iCnt++;

iNo= iNo/10;

}

return iCnt;

} //Function Close
