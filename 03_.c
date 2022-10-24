// Write a program to calculate Simple and Compound Interest.

#include <stdio.h>
#include <math.h>

int main()
{
    int principal, rate, time, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &principal, &rate, &time);
    printf("\nYou have entered:\n\tPrincipal: %d\n\tRate: %d\n\tTime:%d\n\n", principal, rate, time);
    printf("Simple Intrest is %d\n", (principal * rate * time) / 100);
    printf("Compound Intrest is %.2lf\n", principal * pow((1 + (double)rate / 100), time) - principal);
    return 0;
}