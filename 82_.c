// Write a C Program to find sum of both diagonals elements of a given matrix. Also find row sum & column sum
// (Should work on square and non square matrix)

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
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &x1, &y1);
    int arr1[x1][y1];
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
    for (i = 0; i < x1; i++)
    {
        for (j = 0; j < y1; j++)
        {
            // For primary diagonal
            if (i == j)
                primaryDiagonalSum += arr1[i][i];
            // For secondary diagonal
            if (j == (y1 - 1 - i))
                secondaryDiagonalSum += arr1[i][y1 - 1 - i];
        }
    }
    // For row sum
    printf("For row sum: \n");
    for (i = 0; i < x1; i++)
    {
        int rowSum = 0;
        for (j = 0; j < y1; j++)
        {
            rowSum += arr1[i][j];
        }
        printf("\t%d row: %d\n", i + 1, rowSum);
    }
    printf("\n");
    // For col sum
    printf("For column sum: \n");
    for (j = 0; j < y1; j++)
    {
        int colSum = 0;
        for (i = 0; i < x1; i++)
        {
            colSum += arr1[i][j];
        }
        printf("\t%d column: %d\n", j + 1, colSum);
    }
    printf("\n");
    printf("Sum of elements of primary diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of elements of secondary diagonal: %d\n", secondaryDiagonalSum);
    printf("Sum of both diagonal: %d\n", primaryDiagonalSum + secondaryDiagonalSum);
}
