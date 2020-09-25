
//Accept file name and position and size  from user.Read that number of bytes from position  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

void FileRead(char *name,int iPos,int Size)
{

int fd=0,ret=0;
char *mug=NULL;
mug=(char*)malloc(Size);
fd=open(name,O_RDONLY);
if(fd==-1)
{
printf("unable to open");
return;
}

lseek(fd,iPos,SEEK_SET);
ret=read(fd,mug,Size);
printf("Data is:\n");

write(1,mug,ret);
printf("\n");

close(fd);
free(mug);


}

int main()
{


char name[20];
int iValue=0,iSize=0;

printf("Enter Source file name\n");
scanf("%s",name);
printf("Enter position\n");
scanf("%d",&iValue);

printf("Enter Size\n");
scanf("%d",&iSize);


FileRead(name,iValue,iSize);

return 0;
}



