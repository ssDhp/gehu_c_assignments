// Write a C program to draw following pattern
#include <stdio.h>

int main()
{
    int row, i, j;
    printf("Enter a number: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}