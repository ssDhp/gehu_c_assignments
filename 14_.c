// Program to show the effect of increment/decrement operator

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value of A: ");
    scanf("%d", &a);
    printf("\nA: \t %d\n", a);
    printf("++A: \t %d\n", ++a);
    printf("A: \t %d\n", a);
    printf("--A: \t %d\n", --a);
    printf("A: \t %d\n", a);
    return 0;
}