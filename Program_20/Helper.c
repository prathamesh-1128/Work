#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayOdd
// Input: Integer
// Output: Integer 
// Description: It is used to Display odd Numbers upto that Number
// Author: Prathamesh
// Date : 7th Aug 2020
///////////////////////////////////////////


void DisplayOdd(int iNo)  
{

int iDisplay=0;
   

  while(iDisplay <= iNo)
  {

     if(iDisplay%2==1)
   {

     printf(" %d ",iDisplay);
   }

iDisplay++;
  }




}              //Function Close


