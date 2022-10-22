// Write a C program to print greater.

// NOTE: Question 19 to 22 are same but with different implementations.

#include <stdio.h>

int main(){
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        if (a > c){
            largest = a;
        }
        else{
            largest = c;
        }
    }
    else{
        if (b > c){
            largest = b;
        }
        else{
            largest = c;
        }
    }
    largest = a > b ? (a > c ? a : c ) : (b > c ? b : c );
    printf("Largest is: %d", largest);
    return 0;
}