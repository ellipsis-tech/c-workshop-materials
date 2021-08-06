#include <stdio.h>

int main() {
    int number = 5;
    do {
        printf("Enter an odd number or 0: ");
        scanf("%d", &number);
    } while (number % 2 == 0 && number != 0);
    printf("You have entered: %d\n", number);
}