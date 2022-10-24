// Program to show working of unary Post/Pre Increment/Decrement operator

#include <stdio.h>

int main()
{
    int a = 10;
    printf("Value of a number 'A' is %d.\n", a);
    printf("Pre increment operator (++a): Increase value then use the value\n");
    printf("Before: %d\t", a);
    printf("After: %d\t\n", ++a);
    a = 10;
    printf("Post increment operator (a++): Use the original value then increase\n");
    printf("Before: %d\t", a);
    printf("After: %d\t\n", a++);
    printf("NOTE: Although the value has changed but original value is used in expression.'A' is now %d.\nAlso decrement operators also work the same.", a);
    return 0;
}