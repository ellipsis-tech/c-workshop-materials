#include <stdio.h>

double area_triangle(double base, double height) {
    return 0.5 * base * height;
}

int main(void) {
    printf("The area of my triangle is %lf\n", area_triangle(3.0, 3.0));
}