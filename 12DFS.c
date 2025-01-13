#include<stdio.h>
#include<stdlib.h>
void dfs();
int n,a[20][20],v[20],start;
void main()
{
    int i,j;

    printf("Enter the number of nodes:");
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
    printf("Enter the starting node");
    scanf("%d",&start);
    if(start>n || start<0)
    {
        printf("invalid start:");
    }
    else{
        printf("dfs:");
        dfs(start);
    }
}

void dfs(int node)
{
    int i;
    v[node]=1;
    printf("%d",node);
    for(i=0;i<n;i++)
    {
      
            if(a[node][i]==1 & v[i]!=1 )
            {
                dfs(i);
            }
        }

}