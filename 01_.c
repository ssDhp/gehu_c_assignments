// Write a program to print the value and size of different data types (Use size of operator).

#include <stdio.h>

int main()
{
    printf("Size of char: %d bytes.\n\n", sizeof(char));
    printf("Size of short int: %d bytes.\n", sizeof(short int));
    printf("Size of int: %d bytes.\n", sizeof(int));
    printf("Size of long int: %d bytes.\n", sizeof(long int));
    printf("Size of long long int: %d bytes.\n\n", sizeof(long long int));
    printf("Size of float: %d bytes.\n", sizeof(float));
    printf("Size of double: %d bytes.\n", sizeof(double));
    printf("Size of long double: %d bytes.\n\n", sizeof(long double));
    return 0;
}