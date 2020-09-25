/*

Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.

Input: N= 5   35 65 42 40 89   No= 40

Output: No is Present 

Input: N=4    40 55 12 30     No= 10

Output: No is Absent


*/
#include<stdio.h>

#include<stdlib.h>

typedef int BOOL;

#define TRUE 1

#define FALSE 0

BOOL SearchNo(int arr[],int iSize, int iNo)
   {
	int iStart=0,iEnd=0;
	if(arr==NULL)
	  {
	    printf("Error: Memory is not allocated");
	    return -1;
	  }
	for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
	   {
	     if(iStart==iEnd && arr[iStart]==iNo)
		{
		  break;
		}

	     if(arr[iStart]==iNo)
		{
		  break;
		}

	     if(arr[iEnd]==iNo)
		{
		  break;
		}
	   }
	return TRUE;
    }	



int main()
{
   int iNum=0;

   int *ptr=NULL;

   int iNo=0;

   BOOL bRet=FALSE;

   int iCnt=0;

	printf("Enter the Value of N\n");

	scanf("%d",&iNum);
	
	ptr=(int*)malloc(sizeof(int)*iNum);

	if(ptr==NULL)
	  {
	    printf("Error: Memory is not allocated");
	    return -1;
	  }

	if(iNum<=0)
	  {
	    printf("Error: Enter Input Again\n ");
	    return -1;
	  }

	printf("Enter the Elements\n");

	for(iCnt=0;iCnt<iNum;iCnt++)
	  {
	    scanf("%d",&ptr[iCnt]);
	   }

	printf("Enter the Number No\n");
	
	scanf("%d",&iNo);

	bRet=SearchNo(ptr,iNum,iNo);

	if(bRet==TRUE)
	  {
	    printf("No is present\n");
	   }
	
	else
	  {
	   printf("No is absent\n");
	  }

	free(ptr);
return 0;
}