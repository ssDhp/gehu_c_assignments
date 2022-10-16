// Write a program to calculate total salary based upon the following: HRA = 3 % of Basic salary, TA = 5 % of Basic salary, DA = 3 % of Basic salary

#include <stdio.h>

int main(){
    int baseSalary;
    float hra, ta, da, totalSalary;
    printf("Enter your base salary: ");
    scanf("%d", &baseSalary);
    hra = 0.03 * baseSalary;
    ta = 0.05 * baseSalary;
    da = 0.03 * baseSalary;
    totalSalary = baseSalary + hra + ta + da;
    printf("Base salary: %d\n\tHRA: %.2f\n\tTA: %.2f\n\tDA: %.2f\nTotal Salary: %.2f", baseSalary, hra, ta, da, totalSalary);

    return 0;
}