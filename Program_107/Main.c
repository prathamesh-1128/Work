#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>			//Application to open or create file

int main()
{
    char Name[20]={'\0'};
    char arr[50];
   int   fd=0;   //File Descriptor
    int ret=0,length=0;
   printf("Enter File Name\n");
   scanf("%s",Name);
   fd=open(Name,O_RDWR);

if(fd==-1)
{
    printf("unable to open file\n");
}

else
{
    printf("File is opned with:%d\n",fd);
}


ret=read(fd,arr,10);

if(ret==-1)
{
printf("Unable to read in File");
}

else
{
printf("Data from is  file:%s\n",arr);
}


close(fd);

return 0;
}