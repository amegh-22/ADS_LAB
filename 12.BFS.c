#include<stdio.h>
#include<stdlib.h>
void bfs( int start);
void enqueue( int node);
int dequeue();
int front=-1;
int rear=-1;
int n,a[20][20],v[20],start,q[20];
void main()
{
    int i,j;
    printf("Enter the no of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("(%d,%d)=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        v[i]=0;
    }
    printf("Enter starting node");
    scanf("%d",&start);
    if(start>n  || start<0)
    {
        printf("invalid start");
    }
    else{
        bfs(start);

    }


}

void bfs( int start)
{
    int i;
    enqueue(start);
    v[start]=1;
    printf("%d\t",start);
    while(front!=-1)
    {
     int node=dequeue();
    for(i=0;i<n;i++)
    {
    
            if(a[node][i]==1 && v[i]!=1)
            {
                v[i]=1;
                printf("%d\t",i);
                enqueue(i);
            }
        
    }

}

}

void enqueue(int node)
{
    if(rear==19)
    {
        printf("overdloe");
    }
    else if(front==-1 &&  rear==-1)
    {
        front=0;
        rear=0;
    }
    else{
        rear++;
    }
    q[rear]=node;
}
    int dequeue()
    {
        
        if(front=-1)
        {
            printf("no");
            return -1;
        }
        int node=q[front];
        
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        return node;

    }
