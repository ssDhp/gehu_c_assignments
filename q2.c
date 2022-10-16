#include <stdio.h>

int main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Addition of  %d and %d is %d.\n", x, y, x+y);
    printf("Subtraction of  %d and %d is %d.\n", x, y, x-y);
    printf("Multiplication of  %d and %d is %d.\n", x, y, x*y);
    printf("Division of  %d and %d is %.2f.\n", x, y, (float)x/(float)y);
    return 0;
}