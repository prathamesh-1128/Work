#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayPattern
// Input: Integer
// Output: Pattern of $ and * 
// Description: It is used to Display Pattern of $ and * 
// Author: Prathamesh
// Date : 7th Aug 2020
///////////////////////////////////////////
void DisplayPattern(int iNo)  
{
   if(iNo<0) 
  {

iNo=-iNo;

   }

  while(iNo != 0)
  {

printf(" $ *");

iNo--;
  }




}              //Function Close


