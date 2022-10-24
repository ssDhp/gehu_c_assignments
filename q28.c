// Write a C program to find whether entered character is small case, capital case, a digit or a special symbol.

#include <stdio.h>

int main()
{
    char c;
    int cCode;
    printf("Enter a character: ");
    scanf("%c", &c);
    cCode = (int)c;
    printf("%d\n", cCode);
    if (48 <= cCode && cCode <= 57)
    {
        printf("'%c' is a digit.", c);
    }
    else if (65 <= cCode && cCode <= 90)
    {
        printf("'%c' is a captial case letter.", c);
    }
    else if (97 <= cCode && cCode <= 122)
    {
        printf("'%c' is a small case letter.", c);
    }
    else
    {
        printf("'%c' is a special symbol.", c);
    }
    return 0;
}