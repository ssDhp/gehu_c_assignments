// Write a program to find the addition, subtraction, multiplication, division of two numbers

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %.2f\n", x, y, (float)x / y);
    return 0;
}