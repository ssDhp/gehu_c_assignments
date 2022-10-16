#include <stdio.h>
#include <math.h>

int main(){
    int  principal, rate, time, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &principal, &rate, &time);
    printf("\nYou have entered:\n\tPrincipal: %d\n\tRate: %d\n\tTime:%d\n\n", principal, rate, time);
    printf("Simple Intrest is %d.", (principal*rate*time)/100);
    printf("Compound Intrest is %d.", (principal*rate*time)/100);
    return 0;
}