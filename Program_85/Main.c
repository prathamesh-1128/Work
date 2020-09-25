/*
Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.

Input : 137

Output : 201



137    0000    0000    0000    0000    0000    0000    1000    1001	Input
						^
           0000    0000    0000    0000    0000    0000    0100    0000              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    1100    1001
201    0000    0000    0000    0000    0000    0000    1100    1001              Result

*/

#include<stdio.h>

int ToggleBit(int iNo,int iPos)
 {
       int iMask=0x00000001;
       int iResult=0;
       if(iNo<0)
         {
            iNo=-iNo;
         }

    if((iPos<0) || (iPos>32))
       {
           return 0;
       }


   iMask=iMask <<(iPos-1);                           //Dynamic Mask
   iResult= iNo ^ iMask;

   return iResult;
 }
  
int main()
{
    int iNo=0;
    int iPos=0;
    int iRet=0;
   printf("Enter Number");
   scanf("%d",&iNo);

   printf("Enter Position of Bit want to Toggle\n");
   scanf("%d",&iPos);
 
  iRet=ToggleBit(iNo,iPos);
  printf("Modified Number is: %d",iRet);

return 0;
}