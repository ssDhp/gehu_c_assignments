// Write a C program to find Armstrong numbers

#include <stdio.h>

// Nice implementation of recursive power function
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

// Find number of digits
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

int isArmstrong(int num)
{
    int ord, temp, digit, sum = 0;
    ord = order(num);
    temp = num;
    while (temp)
    {
        digit = temp % 10;
        sum += power(digit, ord);
        temp /= 10;
    }
    if (sum == num)
        return 1;
    return 0;
}

int main()
{
    int count = 1;
    while (1)
    {
        if (isArmstrong(count) == 1)
            printf("%d\n", count);
        count++;
    }
}