#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayMulti
// Input: Integer
// Output: Integer 
// Description: It is used to Display Frist 5 Multiples of Number
// Author: Prathamesh
// Date : 7th Aug 2020
///////////////////////////////////////////


void DisplayMulti(int iNo)  
{

int iDisplay=0;
int iMulti=0;

   
     for(iDisplay=1;iDisplay<=iNo;iDisplay++) // We know No.of Iteration to Perform 
      {
          iMulti=iNo* iDisplay; 
          
        printf("%d \t",iMulti);         
      }
 




}              //Function Close


