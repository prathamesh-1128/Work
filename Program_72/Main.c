/*

Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”
	 e

Output : TRUE


Input : “Marvellous Multi OS”

	 W

Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char str[],char ch)
{

if((str==NULL) || (ch=='\0'))
 {
return FALSE;
}

 int i=0;
 while(str[i] !='\0')
	{
	if(str[i]==ch)
	 {
	    break;
 	 }

	 i++;
	}

 if(str[i]==ch)
{
  return TRUE;
}

else
{
return FALSE;
}


}

int main()
{
char str[30];

char cValue='\0';

BOOL bRet=FALSE;


printf("Enter String\n");
scanf("%[^'\n']s",str);

printf("Enter Character\n");

scanf(" %c",&cValue);

bRet=CheckChar(str,cValue);

if(bRet==TRUE)
{
  printf("Entered Character is Present\n");
}

else
{
  printf("Entered Character is not Present\n");
}

return 0;

}
