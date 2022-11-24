// Write a program to calculate Simple and Compound Interest.

#include <stdio.h>
#include <math.h>

int main()
{
    int p, r, t, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    printf("Simple Interest: %d\n", (p * r * t) / 100);
    printf("Compound Interest: %.2lf\n", p * pow((1 + (double)r / 100), t) - p);
    return 0;
}