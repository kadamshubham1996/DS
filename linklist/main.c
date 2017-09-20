#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
     struct node *next

     }node;
void insertATfirst(node **,int data);
void insertATmiddle(node **,int targeteddata,int data);
void insertATend(node **,int data);
int createnode(int *);
void display(node *);
int main()
{
    node *head;
    head=NULL;

    insertATend(&head,64);
    display(head);

    insertATend(&head,45);
    display(head);

    insertATend(&head,65);
    display(head);

    insertATmiddle(&head,45,70);

    display(head);

    insertATfirst(&head,10);
    display(head);
    return 0;
}
void insertATend(node **h,int data){
    node *tnode=creatnode(data);
    node *thead=*h;
    if(*h==NULL)
    {
        *h=tnode;
        return;
    }

    while(thead->next!=NULL){
            thead=thead->next;
    }
    thead->next=tnode;
}
void insertATmiddle(node **h,int targeteddata,int data){
    node *thead=*h;
    if(*h==NULL){ return -1;}

    while(thead!=NULL && thead->data!=targeteddata){
        thead=thead->next;
    }
    node *tnode=creatnode(data);
    tnode->next=thead->next;
    thead->next=tnode;
 }
void insertATfirst(node **h,int data){
    node *tnode=creatnode(data);
    node *thead=*h;

    if(*h==NULL){
        *h=tnode;
        return;
    }

    tnode->next=*h;
    *h=tnode;
}
int creatnode(int data)
{

    node *temp=(node *)malloc(sizeof(node));
        temp->data=data;
        temp->next=NULL;
        return temp;

}
void display(node *h){
if(h==NULL){
    printf("LinkedList is Empty \n");
    return;
}
while(h!=NULL){
   printf("%d \t",(h)->data);
  h=(h)->next;
 }
 printf("\n");
 }
