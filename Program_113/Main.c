
//Accept two file names from user and copy contents of one file into another 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

void FileCopy(char *src,char*dest)
{

int fdsrc=0,fddest=0,ret=0,i=1;

char mug[100]={'\0'};

fdsrc=open(src,O_RDONLY);
if(fdsrc==-1)
{
printf("Unable to open");
return;
}

fddest=open(dest,O_RDWR | O_CREAT,0777);
if(fddest==-1)
{
printf("Unable to open");
close(fdsrc);
return;

}

while((ret=read(fdsrc,mug,sizeof(mug)))!=0)
{
printf("Iteration:%d Size Read:%d\n",i,ret);
i++;
write(fddest,mug,ret);
}

close(fdsrc);
close(fddest);







}

int main()
{


char name1[20];
char name2[20];

printf("Enter Source file name\n");
scanf("%s",name1);
printf("Enter Destination file name\n");
scanf("%s",name2);

FileCopy(name1,name2);

return 0;
}



