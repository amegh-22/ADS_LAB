#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, universalSet[20], i, j, n1, n2, set1[20], set2[20], bitVector1[20], bitVector2[20], unionset[30], intersection[30];

    // Input universal set
    printf("Enter the size of universal set: ");
    scanf("%d", &n);
    printf("Enter the elements of the universal set:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &universalSet[i]);
    }
    printf("Universal set: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", universalSet[i]);
    }

    // Input set1 and generate bit vector
    printf("\nEnter the size of set1 less than %d: ", n);
    scanf("%d", &n1);
    printf("Enter the elements of set1:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &set1[i]);
    }
    for (i = 0; i < n; i++)
    {
        bitVector1[i] = 0;
        for (j = 0; j < n1; j++)
        {
            if (universalSet[i] == set1[j])
            {
                bitVector1[i] = 1;
                break;
            }
        }
    }

    printf("Set1: ");
    for (i = 0; i < n1; i++)
    {
        printf("%d\t", set1[i]);
    }
    printf("\nBit vector for set1: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", bitVector1[i]);
    }

    // Input set2 and generate bit vector
    printf("\nEnter the size of set2 less than %d: ", n);
    scanf("%d", &n2);
    printf("Enter the elements of set2:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &set2[i]);
    }
    for (i = 0; i < n; i++)
    {
        bitVector2[i] = 0;
        for (int j = 0; j < n2; j++)
        {
            if (universalSet[i] == set2[j])
            {
                bitVector2[i] = 1;
                break;
            }
        }
    }

    printf("Set2: ");
    for (i = 0; i < n2; i++)
    {
        printf("%d\t", set2[i]);
    }
    printf("\nBit vector for set2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", bitVector2[i]);
    }

    while (1)
    {
        int choice;
        printf("\n\nMenu:");
        printf("\n1. UNION");
        printf("\n2. INTERSECTION");
        printf("\n3. DISPLAY UNION");
        printf("\n4. DISPLAY INTERSECTION");
        printf("\n5. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
switch (choice)
        {
        case 1:
            // Calculate union
            for (i = 0; i < n; i++)
            {
                unionset[i] = bitVector1[i] | bitVector2[i];
            }
            printf("Union calculated.\n");
            break;

        case 2:
            // Calculate intersection
            for (i = 0; i < n; i++)
            {
                intersection[i] = bitVector1[i] & bitVector2[i];
            }
            printf("Intersection calculated.\n");
            break;

        case 3:
            // Display union
            printf("Union bit vector: ");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", unionset[i]);
            }
            printf("\n");
            break;

        case 4:
            // Display intersection
            printf("Intersection bit vector: ");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", intersection[i]);
            }
            printf("\n");
            break;

        case 5:
            // Exit program
            printf("Exiting program.\n");
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}