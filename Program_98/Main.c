/*

 Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.

Function Prototype :int SearchFirstOcc( PNODE Head , int no );

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element : 30

Output : 3 

*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;
struct Node* next;


};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;



void InsertFirst(PPNODE Head,int iValue)
  {
      PNODE newn=NULL;
      newn=(PNODE)malloc(sizeof(NODE));
      newn->data=iValue;
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

void InsertLast(PPNODE Head,int iValue)
   {
      PNODE temp=NULL;
      PNODE newn=NULL;
      newn=(PNODE)malloc(sizeof(NODE));

     newn->data=iValue;
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

void Display(PNODE Head)
   {
      printf("\n");
       while( Head !=NULL)
        {
           printf("Element is : %d\t",Head->data);
           Head=Head->next;
       }
    printf("\n");

   }

int FirstOcc(PNODE Head,int iNumber)
  {
      int iPos=0;
      int iCheck=0;
      iCheck=Head->data;
      while(Head !=NULL)
         {
            if(iCheck !=iNumber)
               {
                   iPos++;
               }

           temp=temp->next;
         }
          if(iCheck==iNumber)
             {
               return iPos;
            }
         else
            {
               return -1;
            }
  }


int Count(PNODE Head)
  {
       int iCnt=0;
      while(Head !=NULL)
       {
          iCnt++;
     Head=Head->next;
      }
    return iCnt;
 
 }


int main()
{
 PNODE First=NULL;
 int iNo=0,iNumber=0,iRet=0;

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
printf("Count of Elements are:%d\n",iRet);

printf("Enter Number u want to search\n");
scanf("%d",&iNumber);

iRet=FirstOcc(First,iNumber);
 
if(iRet==-1)
{
  printf("Element is not is List\n");
}

else
 {
    printf("Count of Elements are:%d\n",iRet);
 }
return 0;
}




