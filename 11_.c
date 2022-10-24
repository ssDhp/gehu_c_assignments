// Write a program to input 3 sides of triangle and calculate area.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of trianle is %.2f sq units.", area);
    return 0;
}