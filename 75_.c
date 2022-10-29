// Write a c program to perform sorting on 1-D array

#include <stdio.h>

void main()
{
    int i, j, temp, size;
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
    printf("Enter a number to serarch in array: ");
    scanf("%d", &temp);
    for (j = 0; j < size; j++)
    {
        if (arr[j] == temp)
        {
            printf("Found! '%d' in array at index %d", temp, j);
            return;
        }
    }
    printf("Can not find '%d' in array.", temp);
}