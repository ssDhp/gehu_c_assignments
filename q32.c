// Write a C program to calculate the bill for a shopkeeper who sales mango @ 5 RS per mango.If bill is greater than 500 then give discount of 10% otherwise no discount.

#include <stdio.h>

int main()
{
    int nom, bill;
    printf("Enter number of mangoes: ");
    scanf("%d", &nom);
    bill = nom * 5.0;
    if (bill >= 500)
    {
        printf("You get a 10%% discount!!\n Your bill was ₹%d. After discount it is ₹%.2f", bill, bill - (0.1 * bill));
        return 0;
    }
    printf("Your bill is %f", bill);
    return 0;
}