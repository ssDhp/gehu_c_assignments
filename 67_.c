// Write a C program to draw following pattern
#include <stdio.h>

void printc(char *ch, int times)
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("%s", ch);
    }
    printf("\n");
}

int main()
{
    int row, i, j;
    printf("Enter a number: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        printc("3", i);
    }
    return 0;
}