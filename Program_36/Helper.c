#include "Header.h"
/////////////////////////////////////////////
// Function Name: FactDiff
// Input: Integer
// Output: Integer 
// Description: It is used to Find Difference between Factorial of Even Numbers and Odd Numbers from Given Number
// Author: Prathamesh
// Date : 9th Aug 2020
///////////////////////////////////////////
int FactDiff(int iConvert)  
{
 int iEvenFact=1;
int iOddFact=1;
  
    while(iConvert !=0)
         {
             if(iConvert%2==0)

               {

                iEvenFact= iEvenFact* iConvert;

                }   
              else
                 {
                
                iOddFact=iOddFact * iConvert;
                  }

          
        iConvert--;
                
         }


return (iEvenFact-iOddFact);

}           //Function Close
