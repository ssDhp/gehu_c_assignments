// Program to display odd numbers between1 and n (where n is inputted by user)

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}