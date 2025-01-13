#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void reverse();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *current;
struct node *tail;
struct node *newnode;
int main()
{
    while (1)
    {
        int choice;
        printf("\n--menu--\n1.insert\n2.dispplay\n3.revrse\n4.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
    return 0;
}
void insert()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to inset:");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = NULL;
        newnode->prev=NULL;
    }
    else
    {
        current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
        newnode->prev = current;
        newnode->next = NULL;

        tail=newnode;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("empty");
    }
    else
    {
        current = head;
        while (current != NULL)
        {
            printf("%d->", current->data);
            current = current->next;
        }
    }
}

void reverse()
{
    current = tail;
    while (current != NULL)
        
    {
        printf("%d->", current->data);
        current = current->prev;
    }
}