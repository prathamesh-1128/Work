/*
     Write a program which checks whether 15th bit is On or OFF



*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckBit(int iNo)
{
    if(iNo<0)
      {
          iNo=-iNo;
      }
 
    int iMask=0X00004000;
    int iRem=0;

iRem=iNo & iMask;

if(iRem==iNo)
   {
      return TRUE;
   }
 
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
      printf("15th Bit in ON");
   }

else
{
   printf("15th Bit if OFF");
}




return 0;
}