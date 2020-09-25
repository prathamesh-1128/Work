#include<stdio.h>
#include<stdlib.h>

struct Node
{

int data;
struct Node *next;

};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertLast(PPNODE Head,int iNo)
  {
       PNODE newn=NULL;
      PNODE temp=*Head;

       newn=(PNODE)malloc(sizeof(NODE));
      newn->data=iNo;
      newn->next=NULL;

     if(*Head==NULL)
       {
          *Head=newn;

       }
         
       else
         {
             while(temp ->next !=NULL)
                {
                     temp=temp->next;
                }
                      temp->next=newn;
             
         }

  }

void Display(PNODE Head)
  {
      while(Head !=NULL)
        {
            printf("%d\t",Head->data);
           Head= Head->next;

        }  
        printf("\n");

  }

 int Count(PNODE Head)
   {
       int iCnt=0;
 
          if(Head==NULL)
           {
               return 0;

          }
         while(Head !=NULL)
           {
                iCnt++;
            Head=Head->next;

           }
    return iCnt;
   }

int FirstOcc(PNODE Head,int iNumber)
  {
       int iPos=0,iCnt=1;
     while((Head->next)!=NULL)
      {
         if((Head->data)==iNumber)
           {
              iPos=iCnt;
           }
               iCnt++;
              Head=Head->next;
       }
        return iPos;
  }

int main()
{
PNODE First=NULL;
int iNo=0,iRet=0,iNumber=0;

printf("Enter Number\n");
scanf("%d",&iNo);
InsertLast(&First,iNo);

printf("Enter Number\n");
scanf("%d",&iNo);
InsertLast(&First,iNo);

printf("Enter Number\n");
scanf("%d",&iNo);
InsertLast(&First,iNo);

printf("Enter Number\n");
scanf("%d",&iNo);
InsertLast(&First,iNo);

printf("Enter Number\n");
scanf("%d",&iNo);
InsertLast(&First,iNo);

Display(First);
iRet=Count(First);

printf("Count is:%d\n",iRet);

printf("Enter Number you want to search\n");
scanf("%d",iNumber);

iRet=FirstOcc(First,iNumber);
printf("First Occurence of Number is :%d\n",iRet);
return 0;
}