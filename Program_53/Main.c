#include<stdio.h>
#include<stdlib.h>

int SumofNumber(int arr[],int iSize)
{

int iSum=0;

for(int iCnt=0;iCnt<iSize;iCnt++)
{
iSum=iSum+ arr[iCnt];
}
return iSum;
}

int main()
{
 int iValue=0;
int *ptr=NULL;
int iRet=0;
 printf("Enter the N Number: ");
 scanf("%d",&iValue);
  ptr=(int*) malloc(iValue*sizeof(int));
 printf("Enter Number");

for(int iCnt=0;iCnt<iValue;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);


}

iRet=SumofNumber(ptr,iValue);

printf("Sum is:%d ",iRet);

return 0;
}