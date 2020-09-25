/*
Accept Character from user and check whether it is capital or not
(A-Z).
Input : F

Output : TRUE


Input : d

Output : FALSE

*/

#include<stdio.h>

#define TRUE 1

#define FALSE 0

typedef int BOOL;
BOOL CheckCap(char cLetter)
{
 if(cLetter>='A' && cLetter<='Z')
{
 return TRUE;
}

return FALSE;
}

int main()
{

char cValue='\0';  //Default Value of Character

BOOL bRet=FALSE;

printf("Enter Letter\n");

scanf("%c",&cValue);

bRet=CheckCap(cValue);

if(bRet==TRUE)
{
 printf("Entered letter is Capital \n");
}

else
{
 printf("Letter is not Capital");
}

return 0;
}