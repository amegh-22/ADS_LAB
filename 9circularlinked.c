#include <stdio.h>
#include <stdlib.h>
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deletend();
void deletepos();
void search();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *newnode;
struct node *head = NULL;
struct node *current;
int main()
{
    while (1)
    {
        int choice;
        printf("\n----MENU----\n1.INSERT AT BEGINNING\n2.INSERT AT END\n3.INSERT AT POSITIOn\n4.DELETE AT BEGINNING\n5.DELETE AT END\n6.DELETE AT POS\n7.SEARCH\n8.DISPLAY\n9.EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertbeg();

            break;
        case 2:
            insertend();
            break;
        case 3:
            insertpos();
            break;
        case 4:
            deletebeg();
            break;
        case 5:
            deletend();
            break;
        case 6:
            deletepos();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);

        default:
            printf("invalid choice");
        }
    }
}
void insertbeg()
{
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" emter the element");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
      else
    {
        current=head;
          while(current->next!=head)
        {
            current=current->next;
        }
        current->next=newnode;
      

        newnode->next = head;

        // head->next = newnode;
        head=newnode;
        
    }
}
void insertend()
{
     int data;
    struct node *current;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" emter the element");
    scanf("%d", &newnode->data);
    current = head;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        while(current->next!=head)
        {
            current=current->next;
        }
        newnode->next=head;
        current->next=newnode;

}
}

void insertpos()
{
    int data, pos, i = 1;
    struct node *current;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf(" emter the element");
    scanf("%d", &newnode->data);
    printf("Enter the position to insert");
    scanf("%d", &pos);
    current = head;

    if (pos == 1)
    {
        insertbeg();
    }
    else if (pos <= 0)
    {
        printf("invlid position");
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            if(current->next==head)
            {
                 newnode->next=head;
        current->next=newnode;


            }
            i++;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}


void deletebeg()
{
    if (head == NULL)
    {
        printf("list empty");
    }
    else
    {
        current=head;
         while(current->next!=head)
        {
            current=current->next;
        }
        head=head->next;
        
        current->next=head;
        
        
       
    }
}

void deletend()
{
     if (head == NULL)
    {
        printf("list empty");
    }
    else
    {
    struct node *current;
    current = head;
    while (current->next->next != head)
    {
        current = current->next;
    }
    current->next = head;
}
}



void deletepos()
{
    int i = 1, pos;
    struct node *current;
    printf("Enter the position");
    scanf("%d", &pos);
    current = head;
    if (pos == 1)
    {
        deletebeg();
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
             if(current->next==head)
            {
            
        current->next=head;


            }


            i++;
        }
        current->next = current->next->next;
    }
}

void display()
{
    struct node *current;

    if (head == NULL)
    {
        printf("list empty");
    }
    else
    {
        current = head;
        while (current->next != head)
        {
            printf("%d->", current->data);
            current = current->next;
        }
         printf("%d->", current->data);

    }
}

void search()
{
    int ele, flag = 0;
    struct node *current;
    printf("enter the element to search");
    scanf("%d", &ele);

    if (head == NULL)
    {
        printf("list empty");
    }
    else
    {
        current = head;
        while (current->next != head)
        {
            current = current->next;
            if (current->data == ele)
            {
                printf("element found");
                flag = 1;
                break;
            }
        }
            if (!flag)
            {
                printf("element no found");
            }
        }
    }
