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
   fd=open(Name,O_RDWR | O_CREAT,0777);

if(fd==-1)
{
    printf("unable to create file\n");
}

else
{
    printf("File is created with:%d\n",fd);
}

printf("Enter Data that we want to write in file\n");
scanf(" %[^'\n']s",arr);
length=strlen(arr);

ret=write(fd,arr,length);

if(ret==-1)
{
printf("Unable to write in File");
}

else
{
printf("Data is successfully written in file\n");
}


close(fd);

return 0;
}