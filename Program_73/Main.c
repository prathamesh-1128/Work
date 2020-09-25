/*

Write a program which accept string from user and accept one
character. Return frequency of that character.

Input : “Marvellous Multi OS”

	  M

Output : 2


Input : “Marvellous Multi OS”

	 W

Output : 0
*/

#include<stdio.h>

int CountLetter(char *str, char ch)
{
  if((*str=='\0') ||(ch=='\0'))
   {
     return -1;
   }
int iCnt=0;

for(;*str !='\0';str++)
 {
   if(*str==ch)
     {
	iCnt++;
     }

 }

return iCnt;

}

int main()
{


char str[30];

char cLetter='\0';

int iRet=0;

printf("Enter String\n");

scanf("%[^'\n']s",str);

printf("Enter Character\n");

scanf(" %c",&cLetter);

iRet=CountLetter(str,cLetter);

printf("Count of Entered Letter is:%d",iRet);

return 0;
}