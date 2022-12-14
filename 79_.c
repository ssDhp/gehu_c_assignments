// Write a C Program to print the upper and lower triangle in a matrix

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
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            int a = 0;
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a);
            arr1[i][j] = a;
        }
    }
    printf("\nArray: ");
    printMatrix(x1, y1, arr1);
    // Upper triangluar matrix
    printf("Upper Triangluar matrix:\n\t");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            if (i <= j)
                printf("%d", arr1[i][j]);
            else
                printf("%d", 0);
            if (j == y1 - 1)
                printf("\n\t");
            else
                printf(", ");
        }
    }
    printf("\n");
    // Lower triangle matrix
    printf("Lower Triangluar matrix:\n\t");
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            if (i >= j)
                printf("%d", arr1[i][j]);
            else
                printf("%d", 0);
            if (j == y1 - 1)
                printf("\n\t");
            else
                printf(", ");
        }
    }
    printf("\n");
}