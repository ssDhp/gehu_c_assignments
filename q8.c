// Write a C Program to swap two numbers (integers) using third variable

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter values of 'A' and 'B': ");
    scanf("%d %d", &a, &b);
    printf("Value of 'A' is %d and Value of 'B' is %d.\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap, value of 'A' is %d and Value of 'B' is %d.\n", a, b);
    return 0;
}