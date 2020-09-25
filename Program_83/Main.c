/*
Write a program which checks whether first and last bit is On or
  OFF. First bit means bit number 1 and last bit means bit number 32
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL CheckBit(unsigned iNo)
{
int iRem=0;

    if(iNo<0)
      {
          iNo=-iNo;
       }

int iMask=0x80000001;                               //Static Mask

iRem=iNo & iMask;                                    //BitWise AND 

if(iRem== iMask)
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
unsigned iNo=0;
BOOL bRet=FALSE;

printf("Enter number\n");
scanf("%d",&iNo);

bRet=CheckBit(iNo);

if(bRet==TRUE)
   {
      printf("1st and 32nd Bit is ON\n");
   }

  else
    {
      printf("one or both Bits are OFF");
    }
 
return 0;

}

/*
  Input In Decimal : 2147483649

Binary :
                     1000    0000    0000    0000    0000    0000    0000    0001
						&
						
Mask          1000    0000    0000    0000    0000    0000    0000    0001
               ----------------------------------------------------------------------
iRem          1000    0000    0000    0000    0000    0000    0000    0001


  Input In Decimal : 1

Binary :
                     0000    0000    0000    0000    0000    0000    0000    0001
						&
						
Mask          1000    0000    0000    0000    0000    0000    0000    0001
               ----------------------------------------------------------------------
iRem          0000    0000    0000    0000    0000    0000    0000    0001



*/




