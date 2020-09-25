#include "Header.h"
/////////////////////////////////////////////
// Function Name: Factorial
// Input: Integer
// Output: Integer 
// Description: It is used to Display Factorial of Number
// Author: Prathamesh
// Date : 7th Aug 2020
///////////////////////////////////////////
int Factorial(int iNo)  
{
   if(iNo==0) 
  {


   return 1;
  }

  if(iNo<0) // Convert Neagative number into Positive
  {
 iNo=-iNo;

  }


int iFact=1;
   while(iNo !=1)
   {

     iFact=iFact *iNo;


iNo--;


   }





return iFact; // return Factorial Value



}              //Function Close


