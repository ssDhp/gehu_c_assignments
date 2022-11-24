// Program to show working of unary Post/Pre Increment/Decrement operator

#include <stdio.h>

int main()
{
    int a;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Pre Increment:\n");
    printf("\tBefore A = %d\n", a);
    printf("\t++A = %d\n", ++a);
    printf("\tAfter A = %d\n", a);
    printf("Post Increment:\n");
    printf("\tBefore A = %d\n", a);
    printf("\tA++ = %d\n", a++);
    printf("\tAfter A = %d\n", a);
    printf("Pre Decrement:\n");
    printf("\tBefore A = %d\n", a);
    printf("\t--A = %d\n", --a);
    printf("\tAfter A = %d\n", a);
    printf("Post Decrement:\n");
    printf("\tBefore A = %d\n", a);
    printf("\tA-- = %d\n", a--);
    printf("\tAfter A = %d\n", a);
    return 0;
}