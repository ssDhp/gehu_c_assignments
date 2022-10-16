// Program to find the area of a circle and rectangle

#include <stdio.h>

int main(){
    int radius, length, breadth;
    printf("Enter value of radius, length and breadth: ");
    scanf("%d %d %d", &radius, &length, &breadth);
    printf("Area of circle is %f sq units.\n", 3.14159 * radius * radius);
    printf("Area of rectangle is %d sq units.\n", length * breadth);
    return 0;
}