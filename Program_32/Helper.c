#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayPattern
// Input: Integer
// Output: Integer 
// Description: It is used to Display Pattern 
// Author: Prathamesh
// Date : 9th Aug 2020
///////////////////////////////////////////
void DisplayPattern(int iDisplay)  
{
int iBackup=0;
iBackup=iDisplay;

    while(iDisplay !=0)
       {
            printf(" * ");

            iDisplay--;
        }
       

       while(iDisplay<=iBackup)
            {

              printf(" # ");
               
            iDisplay++;
             }
       

}           //Function Close
