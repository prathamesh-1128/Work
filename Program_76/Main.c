/*Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)

Input : “Marvellous Multi OS”

	 10

Output : “Marvellous"
*/

#include<stdio.h>

void DisplayString(char *str,char *strcopy,int iNo)
{

if((str==NULL) ||(iNo<=0))
{

return;
}

 while((*str !='\0')&&(iNo !=0))
  {
    *strcopy=*str;

     str++;

     strcopy++;

     iNo--;
  }

*strcopy='\0';

}

int main()
{

char str[30];

char strcopy[30];

int iValue=0;

printf("Enter String\n");

scanf("%[^'\n']s",str);
 

printf("Enter Number\n");

scanf("%d",&iValue);

DisplayString(str,strcopy,iValue);

printf("Copied Contents are: %s",strcopy);



return 0; //Successful Termination 

}