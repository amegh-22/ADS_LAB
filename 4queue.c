#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void enqueue();
void display();
void dequeue();
void search();
int front = -1;
int rear = -1;
int q[30];
int main()
{
    while (1)
    {
        int choice;
        printf("\n---MENU---\n1.ENQUEUE\n2.DEQUEUE\n3.SEARCH\n4.DISPLAY\n5.EXIT\n");
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
            search();
            break;
        case 4:
            display();
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
    printf("Enter the element to enqueue:");
    scanf("%d", &data);
    if (rear == MAX - 1)
    {
        printf("queue is overflow");
    }
    else if (rear == -1 && front == -1)
    {

        rear = 0;
        front = 0;
        q[rear] = data;
    }
    else
    {
        rear++;
        q[rear] = data;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("queue empty");
    }
    else if ((front == 0 && rear == 0) || (front == rear))

    {
        front = -1;
        rear = -1;
    }

    else
    {
        front++;
    }
}

void display()
{
    int i;
    if (rear == -1 && front == -1)
    {
        printf("queue underflow");
    }
    else if ((front == 0 && rear == 0) || (front == rear))
    {
        printf("%d", q[rear]);
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", q[i]);
        }
    }
}

void search()
{
    int data, i, flag = 0;
    printf("Enter the element to search");
    scanf("%d", &data);
    if (rear == -1 && front == -1)
    {
        printf("queue underflow");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            if (q[i] == data)
            {
                printf("Element found %d");
                flag = 1;
                break;
            }
        }

            if (!flag)
            {
                printf("element not found");
            }
        
    }
}
