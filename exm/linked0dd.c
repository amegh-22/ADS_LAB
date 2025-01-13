#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void sum();
struct node
{
    int data;
    struct node *next;
};
struct node *newnode2;
struct node *head1 = NULL;
struct node *current2;

int main()
{
    while (1)
    {
        int choice;
        printf("\n--menu--\n1.insert\n2.display\n3.sum\n4.exit\n");
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
            sum();
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
    newnode2 = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert in second ll:");
    scanf("%d", &newnode2->data);
    if (head1 == NULL)
    {
        head1 = newnode2;
        newnode2->next = NULL;
    }
    else
    {
        current2 = head1;
        while (current2->next != NULL)
        {
            current2 = current2->next;
        }
        current2->next = newnode2;
        newnode2->next = NULL;
    }
}
void display()
{

    if (head1 == NULL)
    {
        printf("list empty");
    }
    else
    {
        current2 = head1;
        while (current2 != NULL)
        {
            printf("%d->", current2->data);
            current2 = current2->next;
        }
    }
}
void sum()
{
    int i = 1, s = 0;
    struct node *current;
    current = head1;
    while (current->next != NULL)
    {
        if (i % 2 != 0)
        {
            s += current->data;
        }
        i++;
        current = current->next;
    }
    printf("%d", s);
}
