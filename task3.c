
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node *head=NULL, *tail=NULL;
void insertAtBegin(int data)
{
      struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
      newnode->data=data;
      newnode->prev=NULL;
      newnode->next=head;
      if(head==NULL)
      {
          tail=head=newnode;
      }
      else
      {
          head->prev=newnode;
          head=newnode;
      }
    }
void insertAtEnd(int data)
{
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->prev=tail;
    newnode->next=NULL;
    if(tail==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void deleteAtBegin()
{
    struct Node *temp=head;
    if(head==tail)
    {
        head=tail=NULL;
    }
    else
    {
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
void deleteAtEnd()
{
    struct Node *temp=tail;
    if(head==tail)
    {
        head=tail=NULL;
    }
    else
    {
        tail=tail->prev;
        tail->next=NULL;
        free(temp);
    }
}
void displayForward()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void displayBackward()
{
    struct Node*temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("NULL");
}
void makeCircular()
{
    head->prev=tail;
    tail->next=head;
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insertAtBegin(1);
    insertAtBegin(2);
    insertAtBegin(3);
    insertAtBegin(4);
    display();
    printf("\n");
    insertAtEnd(7);
    display();
    printf("\n");
    deleteAtBegin();
    display();
    printf("\n");
    deleteAtEnd();
    display();
    printf("\n");
   // makeCircular();
    //display();
}
