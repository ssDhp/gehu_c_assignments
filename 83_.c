// WACP to sort array in ascending order and print smallest, second smallest, largest and second largest element
#include <stdio.h>

void swap(int *xPtr, int *yPtr)
{
    int temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;
}

void printArray(int arr[], size_t size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        printf("%d", arr[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
    }
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
    printf("\nYour array: \n\t");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("\nSorted array: \n\t");
    printArray(arr, size);
    printf("\n");
    printf("Smallest element: %d\n", arr[0]);
    printf("Second smallest element: %d\n", arr[1]);
    printf("Largest element: %d\n", arr[size - 1]);
    printf("Second largest element: %d\n", arr[size - 2]);
}