// Program to show working of arithmetic operators; also implement implicit and explicit

#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Enter two integers and char: ");
    scanf("%d %d %c", &a, &b, &ch);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("Implicit Typecasting: \n\t %c + 3 = %c\n", ch, ch + 3);
    printf("Explicit Typecasting: \n\t (float)%d / %d = %.2f\n", a, b, (float)a / b);
    return 0;
}