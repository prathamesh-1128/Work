/*  13.3
Accept number from user and display below pattern.

Input: 5
Output: 1 # 2 # 3 * 4 * 5 *

     
*/


/*
 Algorithm:
START 
Accept one number as No
display Above Pattern



*/
#include<stdio.h>

void DisplayPattern(int iNo)  // Function is Not Returning any thing this Return type is Void
{

   if(iNo<0)           // Filter 
    {

     return;
     }


int iCnt=0;

//       1     2         3
   for(iCnt=1;iNo>=iCnt;iCnt++)
    {
                       //4

         printf("%d\t*\t ",iCnt);

     }



}





int main()                // Entry Point Function
{
int iNo=0;
printf("Enter the Number ");
scanf("%d",&iNo);
DisplayPattern(iNo);


return 0; //Return to OS
} 