// Program to find the largest of three numbers using Logical AND (&&)

#include <stdio.h>

int main()
{
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    printf("Largest is: %d", largest);
    return 0;
}