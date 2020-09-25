/*  10.4

temperature in Fahrenheit and convert it into
celsius.

Input: 10    Output: -12.221
Input: 6    Output: -14.44
Input:100   Output: 37.77

*/


/*
 Algorithm:
Accept Temperature in Celsius
covert it from Celsius to Fahrenheit


Display Result


*/


#include "Header.h"
int main()                // Entry Point Function
{

float fTemperature=0.0; 
float fResult=0.0;  
                
printf("Enter the Temperature in Fahrenheit ");

scanf("%f",&fTemperature);


fResult= DisplayConvert(fTemperature); // Goto function
printf(" Converted Temperature from Fahrenheit to Celsius  is  %f",fResult);



return 0; //Return to OS
} 