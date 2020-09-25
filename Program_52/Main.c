/*
Problem Statement 16.3


*/


#include<stdio.h>


void DisplayPattern(int iRows,int iColumns)
{
int i=0,j=0;

   if(iRows != iColumns) 	//Filter
   {
     return;
    }

	if(iRows<0)		//Updator
	 {
	    iRows=-iRows;
	  }

if(iColumns<0)			//Updator
	 {
	    iColumns=-iColumns;
	  }
	
	
	for(i=0;i<iRows;i++)
	  {	
	    for(j=1;j<=iColumns;j++)
	  	{ 
		       printf("%d\t",i+j);
		  
		  }
		printf("\n");

	  }

}













int main()
{
int iNo1=0, iNo2=0;
printf("Enter the Two numbers \t ");
scanf("%d%d",&iNo1,&iNo2);
DisplayPattern(iNo1,iNo2);
return 0;

}