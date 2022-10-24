// Write a C program to find the sum of first n numbers using for loop.

#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d", n, sum);
    return 0;
}