#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s1, s2, A[10], B[10], i,j,k,C[30];
    printf("Enter the size of first array:");
    scanf("%d", &s1);
    printf("Enter the elements:\n");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", &A[i]);
    }



    printf("Enter the size of second array:");
    scanf("%d", &s2);
    printf("Enter the elements:\n");
    for (i = 0; i < s2; i++)
    {
        scanf("%d", &B[i]);
    }
    printf("Fisrt Array");





    for (i = 0; i < s1; i++)
    {
        printf("%d\t", A[i]);
    }

    printf("\nsecond Array");
    for (i = 0; i < s2; i++)
    {
        printf("%d\t", B[i]);
    }




    for(i=0;i<s1;i++)
    {
        C[i]=A[s1-1-i];
    }
    for(j=0;j<s2;j++)
    {
        C[s1+j]=B[s2-1-j];
    }
    printf("\nmerged Array:");
    for(k=0;k<s1+s2;k++)
    {
        printf("%d\t",C[k]);
    }
}
