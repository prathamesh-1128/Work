/*
	Accept N numbers from user and display all such elements which are
even and divisible by 5.

Input : N : 6

Elements : 85 66 3 80 93 88

Output : 85 80
*/




#include<stdio.h>
#include<stdlib.h>
void DisplayNumber(int arr[],int iSize)
{



for(int iCnt=0;iCnt<iSize;iCnt++)
{
	if((arr[iCnt]%2)==0 && (arr[iCnt]%5)==0)
	 {
   	    printf("Numbers are %d \n",arr[iCnt]);

	 }
	   


}



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

DisplayNumber(ptr,iValue);
free(ptr);

return 0;
}