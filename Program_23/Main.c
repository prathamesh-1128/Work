/*  10.2

Accept width & height of rectangle from user and calculate
its area

Input: 5 6    Output: 30
Input: 6 10    Output: 60
Input:2.5   12.5   Output: 31.25

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
float fWidth=0.0;
float fHeight=0.0; 
float fArea=0.0;  
                
printf("Enter the Width ");

scanf("%f",&fWidth);


printf("Enter the Height ");
scanf("%f",&fHeight);

fArea= DisplayArea(fWidth,fHeight); // Goto function
printf(" Area of Circle is %f",fArea);



return 0; //Return to OS
} 