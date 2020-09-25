#include "Header.h"
/////////////////////////////////////////////
// Function Name: DisplayCovert
// Input: Integer
// Output: Integer 
// Description: It is used to Convert Square feet into Square meter
// Author: Prathamesh
// Date : 8th Aug 2020
///////////////////////////////////////////

float DisplayConvert(float fNo)  
{

if(fNo<0)
{

return 0;

}

fNo=(0.0929 * fNo);

return fNo;

   
  




}              //Function Close
