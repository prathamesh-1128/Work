#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node *next;
struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;



void InsertFirst(PPNODE Head,int iNo)
  {
      PNODE newn=NULL;
      newn=(PNODE)malloc(sizeof(NODE));
      newn->data=iNo;
      newn->next=NULL;
      newn->prev=NULL;  

      if(*Head==NULL)
        {
             *Head=newn;
        }

      else
         {
             newn->next=(*Head);
             (*Head)->prev=newn;
            (*Head)=newn;
         }
  }

void Display(PNODE Head)
  {
      while(Head !=NULL)
       {
        printf("%d",Head->data);
        Head=Head->next;
       }

  }

int main()
{
PNODE First=NULL;
int iNo=0;

printf("enter the number \n");
scanf("%d",&iNo);

InsertFirst(&First,iNo);

printf("enter the number\n ");
scanf("%d",&iNo);
InsertFirst(&First,iNo);


printf("enter the number \n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);

Display(First);



return 0;
}