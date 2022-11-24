// Write a C program code to swap using bit wise XOR

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter values of A and B: ");
    scanf("%d %d", &a, &b);
    printf("Before swap\n\tA: %d\n\tB: %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap\n\tA: %d\n\tB: %d\n", a, b);
    return 0;
}