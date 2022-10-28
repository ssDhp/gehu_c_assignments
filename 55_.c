/* Write a C program to find the sum of the following series:
 1+3+5+7+............ upto n terms */

#include <stdio.h>

int main()
{
    int i, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &count);
    for (i = 0; i <= count; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
            count++;
        }
    }
    printf("Sum of given series: %d", sum);
    return 0;
}