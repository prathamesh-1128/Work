/*
Write a program which checks whether 7th & 15th & 21st , 28th bit
is On or OFF.

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iMask=0X08104040;
    int iRem=0;
    
    iRem=(iNo|iMask);                 // 0000 1000 0001 0000 0100 0000 0100 0000   iMask   08104040  
  
    if(iRem==iMask)                      //  0000 0000 0000 0000 0000 0000 0100 0001    iNo
      {
         return TRUE;
     }                                                   //   0000 0000 0000 0010 0000 0000 0100 0001   iRem 

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
         printf("7 or 15 or 21 or 28 Bit is ON");
      }

    else
       {
          printf("Both Bits are OFF");
       }

return 0;
}