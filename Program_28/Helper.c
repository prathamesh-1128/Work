#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayRange
// Input: Integer
// Output: Integer 
// Description: It is used to Display All Even numbers between Range
// Author: Prathamesh
// Date : 8th Aug 2020
///////////////////////////////////////////

void DisplayRange(int iStart, int iEnd)  
{

if(iStart>iEnd)
{

printf("Invaid Range");

}
 

   while(iStart<=iEnd)
      {
          if(iStart%2==0)
           {

          printf("%d ",iStart);
          
           }

          iStart++;

      }



}           //Function Close
