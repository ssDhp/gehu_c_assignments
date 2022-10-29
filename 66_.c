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
    int num, count = 2, x = 0, y = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printc("*", y);
    for (count = 2; count < num; count++)
    {
        y = x + y;
        x = y - x;
        printc("*", y);
    }
    return 0;
}