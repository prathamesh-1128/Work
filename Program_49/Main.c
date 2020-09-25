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
	
	for(i=1;i<=iRows;i++)
	  {	
	    for(j=0;j<=iColumns;j++)
	  	{
		 if((i%2)==1)
		    {
		       printf("%d\t",(j*2)+2);
		
			}
		   else
			{
			   printf("%d\t",(j*2)+1);
	
			   }
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