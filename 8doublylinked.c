#include <stdio.h>
#include <stdlib.h>
void insertbeg();
void display();
void insertend();
void insertpos();
void deletebeg();
void deletend();
void deletepos();
void search();

struct node
{
    int data;
      struct node *prev;
    struct node *next;
  
};
struct node *head = NULL;
struct node *newnode;
struct node *current;
int main()
{
    while (1)
    {
        int choice;
        printf("\n---Enter choice---\n1.INSERT AT BEGINNING\n2.INSERT AT END\n3.INSERT AT POSITIOn\n4.DELETE AT BEGINNING\n5.DELETE AT END\n6.DELETE AT POS\n7.SEARCH\n8.DISPLAY\n9.EXIT\n");
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
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert");
    scanf("%d", &newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else{
        
        newnode->next=head;
          newnode->prev=NULL;
        head->prev=newnode;
      
        head=newnode;

    }
}

void insertend()
{
     newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert");
    scanf("%d", &newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else{
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newnode;
        newnode->next=NULL;
        newnode->prev=current->next;

    

}
}

void insertpos()
{
    int pos,i=1;
      newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to insert");
    scanf("%d", &newnode->data);
    printf("Enter the pos");
    scanf("%d",&pos);
    if(head==NULL|| pos==1)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else{
        current=head;
        while(i<pos-1)
        {
            current=current->next;
            i++;
        }
         newnode->next =current->next;
      current->next->prev=newnode;
current->next = newnode;
        newnode->prev = current;
        // current->next->prev=newnode;
        // newnode->next=current->next;
        //  current->next=newnode;
        // newnode->prev=current;
       
        
        
    }

}

void deletebeg()
{
    if(head==NULL)
    {
        printf("no list");
    }
    head=head->next;
    // head->prev=head;
}
void deletend()
{
      if(head==NULL)
    {
        printf("no list");
    }
    else{
        current=head;
        while(current->next->next!=NULL)
        {
            current=current->next;
        }
        current->next=NULL;
        
    }


}


void deletepos()
{
    int pos,i=1;
    printf("Enter the pos to delete");
    scanf("%d",&pos);
     if(head==NULL)
    {
        printf("no list");
    }
    else
    {
        current=head;
        while(i<pos-1)
        {
            current=current->next;
            if(current->next->next==NULL)
            {
                current->next==NULL;
            }
        }
        current->next=current->next->next;
        current->next->prev=current;
    }


}


void search()
{
    int ele,flag=0;
    printf("enter the element to search:");
    scanf("%d",&ele);
        if(head==NULL)
    {
        printf("no list");
    }
    else
    {
        while(current!=NULL)
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
            printf("element not found");
        }
    }

}

void display()
{
    if(head==NULL)
    {
        printf("empty list");
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