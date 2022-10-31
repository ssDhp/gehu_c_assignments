// Write a c Program to add two 1d array of unequal sizes

#include <stdio.h>
#include <string.h> // For memset

void printArray(int arr[], size_t size, int start)
{
    int i;
    for (i = start; i < size; i++)
    {
        printf("%d", arr[i]);
        if (size - 1 != i)
            printf(", ");
        else
            printf("\n");
    }
}

void main()
{
    int i, size, size1, size2, sum = 0;
    printf("Enter size of two arrays: ");
    scanf("%d %d", &size1, &size2);
    // With only two variable, it does not work
    // Because array wil be only scoped to if/else, I think not sure
    // Also need to use `{}`
    if (size1 > size2)
        size = size1;
    else
        size = size2;
    int arr1[size], arr2[size];
    // `int arr1[size] = {0}` does not work ,fyi this type of initialization only works for 0
    // Because value of size determined at runtime, I think not sure
    // memset() is used to fill a block of memory with a particular value.
    // Any character can be used with memset()
    // For loop could also be used
    memset(arr1, 0, sizeof arr1);
    memset(arr2, 0, sizeof arr2);
    printf("For Array 1: \n");
    for (i = 0; i < size1; i++)
    {
        printf("\tEnter value of element at index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("For Array 2: \n");
    for (i = 0; i < size2; i++)
    {
        printf("\tEnter value of element at index %d: ", i);
        scanf("%d", &arr2[i]);
    }
    printf("Array 1: ");
    printArray(arr1, size1, 0);
    printf("Array 2: ");
    printArray(arr2, size2, 0);
    printf("Sum of A1 and A2: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr1[i] + arr2[i]);
        if (size - 1 != i)
            printf(", ");
        else
            printf("\n");
    }
}