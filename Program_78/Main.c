/*
Write a program which accept string from user and copy small
characters of that string into another string.

Input : “Marvellous multi OS”

Output : “arvellous multi”
*/
#include<stdio.h>

void CopySmall(char *str, char *strcopy)
{
         if((str==NULL) || (strcopy==NULL)) 
              {
                   return;
              }
while(*str!='\0')
{
        if(((*str>='a') && (*str<='z') )|| (*str==' '))
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
char str[30]={'\0'};
char strcopy[30]={'\0'};

printf("Enter String\n");
scanf("%[^'\n']s",str);

CopySmall(str,strcopy);
printf("Small Letters from String are: %s",strcopy);

return 0;

}