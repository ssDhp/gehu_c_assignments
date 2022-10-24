// Write a C program to calculate bill for Uttarakhand state electricity board.

#include <stdio.h>

int main()
{
    int unitsUsed;
    printf("Enter number of units consumed: ");
    scanf("%d", &unitsUsed);
    printf("Your electricity bill is ₹ %.2f.", unitsUsed * 6.25);
    return 0;
}