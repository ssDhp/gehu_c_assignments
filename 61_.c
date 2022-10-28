/*Write a C program to find the sum of the following series:
 1+1/2+1/3+1/4+.............. upto n terms */
#include <stdio.h>

int main()
{
    int count, i;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        // typecasting , so as to get a float not a int
        sum += (double)1 / i;
    }
    printf("Sum of given series: %.14lf", sum);
    return 0;
}