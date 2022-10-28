// Write a C program print the following pattern according to number of rows entered (Use While)

#include <stdio.h>

int main()
{
    int row, i = 1, j = 1, k = 1;
    printf("Enter a number: ");
    scanf("%d", &row);
    while (i <= row)
    {
        k = 1;
        while (j <= i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        while (k <= (row - i) + 1)
        {
            printf("*");
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;
}