/* Write a c program to find maximum and minimum element in 1-D array Write a C program to insert an element
at particular position of an array */

#include <stdio.h>

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
    int i, j, pos, temp, size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size + 1];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    // Important step to find max and min
    int max = arr[0], min = arr[0];
    printf("\nYour array: ");
    for (j = 0; j < size; j++)
    {
        // Print array
        printf("%d", arr[j]);
        if (size - 1 != j)
            printf(", ");
        else
            printf("\n");
        // Find min and max
        if (arr[j] > max)
            max = arr[j];
        if (arr[j] < min)
            min = arr[j];
    }
    printf("Maximum element: %d\nMinimum element: %d\n", max, min);
    printf("Enter a number and index: ");
    scanf("%d %d", &temp, &pos);
    // Shift elements and create space at index  pos
    for (j = j + 1; j > pos; j--)
    {
        arr[j] = arr[j - 1];
    }
    // Modify original array
    arr[pos] = temp;
    // Print new array
    printf("Updated Array: ");
    printArray(arr, size + 1, 0);
}