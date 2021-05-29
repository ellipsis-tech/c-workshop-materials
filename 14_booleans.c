#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 5;
    char small = (number < 10) ? 'Y' : 'N';
    printf("Is the number less than 10? %c\n", small);
}