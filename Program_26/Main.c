/*  10.5
Accept area in square feet and convert it into square
meter.

Input: 5    Output: 0.464
Input: 6    Output: 0.055
Input:1000   Output: 92.9
*/


/*
 Algorithm:
Accept Area of Square feet in Value
covert Square feet into Square meter

Display Conversion

*/


#include "Header.h"
int main()                // Entry Point Function
{

float fSqfeet=0.0; 
float fResult=0.0;  
                
printf("Enter the Value ");

scanf("%f",&fSqfeet);


fResult= DisplayConvert(fSqfeet); // Goto function
printf(" Converted Square feet to Square Meter is  %f",fResult);



return 0; //Return to OS
} 