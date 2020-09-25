#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Display Count of number Two in number
// Author: Prathamesh
// Date : 4th Aug 2020
///////////////////////////////////////////
int CntTwo(int iNo)  // 1098
{
int iCheck=0;
int iCnt=0;

while(iNo!=0)
{

iCheck=iNo%10;




if(iCheck==2)
{

iCnt++;   
}
   iNo=iNo/10;

}
      
return iCnt; 
}              //Function Close


