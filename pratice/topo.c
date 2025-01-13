#include <stdio.h>
void main()
{
    int n, a[20][20], v[20] = {0}, count = 0, i, j, flag, u;
    printf("enter the number of vertices: ");
    scanf("%d", &n);
    printf("enter the adjacency matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("the sorted array is:\t");
    while (count != n)
    {
        for (i = 0; i < n; i++)
        {
            flag = 0;
            if (v[i] == 0)
            {
                for (j = 0; j < n; j++)
                {
                    if (a[j][i] == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    u = i;
                    printf("%d", u);
                    v[u] = 1;
                    count += 1;
                    for (i = 0; i < n; i++)
                    {
                        a[u][i] = 0;
                    }
                    break;
                }
            }
        }
    }
}