/*

Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.

Input : 600000    Output : 10000 (0 + 10000)

Input : 450000    Output : 0

Input : 1200000  Output : 90000 (0 + 50000 + 40000)

*/
#include<stdio.h>

int Discount(int iTax)
{
  int TotalTax=0;

     if((iTax <=500000) &&  (iTax >=1000000))
     {
      TotalTotalTax= 10000;  
     }

   else if((iTax>1000000) && (iTax <=2000000))
     {
        TotalTax= 90000;
     }

   else
    {
      TotalTax= ;
     }

 return TotalBill;

}
int main()
{
    int iIncome=0;
    int iRet=0;

   printf("Enter Income\n"); 

   scanf("%d",&iIncome);

   iRet=Discount(iIncome);
  
   if(iIncome<0)
    {
       printf("Enter Income\n");
    }

  
  
  
printf("Income Tax applicable is:%d\n",iRet);


   return 0;
}