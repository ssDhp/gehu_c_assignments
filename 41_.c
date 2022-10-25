// Write a C program to find and print factorial of a number

#include <stdio.h>

int main()
{
    int i, n;
    unsigned long long int factorial = 1;
    printf("Enter a number(1 - 65): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%d! = %llu\n", n, factorial);
    return 0;
}