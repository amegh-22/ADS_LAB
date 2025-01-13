#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n, a[20][20], v[20] = {0},c=0, e=1,min=999, i, j, u,k;
    printf("enter the number of vertices: ");
    scanf("%d", &n);
    printf("enter the adjacency matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)=", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j]==0)
            {
                a[i][j]=999;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        v[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                u=i;
                k=j;
            }
        }
    }
    c=c+min;
    v[u]=1;
    v[k]=1;
    printf("prims:\n");
    printf("(%d,%d)=%d\n",u,k,min);
    while(e<n-1)
    {
        min=999;
        for(i=0;i<n;i++)
        {
            if(v[i]==1)
            {
            for(j=0;j<n;j++)
            {
                 if(a[i][j]<min && v[j]==0)
            {
                min=a[i][j];
                u=i;
                k=j;


            }
        }
    }
    }
    c=c+min;
v[k]=1;
e++;
printf("(%d,%d)=%d\n",u,k,min);

}
printf("cost:%d",c);
}