#include <stdio.h>


void wrong() {
    // You want to print 0 to 100
    printf("0 ");
    printf("1 ");
    printf("2 ");
    // ...
    printf("100 ");
}

void whileloop(void) {
    int number = 0;
    while (number <= 100) {
        printf("%d ", number++);
    }
}

int main(void) {
    for (int number = 0; number <= 100; number++) {
        printf("%d ", number);
    }
}
