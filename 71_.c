// Write a C Program to print the elements of array in reverse order

#include <stdio.h>

void main()
{
    int i, j, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nYour array: ");
    for (j = 0; j < size; j++)
    {
        printf("%d", arr[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
    printf("\nYour array in reverse order: ");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
        printf(", ");
    }
}