#include <stdio.h>
#include <stdlib.h>
int rear=-1;
int front=-1;
int c[10];
void enqueue()

void cycle()
{
    int  v[20] = {0},int st=u;
     for (i = 0; i < n; i++)
    {
        v[i]=0;
        enqueue(st);
        v[st]=1;
        while(front<=rear)
        {
            st=dequeue();
            for(i=0;i<n;i++)
            {
                if(b[u][i]==1 && v[i]==0)
                {
                    enqueue(i);
                    v[i]=1;
                    if(i==k)
                    {
                        c=1;
                        break;
                    }
                }
            }

        }



}
void main()
{
    int a[20][20], b[20][20], i, j, n, e = 1, min = 999, u, k, c;
    printf("Enter the no of vertices:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)=", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                a[i][j] = 999;
                b[i][j] = 0;
            }
        }
    }
    while (e < n)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i][j] < min)
                {
                    a[i][j] = min;
                    u = i;
                    k = j;
                }
            }
        }
        if (cycle(u, k, n, a) == 0)
        {

            c = c + min;
            v[u] = 1;
            v[k] = 1;
            e=e+1;
            printf("krus:");
            printf("(%d,%d)=%d", u, k, min);
            b[u][k] = 999;
            b[k][u] = 999;
            front=-1;
            rear=-1;
        }
        else
        {
            b[u][k] = 999;
            b[k][u] = 999;
             front=-1;
            rear=-1;
        }
    }
    printf("cost:%d", c);
}
