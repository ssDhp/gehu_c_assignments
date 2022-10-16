// Program to enter an ASCII code and display the character associated with it

#include<stdio.h>

int main(){
    int code;
    char ch;
    printf(" Enter an ASCII code:");
    scanf("%d", &code);
    ch=(char)code;
    printf("%d is associated with the character '%c'.",code, ch);
    return 0;
}