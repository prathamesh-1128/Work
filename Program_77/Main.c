/*
Write a program which accept string from user and copy capital

characters of that string into another string.


Input : “Marvellous Multi OS”

Output : “MMOS”


*/

#include<stdio.h>

void CheckCap(char *str,char *strcopy)
{
 if(str==NULL)
  {

    return;
  }

while(*str !='\0')
{
    if((*str>='A')&&(*str<='Z'))
      {
	*strcopy=*str;

	strcopy++;
      }

str++;

}


*strcopy='\0';

}

int main()
{

char str[30];

char strcopy[30];

printf("Enter String\n");

scanf("%[^'\n']s",str);

CheckCap(str,strcopy);

printf("Capital Letters in given String is :%s",strcopy);


return 0;
}