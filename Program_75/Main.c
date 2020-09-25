/*

Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS” in another string


*/

#include<stdio.h>

void StrCopy(char *str,char *strcopy)
{

if (*str=='\0')
{
return;
}

while(*str !='\0')
{

*strcopy=*str;

str++;
strcopy++;


}

*strcopy='\0';




}

int main()
{

char str[30];

char strcopy[30];

printf("Enter the String\n");

scanf("%[^'\n']s",str);

StrCopy(str,strcopy);

printf("Copied String is:%s",strcopy);

return 0;



}