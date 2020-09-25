/*


 Write a program which returns addition of all element from singly linear
linked list.

Function Prototype :int Addition( PNODE Head);

Input linked list : |10|->|20|->|30|->|40|

Output : 100
*/


#include<stdio.h>
#include<stdlib.h>

struct Node
{

int data;
struct Node*next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head,int iValue)
   {
        PNODE newn=NULL;
       newn=(PNODE)malloc(sizeof(NODE));   //Node la memory allocate kele
      
       newn->data=iValue;  //Value Data madhe store kele
       newn->next=NULL;    //Pointer Initialise

       if(*Head== NULL)
       {
            *Head=newn;
       }

       else
         {
            newn->next=*Head;    //Naveen Node chya next madhe junya node cha address copy kela 
           *Head=newn;
         }


   }


void InsertLast(PPNODE Head,int iValue)
   {
       PNODE newn=NULL;
       PNODE temp=NULL;            
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

       while(Head !=NULL)
         {
             printf("Element is: %d\t",Head->data);
             Head=Head->next;              
        }
     printf("\n");
  }


int Addition(PNODE Head)
   {
        int iSum=0;
       while(Head !=NULL)
          {
             iSum=iSum+ (Head->data);
             Head=Head->next;
         }
   return iSum;
   }

int main()
{

PNODE First=NULL;
int iNo=0,iRet=0;

printf("Enter the Number \n");
scanf("%d",&iNo);
InsertFirst(&First,iNo); 	// Function is going to modify Linked List  thus its Parameters are address and Number   

printf("Enter Number \n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);

printf("Enter Number\n");
scanf("%d",&iNo);
InsertFirst(&First,iNo);
Display(First);

printf("Enter Number");
scanf("%d",&iNo);
InsertLast(&First,iNo);
Display(First);



iRet=Addition(First);

printf("Addition is:%d\n",iRet);
return 0;
}