/*  14.1


Accept number from user and display below pattern. 

     
*/



#include<stdio.h>

void DisplayPattern(int iRows, int iColumns)
{

for(int i=0; i<iRows;i++)
   {

for(int j=0; j<iColumns;j++)
    {

        printf("*\t");

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