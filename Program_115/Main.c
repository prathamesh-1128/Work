
//Accept file name nad position  from user and 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

void FileRead(char *name,int iPos)
{

int fd=0,ret=0;
char mug[10]={'\0'};
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("unable to open");
return;
}

lseek(fd,iPos,SEEK_SET);
ret=read(fd,mug,10);
printf("Data is:\n");

write(1,mug,ret);
printf("\n");

close(fd);


}

int main()
{


char name[20];
int iValue=0;

printf("Enter Source file name\n");
scanf("%s",name);
printf("Enter position\n");
scanf("%d",&iValue);


FileRead(name,iValue);

return 0;
}



