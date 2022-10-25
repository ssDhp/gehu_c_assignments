// Write a C program to print square of n numbers, where value of n is inputted by the user.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}