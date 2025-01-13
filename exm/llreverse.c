#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *head1 = NULL, *head2 = NULL, *new, *current, *temp;

void reverse(struct node *head)
{
    struct node *prevnode = NULL, *currentnode = head, *nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->link;
        currentnode->link = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    current = head;
    printf("The reversed linked list is:\n");
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->link;
    }
    printf("NULL\n");
}

void main()
{
    int n, m;
    printf("Enter the number of nodes in the linked list: ");
    scanf("%d %d", &n, &m);
    printf("Enter the linked list:\n");
    for (int i = 0; i < n + m; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new->data);
        new->link = NULL;
        if (i < n)
        {
            if (head1 == NULL)
            {
                head1 = new;
                current = new;
            }
            else
            {
                current->link = new;
                current = new;
            }
        }
        else
        {
            if (head2 == NULL)
            {
                head2 = new;
                temp = new;
                current->link = head2;
            }
            else
            {
                temp->link = new;
                temp = new;
            }
        }
    }
    printf("\nThe first linked list is:\n");
    current = head1;
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->link;
    }
    printf("NULL\n");
    printf("The second linked list is:\n");
    temp = head2;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
    reverse(head1);
}