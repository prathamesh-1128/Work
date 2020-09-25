/*

Linked List

	
*/

 #include<stdio.h>
#include<stdlib.h>                                                                                              
struct Node                   
{
int data;
struct Node *next;          // This Pointer holds address of Structure

};

typedef struct Node  NODE;
typedef struct Node*  PNODE;
typedef struct Node**  PPNODE;

void Insert(PPNODE Head,int no)
 {
    PNODE newn=NULL;         
    newn= (PNODE)malloc(sizeof(NODE));        //Dynamic Memory Allocation for Node
    
    newn -> data=no;       //Initialise Data                    
    newn -> next=NULL;  //Initialise Pointer

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

void Display(PNODE Head)
  {
     while(Head != NULL)
      {
        printf("Element is: %d\t",Head->data);
        Head=Head -> next;
      }
  }

int main()
{
 
PNODE First=NULL;    // First Node  cha Address Store kranya sathi
 
Insert(&First,11);
Insert(&First,21);
Insert(&First,51);

Display(First);


return 0;
}