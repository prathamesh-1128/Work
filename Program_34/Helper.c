#include "Header.h"
/////////////////////////////////////////////
// Function Name: FactEven
// Input: Integer
// Output: Integer 
// Description: It is used to Factorial of Even Number From Given Number  
// Author: Prathamesh
// Date : 9th Aug 2020
///////////////////////////////////////////
int FactEven(int iConvert)  
{
 int iResult=1;   
    while(iConvert !=0)
         {
             if(iConvert%2==0)

               {
                  iResult= iResult* iConvert;


                }   
        iConvert--;
                
         }


return iResult;

}           //Function Close
