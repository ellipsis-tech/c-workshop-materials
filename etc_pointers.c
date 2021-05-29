#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 5;
    int* addr_a = &a; // reference operator in C
    int x = *addr_a; // dereference operator in C
    printf("%d\n", x); // Prints out 5
}