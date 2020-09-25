
/*

Write a program which accepts file name from user and count number of
capital characters from that file.

*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int DisplayWholeFile(char FName[])
{
  int fd=0;
  char arr[100]={'\0'};
  int ret=0,iCnt=0,i=0;
  fd=open(FName,O_RDONLY);

  if(fd==-1)
  {
    printf("Unable to open\n");
  }
  
   printf("Data from file is:\n");
    while((ret=read(fd,arr,sizeof(arr))) !=0)
     {
        for(i=0;i<ret;i++)
       {
         if((arr[i]>='A')&&(arr[i]<='Z'))
         {
           iCnt++;
         }
     }

      }
close(fd);
return iCnt;
 
}

int main()
{
char name[50]={'\0'};
int iRet=0;
printf("Enter File Name\n");
scanf("%s",name);

iRet=DisplayWholeFile(name);
 printf("No. of Captial character is :%d",iRet);
    
return 0;
}