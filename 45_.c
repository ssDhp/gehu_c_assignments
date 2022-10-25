// Write a C program to find the sum of even and odd numbers between x and y.

#include <stdio.h>

int main()
{
    int x, y, i, sumEven = 0, sumOdd = 0;
    printf("Enter value of 'x' and 'y': ");
    scanf("%d %d", &x, &y);
    for (i = x; i <= y; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }
    }
    printf("Sum of even numbers between %d and %d: %d\n", x, y, sumEven);
    printf("Sum of odd numbers between %d and %d: %d\n", x, y, sumOdd);
    return 0;
}