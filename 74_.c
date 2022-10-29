// Write a c program to perform sorting on 1-D array

#include <stdio.h>

void main()
{
    int i, j, temp, size, nop = 0, isSorted = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("\nUnsorted array: ");
    for (j = 0; j < size; j++)
    {
        printf("%d", arr1[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
    // Sorting
    while (isSorted == 0)
    {
        nop = 0;
        for (j = 0; j < size; j++)
        {
            if ((arr2[j] > arr2[j + 1]) && (size - 1 != j))
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
                nop++;
            }
        }
        if (nop == 0)
        {
            isSorted = 1;
        }
    }

    printf("\nSorted array: ");
    for (j = 0; j < size; j++)
    {
        printf("%d", arr2[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
}