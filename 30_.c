// Write a C program to find grade of the student for four subjects marks for each subject to be entered by the user. Calculate percentage and based upon the condition print the grade

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4;
    printf("Enter marks in four subjects: ");
    scanf("%d %d %d %d", &sub1, &sub2, &sub3, &sub4);
    printf("Percentage is %d %%", (sub1 + sub2 + sub3 + sub4) / 4);
    return 0;
}