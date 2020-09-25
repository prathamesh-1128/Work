


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

struct Student
{
char Name[30];
int RollNo;
int marks;

};



void FileWrite(char *Name)
{
int iSize=0,fd=0, i=0;
struct Student sobj;

fd=open(Name,O_WRONLY);

if(fd==-1){
printf("unable to open to file\n");
return;
}

printf("Enter No.of students\n");
scanf("%d",&iSize);


for(i=1;i<=iSize;i++){

printf("Enter Name of Student\n");
scanf("%s",&sobj.Name);

printf("Enter Roll number of student\n");
scanf("%d",&sobj.RollNo);

printf("Enter marks of student\n");
scanf("%d",&sobj.marks);

printf("\n");

write(fd,&sobj,sizeof(sobj));

}

close(fd);

}

void FileRead(char *Name)
{
   int fd=0,ret=0;
   struct Student sobj;

   fd=open(Name,O_RDONLY);
   if(fd==-1){
   printf("Unable to open file\n");
}

while((ret=read(fd,&sobj,sizeof(sobj))!=0))
{
    printf("Name of student is:%s\n",sobj.Name);
    printf("Roll Number is:%d\n",sobj.RollNo);
    printf("Marks of student is:%d\n",sobj.marks);

printf("\n");


}

close(fd);


}

int main()
{

char Name[20];
int iSize=0;

printf("Enter File Name\n");
scanf("%s",Name);

FileWrite(Name);
FileRead(Name);
return 0;
}


