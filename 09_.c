// Program to find the area of a circle and rectangle

#include <stdio.h>
#define PI 3.14159

int main()
{
    int r, l, b;
    printf("Enter radius of a circle:");
    scanf("%d", &r);
    printf("Area of circle: %.2f sq units\n", PI * r * r);
    printf("Enter value of length and breadth: ");
    scanf("%d %d", &l, &b);
    printf("Area of rectangle: %d sq units\n", l * b);
    return 0;
}