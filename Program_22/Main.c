/*  10.1

accept radius of circle from user and calculate its area

Input: 5     Output: 78.5
Input: 6     Output: 113.04
Input:2      Output: 12.56

*/


/*
 Algorithm:
Accept Radius of Circle as Radius
Define one Contant as pie

Display Area of Circle


*/


#include "Header.h"
int main()                // Entry Point Function
{
float fRadius=0.0; 
float fArea=0.0;  
               
printf("Enter the Radius \n");
scanf("%f",&fRadius);

fArea= DisplayArea(fRadius); // Goto function
printf(" Area of Circle is %f",fArea);



return 0; //Return to OS
} 