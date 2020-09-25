/*
	Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.

Input : N : 6

Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)
*/


/*



*/




#include<stdio.h>
#include<stdlib.h>

int SumofNumber(int arr[],int iSize)
{

int iSumEven=0;
int iSumOdd=0;

for(int iCnt=0;iCnt<iSize;iCnt++)
{
	if((arr[iCnt]%2)==0)
	 {
   	   iSumEven=iSumEven+ arr[iCnt];

	 }
	   else
		{
		 iSumOdd=iSumOdd+arr[iCnt];
		  }

}


return iSumEven-iSumOdd;


}










int main()
{
 int iValue=0;
int *ptr=NULL;
int iRet=0;
 printf("Enter the N Number: ");
 scanf("%d",&iValue);
  ptr=(int*) malloc(iValue*sizeof(int));
 printf("Enter Number\t");

for(int iCnt=0;iCnt<iValue;iCnt++)
 {
   scanf("%d",&ptr[iCnt]);


}

iRet=SumofNumber(ptr,iValue);

printf("Difference between Sum of Even number and Odd number is: %d",iRet);
free(ptr);

return 0;
}