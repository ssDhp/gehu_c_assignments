/*Write a C program to find the sum of the following series:
 1^2/1!+2^2/2!+3^2/3!+4^2/4!+............ upto n terms*/

#include <stdio.h>

unsigned long long int factorial(int n)
{
    // Limit: 1 - 20
    int i;
    unsigned long long int factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

unsigned int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

int main()
{
    int count, i;
    double sum = 0;
    printf("\n !! WARNING !! \n\n Do NOT enter numbers larger than 15 beacause terms become very small\n\n");
    printf("Enter a number: ");
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        // typecasting , so as to get a float not a int
        sum += (double)power(i, 2) / factorial(i);
    }
    printf("Sum of given series: %.14lf", sum);
    return 0;
}