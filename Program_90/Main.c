/*

Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
              “Logic Building”
                 5

Output : “Marvellous Infosystems Logic”
*/


#include<stdio.h>

void StrCatX(char *str1,char *str2,int iNo)
   {
        if((str1==NULL) || (str2==NULL ))
          {
             return;
         }
  
       if(iNo<0)
        {
           iNo=-iNo;
        }

    while(*str1 !='\0')
      {
         str1++;
      }

    *str1++=' ';                                       //Adding Space Explicitly
  
    while((*str2 !='\0') &&( iNo!=0))
      {
         *str1=*str2;
         str1++;
         str2++;
         iNo--;
     }

   *str1='\0';
 
   }

int main()
{
   char str1[40];
   char str2[40];
   int iNo=0;
   printf("Enter String\n");
   scanf("%[^'\n']s",str1);
  
   printf("Enter Another String\n");
   scanf(" %[^'\n']s",str2);
 
   printf("Enter Number\n");
   scanf("%d",&iNo);
   
  StrCatX(str1,str2,iNo);
  printf("Concated String:%s",str1);
return 0;
}