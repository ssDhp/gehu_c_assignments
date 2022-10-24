/* Write a 'C' program to compute y as a function of x according to the formula
    y = 1.2x  + 0.98 when x <= 1.0
    y = 1.7x  + 0.09 when x > 1.0
You must use the switch statement. */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float x, y;
    printf("Enter value of x(float): ");
    scanf("%f", &x);
    switch (x <= 1.0)
    {
    case true:
        y = 1.2 * x + 0.98;
        break;
    case false:
        y = 1.7 * x + 0.09;
        break;
    }
    printf("y = %.2f", y);
    return 0;
}