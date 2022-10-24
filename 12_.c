// Program to show similarity between int and char

#include <stdio.h>

int main()
{
    int code;
    char ch;
    printf(" Enter an character:");
    scanf("%c", &ch);
    code = (int)ch;
    printf("'%c' is associated with the ASCII code of '%d'.\n", ch, code);
    printf("Adding one to '%c' gives '%c'.", code, code + 1);
    return 0;
}