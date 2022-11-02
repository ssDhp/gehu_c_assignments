// Write a c Program to find addition of two 2d array
#include <stdio.h>

void printMatrix(int row, int col, int arr[row][col])
{
    int i, j;
    printf("\n\t");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
            if (j == col - 1)
                printf("\n\t");
            else
                printf(", ");
        }
    }
    printf("\n");
}

void main()
{
    int i, j, x1, y1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &x1, &y1);
    int arr1[x1][y1];
    int arr2[x1][y1];
    // Array 1
    printf("\nFor Array 1: \n");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            int a = 0;
            printf("\t Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a);
            arr1[i][j] = a;
        }
    }
    printf("\nArray 1: ");
    printMatrix(x1, y1, arr1);
    // Array 2
    printf("For Array 2: \n");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            int a = 0;
            printf("\t Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a);
            arr2[i][j] = a;
        }
    }
    printf("\nArray 2: ");
    printMatrix(x1, y1, arr2);
    // Sum of Array 1 and Array 2
    printf("Sum: \n\t");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            printf("%d", arr1[i][j] + arr2[i][j]);
            if (j == y1 - 1)
                printf("\n\t");
            else
                printf(", ");
        }
    }
    printf("\n");
}
