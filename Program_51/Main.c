
/*Problem Statement 16.4

Input : iRow = 5 iCol = 5

Output : 1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
        -1 -2 -3 -4 -5
         1  2  3  4  5
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
	
	
	for(i=1;i<=iRows;i++)
	  {	
	    for(j=1;j<=iColumns;j++)
	  	{ 
		  if((i%2)==1)
		     {
		      printf("%d\t",(j));
		        }
		   else
		     {
			printf("%d\t",(-j));

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