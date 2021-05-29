#include <stdio.h>

long calc_sq(int number) {
    return number * number;
}

int main() {
    int five = 5;
    long squared = calc_sq(five);
    printf("The square of %d is %ld!\n", five, squared);
}