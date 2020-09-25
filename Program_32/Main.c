/*  12.1
Accept number from user and display below pattern.

Input: 5         Output: * * * * *  # # # # # 
Input: 6         Output: * * * * * * # # # # # #
Input: 2         Output:* *  # #
Input:10         Output:  * * * * * * * * * * # # # # # # # # # #
*/


/*
 Algorithm:
Accept one number 

Display Pattern of * And # 

*/


#include "Header.h"
int main()                // Entry Point Function
{

int iNo1=0;  
                
printf("Enter Number ");

scanf("%d",&iNo1);


DisplayPattern(iNo1); // Goto function




return 0; //Return to OS
} 