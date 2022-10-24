// Program to illustrate the working of a simple calculator

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    char op;
    printf("Enter a expression in the form of <x> <operator> <y>: \n");
    scanf("%d %c %d", &x, &op, &y);
    switch (op)
    {
    case '+':
        printf("Sum: %d", x + y);
        break;
    case '-':
        printf("Difference: %d", x - y);
        break;
    case '*':
        printf("Product: %d", x * y);
        break;
    case '/':
        printf("Quotient: %d \nRemainder: %d.", x / y, x % y);
        break;
    case '^':
        printf("Exponent: %d.", (int)pow(x, y));
        break;
    default:
        printf("INVALID expression!");
        break;
    }
    return 0;
}