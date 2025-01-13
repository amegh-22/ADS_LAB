#include <stdio.h>
#include <stdlib.h>

void insert();
void display();
void delete();
void sort();

int A[20], s, i;
void main()
{

    int i;
    printf("Enter the size of array");
    scanf("%d", &s);
    printf("Enter the elements");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("the array is");
    for (i = 0; i < s; i++)
    {
        printf("%d\t", A[i]);
    }

    while (1)
    {

        int choice;
        printf("\n---menu---\n1.insert\n3.delete\n2.display\n4.sort\n5.exit\n");
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
            delete ();
            break;
        case 4:
            sort();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}
void insert()
{
    int pos, data, i;
    printf("Enter the position to insert");
    scanf("%d", &pos);
    printf("enter the element to insert:");
    scanf("%d", &data);
    if (pos > s || pos < 0)
    {
        printf("invalid position");
    }
    else
    {
        s++;

        for (i = s - 1; i > pos - 1; i--)
        {
            A[i] = A[i - 1];
        }
        A[pos - 1] = data;
    }
}

void delete()
{
    int pos;
    printf("enter the pos to delete:");
    scanf("%d", &pos);
    s--;
    for (i = pos - 1; i < s; i++)
    {
        A[i] = A[i + 1];
    }
}

void sort()
{
    int temp, j;
    for (j = 0; j < s; j++)
    {
        for (i= 0; i < s - j - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

void display()
{
    printf("the array is");
    for (i = 0; i < s; i++)
    {
        printf("%d\t", A[i]);
    }
}
