// Write a C program to draw following pattern
#include <stdio.h>

void printc(char c, int times)
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("%c", c);
    }
}
int main()
{
    int row, i = 1, j = 1, k = 1;
    printf("Enter a number: ");
    scanf("%d", &row);
    return 0;
}