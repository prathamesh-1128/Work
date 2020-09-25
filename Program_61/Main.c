/*

Accept N muners for User and check Whether that numbers Contains 11 or not

Input: N= 4     22 66 47 11

Output: 11 is Present

Input: N= 5   55 66 74 10 6

Output: 11 is Absent

*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int CheckEleven(int arr[],int iSize)
 {
   int iCnt=0;
	if(arr==NULL)
	  {
	    printf("Error: Memory is not allocated\n");
	   return -1;
	  }

	if(iSize<0)
	  {
	    printf("Error: Enter appropriate Input\n");
	    return -1;
	  }
 
	for(iCnt=0;iCnt<iSize;iCnt++)
	  {
		if((arr[iCnt])<0)
		  {
		    arr[iCnt]= -arr[iCnt];  //updator
		   }

		if(arr[iCnt]==11)
		  {
			return TRUE;
		   }
	   }
	return FALSE;


 }


int main()
{
  int iNo=0;
  int *ptr=NULL;
  int iRet=FALSE;
  int iCnt=0;
	printf("Enter the value of N\n");

	scanf("%d",&iNo);

	ptr=(int*)malloc(sizeof(int)*iNo);

	if(ptr==NULL)

	  {
	    printf("Error: Memory is not Allocated\n");
	   return -1;
	  }

	 if (iNo<=0)
	  {
	   printf("Error: Enter Correct Input\n");
	   return -1;
	  }
	printf("Enter the Elements\n");

	for(iCnt=0;iCnt<iNo;iCnt++)

	 {
	   scanf("%d",&ptr[iCnt]);
	 }

	iRet=CheckEleven(ptr,iNo);

	if(iRet==TRUE)
	  {
	     printf("11 is Present\n");
	  }

	else
	   {
		printf("11 is absent\n");
	   }

 free(ptr);

return 0;
}