#include<stdio.h>
#include<stdlib.h>

struct  Node
{
int data;
struct Node *next;
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
     if(*Head==NULL)
       {
          return;
       }

     else if(temp->next!=NULL)
       {
         
           *Head=(*Head)->next;
          free(temp);
        }

   }
 void DeleteLast(PPNODE Head)
   {
      PNODE temp=NULL;
      if(*Head==NULL)
       {
          return;
       }

     else if(((*Head)->next)==NULL)
       {
           free(*Head);
          *Head=NULL;
       }

     else
      {
          temp=*Head;
          while(temp->next->next !=NULL)
            {
                 temp=temp->next;
            }
         free(temp->next);
         temp->next=NULL;
      }
   }

int Count(PNODE Head)
  {
          int iCnt=0;
         while(Head != NULL)
           {
               iCnt++;
              Head=Head->next;
              
           }
 return iCnt;

  }

void InsertAtPos(PPNODE Head,int iNo,int iPos)
 {
      int  Size=0;
      int i=0;
      Size=Count(*Head);
      PNODE temp=*Head;
       PNODE newn=NULL;

     if((iPos<1) ||(iPos>Size+1))
      {
         return;
      }

    else if(iPos==1)
      {
        InsertFirst(Head,iNo);
      }

     else if(iPos==Size+1)
       {
          InsertLast(Head,iNo);
       }

    else
     {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=iNo;
 
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
      while(Head!=NULL)
       {
          printf("%d\t",Head->data);
          Head=Head->next;
       }
  printf("\n");
  }



int main()
{
    PNODE First=NULL;
    int iNo=0,iPos=0,iRet=0;
     
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
    InsertFirst(&First,iNo);
 
    iRet=Count(First);
     printf("%d\n",iRet);
    
   printf("Enter Number\n");
   scanf("%d",&iNo);
   InsertLast(&First,iNo);

   printf("Enter Number\n");
   scanf("%d",&iNo);
   InsertLast(&First,iNo);

    Display(First);
 
     iRet=Count(First);
     printf("%d\n",iRet);


   DeleteFirst(&First);
   Display(First);

   DeleteLast(&First);
   Display(First);
  
     iRet=Count(First);
     printf("%d\n",iRet);
   
  printf("Enter Number\n");
     scanf("%d",&iNo);

    printf("Enter Postion\n");
    scanf("%d",&iPos);

    InsertAtPos(&First,iNo,iPos);
    Display(First);

   return 0;

}