// Write a C program to print entered number in words.

#include <stdio.h>

int order(int x)
{
    int order = 0;
    while (x)
    {
        x = x / 10;
        order++;
    }
    return order;
}

int main()
{
    int num, n = 0, temp = 0, zeros = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (n)
    {
        temp = temp * 10 + (n % 10);
        n /= 10;
    }
    // For trailing zeros in num
    zeros = order(num) - order(temp);
    while (temp)
    {
        switch (temp % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        temp /= 10;
    }
    while (zeros)
    {
        printf("Zero ");
        zeros--;
    }

    return 0;
}