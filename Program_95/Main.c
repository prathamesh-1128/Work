/*

Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees.

Input : 2 Output : 12790

Input : 4 Output : 23450

Input : 6 Output : Wrong input

*/
#include<stdio.h>


int DisplayFees(int iDivision)
  {
      if(iDivision<0)
        {
           iDivision=-iDivision;
         }
      int iFees=0;
      switch( iDivision)
       {
           case 1:
                     iFees=8900;
                    break;

           case 2:
                     iFees=12790;
                    break;

         case 3:
                     iFees=21000;
                    break;

        case 4:
                     iFees=23450;
                    break;

        default:
                     iFees=0;
                    break;
     
             }


return iFees;
  }
int main()
{

 int iDivision=0;
 int iRet=0;
printf("Enter  Division Number\n");
scanf("%d",&iDivision);
iRet=DisplayFees(iDivision); 

if(iRet==0)
{
printf("Wrong Input\n");
}

else
{
printf("Fess is: %d\n",iRet);
}

return 0;
}