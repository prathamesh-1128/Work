#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node*next;

};


typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;



void InsertFirst(PPNODE Head,int iNo)
  {
     PNODE newn=NULL;
     newn=(PNODE)malloc(sizeof(NODE));
     newn->data=iNo;
     newn->next=NULL;
   
    if(*Head==NULL)
     {
          *Head=newn;
     }

    else
      {
         newn->next=*Head;
         *Head=newn;
      }
  }

void InsertLast(PPNODE Head,int iNo)
  {
      PNODE newn=NULL;
      PNODE temp=NULL;
      newn=(PNODE)malloc(sizeof(NODE));
      newn->data=iNo;
      newn->next=NULL;
  
     if(*Head==NULL)
      {
         *Head=newn;
      } 

     else
      {
          temp=*Head;
        while(temp->next !=NULL)
           {
               temp=temp->next;
           }
       temp->next=newn;
       
     }

  }

void DeleteFirst(PPNODE Head)
  {
     PNODE temp=NULL;
      temp=*Head;

       if(*Head !=NULL)
       {
          *Head=(*Head)->next;
       }
       free(temp);

  }


void DeleteLast(PPNODE Head)
   {
       PNODE temp=NULL;
       temp=*Head;
      
       if((*Head)==NULL)
        {
          return; 
        }

     else if((*Head)->next==NULL)
      {
         free(*Head);
        (*Head)=NULL;
      }

    else
    {
       while(temp->next->next !=NULL)       
         {
            temp=temp->next;
         }
          free(temp->next);
         temp->next=NULL;
           
    }

   }

void InsertAtPos(PPNODE Head,int iNo,int iPos)
   {
      int i=0;  PNODE temp=NULL;
      temp=*Head;
      PNODE newn=NULL;

        
       if((iPos<1) || (iPos> iPos+2))
        {
        return;
        }

       else if(iPos==1)
      {
       InsertFirst(Head,iNo);
      }

    else if(iPos==iPos+1)
      {
          InsertLast(Head,iNo);
      }

    else
      {
         
          newn=(PNODE)malloc(sizeof(NODE));
          newn->data=iNo;
         newn->next=NULL;
        for(i=1;i<iPos-1;i++)
         {
            temp=temp->next;
         }
       newn->next=temp->next;
       temp->next=newn;
     }

   }
void Display(PNODE Head)
    {
       printf("\n");
        while(Head !=NULL)
          {
             printf("Element is :%d\t",Head->data);
             Head=Head->next;
          }
   }
int main()
{
    PNODE First=NULL;
    int iNo=0,iPos=0;

   printf("Enter Number\n");
   scanf("%d",&iNo);

    InsertFirst(&First,iNo);

   printf("Enter Number\n");
   scanf("%d",&iNo);

    InsertFirst(&First,iNo);

    
   printf("Enter Number\n");
   scanf("%d",&iNo);

    InsertFirst(&First,iNo);

    printf("Enter Number\n");
    scanf("%d",&iNo);

    InsertLast(&First,iNo);

    Display(First);

    DeleteFirst(&First);

    Display(First);

  DeleteLast(&First);
  Display(First);

    printf("Enter Number\n");
    scanf("%d",&iNo);

   printf("Enter Position where you want to enter node\n");
   scanf("%d",&iPos);

   InsertAtPos(&First,iNo,iPos);
   Display(First);


    return 0;
}



















