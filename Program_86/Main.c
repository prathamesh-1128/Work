/*
Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.

Input : 137

Output : 



137    0000    0000    0000    0000    0000    0000    1000    1001	Input
						^
           0000    0000    0000    0000    0000    0010    0100    0000              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0010    1100    1001
713    0000    0000    0000    0000    0000    0000    1100    1001              Result

*/

#include<stdio.h>                                                                            

int ToggleBit(int iNo,int iPos1,int iPos2) 		//	0000    0000    0000    0000    0000    0000    0100    0000
 {
       int iMask1=0x00000001;			//	0000    0000    0000    0000    0000    0010    0000    0000
       int iMask2=0x00000001;                                                       //               ---------------------------------------------------------------------
       int iMask=0x00000000;			//	0000    0000    0000    0000    0000    0010    0100    0000
       int iResult=0;
       if(iNo<0)
         {
            iNo=-iNo;
         }

    if((iPos1<0) || (iPos1>32) || (iPos2<0) || (iPos2>32))
       {
           return 0;
       }


   iMask=(iMask1 <<(iPos1-1)) | (iMask2 <<(iPos2-1));                           //Dynamic Mask
   iResult= iNo ^ iMask;

   return iResult;
 }
  
int main()
{
    int iNo=0;
    int iPos1=0;
    int iPos2=0;
    int iRet=0;
   printf("Enter Number");
   scanf("%d",&iNo);

   printf("Enter Position of Bit want to Toggle\n");
   scanf("%d",&iPos1);
  
   printf("Enter another Position");
   scanf("%d",&iPos2);
 
  iRet=ToggleBit(iNo,iPos1,iPos2);
  printf("Modified Number is: %d",iRet);

return 0;
}