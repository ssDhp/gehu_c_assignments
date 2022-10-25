// Write a c program to find out NCR factor of given

#include <stdio.h>

unsigned long long int factorial(int x)
{
    int i;
    unsigned long long int factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    printf("Enter values of 'n' and 'r': ");
    scanf("%d %d", &n, &r);
    printf("Value of %d!/(%d!(%d-%d)!): %llu", n, r, n, r, (int)factorial(n) / (factorial(r) * factorial(n - r)));
    return 0;
}