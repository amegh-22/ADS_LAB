#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void search();
void display();

struct node{
    int data;
    struct node *next;
};
struct node *newnode;
struct node *head=NULL;
int main()
{
    while(1)

{
    int choice;
    printf("\n---menu---\n1.push\n2.pop\n3.peek\n4.display\n5.search\n6.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
            break;
         case 2:pop();
            break;
        case 3:peek();
         break;
        case 4:display();
         break;
         case 5:search();
            break;
            case 6:exit(0);
         default:
         printf("invalid choice");

    }

}}


void push()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter th element to push");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

void pop()
{
     if(head==NULL)
    {
        printf("stack underflow");
    }
    else{
        head=head->next;

    }
}
void peek()
{
      if(head==NULL)
    {
        printf("stack underflow");
    }
    else{
        printf("%d",head->data);
    }
}
    
void search()
{
    int ele,flag=0;
    struct node *current;
    printf("Enter the element to search");
    scanf("%d",&ele);
     if(head==NULL)
    {
        printf("stack underflow");
    }
    else{
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
            if(current->data==ele)
            {
                printf("element found");
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            printf("element no found");
        }
    }
}
void display()
{
    struct node *current;
    if(head==NULL)
    {
        printf("stack underflow");
    }
    else{
        current=head;
        while(current!=NULL)
        {
            printf("%d->",current->data);
            current=current->next;
        }
    }
}