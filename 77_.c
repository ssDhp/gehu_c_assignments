// Write a c program to find maximum and minimum element in 1-D array by sorting technique

#include <stdio.h>

// Swaping values using function
void swap(int *xPtr, int *yPtr)
{
    int temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

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
    int i, j, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size + 1];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
    printArray(arr, size, 0);
    bubbleSort(arr, size);
    printf("Sorted array: ");
    printArray(arr, size, 0);
    printf("Maximum element: %d\nMinimum element: %d", arr[size - 1], arr[0]);
}