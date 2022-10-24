// Write a C program to input three side of a triangle and then calculate area.(Applying proper validations)

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b <= c) || (b + c <= a) || (a + c <= b))
    {
        printf("Sides of triangle are not valid!!");
        return 0;
    }
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of trianle is %.2f sq units.", area);
    return 0;
}