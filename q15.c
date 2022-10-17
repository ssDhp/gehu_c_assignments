// Program to show working of arithmetic operators; also implement implicit and explicit

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
    printf("Implicit Typecasting:\n(Automatically conversion of datatypes)\n\t 9.0(float) / 3(int) = %.2f(float)\n",  9.0/3);
    printf("Explicit Typecasting:\n(Forcing conversion of datatypes)\n\t 12(int) / 3(int) = %.2f(float)\n",  (float)12/3);

    return 0;
}