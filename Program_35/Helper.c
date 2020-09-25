#include "Header.h"
/////////////////////////////////////////////
// Function Name: FactOdd
// Input: Integer
// Output: Integer 
// Description: It is used to Find Factorial of Odd Numbers from Given Number
// Author: Prathamesh
// Date : 9th Aug 2020
///////////////////////////////////////////
int FactOdd(int iConvert)  
{
 int iResult=1;   
    while(iConvert !=0)
         {
             if(iConvert%2==1)

               {
                  iResult= iResult* iConvert;


                }   
        iConvert--;
                
         }


return iResult;

}           //Function Close
