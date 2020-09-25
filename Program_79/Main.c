/*
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”
              “Logic Building”

Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>

void StrConcate(char *arr,char *brr)
{
      if((arr==NULL) || (brr==NULL))
          {
              return;
          }
  while(*arr!='\0')
       {
          arr++;
       }
   *arr=' ';

  while(*brr!='\0')
      {
         *arr=*brr;
           arr++;
           brr++; 
      }
  *arr='\0';
}

int main()
{
   char arr[30]={'\0'};
   char brr[30]={'\0'};

  printf("Enter String\n");
  scanf("%[^'\n']s",arr);

  printf("Enter String\n");
  scanf(" %[^'\n']s",brr);

  StrConcate(arr,brr);
  printf("Concated String is: %s",arr);

  return 0;

}
