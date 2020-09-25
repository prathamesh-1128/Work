#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayReverse
// Input: Integer
// Output: Integer 
// Description: It is used to Display Table of Number into Reverse Order
// Author: Prathamesh
// Date : 7th Aug 2020
///////////////////////////////////////////
void DisplayReverse(int iNo)  
{
   int iCnt=0;
int iMult=0;   //TO Store Multiplication

  if(iNo<0) // Convert Neagative number into Positive
  {
 iNo=-iNo;

  }
for(iCnt=10;iCnt>=1;iCnt--)  // Using for because we know how many times we have to iterate

{
iMult=iNo* iCnt;
printf(" %d \t",iMult);

}





}              //Function Close


