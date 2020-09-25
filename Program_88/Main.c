/*
Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.

Input : 10 2

Output :  TRUE

Input: 10  3

Output:FALSE



10      0000    0000    0000    0000    0000    0000    0100    1010	Input
						&
           0000    0000    0000    0000    0000    0000    0000    0010              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0000    0010
2        0000    0000    0000    0000    0000    0000    0000    0010            Result

--------------------------------------------------------------------------------------

10      0000    0000    0000    0000    0000    0000    0100    1010	Input
						&
           0000    0000    0000    0000    0000    0000    0000    0100              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0000    0000
0         0000    0000    0000    0000    0000    0000    0000    0000            Result

*/

#include<stdio.h>    
#define TRUE 1
#define FALSE 0
typedef int BOOL;
                                                                       

BOOL CheckBit(int iNo,int iPos) 		
 {                
       int iMask=0x00000001;		
       int iResult=0;
       if(iNo<0)
         {
            iNo=-iNo;
        }

       if((iPos<0) || (iPos>32))
         {
        
         }
    iMask=iMask <<(iPos-1);
   
   iResult= iNo & iMask;
    
      if(iResult==iMask)
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
    int iPos=0;
   printf("Enter Number\n");
   scanf("%d",&iNo);

   printf("Enter Position\n");
   scanf("%d",&iPos);

  bRet=CheckBit(iNo,iPos);

  if(bRet==TRUE)
    {
        printf("Bit is ON");
    }
  
  else
     {
        printf("Bit is OFF");
     }
return 0;
}