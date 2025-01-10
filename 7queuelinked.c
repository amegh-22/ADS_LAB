#include <stdio.h>
#include <stdlib.h>
void enqueue();
void dequeue();
void display();
void search();

struct node
{
    int data;
    struct node *next;
};
struct node *newnode;
struct node *front=NULL;
struct node *rear=NULL;
int main()
{
    while (1)
    {
        int choice;
        printf("\n---menu---\n1.enqueue\n2.dequeue\n3.display\n4.search\n5.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            search();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}

void enqueue()
{
    int data;
    struct node *current;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the elememt to insert:");
    scanf("%d", &newnode->data);
    if(front==NULL && rear==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else{
        current=front;
        while(current->next!=NULL)
        {
            current=current->next;

        }
        rear=newnode;
        current->next=newnode;
        newnode->next=NULL;
          

    }
}

void dequeue()
{
     if(front==NULL && rear==NULL)
    {
        printf("queue empty");
    }
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;

    }
    else{

        front=front->next;
    }

}

void search()
{
    int ele,flag=0;
    struct node *current;
    printf("Enter the element to search");
    scanf("%d",&ele);
     if(front==NULL && rear==NULL)
    {
        printf("queue empty");
    }
    else{
        current=front;
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
            printf("not found");
        }

    }


}
void display()
{
    struct node *current;
     if(front==NULL && rear==NULL)
    {
        printf("queue empty");
    }
    else{
        current=front;
        while(current!=NULL)
        {
            printf("%d->",current->data);
            current=current->next;
        }
    }


}