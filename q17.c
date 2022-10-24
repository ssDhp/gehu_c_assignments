// Write a C program which takes no of days as input and convert it into no. of year, month, week, and days

#include <stdio.h>

int main()
{
    int usrInp, nod, now, nom, noy, daysLeft;
    printf("Enter number of days: ");
    scanf("%d", &usrInp);
    noy = usrInp / 365;
    daysLeft = usrInp % 365;
    nom = daysLeft / 30;
    daysLeft = daysLeft % 30;
    now = daysLeft / 7;
    nod = daysLeft % 7;
    printf("%d days is equal to %d years %d months %d weeks and %d days.", usrInp, noy, nom, now, nod);
    return 0;
}