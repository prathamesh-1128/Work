#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char Name[20]={'\0'};
   int   fd=0;   //File Descriptor
   printf("Enter File Name\n");
   scanf("%s",Name);
   fd=open(Name,O_RDWR);

if(fd==-1)
{
    printf("unable to open file\n");
}

else
{
    printf("File is open with:%d",fd);
}

close(fd);

 


return 0;
}