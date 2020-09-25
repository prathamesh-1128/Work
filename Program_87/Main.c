/*
Write a program which accept one number from user and toggle First 4 Bits . Return modified number.

Input : 73

Output : 



73      0000    0000    0000    0000    0000    0000    0100    1001	Input
						|
           0000    0000    0000    0000    0000    0000    0000    1111              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0100    1111
79      0000    0000    0000    0000    0000    0000    0100    1111             Result

*/

#include<stdio.h>                                                                            

int OnBit(int iNo) 		
 {                
       int iMask=0x0000000F;		
       int iResult=0;
       if(iNo<0)
         {
            iNo=-iNo;
        }
   iResult= iNo | iMask;

   return iResult;
 }
  
int main()
{
    int iNo=0;
    int iRet=0;
   printf("Enter Number");
   scanf("%d",&iNo);

  iRet=OnBit(iNo);
  printf("Modified Number is: %d",iRet);

return 0;
}