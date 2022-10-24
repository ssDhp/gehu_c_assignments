// Write a C program to check whether entered year is leap year or not

// I know my implement is shit but I wanted to use 'stdbool.h' So ¯\_(ツ)_/¯

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    bool isLeapYear;
    printf("Enter a year: ");
    scanf("%d", &year);
    isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? true : false;
    if (isLeapYear)
    {
        printf("%d is a leap year!", year);
        return 0;
    }
    printf("%d is not a leap year!", year);
    return 0;
}