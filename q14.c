// Program to show the effect of increment/decrement operator

#include <stdio.h>

int main(){
    int a = 10;
    printf("Value of a number 'A' is %d.\n", a);
    printf("Increment operator (++a): Increase value then use the value\n");
    printf("Before: %d\t", a);
    printf("After: %d\t\n", ++a);
    a = 10;
    printf("Decrement operator (--a): Decrease value then use the value\n");
    printf("Before: %d\t", a);
    printf("After: %d\t\n", --a);
    printf("NOTE: Only Pre variant of increment and decrement operator was used.");
    return 0;
}