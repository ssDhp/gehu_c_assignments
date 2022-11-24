// Write a program to print the value and size of different data types (Use size of operator).

#include <stdio.h>

int main()
{
    char a;
    int b;
    float c;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("Enter a integer: ");
    scanf("%d", &b);
    printf("Enter a float: ");
    scanf("%f", &c);
    printf("Value \t Datatype \t Size\n");
    printf("%c \t char \t\t %d bytes\n", a, sizeof(a));
    printf("%d \t int \t\t %d bytes\n", b, sizeof(b));
    printf("%.3f \t float \t\t %d bytes\n", c, sizeof(c));
    return 0;
}