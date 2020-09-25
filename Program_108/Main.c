//Application which accept file name from user and display its content


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>			


void DisplayWholeFile(char FName[])
{
  int fd=0;
  char arr[100]={'\0'};
  int ret=0;
  fd=open(FName,O_RDONLY);

  if(fd==-1)
  {
    printf("Unable to open\n");
  }
  
   printf("Data from file is:\n");
    while((ret=read(fd,arr,100)) !=0)
     {
         write(1,arr,ret);

      }
 
}

int main()
{
char name[50]={'\0'};
printf("Enter File Name\n");
scanf("%s",name);

DisplayWholeFile(name);
    
return 0;
}