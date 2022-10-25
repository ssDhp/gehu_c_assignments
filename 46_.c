// Write a C program to add digits of a number

#include <stdio.h>

int main()
{
    char num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("Sum of digits of %d: %d", num, sum);
    return 0;
}