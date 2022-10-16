#include <stdio.h>

int main(){
    int tempC;
    float tempF;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &tempC);
    tempF = ((float)tempC*9)/5 + 32;
    printf("%d Celsius is %.1f Fahrenheit.",tempC, tempF);
    return 0;
}