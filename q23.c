// Write a program to find the simple interest if principle amount is less than 10000 else find the compound interest

#include <stdio.h>
#include <math.h>

int main()
{
    int principal, rate, time, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &principal, &rate, &time);
    printf("\nYou have entered:\n\tPrincipal: %d\n\tRate: %d\n\tTime:%d\n\n", principal, rate, time);
    if (principal <= 10000)
    {
        printf("Simple Intrest is %d\n", (principal * rate * time) / 100);
        return 0;
    }
    else
    {
        printf("Compound Intrest is %.2lf\n", principal * pow((1 + (double)rate / 100), time) - principal);
        return 0;
    }
}