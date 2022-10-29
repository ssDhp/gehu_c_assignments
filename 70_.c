// Write a C program to convert a decimal number to binary number using array(number should be a whole number)

#include <stdio.h>

void main()
{
    int i, num, temp, arr[32];
    printf("Enter a whole number: ");
    scanf("%d", &num);
    temp = num;
    for (i = 0; i < 32; i++)
    {
        arr[i] = temp % 2;
        temp /= 2;
    }
    printf("'%d' in Binary: ", num);
    for (i = i - 1; i >= 0; i--)
    {
        if ((i + 1) % 4 == 0)
            printf(" ");
        printf("%d", arr[i]);
    }
}