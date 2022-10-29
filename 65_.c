// Write a C program to draw following pattern
#include <stdio.h>

void printc(char *ch, int times)
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("%s", ch);
    }
}

int main()
{
    int row, i;
    printf("Enter a number: ");
    scanf("%d", &row);
    int nos = row - 1;
    int noc = 1;
    for (size_t i = 0; i < row; i++)
    {
        printc(" ", nos);
        printc("*", noc);
        printf("\n");
        nos--;
        noc += 2;
    }

    return 0;
}