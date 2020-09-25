#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayReverse
// Input: Integer
// Output: Integer 
// Description: It is used to Display numbers between Range in Reverse order
// Author: Prathamesh
// Date : 9th Aug 2020
///////////////////////////////////////////
void DisplayReverse(int iStart, int iEnd)  
{

     if(iStart>iEnd)  // Incase Second Number is Smaller than First
     { 
       printf("Invalid Range");
     }



      

   while(iEnd>=iStart)
      {
       
         printf("%d ",iEnd);
        

       iEnd--;
          

      }


}           //Function Close
