#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
     struct node *next

     }node;
void insertATmiddle(node **,int targeteddata,int data);
int createnode(int *);
void display(node **);
int main()
{
    node *head;
    head=NULL;

    insertATmiddle(&head,45,70);
    display(&head);
    printf("Hello world!\n");
    return 0;
}void insertATmiddle(node **h,int targeteddata,int data){
    node *thead=*h;
    if(*h==NULL){}

    while(thead!=NULL && thead->data!=targeteddata){
        thead=thead->next;
    }
    node *tnode=creatnode(data);
    tnode->next=thead->next;
    thead->next=tnode;
 }
 int creatnode(int data)
{

    node *temp=(node *)malloc(sizeof(node));
        temp->data=data;
        temp->next=NULL;
        return temp;

}
void display(node **h){
if(*h==NULL){
    printf("LinkedList is Empty \n");
    return;
}
while(*h!=NULL){
   printf("%d \t",(*h)->data);
  *h=(*h)->next;
 }
 }

