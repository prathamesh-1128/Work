#include "Header.h"
/////////////////////////////////////////////
// Function Name: CheckEven
// Input: Integer
// Output: Integer
// Description: It is used to Display Wheather number Contains Zero or Not
// Author: Prathamesh
// Date : 4th Aug 2020
///////////////////////////////////////////

BOOL DisplayZero(int iNo)  // 1098
{
int iCheck=0;


while(iNo!=0)
{

iCheck=iNo%10;




if(iCheck==0)
{
return TRUE;
}    
   iNo=iNo/10;



}//Close While
   return FALSE;    

}              //Function Close


