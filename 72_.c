// Write a C Program to store the elements of array into another array in reverse orderr

#include <stdio.h>

void main()
{
    int i, j, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr1[i]);
        arr2[(size - i - 1)] = arr1[i];
    }
    printf("\nArray 1: ");
    for (j = 0; j < size; j++)
    {
        printf("%d", arr1[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
    printf("\nArray 2: ");
    for (j = 0; j < size; j++)
    {
        printf("%d", arr2[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
}