#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void delete();
void search();
int s, A[20], pos;
int main()
{
    int i;
    printf("Enter the size of the array");
    scanf("%d", &s);
    printf("Enter the elements:\n");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("The array is:");
    for (i = 0; i < s; i++)
    {
        printf("%d\t", A[i]);
    }
    while (1)
    {
        int choice;
        printf("\n---MENU-----\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.SEARCH\n5.EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
            case 4:search();
                break;
             case 5:exit(0);

        default:
            printf("invalid choice");
        }
    }
}
void insert()
{
    int data, i;
    printf("Enter the element to insert:");
    scanf("%d", &data);
    printf("Enter the position to insert:");
    scanf("%d", &pos);
    if (pos < 0 || pos > s)
    {
        printf("invalid position");
    }
    else
    {

        for (i = s + 1; i > pos; i--)
        {
            A[i] = A[i - 1];
        }

        A[pos] = data;
        s++;
    }
}

void delete()
{
    int i;
    printf("Enter the position to delete");
    scanf("%d", &pos);
    if (pos < 0 || pos > s)
    {
        printf("invalid position");
    }
    else
    {

        for (i = pos; i <=s; i++)
        {
            A[i] = A[i + 1];
        }

        s--;
    }
}

void display()
{
    int i;
    printf("The array is:");
    for (i = 0; i < s; i++)
    {
        printf("%d\t", A[i]);
    }
}

void search()
{
    int ele,flag=0,i;
    printf("enter the element to search");
    scanf("%d",&ele);
    for(i=0;i<s;i++)
    {
        if(A[i]==ele)
        {
            printf("Element found %d",A[i]);
            flag=1;
        }
    }
    if(!flag)
    {
        printf("Element not found");
    }

}
