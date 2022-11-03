// Write a C Program to find the maximum, minimum, second maximum and second minimum element of an
// array and print their index

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

int findIndex(int ele, int arr[], size_t size)
{
    size_t i;
    for (size_t i = 0; i < size; i++)
    {
        if (ele == arr[i])
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int i, j, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    int tempArr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr[i]);
        tempArr[i] = arr[i];
    }
    printf("\nYour array: \n\t");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("\nSorted array: \n\t");
    printArray(arr, size);
    printf("\n");
    printf("Smallest element is %d at index %d in original array.\n", arr[0], findIndex(arr[0], tempArr, size));
    printf("Second smallest element is %d at index %d in original array.\n", arr[1], findIndex(arr[1], tempArr, size));
    printf("Largest element is %d at index %d in original array.\n", arr[size - 1], findIndex(arr[size - 1], tempArr, size));
    printf("Second largest element is %d at index %d in original array.\n", arr[size - 2], findIndex(arr[size - 2], tempArr, size));
}