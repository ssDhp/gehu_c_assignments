// Write a C program to find sum of n terms of Fibonacci series

#include <stdio.h>

int main()
{
    int num, count = 2, x = 0, y = 1, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (count = 2; count < num; count++)
    {
        y = x + y;
        x = y - x;
        sum += y;
    }
    printf("Sum of %d terms of Fibonacci Series: %d", num, sum);

    return 0;
}