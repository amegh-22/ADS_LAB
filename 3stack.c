#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int top=-1;

void push();
void pop();
void peek();
void display();


int a[30];
int main()
{
    while(1)
    {
        int choice;
        printf("\n----MENU---\n1.INSERT\n2.DELETE\n3.PEEK\n4.DISPALY\n5.EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:peek();
                break;
            case 4:display();
                break;
            case 5:exit(0);
            default:
            printf("invalid choice");

        }

    }


}

void push()
{
    int data;
    printf("Enter the element to push:");
    scanf("%d",&data);
    if(top==MAX-1)
    {
        printf("stack overflow");
    }
    else if(top==-1)
    {
        top=0;
        a[top]=data;
    }
    else{
       
        top++;
         a[top]=data;

}
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else{
    
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack empty");
    }
    else{
        printf("%d",a[top]);
    }
}

void display()
{
    int i;
    
    if(top==-1)
    {
        printf("Stack empty");
    }
    else{
        for(i=top;i>=0;i--)
        {
            printf("%d\t",a[i]);
        }

}
}