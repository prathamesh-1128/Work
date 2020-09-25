/*
Accept N numbers from User and Return Difference between frquency of Even Numbers and Odd numbers

Input: N=5   5 2 10 4 7

Output: 1

Input:N= 4   1 62 70 2

Ouput: 1

Input: N=4   4 21 -31 -7

Output: -2

*/

#include<stdio.h>
#include<stdlib.h>

int DiffEvenOdd(int arr[],int iSize)
{
  int iCnt=0;
  int iCountEven=0;
 int iCountOdd=0;

	if(arr== NULL)
	 {
	   printf("Error:Memeory is not allocated\n");
	   return -1;

	 }

	 if(iSize<=0)
	  {
	     printf("Error: Enter Correct Input\n");

	     return -2;

	  }

	   for(iCnt=0;iCnt<iSize;iCnt++)
	     {
		if((arr[iCnt]%2)==0)
		 {
		   iCountEven++;
		  }
		
		 else
		  {
		    iCountOdd++;
		  }

	     }



 return iCountEven-iCountOdd;
}



int main()
{
  int iNo=0;
  int *ptr=NULL;     //Pointer
  int iRet=0;
	printf("Enter the value of N ");

	scanf("%d",&iNo);

	ptr=(int*)malloc(sizeof(int)*iNo);   // Allocating Memory Dynamically

	if(ptr==NULL)
	 {
	   printf("Error: Memory is not allocated\n");
	   return -1; 
	 }
	
	if(iNo<=0)
	 {
	   printf("Error: Enter Correct Input\n");
	   return -1;
	 }


	printf("Enter Elements\n");
	 for(int iCnt=0;iCnt<iNo;iCnt++)
	  {
	    scanf("%d",&ptr[iCnt]);   //Storing Each Elements
	  } 

	iRet=DiffEvenOdd(ptr,iNo); // Passing parameters to function 
	
	printf("Difference Between Frequency of Even Number and Odd Number is: %d",iRet);

	free(ptr);    //Deallocated Memory

        return 0;

}