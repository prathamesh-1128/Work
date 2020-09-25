/*

Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp() function).

Input : “Marvellous Infosystems”
              “Marvellous Infosystems”

Output : TRUE

*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL StrCmpX(char *str1,char *str2)
   {
     if((str1==NULL) || (str2==NULL))
      {
         return FALSE;
      }
 
     while((*str1!='\0') && (*str2!='\0'))
        {
            if(*str1!=*str2)
             {
                break;
             }
         str1++;
         str2++;
        }

     if((*str1=='\0') && (*str2=='\0'))
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
   char str1[40];
   char str2[40];
   BOOL bRet=FALSE;  
   printf("Enter String\n");
   scanf("%[^'\n']s",str1);
  
   printf("Enter Another String\n");
   scanf(" %[^'\n']s",str2);

  bRet=StrCmpX(str1,str2);

if(bRet==TRUE)
  {
     printf("Both Strings are Equal");
  }

 else
   {
      printf("Both Strings are not equal");
   }

return 0;
}