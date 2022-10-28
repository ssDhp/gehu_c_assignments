// Write a c program to check whether a number is strong or not

#include <stdio.h>

unsigned long long int factorial(int x)
{
    int i;
    unsigned long long int factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num, temp, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    temp = num;
    while (temp)
    {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if (sum == num)
        printf("True,'%d' is strong number!", num);
    else
        printf("False,'%d' is not a strong number!", num);
    return 0;
}