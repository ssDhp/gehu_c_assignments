// Write a C program to print n terms of Fibonacci series

#include <stdio.h>

int main()
{
    int num, count = 2, x = 0, y = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci Series: \n%d\n%d\n", x, y);
    while (count < num)
    {
        y = x + y;
        x = y - x;
        printf("%d\n", y);
        count++;
    }

    return 0;
}