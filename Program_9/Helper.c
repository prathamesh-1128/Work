#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Display Count of Odd Digits in number
// Author: Prathamesh
// Date : 4th Aug 2020
///////////////////////////////////////////
int CntOdd(int iNo)  
{
int iCheck=0;
int iCnt=0;
if(iNo < 0) // if Input is neagative
{
iNo= -iNo; 
}

while(iNo!=0) //Check till Input is Zero
{

iCheck=iNo%10;  // Collect Remainder




if((iCheck%2)==1)   //Check Remainder
{             //Inside If

iCnt++;      // Increament Counter
}
   iNo=iNo/10; 

}
      
return iCnt; // Return Count
}              //Function Close


