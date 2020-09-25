/*

Design application for hotel. According to the management
team of hotel they are giving discount on total bill amount of
customer.
If bill bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
Our application should accept total bill amount and depends on
the discount policy we have to return the amount after applying
discount.
Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145
*/
#include<stdio.h>

int Discount(int iBill)
{
  int TotalBill=0;

     if(iBill <=500)
     {
      TotalBill= iBill;  
     }

   else if((iBill>500) && (iBill <=1500))
     {
        TotalBill= ( iBill-((iBill * 10)/100));
     }

   else
    {
      TotalBill= (  iBill-((iBill*15)/100));
     }

 return TotalBill;

}
int main()
{
    int iBill=0;
    int iRet=0;

   printf("Enter Bill Amount\n"); 

   scanf("%d",&iBill);

   iRet=Discount(iBill);
  
   if(iBill<0)
    {
       printf("Enter Correct Bill Amount\n");
    }

  
  
  
printf("Total Bill with discount is:%d\n",iRet);


   return 0;
}