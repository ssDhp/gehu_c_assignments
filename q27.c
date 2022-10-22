// Write a C program to find roots of a quadratic equation. Find roots only when discriminant is positive. 
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float D, r1, r2;
    printf("Enter three numeric coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    D = (pow(b, 2)) - (4*a*c);
    if (D > 0){
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
    else{
        printf("Real root don't exist !!");
    }
    return 0;
}