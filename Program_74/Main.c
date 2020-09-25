/*
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.


Input : “Marvellous Multi OS”

	 M

Output : 0

Input : “Marvellous Multi OS”

	 W

Output : -1



Input : “Marvellous Multi OS”

	 e

Output : 4
*/

#include<stdio.h>

int FirstOcc(char *str,char ch)
{
int i=0;

  while(*str !='\0')
    {
     if(*str==ch)
    {
	break;
    }

str++;

i++;

}
   if(*str==ch)
     {
       return i;
     }
else
{
return -1;
}
}

int main()
{

char str[30];

char cLetter='\0';

int iRet=0;

printf("Enter String\n");

scanf("%[^'\n']s",&str);

printf("Enter Letter\n");

scanf(" %c",&cLetter);


iRet=FirstOcc(str,cLetter);
if(iRet==-1)
{
printf("Character is not found");

}
else
{
printf("Occrrence Index of Letter is:%d",iRet);
}
return 0;
}