// Write a C program to find the largest of three numbers.

#include <stdio.h>

int main()
{
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("Largest is: %d", largest);
    return 0;
}