// Write a C Program to print the upper and lower triangle in a matrix

#include <stdio.h>

void printMatrix(int arr[row][col])
{
    int i, y;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
            if (col - 1 == i)
                printf("\n");
            else
                printf(", ");
        }
    }
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
    printMatrix(arr1);
}