#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplaySum
// Input: Integer
// Output: Integer 
// Description: It is used to Display Sum of numbers between Range
// Author: Prathamesh
// Date : 8th Aug 2020
///////////////////////////////////////////
int DisplayEvenSum(int iStart, int iEnd)  
{
int iSum=0;

     if(iStart<0 || iEnd<0)  // Incase Anyone of Input is Negative
     { 
        return iSum;
     }



      

   while(iStart<=iEnd)
      {
          if(iStart%2==0)

          {

         iSum=iStart + iSum;

          }

          iStart++;

      }


return iSum;

}           //Function Close
