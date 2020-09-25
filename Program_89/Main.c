/*
Write a program which accept one number and position from user and off
that bit. Return modified number.

Input : 10 2

Output :  8

Input: 10  4

Output:4



10      0000    0000    0000    0000    0000    0000    0000    1010	Input
						^
           0000    0000    0000    0000    0000    0000    0000    0010              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0000    1000
2         0000    0000    0000    0000    0000    0000    0000    1000            Result

--------------------------------------------------------------------------------------

10      0000    0000    0000    0000    0000    0000    0000    1010	Input
						^
4bit   0000    0000    0000    0000    0000    0000    0000    1000              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0000    0010

2         0000    0000    0000    0000    0000    0000    0000    0010          Result

--------------------------------------------------------------------------------------
10      0000    0000    0000    0000    0000    0000    0000    1010	Input
						^
3bit   0000    0000    0000    0000    0000    0000    0000    0100              Mask
--------------------------------------------------------------------------------------
           0000    0000    0000    0000    0000    0000    0000    1110
14      0000    0000    0000    0000    0000    0000    0000    1110          Result

*/

#include<stdio.h>    

                                                                       

int OffBit(int iNo,int iPos) 		
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
   
   iResult= iNo ^ iMask;
    
    return iResult;
 }
  
int main()
{
    int iNo=0;
    int iRet=0;
    int iPos=0;
   printf("Enter Number\n");
   scanf("%d",&iNo);

   printf("Enter Position\n");
   scanf("%d",&iPos);

  iRet=OffBit(iNo,iPos);

 printf("Modified Number is : %d",iRet);


return 0;
}