/*
Accept Character from user and check whether it is digit or not
(0-9)

Input : 7

Output : TRUE


Input : d

Output : FALSE

*/

#include<stdio.h>

#define TRUE 1

#define FALSE 0

typedef int BOOL;

BOOL CheckLetter(char ch)
{

if((ch >='A' && ch<='Z') || (ch >='a' && ch<='z'))
 {
   return TRUE;
 }

return FALSE;


}


int main()
{
char cValue='\0';

BOOL bRet=FALSE;

printf("Enter letter\n");

scanf("%c",&cValue);

bRet=CheckLetter(cValue);

if(bRet==TRUE)
{
  printf("Entered value is letter\n");
}

else
{
  printf("Entered value is not Letter");
}
 


return 0;
}