


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




float MarksAvg(char *Name)
{
   int fd=0,ret=0,iCnt=0;
   float Avg=0.0;

   struct Student sobj;

   fd=open(Name,O_RDONLY);
   if(fd==-1){
   printf("Unable to open file\n");
}

while((ret=read(fd,&sobj,sizeof(sobj))!=0))
{
    Avg=Avg+sobj.marks;
   iCnt++;
}

close(fd);

return(Avg/iCnt);

}

int HighestMarks(char *Name)
{

int  fd=0,Highest=0,ret=0;
   struct Student sobj;

fd=open(Name,O_RDONLY);

if(fd==-1)
{
   printf("Unable to open file\n");
return -1;

}

while((ret=read(fd,&sobj,sizeof(sobj))!=0))
{

if(sobj.marks>Highest)
{
Highest=sobj.marks;
}

}
return Highest;
}

int LowestMarks(char *Name)
{

  int fd=0,ret=0;
   struct Student sobj;

int Lowest=HighestMarks(Name);
fd=open(Name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open file");
return -1;
}


while((ret=read(fd,&sobj,sizeof(sobj))!=0))
{
   
    if(sobj.marks<Lowest)
     {
        Lowest=sobj.marks;
    }


}

return Lowest;
}


void DisplaySp(char *Name)
{
   int fd=0,i=0;
   char ch='\0';
struct Student sobj;

fd=open(Name,O_RDONLY);
if(fd==-1)
{
printf("Unable to open files\n");
return;
}

while((ret=read(fd,&sobj,sizeof(sobj)))!=0)
{
     for(i=0;i<ret;i++)
      {
         if(ret==ch)
         {
            printf("Name is:%s",sobj.

         }
 
     }

}
 
}
int main()
{

char Name[20];
float Ret=0.0;

printf("Enter File Name\n");
scanf("%s",Name);

Ret=MarksAvg(Name);
printf("Avg Marks of students are:%f\n",Ret);

Ret=HighestMarks(Name);
printf("Highest Mark of student is:%d\n",(int)Ret);

Ret=LowestMarks(Name);
printf("Lowest Mark of student is:%d\n",(int)Ret);

return 0;
}


