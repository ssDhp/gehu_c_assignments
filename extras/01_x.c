// Reverse a list by swaping values

#include <stdio.h>

int main()
{
    int arr[5] = {2, 3, 4, 5, 24};
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        int tmp;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}