/*
  Accept N numbers from user and return the smallest number.


Input : N : 6

Elements : 85 66 3 66 93 88

Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

int DisplaySmallest(int arr[], int iNo)
  {
    int iMin=arr[0];

    int iCnt=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
	{
	  if(arr[iCnt]<iMin)
	    {
	      iMin=arr[iCnt];
	    }
	}

  return iMin;
  }



int main()    
{
  int iNo=0;

  int *ptr=NULL;

  int iCnt=0;

  int iRet=0;

  printf("Enter the value of N\n");

  scanf("%d",&iNo);

  ptr=(int*)malloc(sizeof(int)*iNo);  //Dynamic Memory Allocatiion

  if(ptr==NULL)
    {
	printf("Error: Memory is not allocated\n");
    }

  if(iNo<=0)
    {
	printf("Error: Invalid Input\n");
    }

  printf("Enter elements of Array\n");

  for(iCnt=0;iCnt<iNo;iCnt++)
     {
	scanf("%d",&ptr[iCnt]);    //Using & because we want to access each element Seprately 
     }

  iRet=DisplaySmallest(ptr,iNo);

  printf("Smallest Number is:%d",iRet);

  free(ptr);

return 0;
}