/* Accept Character from user and check whether it is alphabet or not
(A-Z a-z).


Input : F

Output : TRUE


Input : &

Output : FALSE

*/

#include<stdio.h>

#define TRUE 1

#define FALSE 0

typedef int BOOL;

BOOL CheckLetter(char ch)
{
  if(((ch>='A')&&(ch<='Z')) || ((ch>='a') && (ch<='z')))
   {
    return TRUE;
    }

return FALSE;
}


int main()
{

char cLetter='\0';

BOOL bRet=FALSE;

printf("Enter Character\n");

scanf("%c",&cLetter);

bRet=CheckLetter(cLetter);

if(bRet==TRUE)
{
printf("Input is Letter");
}

else
{
  printf("Input is not Letter");
}


}


