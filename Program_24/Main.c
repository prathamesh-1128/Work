/*  10.2

Accept width & height of rectangle from user and calculate
its area

Input: 5    Output: 5000
Input: 6    Output: 6000
Input:2.5   Output: 2500

*/


/*
 Algorithm:
Accept Width and Height of Rectangle
Perform Calculation to find Area

Display Area of Rectangle


*/


#include "Header.h"
int main()                // Entry Point Function
{

float fDistance=0.0; 
float fResult=0.0;  
                
printf("Enter the Distance in Kilometer ");

scanf("%f",&fDistance);


fResult= DisplayConversion(fDistance); // Goto function
printf(" Converted Distance from kilometer into Meter is  %f",fResult);



return 0; //Return to OS
} 