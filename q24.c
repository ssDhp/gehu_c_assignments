// Program to check and print days of week

#include <stdio.h>

int main(){
    int usrInp, nod, now;
    printf("Enter number of days: ");
    scanf("%d", &usrInp);
    now = usrInp / 7;
    nod = usrInp % 7;
    printf("%d days is equal to %d weeks and %d days.", usrInp, now, nod);
    return 0;
}