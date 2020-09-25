/*
Accept N numbers from user and Display count of Even Numbers


Input  N=6 54 21 65 84 20 5
Output: 4

Input: N=4  11 21 33 77 
Output: 0

Input: N=5 -12 0 -11 -9 -6
Output: 3


*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int arr[],int iValue)
{
	int iEven=0;
	int iCnt=0;

	if(arr==NULL)
	  {
	    printf("Error: Memory is not allocated\n");
	   return -1;
	  }

	if(iValue<=0)
	 {
	   printf("Error: Enter Correct Input\n");
	   return -2;
	 }

	for(iCnt=0;iCnt<iValue;iCnt++)
	 {
	   if((arr[iCnt]%2)==0)
		{
		  iEven++;
		}
	}
return iEven;



}


int main()
{
 int iNo=0;
 int *ptr=NULL;
 int iRet=0;
	printf("Enter the value of N\n ");

	scanf("%d",&iNo);

 	ptr=(int*)malloc(sizeof(int)*iNo);
	
	if(ptr==NULL)
	{
	  printf("Error: Memory is not allocated");
	  return -1;
	}
	
	if(iNo<=0)
	{
	 printf("Error: Enter Correct Input\t");
	return -1;
	}

	printf("Enter Elements\n");

	for(int iCnt=0;iCnt<iNo;iCnt++)
	  {
	    scanf("%d",&ptr[iCnt]);

	  }
iRet=CountEven(ptr,iNo);
printf("Count of Even Numbers : %d",iRet);
	



free(ptr);
return 0;
}