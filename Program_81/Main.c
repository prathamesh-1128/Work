/*
Write a program which checks whether 5th & 18th bit is On or OFF.

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iMask=0X00020010;
    int iRem=0;
    
    iRem=(iNo|iMask);                 // 0000 0000 0000 0010 0000 0000 0001 0000   iMask
  
    if(iRem==iMask)                          //  0000 0000 0000 0000 0000 0000 0001 0000    iNo
      {
         return TRUE;
     }                                                   //   0000 0000 0000 0010 0000 0000 0001 0000   iRem 

    else
       {
           return FALSE;
      }

}


int main()
{
    int iNo=0;
    BOOL bRet=FALSE;

    printf("Enter Number\n");

    scanf("%d",&iNo);

    bRet=CheckBit(iNo);

    if(bRet==TRUE)
      {
         printf("18th or 5th Bit is ON");
      }

    else
       {
          printf("Both Bits are OFF");
       }

return 0;
}