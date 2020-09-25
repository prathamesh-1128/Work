#include<stdio.h>


int CountVowel(char str[])
{
int iCnt=0;
int i=0;

while(str[i] != '\0')  
  {        
if((str[i] == 'a') || (str[i] == 'A') || (str[i] == 'e') || (str[i] == 'E') || (str[i] == 'i') || (str[i] == 'I') || (str[i] == 'o')||(str[i] == 'O') || (str[i] == 'u')||(str[i] == 'U') )      
  {        
    iCnt++;       
 }       

 i++;  
  }

return iCnt;

}



int main()
{
char array[30];

int iRet=0;

printf("Enter the String ");

scanf("%[^'\n']s",array);

iRet=CountVowel(array);

printf("Numbers of Vowels are:%d",iRet);

return 0;

}