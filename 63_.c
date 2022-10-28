// Write a C program to draw following pattern
#include <stdio.h>

int main()
{
    int row, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 0; j < (row - i); j++)
        {

            printf(" ");
        }
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}