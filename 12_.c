// Program to show similarity between int and char

#include <stdio.h>

int main()
{
    int num;
    char ch;
    printf("Enter a character and a integer:");
    scanf("%c %d", &ch, &num);
    printf("\nDatatype \t Value \t -1 \t +1\n");
    printf("int \t\t %d \t %d \t %d\n", num, num - 1, num + 1);
    printf("char \t\t %c \t %c \t %c\n", ch, ch - 1, ch + 1);
    return 0;
}