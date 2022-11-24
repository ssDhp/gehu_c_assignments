// Program to determine the value of a variable num2 depending on num1

#include <stdio.h>

int main()
{
    // Assume that num2 = 2num1+1
    int num1, num2;
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    num2 = num1 * 2 + 1;
    printf("Value of 'num1': %d\n", num1);
    printf("Value of 'num2': %d\n", num2);
    return 0;
}