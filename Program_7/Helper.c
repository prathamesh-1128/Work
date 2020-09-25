#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Display Count of number Two in number
// Author: Prathamesh
// Date : 4th Aug 2020
///////////////////////////////////////////
int CntSix(int iNo)  // 1098
{
int iCheck=0;
int iCnt=0;
if(iNo < 0)
{
iNo= -iNo;
}

while(iNo!=0)
{

iCheck=iNo%10;




if(iCheck<6)
{

iCnt++;   
}
   iNo=iNo/10;

}
      
return iCnt; 
}              //Function Close


