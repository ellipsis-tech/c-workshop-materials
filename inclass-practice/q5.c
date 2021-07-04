#include <stdio.h>
#include <math.h>

int area_triangle(double base, double height) {
    return (int) ceil(0.5 * base * height);
}

int main(void) {
    double base = 0.0;
    double height = 0.0;
    printf("Enter the base of the triangle: ");
    scanf(" %lf", &base);
    printf("Enter the height of the triangle: ");
    scanf(" %lf", &height);
    printf("Rounded area of triangle is %d\n", area_triangle(base, height));
}