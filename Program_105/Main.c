#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
			//Application to open or create file

int main()
{
    char Name[20]={'\0'};
   int   fd=0;   //File Descriptor
   printf("Enter File Name\n");
   scanf("%s",Name);
   fd=open(Name,O_RDWR | O_CREAT,0777);

if(fd==-1)
{
    printf("unable to create file\n");
}

else
{
    printf("File is created with:%d",fd);
}

close(fd);

return 0;
}