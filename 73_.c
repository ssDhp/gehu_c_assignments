// Write a C program to print elements of an array greater than average

#include <stdio.h>

void main()
{
    int i, j, k, size, sum = 0;
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
    for (k = 0; k < size; k++)
    {
        sum += arr[k];
    }
    printf("Sum of array: %d\n", sum);
    printf("Average of array: %.2f\n", (float)sum / size);
    printf("Elements greater than average are: ");
    for (j = 0; j < size; j++)
    {
        if (arr[j] > ((float)sum / size))
        {
            printf("%d, ", arr[j]);
        }
    }
}