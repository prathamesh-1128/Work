/*  15.5


Accept number of rows and number of columns from user and display below
pattern.. 

     
*/



#include<stdio.h>

void DisplayPattern(int iRows, int iColumns)
{

int i =0;
int j=0;
      for( i=1; i<=iRows;i++)
   {

      for(j=1;j<=iColumns;j++)

    {

        printf("%d\t",i+j);

       }
       printf("\n");
    }






}






int main()                // Entry Point Function
{

int iNo1=0;
int iNo2=0;



printf("Enter the Number of rows");

scanf("%d",&iNo1);

printf("Enter the Numbr of Columns");
scanf("%d",&iNo2);

DisplayPattern(iNo1,iNo2);

return 0; //Return to OS
} 