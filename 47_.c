// Write a C program to reverse a number

#include <stdio.h>

int main()
{
    int num, newNum, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    printf("Reverse of %d: ", num);
    while (temp > 0)
    {
        printf("%d", temp % 10);
        temp /= 10;
    }
    return 0;
}