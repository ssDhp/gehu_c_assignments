// Write a program to generate the Fibonacci series in c using for loop

#include <stdio.h>

int main()
{
    int num, count = 2, x = 0, y = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci Series: \n%d\n%d\n", x, y);
    for (count = 2; count < num; count++)
    {
        y = x + y;
        x = y - x;
        printf("%d\n", y);
    }

    return 0;
}