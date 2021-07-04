#include <stdio.h>
#include <math.h>

int area_triangle(double base, double height) {
    return (int) ceil(0.5 * base * height);
}

int main(void) {
    printf("Rounded area of triangle is %d\n", area_triangle(3.0, 3.0));
}