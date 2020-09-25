#include "Header.h"
/////////////////////////////////////////////
// Function Name: CntDigit
// Input: Integer
// Output: Integer
// Description: It is used to Display Count of Digits between 3 and 7 in number
// Author: Prathamesh
// Date : 5th Aug 2020
///////////////////////////////////////////
int CntDigit(int iNo)  
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




if((iCheck>3) && (iCheck<7))   //Check Remainder is Greater than three but Less than 7
{             //Inside If

iCnt++;      // Increament Counter
}
   iNo=iNo/10; 

}
      
return iCnt; // Return Count
}              //Function Close


