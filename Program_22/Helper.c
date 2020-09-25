#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayArea
// Input: Integer
// Output: Integer 
// Description: It is used to Display Area of Circle
// Author: Prathamesh
// Date : 8th Aug 2020
///////////////////////////////////////////

float DisplayArea(float fNo)  
{
if(fNo<0)
{

return 0.0;
}



const float pie =3.14;

float fResult=0.0;

fResult= (pie *(fNo *fNo));

return fResult;

   
  




}              //Function Close


