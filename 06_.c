// Program to enter an ASCII code and display the character associated with it

#include <stdio.h>

int main()
{
    int code;
    printf("Enter an ASCII code:");
    scanf("%d", &code);
    printf("%d is ASCII code for '%c'", code, (char)code);
    return 0;
}