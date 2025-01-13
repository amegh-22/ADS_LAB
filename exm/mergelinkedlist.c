#include <stdio.h>
#include <stdlib.h>
void insert1();
void insert2();
void display1();
void display2();
void merge();
void vowels();

struct node
{
    char data;
    struct node *next;
};
struct node *head = NULL;
struct node *head1=NULL;
struct node *current1;
struct node *current2;
struct node *current3;
struct node *newnode;
struct node *newnode2;
char v[10];
void main()
{

    while (1)
    {
        int choice;
        printf("\n---menu---\n1.1stll\n2.2ndll\n3.merge\n4.vowels\n5.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert1();
            break;
        case 2:
            insert2();
            break;
  
        case 3:
            merge();
            break;
        case 6:
            vowels();
            break;
        case 5:
            exit(0);
        default:
            printf("ijvalid choice");
        }
    }
}

void insert1()
{
    newnode = (struct node *)malloc(sizeof(struct node ));
    printf("Enter the data to insert in first ll:");
    scanf(" %c", &newnode->data);
    if (head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    else
    {
        current1 = head;
        while (current1->next != NULL)
        {
            current1 = current1->next;
        }
        current1->next = newnode;
        newnode->next = NULL;
    }

     printf("the ist linked list are:");
     display1();
 
}

void insert2()
{
    newnode2 =(struct node *) malloc(sizeof(struct node ));
    printf("Enter the data to insert in second ll:");
    scanf(" %c", &newnode2->data);
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
     printf("the  2nd linked list are:");
   display2();
}
void display1()
{
       if (head == NULL)
    {
        printf("list empty");
    }
    else
    {
        current1 = head;
        while (current1!= NULL)
        {
            printf(" %c->", current1->data);
            current1 = current1->next;
        }
    }
}

void display2()
{
     if (head1 == NULL)
    {
        printf("list empty");
    }
    else
    {
        current2 = head1;
        while (current2!= NULL)
        {
            printf(" %c->", current2->data);
            current2 = current2->next;
        }
    }



}

void merge()
{
    display1();
    display2();
}
// void merge()
// {
//     current3=head;
//     while(current3->next!=NULL)
//     {
//         // printf(" %c->",current3->data);
//         current3=current3->next;
//     }
//     current3->next=head1;
//     printf("merged inw:");
//     merge(head);
    

    // int merge()
// {
    // struct node *current3; 

    // // Check if the first list is empty
    // if (head == NULL)
    // {
    //     head = head1; // Assign the second list as the merged list
    //     return;
    // }

    // // Traverse to the last node of the first list
    // current3 = head;
    // while (current3->next != NULL)
    // {
    //     current3 = current3->next;
    // }

    // // Link the last node of the first list to the head of the second list
    // current3->next = head1;

    
// struct node *current = head;
// while (current != NULL)
// {
//     printf("%c -> ", current->data);
//     current = current->next;
// }
// current=head1;
// printf(" %c->",current2->data);

void vowels()
{
    int n,i;
    printf("Enter the numbers of vowels");
    scanf("%d",&n);
    
    printf("enter the vowels:");
    for(i=0;i<n;i++)
    {
         scanf(" %c",&v[i]);

    }
    struct node *current;
    current=head;
    while(current!=NULL)
    {
         for(i=0;i<n;i++)
        {
        if(current->data==v[i])
        {
            printf(" %c->",current->data);
        }
        }
        current=current->next;
       
    }
   
    
}




