// Write a C program to print first 100 numbers. Write a C program to find sum and average of first n natural numbers using while loop.

#include <stdio.h>

int main()
{
    int n = 100, sum = 0, i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    printf("Average of first %d natural numbers is %.2f\n", n, (float)sum / n);
    return 0;
}